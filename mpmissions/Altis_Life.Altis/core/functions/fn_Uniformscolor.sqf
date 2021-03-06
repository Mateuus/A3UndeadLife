#include <macro.h>
/*
		fn_Uniformscolor.sqf
		
		Descriptions: Colors Uniforms
*/
#define FETCH_CONST(var) (call var)

if(playerSide == independent) then {
	if ((uniform player) == "U_I_CombatUniform_tshirt") then {
		player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
	};
};


if(playerSide == WEST) then {
	// Cop Level 1 & 2
	if (backpack player == "B_Carryall_oucamo") then {
    	(unitbackpack player) setObjectTextureGlobal [0, ""]; 
	};
	
	if((uniform player == "U_Rangemaster") && ( (FETCH_CONST(life_coplevel)) == 1)) then {
	player setObjectTextureGlobal [0, "textures\cop\recruta.jpg"]; //Recruta
	};
	
	if((uniform player == "U_Rangemaster") && ( (FETCH_CONST(life_coplevel)) == 2)) then {
	player setObjectTextureGlobal [0, "textures\cop\soldado.jpg"]; //Soldado
	};
	
	if((uniform player == "U_Rangemaster") && ( (FETCH_CONST(life_coplevel)) == 3)) then {
	player setObjectTextureGlobal [0, "textures\cop\cabo.jpg"]; //Cabo
	};
	
	if((uniform player == "U_Rangemaster") && ( (FETCH_CONST(life_coplevel)) == 4)) then {
	player setObjectTextureGlobal [0, "textures\cop\sargento.jpg"]; //Sargento
	};
	
	if((uniform player == "U_MillerBody") && ( (FETCH_CONST(life_coplevel)) == 5)) then {
	player setObjectTextureGlobal [0, "textures\cop\tenente.jpg"]; //Tenente
	};
	
	if((uniform player == "U_MillerBody") && ( (FETCH_CONST(life_coplevel)) == 6)) then {
	player setObjectTextureGlobal [0, "textures\cop\capitao.jpg"]; //Capitão
	};

	if((uniform player == "U_MillerBody") && ( (FETCH_CONST(life_coplevel)) == 7)) then {
	player setObjectTextureGlobal [0, "textures\cop\major.jpg"]; //Major
	};
	
	if((uniform player == "U_MillerBody") && ( (FETCH_CONST(life_coplevel)) == 8)) then {
	player setObjectTextureGlobal [0, "textures\cop\tenentecoronel.jpg"]; //Tenente Coronel
	};
	
	if((uniform player == "U_MillerBody") && ( (FETCH_CONST(life_coplevel)) == 9)) then {
	player setObjectTextureGlobal [0, "textures\cop\coronel.jpg"]; //Coronel
	};
	
	
	
	/*
	if (uniform player == "U_Rangemaster") then {
		player setObjectTextureGlobal [0, "textures\cadettroop.jpg"]; 
	};
	
	// Cop Level 3 & 4
	if (uniform player == "U_BG_Guerilla3_2") then {
		player setObjectTextureGlobal [0, "textures\corptroop.jpg"]; 
	};
	// Cop Level 5 & 6 & 7
	if (uniform player == "U_O_OfficerUniform_ocamo") then {
		player setObjectTextureGlobal [0, "textures\capttroop.jpg"]; 
	};*/
	
	if (uniform player == "U_O_SpecopsUniform_ocamo") then {
		player setObjectTextureGlobal [0, "textures\bope\bope.jpg"]; 
	};
};

if(playerSide == civilian) then {
	if((uniform player == "U_I_CombatUniform") && ( (FETCH_CONST(life_donator)) == 5)) then {
	player setObjectTextureGlobal [0, "textures\mafia.paa"]; //Level 5 Vip
	};
	
	if((uniform player == "U_I_CombatUniform") && ( (FETCH_CONST(life_donator)) == 4)) then {
	player setObjectTextureGlobal [0, "textures\vip\4.paa"]; //Level 4 Vip
	};
	
	if((uniform player == "U_I_CombatUniform") && ( (FETCH_CONST(life_donator)) == 3)) then {
	player setObjectTextureGlobal [0, "textures\vip\3.paa"]; //Level 3 Vip
	};
	
	if((uniform player == "U_I_CombatUniform") && ( (FETCH_CONST(life_donator)) == 1)) then {
	player setObjectTextureGlobal [0, "textures\vip\2.paa"]; //Level 2 Vip
	};
	
	if((uniform player == "U_I_CombatUniform") && ( (FETCH_CONST(life_donator)) == 1)) then {
	player setObjectTextureGlobal [0, "textures\vip\1.paa"]; //Level 1 Vip
	};
	
	if (backpack player == "B_Carryall_oucamo") then {
    	(unitbackpack player) setObjectTextureGlobal [0, ""]; 
	};
	
	if(uniform player == "U_C_Poloshirt_blue") then {
	player setObjectTextureGlobal [0, "textures\meccashirt.jpg"];
	};
	
	if (uniform player == "U_BG_Guerilla2_2") then {
		player setObjectTextureGlobal [0, "textures\cadettroop.jpg"]; 
	};
	// Cop Level 3 & 4
	if (uniform player == "U_BG_Guerilla3_2") then {
		player setObjectTextureGlobal [0, "textures\corptroop.jpg"]; 
	};
	// Cop Level 5 & 6 & 7
	if (uniform player == "U_O_OfficerUniform_ocamo") then {
		player setObjectTextureGlobal [0, "textures\capttroop.jpg"]; 
	};
};