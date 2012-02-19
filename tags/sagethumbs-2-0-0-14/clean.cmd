@echo off
rd /s /q ".\ipch\" 2>nul:
rd /s /q ".\Win32\" 2>nul:
rd /s /q ".\x64\" 2>nul:
for /r %%i in (*.po_) do del /q "%%i" && echo Cleaning %%i...
for /r %%i in (*.trg) do del /q "%%i" && echo Cleaning %%i...
for /r %%i in (*.aps) do del /q "%%i" && echo Cleaning %%i...
for /r %%i in (*.ncb) do del /q "%%i" && echo Cleaning %%i...
for /r %%i in (*.sdf) do del /q "%%i" && echo Cleaning %%i...
for /r %%i in (*.ipch) do del /q "%%i" && echo Cleaning %%i...
for /d /r %%i in (*.*) do if exist "%%i\Win32\" rd /s /q "%%i\Win32\" && echo Cleaning %%i\Win32\...
for /d /r %%i in (*.*) do if exist "%%i\x64\" rd /s /q "%%i\x64\" && echo Cleaning %%i\x64\...
pause