@echo off


Start bec.bat
cd C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Server\
start arma3server.exe "-config=C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Server\TADST\altislife\TADST_config.cfg" "-cfg=C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Server\TADST\altislife\TADST_basic.cfg" "-BEPath=C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Server\TADST\altislife\BattlEye" "-profiles=C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Server\TADST\altislife" "-mod=@life_server;@extDB" "-enableHT"
echo ARMA 3 Server has started.