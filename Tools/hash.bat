@echo off
for /f %%i in ('certutil -hashfile %1 MD5 ^|findstr /V :') do (
    echo %%i
)