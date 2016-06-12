@echo off
:start
C:\Windows\System32\tasklist /FI "IMAGENAME eq arma3server.exe" 2>NUL | C:\Windows\System32\find /I /N "arma3server.exe">NUL
if "%ERRORLEVEL%"=="0" goto loop
echo Server monitored is not running, will be started now 
start "" /wait "C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Server\arma3server.exe" -mod=@life_server;@extDB3; -config=C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Server\Undead_AltisLife\config.cfg -port=2302 -profiles=Undead_AltisLife -cfg=C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Server\Undead_AltisLife\basic.cfg -name=Undead_AltisLife
echo Server started succesfully
goto started
:loop
cls
echo Server is already running, running monitoring loop
:started
C:\Windows\System32\timeout /t 10
C:\Windows\System32\tasklist /FI "IMAGENAME eq arma3server.exe" 2>NUL | C:\Windows\System32\find /I /N "arma3server.exe">NUL
if "%ERRORLEVEL%"=="0" goto loop
goto start