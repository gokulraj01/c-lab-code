@echo off
set loc=%~dp1

mkdir %loc%\bin
if %~x1==.c (
    echo Compiling %~f1
    gcc %~f1 -o %loc%\bin\%~n1.exe
    %loc%\bin\%~n1.exe
) else (
    echo Please pass a .c file to compile.
)