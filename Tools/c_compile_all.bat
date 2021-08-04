@echo off
set loc=%~fp1
set binpath=bin
set hashalg=sha256
set hashpath=%binpath%\%hashalg%

if "%1"=="" (
    echo Please enter a folder with .c files
    echo Exiting...
) else (
    echo Working Folder is: %loc%
    mkdir %loc%\%binpath%\ %loc%\%hashpath%\

    dir /s /b %~f1\*.c > %loc%\c_file.txt
    echo -----
    for /f %%f in (%loc%/c_file.txt) do (
        call :compile_if_hash_chg %%f
    )

    del %loc%\c_file.txt
    echo ALL DONE
    exit /b
)

:oldhash
    @REM echo Lookup Hash: %~1
    set /p oldhash=<%~1
    @REM echo Old Hash: %oldhash%
    exit /b

:newhash
    @REM echo Get New Hash: %~1
    for /f %%h in ('certutil -hashfile %~1 %hashalg% ^| findstr /V :') do (
        set newhash=%%h
    )
    @REM echo New Hash: %newhash%
    exit /b

:compile_if_hash_chg
    set hashfilenow=%loc%\%hashpath%\%~n1.%hashalg%
    echo Checking File: %~1
    if exist %hashfilenow% (
        call :oldhash %hashfilenow%
        call :newhash %~1
        call :compare_hash %~1
        echo -----
    ) else (
        echo Hash does not exist
        call :compile %~1
        for /f %%h in ('certutil -hashfile %~1 %hashalg% ^|findstr /V :') do (
            echo %%h>%hashfilenow%
        )
        echo -----
    )
    exit /b

:compile
    echo Compiling %~nx1
    gcc %~1 -o %loc%\%binpath%\%~n1.exe
    exit /b

:compare_hash
    @REM echo Checking "%oldhash%" == "%newhash%"
    if "%oldhash%" == "%newhash%" (
        echo Source file unchanged. Skipping.
    ) else (
        echo File Modified.
        echo %oldhash% to %newhash%
        call :compile %~1
        for /f %%h in ('certutil -hashfile %~1 %hashalg% ^|findstr /V :') do (
            echo %%h> %hashfilenow%
        )
    )
    exit /b