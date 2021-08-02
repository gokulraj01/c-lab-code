@echo off
set loc=%~fp1
set binpath=bin
if "%1"=="" (
    echo Please enter a folder with .c files
    echo Exiting...
) else (
    echo Working Folder is: %loc%   
    mkdir %loc%\%binpath%\
    echo %~f1
    dir /s /b %~f1\*.c > %loc%\c_file.txt
    for /f %%f in (%loc%/c_file.txt) do (
        echo Compiling: %%f
        echo Saving as %loc%\%binpath%\%%~nf.exe
        gcc %%f -o %loc%\%binpath%\%%~nf.exe
    )
    del %loc%\c_file.txt
    echo ALL DONE
)