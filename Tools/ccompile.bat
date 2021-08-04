@echo off
if %~x1==.c (
    echo Compiling %~f1
    gcc %~f1 -o %~n1.exe
) else (
    echo Please pass a .c file to compile.
)