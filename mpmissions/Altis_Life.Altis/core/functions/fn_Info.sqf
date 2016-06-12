/*
	File: fn_welcome.sqf
*/
disableSerialization;
[
	"",
	0,
	0.2,
	10,
	0,
	0,
	8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayctrl 2400;
_textSpoiler = _display displayctrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='7' shadow='0'><img image='textures\intro.paa' /></t><br /><br />";
_message = _message + "Bem-vindo ao <a href='http://www.undeadbrasil.com/forum/' color='#FF5A00'>undeadbrasil.com</a> Servidor voltado para Role-Play!<br /><br />";
_message = _message + "Este servidor é voltado para roleplay entao antes de spawnar esteja ciente que você leu as regras em <a href= 'http://www.undeadbrasil.com/forum' color='#FF5A00'>Undead Brasil Regras</a> Caso nao leia as regras e cometer infração será banido!!<br /><br />";
_message = _message + "Undead Brasil Servidores está disposto a garantir sua diversao no servidor, para melhor experiência entre em nosso teamspeak!<br />";
_message = _message + "Bom jogo !<br />";
_message = _message + "<t size='3' shadow='5'><img image='textures\signature.paa' /></t>";

//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlcommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;