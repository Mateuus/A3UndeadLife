#include <macro.h>

/*
	File: fn_copLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	Edited: Itsyuka
	
	Description:
	Loads the cops out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addBackpack "B_Carryall_oucamo";

/* ITEMS */
player addItem "ItemRadio";
player assignItem "ItemRadio";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemGPS";
player assignItem "ItemGPS";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "ToolKit";
player addItem "NVGoggles";
player assignItem "NVGoggles";
player addItem "Rangefinder";
player assignItem "Rangefinder";
player addWeapon "hgun_P07_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
[true,"redgull",3] call life_fnc_handleInv;
[true,"tbacon",3] call life_fnc_handleInv;
[true,"coffee",3] call life_fnc_handleInv;


if (playerSide == west) then {

switch (FETCH_CONST(life_coplevel)) do {

	case 1:
	{
		player addHeadgear "H_Cap_police";
		player ForceAddUniform "U_Rangemaster";
		player setObjectTextureGlobal [0, "textures\cop\recruta.jpg"]; 
		player addVest "V_TacVest_blk_POLICE";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
	};
	
	case 2:
	{
		player addHeadgear "H_Cap_police";
		player ForceAddUniform "U_Rangemaster";
		player setObjectTextureGlobal [0, "textures\cop\soldado.jpg"]; 
		player addVest "V_TacVest_blk_POLICE";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
	};
	
	case 3:
	{
		player addHeadgear "H_Cap_police";
		player ForceAddUniform "U_Rangemaster";
		player setObjectTextureGlobal [0, "textures\cop\cabo.jpg"]; 
		player addVest "V_TacVest_blk_POLICE";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
	};
	
	case 4:
	{
		player addHeadgear "H_Cap_police";
		player ForceAddUniform "U_Rangemaster";
		player setObjectTextureGlobal [0, "textures\cop\sargento.jpg"]; 
		player addVest "V_TacVest_blk_POLICE";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
	};
	
	case 5:
	{
		player addHeadgear "H_Cap_police";
		player ForceAddUniform "U_MillerBody";
		player setObjectTextureGlobal [0, "textures\cop\tenente.jpg"]; 
		player addVest "V_TacVest_blk_POLICE";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
	};
	
	case 6:
	{
		player addHeadgear "H_Cap_police";
		player ForceAddUniform "U_MillerBody";
		player setObjectTextureGlobal [0, "textures\cop\capital.jpg"]; 
		player addVest "V_TacVest_blk_POLICE";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
	};
	
	case 7:
	{
		player addHeadgear "H_Cap_police";
		player ForceAddUniform "U_MillerBody";
		player setObjectTextureGlobal [0, "textures\cop\major.jpg"]; 
		player addVest "V_TacVest_blk_POLICE";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
	};
	
	case 8:
	{
		player addHeadgear "H_Cap_police";
		player ForceAddUniform "U_MillerBody";
		player setObjectTextureGlobal [0, "textures\cop\tenentecoronel.jpg"]; 
		player addVest "V_TacVest_blk_POLICE";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
	};
	
	case 9:
	{
		player addHeadgear "H_Cap_police";
		player ForceAddUniform "U_MillerBody";
		player setObjectTextureGlobal [0, "textures\cop\coronel.jpg"]; 
		player addVest "V_TacVest_blk_POLICE";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
		player addMagazine "16Rnd_9x21_Mag";
	};
	
};
};
[] call life_fnc_saveGear;
[] call life_fnc_Uniformscolor;
