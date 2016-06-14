/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		3: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to v
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Undead Brasil Roupa", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Roupa Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Roupa Vermelha e Branca", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Roupa Salmao", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Roupa stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Roupa Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Roupa de Pedreiro", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Roupa Guerrila I", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Roupa Guerrila II", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "Roupa Guerrila III", 700, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "Roupa de Caçador", 700, { "", "", -1 } },
			{ "U_OrestesBody", "Roupa de Surfista", 1100, { "", "", -1 } }

		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 205, { "", "", -1 } },
			{ "G_Shades_Blue", "", 200, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 200, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 200, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 200, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 200, { "", "", -1 } },
			{ "G_Squares", "", 100, { "", "", -1 } },
			{ "G_Aviator", "", 1000, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 500, { "", "", -1 } },
			{ "G_Lady_Dark", "", 500, { "", "", -1 } },
			{ "G_Lady_Blue", "", 500, { "", "", -1 } },
			{ "G_Lowprofile", "", 300, { "", "", -1 } },
			{ "G_Combat", "", 5500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 750, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 950, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 1500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 1700, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 2500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 4500, { "", "", -1 } },
			{ "B_Carryall_khk", "", 4500, { "", "", -1 } }
		};
	};
	
	class Roupas Bronze {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "life_donator", "SCALAR", 1 } },
			{ "U_I_CombatUniform", "Roupa Padrão VIP", 1000, { "life_donator", "SCALAR", 1 } },
			{ "U_C_Poloshirt_blue", "Undead Brasil Roupa", 1250, { "life_donator", "SCALAR", 1 } },
			{ "U_B_PilotCoveralls", "Roupa VIP I", 7275, { "life_donator", "SCALAR", 1 } },
			{ "U_O_CombatUniform_oucamo", "Roupa VIP I", 2150, { "life_donator", "SCALAR", 1 } },
			{ "U_B_SpecopsUniform_sgg", "Roupa VIP I", 7175,{ "life_donator", "SCALAR", 1 } },
			{ "U_I_HeliPilotCoveralls", "Roupa VIP I", 7125, { "life_donator", "SCALAR", 1 } },
			{ "U_IG_Guerilla1_1", "Roupa VIP I", 7350, { "life_donator", "SCALAR", 1 } },
			{ "U_C_Poor_2", "Roupa VIP I", 7250,{ "life_donator", "SCALAR", 1 } },
			{ "U_IG_Guerilla2_1", "Roupa VIP I", 7650, { "life_donator", "SCALAR", 1 } },
			{ "U_IG_Guerilla2_2	", "Roupa VIP I", 7335, { "life_donator", "SCALAR", 1 } },
			{ "U_IG_Guerilla2_3", "Roupa VIP I", 7700, { "life_donator", "SCALAR", 1 } },
			{ "U_C_WorkerCoveralls", "Roupa VIP I", 7325 , { "life_donator", "SCALAR", 1 } },
			{ "U_OrestesBody", "Roupa VIP I", 7100, { "life_donator", "SCALAR", 1 } },
			{ "U_NikosBody", "Roupa VIP I", 7500, { "life_donator", "SCALAR", 1 } },
			{ "U_NikosAgedBody", "Roupa de Chique VIP", 7500, { "life_donator", "SCALAR", 1 } }

		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "life_donator", "SCALAR", 1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "life_donator", "SCALAR", 1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "life_donator", "SCALAR", 1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "life_donator", "SCALAR", 1 } },
			{ "H_Bandanna_cbr", "", 165, { "life_donator", "SCALAR", 1 } },
			{ "H_Bandanna_surfer", "", 135, { "life_donator", "SCALAR", 1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "life_donator", "SCALAR", 1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "life_donator", "SCALAR", 1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "life_donator", "SCALAR", 1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "life_donator", "SCALAR", 1 } },
			{ "H_Booniehat_tan", "", 425, { "life_donator", "SCALAR", 1 } },
			{ "H_Hat_blue", "", 310, { "life_donator", "SCALAR", 1 } },
			{ "H_Hat_brown", "", 276, { "life_donator", "SCALAR", 1 } },
			{ "H_Hat_checker", "", 340, { "life_donator", "SCALAR", 1 } },
			{ "H_Hat_grey", "", 280, { "life_donator", "SCALAR", 1 } },
			{ "H_Hat_tan", "", 265, { "life_donator", "SCALAR", 1 } },
			{ "H_Cap_blu", "", 150, { "life_donator", "SCALAR", 1 } },
			{ "H_Cap_grn", "", 150, { "life_donator", "SCALAR", 1 } },
			{ "H_Cap_grn_BI", "", 150, { "life_donator", "SCALAR", 1 } },
			{ "H_Cap_oli", "", 150, { "life_donator", "SCALAR", 1 } },
			{ "H_Shemag_khk", "", 1500, { "life_donator", "SCALAR", 1 } },
			{ "H_Shemag_tan", "", 1500, { "life_donator", "SCALAR", 1 } },
			{ "H_Shemag_olive_hs", "", 1500, { "life_donator", "SCALAR", 1 } },
			{ "H_ShemagOpen_khk", "", 1500, { "life_donator", "SCALAR", 1 } },
			{ "H_ShemagOpen_tan", "", 1500, { "life_donator", "SCALAR", 1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "life_donator", "SCALAR", 1 } },
			{ "G_Shades_Black", "", 205, { "life_donator", "SCALAR", 1 } },
			{ "G_Shades_Blue", "", 200, { "life_donator", "SCALAR", 1 } },
			{ "G_Sport_Blackred", "", 200, { "life_donator", "SCALAR", 1 } },
			{ "G_Sport_Checkered", "", 200, { "life_donator", "SCALAR", 1 } },
			{ "G_Sport_Blackyellow", "", 200, { "life_donator", "SCALAR", 1 } },
			{ "G_Sport_BlackWhite", "", 200, { "life_donator", "SCALAR", 1 } },
			{ "G_Squares", "", 100, { "life_donator", "SCALAR", 1 } },
			{ "G_Aviator", "", 1000, { "life_donator", "SCALAR", 1 } },
			{ "G_Lady_Mirror", "", 500, { "life_donator", "SCALAR", 1 } },
			{ "G_Lady_Dark", "", 500, { "life_donator", "SCALAR", 1 } },
			{ "G_Lady_Blue", "", 500, { "life_donator", "SCALAR", 1 } },
			{ "G_Lowprofile", "", 300, { "life_donator", "SCALAR", 1 } },
			{ "G_Combat", "", 5500, { "life_donator", "SCALAR", 1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "life_donator", "SCALAR", 1 } },
			{ "V_TacVestIR_blk", "", 17000, { "life_donator", "SCALAR", 1 } },
			{ "V_I_G_resistanceLeader_F", "", 17000, { "life_donator", "SCALAR", 1 } },
			{ "V_PlateCarrierIA1_dgtl", "", 17000, { "life_donator", "SCALAR", 1 } },
			{ "V_TacVestCamo_khk", "", 17000, { "life_donator", "SCALAR", 1 } },
			{ "V_Press_F", "", 17000, { "life_donator", "SCALAR", 1 } },
			{ "V_TacVest_camo", "", 17000, { "life_donator", "SCALAR", 1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "life_donator", "SCALAR", 1 } },
			{ "B_AssaultPack_cbr", "", 750, { "life_donator", "SCALAR", 1 } },
			{ "B_Kitbag_mcamo", "", 950, { "life_donator", "SCALAR", 1 } },
			{ "B_TacticalPack_oli", "", 1500, { "life_donator", "SCALAR", 1 } },
			{ "B_FieldPack_ocamo", "", 1700, { "life_donator", "SCALAR", 1 } },
			{ "B_Bergen_sgg", "", 2500, { "life_donator", "SCALAR", 1 } },
			{ "B_Kitbag_cbr", "", 2500, { "life_donator", "SCALAR", 1 } },
			{ "B_Carryall_oli", "", 4500, { "life_donator", "SCALAR", 1 } },
			{ "B_Carryall_khk", "", 4500, { "life_donator", "SCALAR", 1 } },
			{ "B_Carryall_oucamo", "Mochila Invisivel", 20000, { "life_donator", "SCALAR", 1 } }
		};
	};
	
	class Roupas Silver {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "life_donator", "SCALAR", 2 } },
			{ "U_I_CombatUniform", "Roupa Padrão VIP", 1000, { "life_donator", "SCALAR", 2 } },
			{ "U_C_Poloshirt_blue", "Undead Brasil Roupa", 1250, { "life_donator", "SCALAR", 2 } },
			{ "U_O_PilotCoveralls", "Roupa VIP II", 4275, { "life_donator", "SCALAR", 2 } },
			{ "U_O_CombatUniform_oucamo", "Roupa VIP II", 4150, { "life_donator", "SCALAR", 2 } },
			{ "U_O_CombatUniform_ocamo", "Roupa VIP II", 4175,{ "life_donator", "SCALAR", 2 } },
			{ "U_IG_leader", "Roupa VIP II", 4525, { "life_donator", "SCALAR", 2 } },
			{ "U_I_Wetsuit", "Roupa VIP II", 4350, { "life_donator", "SCALAR", 2 } },
			{ "U_I_OfficerUniform", "Roupa VIP II", 4250,{ "life_donator", "SCALAR", 2 } },
			{ "U_I_G_Story_Protagonist_F", "Roupa VIP II", 4650, { "life_donator", "SCALAR", 2 } },
			{ "U_I_G_resistanceLeader_F", "Roupa VIP II", 4735, { "life_donator", "SCALAR", 2 } },
			{ "U_I_CombatUniform_shortsleeve", "Roupa VIP III", 4700, { "life_donator", "SCALAR", 2 } },
			{ "U_C_Scientist", "Roupa VIP II", 4700, { "life_donator", "SCALAR", 2 } },
			{ "U_B_CTRG_2", "Roupa VIP II", 4100, { "life_donator", "SCALAR", 2 } },
			{ "U_NikosBody", "Roupa VIP II", 4500, { "life_donator", "SCALAR", 2 } }

		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "life_donator", "SCALAR", 2 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "life_donator", "SCALAR", 2 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "life_donator", "SCALAR", 2 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "life_donator", "SCALAR", 2 } },
			{ "H_Bandanna_cbr", "", 165, { "life_donator", "SCALAR", 2 } },
			{ "H_Bandanna_surfer", "", 135, { "life_donator", "SCALAR", 2 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "life_donator", "SCALAR", 2 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "life_donator", "SCALAR", 2 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "life_donator", "SCALAR", 2 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "life_donator", "SCALAR", 2 } },
			{ "H_Booniehat_tan", "", 425, { "life_donator", "SCALAR", 2 } },
			{ "H_Hat_blue", "", 310, { "life_donator", "SCALAR", 2 } },
			{ "H_Hat_brown", "", 276, { "life_donator", "SCALAR", 2 } },
			{ "H_Hat_checker", "", 340, { "life_donator", "SCALAR", 2 } },
			{ "H_Hat_grey", "", 280, { "life_donator", "SCALAR", 2 } },
			{ "H_Hat_tan", "", 265, { "life_donator", "SCALAR", 2 } },
			{ "H_Cap_blu", "", 150, { "life_donator", "SCALAR", 2 } },
			{ "H_Cap_grn", "", 150, { "life_donator", "SCALAR", 2 } },
			{ "H_Cap_grn_BI", "", 150, { "life_donator", "SCALAR", 2 } },
			{ "H_Cap_oli", "", 150, { "life_donator", "SCALAR", 2 } },
			{ "H_Shemag_khk", "", 1500, { "life_donator", "SCALAR", 2 } },
			{ "H_Shemag_tan", "", 1500, { "life_donator", "SCALAR", 2 } },
			{ "H_Shemag_olive_hs", "", 1500, { "life_donator", "SCALAR", 2 } },
			{ "H_ShemagOpen_khk", "", 1500, { "life_donator", "SCALAR", 2 } },
			{ "H_ShemagOpen_tan", "", 1500, { "life_donator", "SCALAR", 2 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "life_donator", "SCALAR", 2 } },
			{ "G_Shades_Black", "", 205, { "life_donator", "SCALAR", 2 } },
			{ "G_Shades_Blue", "", 200, { "life_donator", "SCALAR", 2 } },
			{ "G_Sport_Blackred", "", 200, { "life_donator", "SCALAR", 2 } },
			{ "G_Sport_Checkered", "", 200, { "life_donator", "SCALAR", 2 } },
			{ "G_Sport_Blackyellow", "", 200, { "life_donator", "SCALAR", 2 } },
			{ "G_Sport_BlackWhite", "", 200, { "life_donator", "SCALAR", 2 } },
			{ "G_Squares", "", 100, { "life_donator", "SCALAR", 2 } },
			{ "G_Aviator", "", 1000, { "life_donator", "SCALAR", 2 } },
			{ "G_Lady_Mirror", "", 500, { "life_donator", "SCALAR", 2 } },
			{ "G_Lady_Dark", "", 500, { "life_donator", "SCALAR", 2 } },
			{ "G_Lady_Blue", "", 500, { "life_donator", "SCALAR", 2 } },
			{ "G_Lowprofile", "", 300, { "life_donator", "SCALAR", 2 } },
			{ "G_Combat", "", 5500, { "life_donator", "SCALAR", 2 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "life_donator", "SCALAR", 2 } },
			{ "V_TacVestIR_blk", "", 9500, { "life_donator", "SCALAR", 2 } },
			{ "V_PlateCarrier1_rgr", "", 14000, { "life_donator", "SCALAR", 2 } },
			{ "V_PlateCarrier2_rgr", "", 14000, { "life_donator", "SCALAR", 2 } },
			{ "V_PlateCarrier3_rgr", "", 14000, { "life_donator", "SCALAR", 2 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "life_donator", "SCALAR", 2 } },
			{ "B_AssaultPack_cbr", "", 750, { "life_donator", "SCALAR", 2 } },
			{ "B_Kitbag_mcamo", "", 950, { "life_donator", "SCALAR", 2 } },
			{ "B_TacticalPack_oli", "", 1500, { "life_donator", "SCALAR", 2 } },
			{ "B_FieldPack_ocamo", "", 1700, { "life_donator", "SCALAR", 2 } },
			{ "B_Bergen_sgg", "", 2500, { "life_donator", "SCALAR", 2 } },
			{ "B_Kitbag_cbr", "", 2500, { "life_donator", "SCALAR", 2 } },
			{ "B_Carryall_oli", "", 4500, { "life_donator", "SCALAR", 2 } },
			{ "B_Carryall_khk", "", 4500, { "life_donator", "SCALAR", 2 } },
			{ "B_Carryall_oucamo", "Mochila Ivisivel", 16000, { "life_donator", "SCALAR", 2 } }
		};
	};
	
	class Roupas Gold {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "life_donator", "SCALAR", 3 } },
			{ "U_I_CombatUniform", "Roupa Padrão VIP", 1000, { "life_donator", "SCALAR", 3 } },
			{ "U_C_Poloshirt_blue", "Undead Brasil Roupa", 1250, { "life_donator", "SCALAR", 3 } },
			{ "U_B_CombatUniform_mcam_worn	", "Roupa VIP III", 3275, { "life_donator", "SCALAR", 3 } },
			{ "U_B_CombatUniform_mcam", "Roupa VIP III", 3150, { "life_donator", "SCALAR", 1 } },
			{ "U_B_CombatUniform_mcam_tshirt", "Roupa VIP III", 3175,{ "life_donator", "SCALAR", 3 } },
			{ "U_B_CombatUniform_mcam_vest", "Roupa VIP III", 3125, { "life_donator", "SCALAR", 3 } },
			{ "U_B_GhillieSuit", "Roupa VIP III", 3350, { "life_donator", "SCALAR", 3 } },
			{ "U_B_FullGhillie_sard", "Roupa VIP III", 3250,{ "life_donator", "SCALAR", 3 } },
			{ "U_B_FullGhillie_ard", "Roupa VIP III", 3650, { "life_donator", "SCALAR", 3 } },
			{ "U_B_Protagonist_VR", "Roupa VIP IIII", 3735, { "life_donator", "SCALAR", 3 } },
			{ "U_BG_Guerilla1_1", "Roupa VIP III", 3300, { "life_donator", "SCALAR", 3 } },
			{ "U_BG_Guerrilla_6_1", "Roupa VIP III", 3700, { "life_donator", "SCALAR", 3 } },
			{ "U_BG_leader", "Roupa VIP III", 3100, { "life_donator", "SCALAR", 3 } },
			{ "U_I_G_resistanceLeader_F", "Roupa VIP III", 3500, { "life_donator", "SCALAR", 3 } },
			{ "U_B_Protagonist_VR", "Roupa VIP III", 9000, { "life_donator", "SCALAR", 3 } },
			{ "U_O_Protagonist_VR", "Roupa VIP III", 9000, { "life_donator", "SCALAR", 3 } },
			{ "U_I_Protagonist_VR", "Roupa VIP III", 9000, { "life_donator", "SCALAR", 3 } }

		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "life_donator", "SCALAR", 3 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "life_donator", "SCALAR", 3 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "life_donator", "SCALAR", 3 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "life_donator", "SCALAR", 3 } },
			{ "H_Bandanna_cbr", "", 165, { "life_donator", "SCALAR", 3 } },
			{ "H_Bandanna_surfer", "", 135, { "life_donator", "SCALAR", 3 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "life_donator", "SCALAR", 3 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "life_donator", "SCALAR", 3 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "life_donator", "SCALAR", 3 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "life_donator", "SCALAR", 3 } },
			{ "H_Booniehat_tan", "", 425, { "life_donator", "SCALAR", 3 } },
			{ "H_Hat_blue", "", 310, { "life_donator", "SCALAR", 3 } },
			{ "H_Hat_brown", "", 276, { "life_donator", "SCALAR", 3 } },
			{ "H_Hat_checker", "", 340, { "life_donator", "SCALAR", 3 } },
			{ "H_Hat_grey", "", 280, { "life_donator", "SCALAR", 3 } },
			{ "H_Hat_tan", "", 265, { "life_donator", "SCALAR", 3 } },
			{ "H_Cap_blu", "", 150, { "life_donator", "SCALAR", 3 } },
			{ "H_Cap_grn", "", 150, { "life_donator", "SCALAR", 3 } },
			{ "H_Cap_grn_BI", "", 150, { "life_donator", "SCALAR", 3 } },
			{ "H_Cap_oli", "", 150, { "life_donator", "SCALAR", 3 } },
			{ "H_Shemag_khk", "", 1500, { "life_donator", "SCALAR", 3 } },
			{ "H_Shemag_tan", "", 1500, { "life_donator", "SCALAR", 3 } },
			{ "H_Shemag_olive_hs", "", 1500, { "life_donator", "SCALAR", 3 } },
			{ "H_ShemagOpen_khk", "", 1500, { "life_donator", "SCALAR", 3 } },
			{ "H_ShemagOpen_tan", "", 1500, { "life_donator", "SCALAR", 3 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "life_donator", "SCALAR", 3 } },
			{ "G_Shades_Black", "", 205, { "life_donator", "SCALAR", 3 } },
			{ "G_Shades_Blue", "", 200, { "life_donator", "SCALAR", 3 } },
			{ "G_Sport_Blackred", "", 200, { "life_donator", "SCALAR", 3 } },
			{ "G_Sport_Checkered", "", 200, { "life_donator", "SCALAR", 3 } },
			{ "G_Sport_Blackyellow", "", 200, { "life_donator", "SCALAR", 3 } },
			{ "G_Sport_BlackWhite", "", 200, { "life_donator", "SCALAR", 3 } },
			{ "G_Squares", "", 100, { "life_donator", "SCALAR", 3 } },
			{ "G_Aviator", "", 1000, { "life_donator", "SCALAR", 3 } },
			{ "G_Lady_Mirror", "", 500, { "life_donator", "SCALAR", 3 } },
			{ "G_Lady_Dark", "", 500, { "life_donator", "SCALAR", 3 } },
			{ "G_Lady_Blue", "", 500, { "life_donator", "SCALAR", 3 } },
			{ "G_Lowprofile", "", 300, { "life_donator", "SCALAR", 3 } },
			{ "G_Combat", "", 5500, { "life_donator", "SCALAR", 3 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "life_donator", "SCALAR", 3 } },
			{ "V_TacVestIR_blk", "", 9500, { "life_donator", "SCALAR", 3 } },
			{ "V_PlateCarrierIA2_dgtl", "", 12000, { "life_donator", "SCALAR", 3 } },
			{ "V_PlateCarrierIAGL_dgtl", "", 12000, { "life_donator", "SCALAR", 3 } },
			{ "V_PlateCarrierH_CTRG", "", 12000, { "life_donator", "SCALAR", 3 } },
			{ "V_PlateCarrierGL_rgr", "", 12000, { "life_donator", "SCALAR", 3 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "life_donator", "SCALAR", 3 } },
			{ "B_AssaultPack_cbr", "", 750, { "life_donator", "SCALAR", 3 } },
			{ "B_Kitbag_mcamo", "", 950, { "life_donator", "SCALAR", 3 } },
			{ "B_TacticalPack_oli", "", 1500, { "life_donator", "SCALAR", 3 } },
			{ "B_FieldPack_ocamo", "", 1700, { "life_donator", "SCALAR", 3 } },
			{ "B_Bergen_sgg", "", 2500, { "life_donator", "SCALAR", 3 } },
			{ "B_Kitbag_cbr", "", 2500, { "life_donator", "SCALAR", 3 } },
			{ "B_Carryall_oli", "", 4500, { "life_donator", "SCALAR", 3 } },
			{ "B_Carryall_khk", "", 4500, { "life_donator", "SCALAR", 3 } },
			{ "B_Carryall_oucamo", "Mochila Invisivel", 13000, { "life_donator", "SCALAR", 3 } }
		};
	};
	
	class Roupas Platinum {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "life_donator", "SCALAR", 4 } },
			{ "U_I_CombatUniform", "Roupa Padrão VIP", 1000, { "life_donator", "SCALAR", 4 } },
			{ "U_C_Poloshirt_blue", "Undead Brasil Roupa", 1250, { "life_donator", "SCALAR", 4 } },
			{ "U_O_OfficerUniform_ocamo", "ROUPA VIP IV", 2275, { "life_donator", "SCALAR", 4 } },
			{ "U_O_GhillieSuit", "ROUPA VIP IV", 2150, { "life_donator", "SCALAR", 4 } },
			{ "U_O_FullGhillie_sard", "ROUPA VIP IV", 2175,{ "life_donator", "SCALAR", 4 } },
			{ "U_O_FullGhillie_lsh", "ROUPA VIP IV", 2125, { "life_donator", "SCALAR", 4 } },
			{ "U_O_FullGhillie_ard", "ROUPA VIP IV", 2350, { "life_donator", "SCALAR", 4 } },
			{ "U_MillerBody", "ROUPA VIP IV", 2250,{ "life_donator", "SCALAR", 4 } },
			{ "U_Marshal", "ROUPA VIP IV", 2650, { "life_donator", "SCALAR", 4 } },
			{ "U_KerryBody", "ROUPA VIP IV", 2735, { "life_donator", "SCALAR", 4 } },
			{ "U_IG_leader", "ROUPA VIP IV", 2700, { "life_donator", "SCALAR", 4 } },
			{ "U_I_GhillieSuit", "ROUPA VIP IV", 2700, { "life_donator", "SCALAR", 4 } },
			{ "U_C_Driver_1", "ROUPA VIP IV", 2100, { "life_donator", "SCALAR", 4 } },
			{ "U_BG_leader", "ROUPA VIP IV", 2500, { "life_donator", "SCALAR", 4 } },
			{ "U_B_Protagonist_VR", "ROUPA VIP IV", 7000, { "life_donator", "SCALAR", 4 } },
			{ "U_O_Protagonist_VR", "ROUPA VIP IV", 7000, { "life_donator", "SCALAR", 4 } },
			{ "U_I_Protagonist_VR", "ROUPA VIP IV", 7000, { "life_donator", "SCALAR", 4 } }

		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "life_donator", "SCALAR", 4 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "life_donator", "SCALAR", 4 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "life_donator", "SCALAR", 4 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "life_donator", "SCALAR", 4 } },
			{ "H_Bandanna_cbr", "", 165, { "life_donator", "SCALAR", 4 } },
			{ "H_Bandanna_surfer", "", 135, { "life_donator", "SCALAR", 4 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "life_donator", "SCALAR", 4 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "life_donator", "SCALAR", 4 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "life_donator", "SCALAR", 4 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "life_donator", "SCALAR", 4 } },
			{ "H_Booniehat_tan", "", 425, { "life_donator", "SCALAR", 4 } },
			{ "H_Hat_blue", "", 310, { "life_donator", "SCALAR", 4 } },
			{ "H_Hat_brown", "", 276, { "life_donator", "SCALAR", 4 } },
			{ "H_Hat_checker", "", 340, { "life_donator", "SCALAR", 4 } },
			{ "H_Hat_grey", "", 280, { "life_donator", "SCALAR", 4 } },
			{ "H_Hat_tan", "", 265, { "life_donator", "SCALAR", 4 } },
			{ "H_Cap_blu", "", 150, { "life_donator", "SCALAR", 4 } },
			{ "H_Cap_grn", "", 150, { "life_donator", "SCALAR", 4 } },
			{ "H_Cap_grn_BI", "", 150, { "life_donator", "SCALAR", 4 } },
			{ "H_Cap_oli", "", 150, { "life_donator", "SCALAR", 4 } },
			{ "H_Shemag_khk", "", 1500, { "life_donator", "SCALAR", 4 } },
			{ "H_Shemag_tan", "", 1500, { "life_donator", "SCALAR", 4 } },
			{ "H_Shemag_olive_hs", "", 1500, { "life_donator", "SCALAR", 4 } },
			{ "H_ShemagOpen_khk", "", 1500, { "life_donator", "SCALAR", 4 } },
			{ "H_ShemagOpen_tan", "", 1500, { "life_donator", "SCALAR", 4 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "life_donator", "SCALAR", 4 } },
			{ "G_Shades_Black", "", 205, { "life_donator", "SCALAR", 4 } },
			{ "G_Shades_Blue", "", 200, { "life_donator", "SCALAR", 4 } },
			{ "G_Sport_Blackred", "", 200, { "life_donator", "SCALAR", 4 } },
			{ "G_Sport_Checkered", "", 200, { "life_donator", "SCALAR", 4 } },
			{ "G_Sport_Blackyellow", "", 200, { "life_donator", "SCALAR", 4 } },
			{ "G_Sport_BlackWhite", "", 200, { "life_donator", "SCALAR", 4 } },
			{ "G_Squares", "", 100, { "life_donator", "SCALAR", 4 } },
			{ "G_Aviator", "", 1000, { "life_donator", "SCALAR", 4 } },
			{ "G_Lady_Mirror", "", 500, { "life_donator", "SCALAR", 4 } },
			{ "G_Lady_Dark", "", 500, { "life_donator", "SCALAR", 4 } },
			{ "G_Lady_Blue", "", 500, { "life_donator", "SCALAR", 4 } },
			{ "G_Lowprofile", "", 300, { "life_donator", "SCALAR", 4 } },
			{ "G_Combat", "", 5500, { "life_donator", "SCALAR", 4 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "life_donator", "SCALAR", 4 } },
			{ "V_TacVestIR_blk", "", 4500, { "life_donator", "SCALAR", 4 } },
			{ "V_PlateCarrierIA2_dgtl", "", 9500, { "life_donator", "SCALAR", 4 } },
			{ "V_PlateCarrierIAGL_dgtl", "", 9500, { "life_donator", "SCALAR", 4 } },
			{ "V_PlateCarrierH_CTRG", "", 9500, { "life_donator", "SCALAR", 4 } },
			{ "V_PlateCarrierGL_rgr", "", 9500, { "life_donator", "SCALAR", 4 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "life_donator", "SCALAR", 4 } },
			{ "B_AssaultPack_cbr", "", 750, { "life_donator", "SCALAR", 4 } },
			{ "B_Kitbag_mcamo", "", 950, { "life_donator", "SCALAR", 4 } },
			{ "B_TacticalPack_oli", "", 1500, { "life_donator", "SCALAR", 4 } },
			{ "B_FieldPack_ocamo", "", 1700, { "life_donator", "SCALAR", 4 } },
			{ "B_Bergen_sgg", "", 2500, { "life_donator", "SCALAR", 4 } },
			{ "B_Kitbag_cbr", "", 2500, { "life_donator", "SCALAR", 4 } },
			{ "B_Carryall_oli", "", 4500, { "life_donator", "SCALAR", 4 } },
			{ "B_Carryall_khk", "", 4500, { "life_donator", "SCALAR", 4 } },
			{ "B_Carryall_oucamo", "Mochila Invisivel", 9000, { "life_donator", "SCALAR", 4 } }
		};
	};
	
	class Roupas Diamond {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "life_donator", "SCALAR", 5 } },
			{ "U_I_CombatUniform", "Roupa Padrão VIP", 1000, { "life_donator", "SCALAR", 5 } },
			{ "U_C_Poloshirt_blue", "Undead Brasil Roupa", 1250, { "life_donator", "SCALAR", 5 } },
			{ "U_O_OfficerUniform_ocamo", "ROUPA VIP V", 1275, { "life_donator", "SCALAR", 5 } },
			{ "U_O_GhillieSuit", "ROUPA VIP V", 1150, { "life_donator", "SCALAR", 5 } },
			{ "U_O_FullGhillie_sard", "ROUPA VIP V", 1175,{ "life_donator", "SCALAR", 5 } },
			{ "U_O_FullGhillie_lsh", "ROUPA VIP V", 1125, { "life_donator", "SCALAR", 5 } },
			{ "U_O_FullGhillie_ard", "ROUPA VIP V", 1350, { "life_donator", "SCALAR", 5 } },
			{ "U_MillerBody", "ROUPA VIP V", 1250,{ "life_donator", "SCALAR", 5 } },
			{ "U_Marshal", "ROUPA VIP V", 1650, { "life_donator", "SCALAR", 5 } },
			{ "U_KerryBody", "ROUPA VIP V", 1735, { "life_donator", "SCALAR", 5 } },
			{ "U_IG_leader", "ROUPA VIP V", 1700, { "life_donator", "SCALAR", 5 } },
			{ "U_I_GhillieSuit", "ROUPA VIP V", 1700, { "life_donator", "SCALAR", 5 } },
			{ "U_I_FullGhillie_ard", "ROUPA VIP V", 1700, { "life_donator", "SCALAR", 5 } },
			{ "U_B_FullGhillie_lsh", "ROUPA VIP V", 1700, { "life_donator", "SCALAR", 5 } },
			{ "U_B_FullGhillie_sard", "ROUPA VIP V", 1700, { "life_donator", "SCALAR", 5 } },
			{ "U_C_Driver_1", "ROUPA VIP V", 1100, { "life_donator", "SCALAR", 5 } },
			{ "U_BG_leader", "ROUPA VIP V", 1500, { "life_donator", "SCALAR", 5 } },
			{ "U_B_Protagonist_VR", "ROUPA VIP V", 5000, { "life_donator", "SCALAR", 5 } },
			{ "U_O_Protagonist_VR", "ROUPA VIP V", 5000, { "life_donator", "SCALAR", 5 } },
			{ "U_I_Protagonist_VR", "ROUPA VIP V", 5000, { "life_donator", "SCALAR", 5 } }

		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "life_donator", "SCALAR", 5 } },
			{ "H_Watchcap_camo", "", 150, { "life_donator", "SCALAR", 5 } },
			{ "H_Watchcap_sgg", "", 150, { "life_donator", "SCALAR", 5 } },
			{ "H_Watchcap_khk", "", 150, { "life_donator", "SCALAR", 5 } },
			{ "H_Shemag_khk", "", 1500, { "life_donator", "SCALAR", 5 } },
			{ "H_Shemag_tan", "", 1500, { "life_donator", "SCALAR", 5 } },
			{ "H_Shemag_olive_hs", "", 1500, { "life_donator", "SCALAR", 5 } },
			{ "H_ShemagOpen_khk", "", 1500, { "life_donator", "SCALAR", 5 } },
			{ "H_ShemagOpen_tan", "", 1500, { "life_donator", "SCALAR", 5 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "life_donator", "SCALAR", 5 } },
			{ "G_Shades_Black", "", 205, { "life_donator", "SCALAR", 5 } },
			{ "G_Shades_Blue", "", 200, { "life_donator", "SCALAR", 5 } },
			{ "G_Sport_Blackred", "", 200, { "life_donator", "SCALAR", 5 } },
			{ "G_Sport_Checkered", "", 200, { "life_donator", "SCALAR", 5 } },
			{ "G_Sport_Blackyellow", "", 200, { "life_donator", "SCALAR", 5 } },
			{ "G_Sport_BlackWhite", "", 200, { "life_donator", "SCALAR", 5 } },
			{ "G_Squares", "", 100, { "life_donator", "SCALAR", 5 } },
			{ "G_Aviator", "", 1000, { "life_donator", "SCALAR", 5 } },
			{ "G_Lady_Mirror", "", 500, { "life_donator", "SCALAR", 5 } },
			{ "G_Lady_Dark", "", 500, { "life_donator", "SCALAR", 5 } },
			{ "G_Lady_Blue", "", 500, { "life_donator", "SCALAR", 5 } },
			{ "G_Lowprofile", "", 300, { "life_donator", "SCALAR", 5 } },
			{ "G_Combat", "", 5500, { "life_donator", "SCALAR", 5 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "life_donator", "SCALAR", 5 } },
			{ "V_TacVestIR_blk", "", 4500, { "life_donator", "SCALAR", 5 } },
			{ "V_PlateCarrierSpec_blk", "", 5500, { "life_donator", "SCALAR", 5 } },
			{ "V_PlateCarrierSpec_mtp", "", 5500, { "life_donator", "SCALAR", 5 } },
			{ "V_PlateCarrierGL_mtp", "", 5500, { "life_donator", "SCALAR", 5 } },
			{ "V_PlateCarrierGL_blk", "", 5500, { "life_donator", "SCALAR", 5 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "life_donator", "SCALAR", 5 } },
			{ "B_AssaultPack_cbr", "", 750, { "life_donator", "SCALAR", 5 } },
			{ "B_Kitbag_mcamo", "", 950, { "life_donator", "SCALAR", 5 } },
			{ "B_TacticalPack_oli", "", 1500, { "life_donator", "SCALAR", 5 } },
			{ "B_FieldPack_ocamo", "", 1700, { "life_donator", "SCALAR", 5 } },
			{ "B_Bergen_sgg", "", 2500, { "life_donator", "SCALAR",  } },
			{ "B_Kitbag_cbr", "", 2500, { "life_donator", "SCALAR", 5 } },
			{ "B_Carryall_oli", "", 4500, { "life_donator", "SCALAR", 5 } },
			{ "B_Carryall_khk", "", 4500, { "life_donator", "SCALAR", 5 } },
			{ "B_Carryall_oucamo", "Mochila Invisivel", 4000, { "life_donator", "SCALAR", 5 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_Rangemaster", "Uniforme Policial", 2500, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_SpecopsUniform_sgg", "Uniforme de Oficial", 2500, { "life_coplevel", "SCALAR", 4 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_PilotHelmetFighter_B", "Teargas Helmet", 1000, { "life_coplevel", "SCALAR", 2 } },
			{ "H_Cap_police", "", 1000, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Beret_blk_POLICE", "", 1000, { "life_coplevel", "SCALAR", 2 } },
			{ "H_Beret_02", "", 1000, { "life_coplevel", "SCALAR", 4 } },
			{ "H_Beret_Colonel", "", 1000, { "life_coplevel", "SCALAR", 7 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } },
			{ "G_Diving", "Dive Goggles", 50, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_blk_POLICE", "Police Vest", 5000, { "", "", -1 } },
			{ "V_PlateCarrier1_blk", "Officer Vest", 25000, { "life_coplevel", "SCALAR", 4 } },
			{ "V_PlateCarrierSpec_blk", "Leader Vest", 45000, { "life_coplevel", "SCALAR", 7 } },
			{ "V_PlateCarrierGL_blk", "Swat Vest", 500, { "life_swatlevel", "SCALAR", 1} },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Carryall_oucamo", "Cop Backpack", 1500, { "", "", -1 } }
		};
	};
	class swat {
		title = "STR_Shops_C_Swat";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_SpecopsUniform_sgg", "BOPE", 25, { "life_swatlevel", "SCALAR", 1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_PilotHelmetFighter_B", "Mascara de Gás", 100, { "life_swatlevel", "SCALAR", 1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Shades_Black", "", 25, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Shades_Blue", "", 20, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Sport_Blackred", "", 20, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Sport_Checkered", "", 20, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Sport_Blackyellow", "", 20, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Sport_BlackWhite", "", 20, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Squares", "", 10, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Aviator", "", 100, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Lady_Mirror", "", 150, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Lady_Dark", "", 150, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Lady_Blue", "", 150, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Balaclava_blk", "", 30, { "life_swatlevel", "SCALAR", 1 },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "V_PlateCarrier3_rgr", "", 1500, { "life_swatlevel", "SCALAR", 1 }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Carryall_oucamo", "Cop Backpack", 1500, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "Dive Goggles", 5000, { "", "", -1 } }
			
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 12500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 14500, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_vest", "", 17500, { "", "", -1 } },
			{ "U_B_SpecopsUniform_sgg", "", 17500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_blk", "", 17500, { "", "", -1 } },
			{ "U_B_CTRG_3", "", 17500, { "", "", -1 } },
			{ "U_I_CombatUniform_shortsleeve", "",1 7500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15000, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 35000, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 60000, { "", "", -1 } },
			{ "U_B_FullGhillie_lsh", "Lush NATO", 80000, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 8735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 8700, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 8700, { "", "", -1 } },
			{ "U_O_Wetsuit", "", 9000, { "", "", -1 } }
			
			
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 1500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 700, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "", 4000, { "", "", -1 } },
			{ "H_Booniehat_mcamo", "", 120, { "", "", -1 } },
			{ "H_MilCap_mcamo", "", 100, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } },
			{ "H_HelmetCrew_B", "", 4500, { "", "", -1 } }		
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } },
			{ "G_Squares", "", 100, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 100, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 300, { "", "", -1 } },
			{ "G_Combat", "", 5500, { "", "", -1 } },
			{ "G_Diving", "Dive Goggles", 5000, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 20000, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 7000, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 1800, { "", "", -1 } },
			{ "V_PlateCarrier2_rgr", "", 50000, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } },
			{ "V_RebreatherIA", "", 5000, { "", "", -1 } },
			{ "V_RebreatherIR", "", 5000, { "", "", -1 } },
			{ "V_HarnessOGL_gry", "Colete Suicida", 500000, { "", "", -1 } },
			{ "V_PlateCarrierSpec_mtp", "Special Carrier", 250000, { "", "", -1 } },
			{ "V_PlateCarrierSpec_rgr", "Special Carrier", 250000, { "", "", -1 } },
			{ "V_PlateCarrierGL_rgr", "Carrier GL Verde", 500000, { "", "", -1 } }
			
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{"B_AssaultPack_cbr", "", 450, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 400, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 800, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 800, { "", "", -1 } },
			{ "B_FieldPack_blk", "", 800, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 800, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 1000, { "", "", -1 } },
			{ "B_Carryall_oli", "", 2000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 2000, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 3500, { "", "", -1 } },
			{ "U_C_Driver_1", "", 3600, { "", "", -1 } },
			{ "U_C_Driver_3", "", 3700, { "", "", -1 } },
			{ "U_C_Driver_4", "", 3700, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
	class law {
		title = "STR_Shops_law";
		license = "law";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_NikosAgedBody", "", 1500, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{"G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } }
			
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
	class news {
		title = "STR_Shops_News";
		license = "news";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_NikosAgedBody", "", 100, { "", "", -1 } },
			{ "U_C_Journalist", "", 500, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Cap_press", "", 1500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{"G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Press_F", "", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};