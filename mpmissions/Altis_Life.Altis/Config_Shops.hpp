class WeaponShops {
	//Vigi
    class vigilante {
        name = "Vigilante Shop";
        side = "civ";
        license = "vigilante";
        level = -1;
        msg = "";
        items[] = {
			{ "FirstAidKit", "Bolsa de sangue", 500, { "", "", -1 } },
			{ "ToolKit", "Estojo de ferramentas", 500, { "", "", -1 } },
			{ "ItemGPS", "GPS", 50, { "", "", -1 } },
			{ "ItemMap", "Mapa", 50, { "", "", -1 } },
			{ "ItemRadio", "Radio", 50, { "", "", -1 } },
			{ "ItemCompass", "Bússola", 50, { "", "", -1 } },
            { "Binocular", "Binóculo", 1000, { "", "", -1 } },
			{ "Rangefinder", "Rangefinder",5000, { "", "", -1 } },
            { "NVGoggles_INDEP", "NVG Black", 1000, { "", "", -1 } },
            { "NVGoggles", "NVG Brow", 1000, { "", "", -1 } },
			{ "SMG_02_F", "Submetralhadora 9mm", 14000, { "", "", -1 } },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 1000, { "", "", -1 } },
			{ "SMG_01_F", "Submetralhadora 4.5mm", 23000, { "", "", -1 } },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd 4.5mm", 1000, { "", "", -1 } },
			{ "hgun_PDW2000_F", "Submetralhadora 9mm", 7000, { "", "", -1 } },
			{ "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 1000, { "", "", -1 } },
			{ "acc_flashlight", "Lanterna", 500, { "", "", -1 } },
			{ "optic_ACO_grn", "Aco Verde", 500, { "", "", -1 } },
			{ "optic_Aco", "Aco", 5000, { "", "", -1 } }	
        };
    };    
	
	
	//Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "Você precisa ter a licença de armas legalizadas!";
        items[] = {
			{ "ItemMap", "Mapa", 100, { "", "", -1 } },
			{ "ItemRadio", "Radio", 100, { "", "", -1 } },
            { "hgun_Rook40_F", "Pistola 9mm", 5000, { "", "", -1 } },
            { "hgun_PDW2000_F", "Submetralhadora 9mm", 15000, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 500, { "", "", -1 } },
			{ "hgun_ACPC2_F", "Pistola 4.5mm", 6000, { "", "", -1 } },
			{ "9Rnd_45ACP_Mag", "Munição 9rnd 4.5mm", 500, { "", "", -1 } },
			{ "hgun_Pistol_heavy_02_F", "Pistola 4.5mm", 8000, { "", "", -1 } },
            { "6Rnd_45ACP_Cylinder", "Munição 6rnd 4.5mm", 500, { "", "", -1 } },
            { "optic_ACO_grn", "Aco Verde", 2500, { "", "", -1 } },
            { "optic_Aco", "Aco", 2500, { "", "", -1 } }
        };
    };
	
	class bronze {    
        name = "Bronze Armas Shop";
        side = "civ";
        license = "gun";
        level = 1;
        msg = "Você precisa ter a licença de armas legalizadas!";
        items[] = {
			{ "arifle_MXC_Black_F", "Fuzil Cano Curto", 40000, { "life_donator", "SCALAR", 1 } },
			{ "arifle_Mk20C_F", "Fuzil 5.56mm", 20000, { "life_donator", "SCALAR", 1 } },
            { "arifle_TRG20_F", "Fuzil 5.56mm", 25000, { "life_donator", "SCALAR", 1 } },
            { "arifle_TRG21_F", "Fuzil 5.56mm", 25000, { "life_donator", "SCALAR", 1 } },
            { "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 2000, { "life_donator", "SCALAR", 1 } },
			{ "arifle_MXC_F", "Fuzil Cano Curto", 40000, { "life_donator", "SCALAR", 1 } },
			{ "arifle_MX_F", "Fuzil Cano Curto", 40000, { "life_donator", "SCALAR", 1 } },
			{ "arifle_MXM_F", "Fuzil Cano Longo", 50000, { "life_donator", "SCALAR", 1 } },
			{ "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 2500, { "life_donator", "SCALAR", 1 } },
			{ "SMG_01_F", "Submetralhadora 4.5mm", 15000, { "life_donator", "SCALAR", 1 } },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd 4.5mm", 1300, { "life_donator", "SCALAR", 1 } },
			{ "LMG_Mk200_pointer_F", "Fuzil LMG 6.5mm", 130000, { "life_donator", "SCALAR", 1 } },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 5000, { "life_donator", "SCALAR", 1 } },
			{ "LMG_Zafir_F", "Fuzil LMG 7.62mm", 210000, { "life_donator", "SCALAR", 1 } },
			{ "150Rnd_762x54_Box_Tracer", "Munição 150rnd 7.62mm", 6000, { "life_donator", "SCALAR", 1 } },
			{ "srifle_EBR_F", "Rifle 7.62mm", 100000, { "life_donator", "SCALAR", 1 } },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 2500, { "life_donator", "SCALAR", 1 } },
			{ "arifle_Katiba_F", "Fuzil 6.5mm", 35000, { "life_donator", "SCALAR", 1 } },
			{ "arifle_Katiba_C_F", "Fuzil 6.5mm", 35000, { "life_donator", "SCALAR", 1 } },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "Munição 30rnd 6.5mm", 1500, { "life_donator", "SCALAR", 1 } },
			{ "arifle_SDAR_F", "Fuzil Aquático", 12000, { "life_donator", "SCALAR", 1 } },
			{ "20Rnd_556x45_UW_mag", "Munição 20rnd Aquático", 1500, { "life_donator", "SCALAR", 1 } },
			{ "srifle_DMR_01_F", "Rifle 7.62mm", 60000, { "life_donator", "SCALAR", 1 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 2500, { "life_donator", "SCALAR", 1 } },
			{ "optic_Arco", "Arco", 8000, { "life_donator", "SCALAR", 1 } },
			{ "optic_Hamr", "Hamr", 8000, { "life_donator", "SCALAR", 1 } },
			{ "optic_Aco", "Aco", 2500, { "life_donator", "SCALAR", 1 } },
			{ "optic_Holosight", "Holosight", 5500, { "life_donator", "SCALAR", 1 } },
			{ "optic_MRCO", "MRCO", 7500, { "life_donator", "SCALAR", 1 } },
			{ "optic_DMS", "DMS", 12500, { "life_donator", "SCALAR", 1 } },
			{ "acc_flashlight", "Lanterna", 5000, { "life_donator", "SCALAR", 1 } },
			{ "acc_pointer_IR", "Laser", 5000, { "life_donator", "SCALAR", 1 } },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 8000, { "life_donator", "SCALAR", 1 } },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 10000, { "life_donator", "SCALAR", 1 } }
        };
    };
	
	class silver {
        name = "Silver Armas Shop";
        side = "civ";
        license = "gun";
        level = 2;
        msg = "Você precisa ter a licença de armas legalizadas!";
        items[] = {
			{ "arifle_MXC_Black_F", "Fuzil Cano Curto", 35000, { "life_donator", "SCALAR", 2 } },
			{ "arifle_Mk20C_F", "Fuzil 5.56mm", 17000, { "life_donator", "SCALAR", 2 } },
            { "arifle_TRG20_F", "Fuzil 5.56mm", 22000, { "life_donator", "SCALAR", 2 } },
            { "arifle_TRG21_F", "Fuzil 5.56mm", 22000, { "life_donator", "SCALAR", 2 } },
            { "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 1700, { "life_donator", "SCALAR", 2 } },
			{ "arifle_MXC_F", "Fuzil Cano Curto", 36000, { "life_donator", "SCALAR", 2 } },
			{ "arifle_MX_F", "Fuzil Cano Curto", 36000, { "life_donator", "SCALAR", 2 } },
			{ "arifle_MXM_F", "Fuzil Cano Longo", 46000, { "life_donator", "SCALAR", 2 } },
			{ "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 2200, { "life_donator", "SCALAR", 2 } },
			{ "SMG_01_F", "Submetralhadora 4.5mm", 12000, { "life_donator", "SCALAR", 2 } },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd 4.5mm", 1000, { "life_donator", "SCALAR", 2 } },
			{ "LMG_Mk200_pointer_F", "Fuzil LMG 6.5mm", 100000, { "life_donator", "SCALAR", 2 } },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 4500, { "life_donator", "SCALAR", 2 } },
			{ "LMG_Zafir_F", "Fuzil LMG 7.62mm", 190000, { "life_donator", "SCALAR", 2 } },
			{ "150Rnd_762x54_Box_Tracer", "Munição 150rnd 7.62mm", 5500, { "life_donator", "SCALAR", 2 } },
			{ "srifle_EBR_F", "Rifle 7.62mm", 80000, { "life_donator", "SCALAR", 2 } },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 2000, { "life_donator", "SCALAR", 2 } },
			{ "arifle_Katiba_F", "Fuzil 6.5mm", 32000, { "life_donator", "SCALAR", 2 } },
			{ "arifle_Katiba_C_F", "Fuzil 6.5mm", 32000, { "life_donator", "SCALAR", 2 } },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "Munição 30rnd 6.5mm", 1200, { "life_donator", "SCALAR", 2 } },
			{ "arifle_SDAR_F", "Fuzil Aquático", 10000, { "life_donator", "SCALAR", 2 } },
			{ "20Rnd_556x45_UW_mag", "Munição 20rnd Aquático", 1200, { "life_donator", "SCALAR", 2 } },
			{ "srifle_DMR_01_F", "Rifle 7.62mm", 57000, { "life_donator", "SCALAR", 2 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 2200, { "life_donator", "SCALAR", 2 } },
			{ "srifle_DMR_06_camo_F", "Rifle 7.62mm", 57000, { "life_donator", "SCALAR", 2 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 2200, { "life_donator", "SCALAR", 2 } },
			{ "optic_Arco", "Arco", 7000, { "life_donator", "SCALAR", 2 } },
			{ "optic_Hamr", "Hamr", 7000, { "life_donator", "SCALAR", 2 } },
			{ "optic_Aco", "Aco", 2200, { "life_donator", "SCALAR", 2 } },
			{ "optic_Holosight", "Holosight", 5200, { "life_donator", "SCALAR", 2 } },
			{ "optic_MRCO", "MRCO", 7000, { "life_donator", "SCALAR", 2 } },
			{ "optic_DMS", "DMS", 11000, { "life_donator", "SCALAR", 2 } },
			{ "acc_flashlight", "Lanterna", 4500, { "life_donator", "SCALAR", 2 } },
			{ "acc_pointer_IR", "Laser", 4500, { "life_donator", "SCALAR", 2 } },
			{ "bipod_01_F_blk", "Bipod Preto", 4500, { "life_donator", "SCALAR", 2 } },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 7500, { "life_donator", "SCALAR", 2 } },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 9500, { "life_donator", "SCALAR", 2 } },
			{ "muzzle_snds_B", "Silenciador 7.62mm", 9500, { "life_donator", "SCALAR", 2 } },
			{ "muzzle_snds_H_MG", "Silenciador LMG 6.5mm", 15000, { "life_donator", "SCALAR", 2 } }
        };
    };
	
	class gold {
        name = "Gold Armas Shop";
        side = "civ";
        license = "gun";
        level = 3;
        msg = "Você precisa ter a licença de armas legalizadas!";
        items[] = {
			{ "arifle_MXC_Black_F", "Fuzil Cano Curto", 32000, { "life_donator", "SCALAR", 3 } },
			{ "arifle_Mk20C_F", "Fuzil 5.56mm", 14000, { "life_donator", "SCALAR", 3 } },
            { "arifle_TRG20_F", "Fuzil 5.56mm", 19000, { "life_donator", "SCALAR", 3 } },
            { "arifle_TRG21_F", "Fuzil 5.56mm", 19000, { "life_donator", "SCALAR", 3 } },
            { "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 1400, { "life_donator", "SCALAR", 3 } },
			{ "arifle_MXC_F", "Fuzil Cano Curto", 33000, { "life_donator", "SCALAR", 3 } },
			{ "arifle_MX_F", "Fuzil Cano Curto", 33000, { "life_donator", "SCALAR", 3 } },
			{ "arifle_MXM_F", "Fuzil Cano Longo", 43000, { "life_donator", "SCALAR", 3 } },
			{ "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 1900, { "life_donator", "SCALAR", 3 } },
			{ "SMG_01_F", "Submetralhadora 4.5mm", 10000, { "life_donator", "SCALAR", 3 } },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd 4.5mm", 1000, { "life_donator", "SCALAR", 3 } },
			{ "LMG_Mk200_pointer_F", "Fuzil LMG 6.5mm", 800000, { "life_donator", "SCALAR", 3 } },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 4000, { "life_donator", "SCALAR", 3 } },
			{ "LMG_Zafir_F", "Fuzil LMG 7.62mm", 183000, { "life_donator", "SCALAR", 3 } },
			{ "150Rnd_762x54_Box_Tracer", "Munição 150rnd 7.62mm", 5000, { "life_donator", "SCALAR", 3 } },
			{ "srifle_EBR_F", "Rifle 7.62mm", 730000, { "life_donator", "SCALAR", 3 } },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 1800, { "life_donator", "SCALAR", 3 } },
			{ "arifle_Katiba_F", "Fuzil 6.5mm", 28000, { "life_donator", "SCALAR", 3 } },
			{ "arifle_Katiba_C_F", "Fuzil 6.5mm", 28000, { "life_donator", "SCALAR", 3 } },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "Munição 30rnd 6.5mm", 1000, { "life_donator", "SCALAR", 3 } },
			{ "arifle_SDAR_F", "Fuzil Aquático", 70000, { "life_donator", "SCALAR", 3 } },
			{ "20Rnd_556x45_UW_mag", "Munição 20rnd Aquático", 1000, { "life_donator", "SCALAR", 3 } },
			{ "srifle_DMR_01_F", "Rifle 7.62mm", 50000, { "life_donator", "SCALAR", 3 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 2000, { "life_donator", "SCALAR", 3 } },
			{ "srifle_DMR_06_camo_F", "Rifle 7.62mm", 53000, { "life_donator", "SCALAR", 3 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 2000, { "life_donator", "SCALAR", 3 } },
			{ "srifle_DMR_03_multicam_F", "Rifle 7.62mm", 53000, { "life_donator", "SCALAR", 3 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 2000, { "life_donator", "SCALAR", 3 } },
			{ "srifle_DMR_05_hex_F", "Rifle 9.3mm", 170000, { "life_donator", "SCALAR", 3 } },
			{ "10Rnd_93x64_DMR_05_Mag", "Munição 10rnd 9.3mm", 2500, { "life_donator", "SCALAR", 3 } },
			{ "optic_Arco", "Arco", 6500, { "life_donator", "SCALAR", 3 } },
			{ "optic_Hamr", "Hamr", 6500, { "life_donator", "SCALAR", 3 } },
			{ "optic_Aco", "Aco", 1900, { "life_donator", "SCALAR", 3 } },
			{ "optic_Holosight", "Holosight", 4900, { "life_donator", "SCALAR", 3 } },
			{ "optic_MRCO", "MRCO", 6400, { "life_donator", "SCALAR", 3 } },
			{ "optic_DMS", "DMS", 94000, { "life_donator", "SCALAR", 3 } },
			{ "acc_flashlight", "Lanterna", 4100, { "life_donator", "SCALAR", 3 } },
			{ "acc_pointer_IR", "Laser", 4100, { "life_donator", "SCALAR", 3 } },
			{ "bipod_01_F_blk", "Bipod Preto", 4100, { "life_donator", "SCALAR", 3 } },
			{ "bipod_01_F_snd", "Bipod Sand", 4100, { "life_donator", "SCALAR", 3 } },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 7000, { "life_donator", "SCALAR", 3 } },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 9000, { "life_donator", "SCALAR", 3 } },
			{ "muzzle_snds_B", "Silenciador 7.62mm", 9000, { "life_donator", "SCALAR", 3 } },
			{ "muzzle_snds_H_MG", "Silenciador LMG 6.5mm", 12000, { "life_donator", "SCALAR", 3 } }
        };
    };
    
	class platinum {
        name = "Platinum Armas Shop";
        side = "civ";
        license = "gun";
        level = 4;
        msg = "Você precisa ter a licença de armas legalizadas!";
        items[] = {
			{ "arifle_MXC_Black_F", "Fuzil Cano Curto", 29000, { "life_donator", "SCALAR", 4 } },
			{ "arifle_Mk20C_F", "Fuzil 5.56mm", 11000, { "life_donator", "SCALAR", 4 } },
            { "arifle_TRG20_F", "Fuzil 5.56mm", 16000, { "life_donator", "SCALAR", 4 } },
            { "arifle_TRG21_F", "Fuzil 5.56mm", 16000, { "life_donator", "SCALAR", 4 } },
            { "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 1100, { "life_donator", "SCALAR", 4 } },
			{ "arifle_MXC_F", "Fuzil Cano Curto", 30000, { "life_donator", "SCALAR", 4 } },
			{ "arifle_MX_F", "Fuzil Cano Curto", 30000, { "life_donator", "SCALAR", 4 } },
			{ "arifle_MXM_F", "Fuzil Cano Longo", 40000, { "life_donator", "SCALAR", 4 } },
			{ "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 1500, { "life_donator", "SCALAR", 4 } },
			{ "SMG_01_F", "Submetralhadora 4.5mm", 7000, { "life_donator", "SCALAR", 4 } },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd 4.5mm", 800, { "life_donator", "SCALAR", 4 } },
			{ "LMG_Mk200_pointer_F", "Fuzil LMG 6.5mm", 750000, { "life_donator", "SCALAR", 4 } },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 3500, { "life_donator", "SCALAR", 4 } },
			{ "LMG_Zafir_F", "Fuzil LMG 7.62mm", 161000, { "life_donator", "SCALAR", 4 } },
			{ "150Rnd_762x54_Box_Tracer", "Munição 150rnd 7.62mm", 4500, { "life_donator", "SCALAR", 4 } },
			{ "srifle_EBR_F", "Rifle 7.62mm", 69000, { "life_donator", "SCALAR", 4 } },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 1400, { "life_donator", "SCALAR", 4 } },
			{ "arifle_Katiba_F", "Fuzil 6.5mm", 25000, { "life_donator", "SCALAR", 4 } },
			{ "arifle_Katiba_C_F", "Fuzil 6.5mm", 25000, { "life_donator", "SCALAR", 4 } },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "Munição 30rnd 6.5mm", 700, { "life_donator", "SCALAR", 4 } },
			{ "arifle_SDAR_F", "Fuzil Aquático", 6000, { "life_donator", "SCALAR", 4 } },
			{ "20Rnd_556x45_UW_mag", "Munição 20rnd Aquático", 700, { "life_donator", "SCALAR", 4 } },
			{ "srifle_DMR_01_F", "Rifle 7.62mm", 45000, { "life_donator", "SCALAR", 4 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1500, { "life_donator", "SCALAR", 4 } },
			{ "srifle_DMR_06_camo_F", "Rifle 7.62mm", 47000, { "life_donator", "SCALAR", 4 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1700, { "life_donator", "SCALAR", 4 } },
			{ "srifle_DMR_03_multicam_F", "Rifle 7.62mm", 48000, { "life_donator", "SCALAR", 4 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1500, { "life_donator", "SCALAR", 4 } },
			{ "srifle_DMR_05_hex_F", "Rifle 9.3mm", 148000, { "life_donator", "SCALAR", 4 } },
			{ "10Rnd_93x64_DMR_05_Mag", "Munição 10rnd 9.3mm", 1500, { "life_donator", "SCALAR", 4 } },
			{ "MMG_02_camo_F", "Fuzil 338mm", 230000, { "life_donator", "SCALAR", 4 } },
			{ "130Rnd_338_Mag", "Munição 130rnd 338mm", 1500, { "life_donator", "SCALAR", 4 } },
			{ "optic_Arco", "Arco", 6000, { "life_donator", "SCALAR", 4 } },
			{ "optic_Hamr", "Hamr", 6000, { "life_donator", "SCALAR", 4 } },
			{ "optic_Aco", "Aco", 1500, { "life_donator", "SCALAR", 4 } },
			{ "optic_Holosight", "Holosight", 4900, { "life_donator", "SCALAR", 4 } },
			{ "optic_MRCO", "MRCO", 6000, { "life_donator", "SCALAR", 4 } },
			{ "optic_DMS", "DMS", 8000, { "life_donator", "SCALAR", 4 } },
			{ "acc_flashlight", "Lanterna", 3500, { "life_donator", "SCALAR", 4 } },
			{ "acc_pointer_IR", "Laser", 3500, { "life_donator", "SCALAR", 4 } },
			{ "bipod_01_F_blk", "Bipod Preto", 3500, { "life_donator", "SCALAR", 4 } },
			{ "bipod_01_F_snd", "Bipod Sand", 3500, { "life_donator", "SCALAR", 4 } },
			{ "bipod_02_F_tan", "Bipod Tan", 3500, { "life_donator", "SCALAR", 4 } },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 6000, { "life_donator", "SCALAR", 4 } },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 8000, { "life_donator", "SCALAR", 4 } },
			{ "muzzle_snds_B", "Silenciador 7.62mm", 8000, { "life_donator", "SCALAR", 4 } },
			{ "muzzle_snds_H_MG", "Silenciador LMG 6.5mm", 10000, { "life_donator", "SCALAR", 4 } }
        };
    };
	
	class diamante {
        name = "Diamond Armas Shop";
        side = "civ";
        license = "gun";
        level = 5;
        msg = "Você precisa ter a licença de armas legalizadas!";
        items[] = {
			{ "arifle_MXC_Black_F", "Fuzil Cano Curto", 25000, { "life_donator", "SCALAR", 5 } },
			{ "arifle_Mk20C_F", "Fuzil 5.56mm", 8000, { "life_donator", "SCALAR", 5 } },
            { "arifle_TRG20_F", "Fuzil 5.56mm", 11000, { "life_donator", "SCALAR", 5 } },
            { "arifle_TRG21_F", "Fuzil 5.56mm", 11000, { "life_donator", "SCALAR", 5 } },
            { "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 500, { "life_donator", "SCALAR", 5 } },
			{ "arifle_MXC_F", "Fuzil Cano Curto", 25000, { "life_donator", "SCALAR", 5 } },
			{ "arifle_MX_F", "Fuzil Cano Curto", 25000, { "life_donator", "SCALAR", 5 } },
			{ "arifle_MXM_F", "Fuzil Cano Longo", 35000, { "life_donator", "SCALAR", 5 } },
			{ "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 500, { "life_donator", "SCALAR", 5 } },
			{ "SMG_01_F", "Submetralhadora 4.5mm", 5000, { "life_donator", "SCALAR", 5 } },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "Munição 30rnd 4.5mm", 200, { "life_donator", "SCALAR", 5 } },
			{ "LMG_Mk200_pointer_F", "Fuzil LMG 6.5mm", 650000, { "life_donator", "SCALAR", 5 } },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 2000, { "life_donator", "SCALAR", 5 } },
			{ "LMG_Zafir_F", "Fuzil LMG 7.62mm", 138000, { "life_donator", "SCALAR", 5 } },
			{ "150Rnd_762x54_Box_Tracer", "Munição 150rnd 7.62mm", 3500, { "life_donator", "SCALAR", 5 } },
			{ "srifle_EBR_F", "Rifle 7.62mm", 60000, { "life_donator", "SCALAR", 5 } },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 1000, { "life_donator", "SCALAR", 5 } },
			{ "arifle_Katiba_F", "Fuzil 6.5mm", 20000, { "life_donator", "SCALAR", 5 } },
			{ "arifle_Katiba_C_F", "Fuzil 6.5mm", 20000, { "life_donator", "SCALAR", 5 } },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "Munição 30rnd 6.5mm", 700, { "life_donator", "SCALAR", 5 } },
			{ "arifle_SDAR_F", "Fuzil Aquático", 3000, { "life_donator", "SCALAR", 5 } },
			{ "20Rnd_556x45_UW_mag", "Munição 20rnd Aquático", 100, { "life_donator", "SCALAR", 5 } },
			{ "srifle_DMR_01_F", "Rifle 7.62mm", 38000, { "life_donator", "SCALAR", 5 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1000, { "life_donator", "SCALAR", 5 } },
			{ "srifle_DMR_06_camo_F", "Rifle 7.62mm", 42000, { "life_donator", "SCALAR", 5 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1000, { "life_donator", "SCALAR", 5 } },
			{ "srifle_DMR_03_multicam_F", "Rifle 7.62mm", 42000, { "life_donator", "SCALAR", 5 } },
			{ "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 1500, { "life_donator", "SCALAR", 5 } },
			{ "srifle_DMR_05_hex_F", "Rifle 9.3mm", 118000, { "life_donator", "SCALAR", 5 } },
			{ "10Rnd_93x64_DMR_05_Mag", "Munição 10rnd 9.3mm", 1000, { "life_donator", "SCALAR", 5 } },
			{ "MMG_02_camo_F", "Fuzil 338mm", 200000, { "life_donator", "SCALAR", 5 } },
			{ "130Rnd_338_Mag", "Munição 130rnd 338mm", 1500, { "life_donator", "SCALAR", 5 } },
			{ "MMG_01_hex_F", "Fuzil 9.3mm", 350000, { "life_donator", "SCALAR", 5 } },
			{ "150Rnd_93x64_Mag", "Munição 150rnd 9.3mm", 11500, { "life_donator", "SCALAR", 5 } },
			{ "srifle_DMR_02_camo_F", "Rifle 338mm", 350000, { "life_donator", "SCALAR", 5 } },
			{ "10Rnd_338_Mag", "Munição 10rnd 338mm", 11500, { "life_donator", "SCALAR", 5 } },
			{ "optic_Arco", "Arco", 4000, { "life_donator", "SCALAR", 5 } },
			{ "optic_SOS", "Sos", 14000, { "life_donator", "SCALAR", 5 } },
			{ "optic_Hamr", "Hamr", 4000, { "life_donator", "SCALAR", 5 } },
			{ "optic_Aco", "Aco", 500, { "life_donator", "SCALAR", 5 } },
			{ "optic_Holosight", "Holosight", 3900, { "life_donator", "SCALAR", 5 } },
			{ "optic_MRCO", "MRCO", 5000, { "life_donator", "SCALAR", 5 } },
			{ "optic_DMS", "DMS", 4000, { "life_donator", "SCALAR", 5 } },
			{ "acc_flashlight", "Lanterna", 3500, { "life_donator", "SCALAR", 5 } },
			{ "acc_pointer_IR", "Laser", 3500, { "life_donator", "SCALAR", 5 } },
			{ "bipod_01_F_blk", "Bipod Preto", 3500, { "life_donator", "SCALAR", 5 } },
			{ "bipod_01_F_snd", "Bipod Sand", 3500, { "life_donator", "SCALAR", 5 } },
			{ "bipod_02_F_tan", "Bipod Tan", 3500, { "life_donator", "SCALAR", 5 } },
			{ "muzzle_snds_M", "Silenciador 5.56mm", 1000, { "life_donator", "SCALAR", 5 } },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 4000, { "life_donator", "SCALAR", 5 } },
			{ "muzzle_snds_B", "Silenciador 7.62mm", 4000, { "life_donator", "SCALAR", 5 } },
			{ "muzzle_snds_H_MG", "Silenciador LMG 6.5mm", 8000, { "life_donator", "SCALAR", 5 } }
        };
    };
	
	class rebelvip {
        name = "Mercado VIP";
        side = "civ";
        level = -1;
        msg = "";
        items[] = {
			{ "FirstAidKit", "Bolsa de Sangue", 500, { "", "", -1 } },
			{ "ToolKit", "Estojo de ferramentas", 500, { "", "", -1 } },
			{ "ItemGPS", "Gps", 50, { "", "", -1 } },
			{ "ItemMap", "Mapa", 50, { "", "", -1 } },
			{ "ItemRadio", "Radio", 50, { "", "", -1 } },
			{ "ItemCompass", "Bússola", 50, { "", "", -1 } },
            { "Binocular", "Binóculo", 1000, { "", "", -1 } },
			{ "Rangefinder", "Rangefider", 5000, { "", "", -1 } },
            { "NVGoggles_INDEP", "NVG Black", 1000, { "", "", -1 } },
            { "NVGoggles", "NVG Brown", 1000, { "", "", -1 } },
            { "hgun_Rook40_F", "Pistola 9mm", 5000, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 500, { "", "", -1 } },
			{ "hgun_ACPC2_F", "Pistola 4.5mm", 6000, { "", "", -1 } },
			{ "9Rnd_45ACP_Mag", "Munição 9rnd 4.5mm", 500, { "", "", -1 } },
            { "hgun_PDW2000_F", "Submetralhadora 9mm", 10000, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 500, { "", "", -1 } },
            { "arifle_sdar_F", "Fuzil Aquático", 10000, { "", "", -1 } },
            { "20Rnd_556x45_UW_mag", "Munição 20rnd aquático", 500, { "", "", -1 } },
            { "hgun_Pistol_heavy_02_F", "Pistola 4.5mm", 7000, { "", "", -1 } },
            { "6Rnd_45ACP_Cylinder", "Munição 6rnd 4.5mm", 500, { "", "", -1 } },
            { "arifle_Mk20C_F", "Fuzil 5.56mm", 25000, { "", "", -1 } },
            { "arifle_TRG20_F", "Fuzil 5.56mm", 30000, { "", "", -1 } },
            { "arifle_TRG21_F", "Fuzil 5.56mm", 30000, { "", "", -1 } },
            { "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 1500, { "", "", -1 } },
            { "arifle_Katiba_F", "Fuzil 6.5mm", 60000, { "", "", -1 } },
            { "30Rnd_65x39_caseless_green", "Munição 30rnd 6.5mm", 1500, { "", "", -1 } },
            { "srifle_DMR_01_F", "Rifle 7.62m", 80000, { "", "", -1 } },
            { "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 2500, { "", "", -1 } },
			{ "LMG_Mk200_F", "Fuzil LMG 6.5mm", 130000, { "", "", -1 } },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 7000, { "", "", -1 } },
			{ "LMG_Zafir_F", "Fuzil LMG 7.62mm", 250000, { "", "", -1 } },
			{ "150Rnd_762x54_Box_Tracer", "", 10000, { "", "", -1 } },
			{ "arifle_MXC_F", "Fuzil 6.5mm", 55000, { "", "", -1 } },
			{ "arifle_MX_F", "Fuzil 6.5mm", 55000, { "", "", -1 } },
			{ "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 2500, { "", "", -1 } },
			{ "srifle_EBR_F", "Rifle 7.62", 125000, { "", "", -1 } },
            { "20Rnd_762x51_Mag", "Munição 7.62mm", 3500, { "", "", -1 } },	
			{ "bipod_01_F_blk", "Black Bipod", 35000, { "", "", -1 } },
			{ "bipod_01_F_snd", "Desert Bipod", 35000, { "", "", -1 } },
			{ "bipod_01_F_mtp", "Woodland Bipod", 35000, { "", "", -1 } },
            { "acc_flashlight", "Lanterna", 500, { "", "", -1 } },
            { "optic_ACO_grn", "Aco Verde", 2500, { "", "", -1 } },	
            { "optic_Aco", "Aco", 2500, { "", "", -1 } },
            { "optic_MRCO", "Mrco", 10000, { "", "", -1 } },	
			{ "optic_Hamr", "Hamr", 10000, { "", "", -1 } },			
            { "optic_Holosight", "Holosight", 8000, { "", "", -1 } },
            { "optic_Arco", "Arco", 10000, { "", "", -1 } },		
            { "acc_pointer_IR", "Laser", 500, { "", "", -1 } },
            { "SmokeShell", "Granada de Fumaça", 1000, { "", "", -1 } },		
            { "SmokeShellRed", "Granada de Fumaça Vermelha", 1000, { "", "", -1 } },
            { "SmokeShellGreen", "Granada de Fumaça Verde", 1000, { "", "", -1 } },		
            { "SmokeShellYellow", "Granada de Fumaça Amarela", 1000, { "", "", -1 } },
            { "SmokeShellPurple", "Granada de Fumaça Roxo", 1000, { "", "", -1 } },		
            { "SmokeShellOrange", "Granada de Fumaça Laranja", 1000, { "", "", -1 } }									
        };
    };
	
    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
			{ "FirstAidKit", "Bolsa de Sangue", 500, { "", "", -1 } },
			{ "ToolKit", "Estojo de ferramentas", 500, { "", "", -1 } },
			{ "ItemGPS", "Gps", 50, { "", "", -1 } },
			{ "ItemMap", "Mapa", 50, { "", "", -1 } },
			{ "ItemRadio", "Radio", 50, { "", "", -1 } },
			{ "ItemCompass", "Bússola", 50, { "", "", -1 } },
            { "Binocular", "Binóculo", 1000, { "", "", -1 } },
			{ "Rangefinder", "Rangefider", 5000, { "", "", -1 } },
            { "NVGoggles_INDEP", "NVG Black", 1000, { "", "", -1 } },
            { "NVGoggles", "NVG Brown", 1000, { "", "", -1 } },
            { "hgun_Rook40_F", "Pistola 9mm", 5000, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 500, { "", "", -1 } },
			{ "hgun_ACPC2_F", "Pistola 4.5mm", 6000, { "", "", -1 } },
			{ "9Rnd_45ACP_Mag", "Munição 9rnd 4.5mm", 500, { "", "", -1 } },
            { "hgun_PDW2000_F", "Submetralhadora 9mm", 10000, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 500, { "", "", -1 } },
            { "arifle_sdar_F", "Fuzil Aquático", 10000, { "", "", -1 } },
            { "20Rnd_556x45_UW_mag", "Munição 20rnd aquático", 500, { "", "", -1 } },
            { "hgun_Pistol_heavy_02_F", "Pistola 4.5mm", 7000, { "", "", -1 } },
            { "6Rnd_45ACP_Cylinder", "Munição 6rnd 4.5mm", 500, { "", "", -1 } },
            { "arifle_Mk20C_F", "Fuzil 5.56mm", 25000, { "", "", -1 } },
            { "arifle_TRG20_F", "Fuzil 5.56mm", 30000, { "", "", -1 } },
            { "arifle_TRG21_F", "Fuzil 5.56mm", 30000, { "", "", -1 } },
            { "30Rnd_556x45_Stanag_Tracer_Green", "Munição 30rnd 5.56mm", 1500, { "", "", -1 } },
            { "arifle_Katiba_F", "Fuzil 6.5mm", 60000, { "", "", -1 } },
            { "30Rnd_65x39_caseless_green", "Munição 30rnd 6.5mm", 1500, { "", "", -1 } },
            { "srifle_DMR_01_F", "Rifle 7.62m", 80000, { "", "", -1 } },
            { "10Rnd_762x54_Mag", "Munição 10rnd 7.62mm", 2500, { "", "", -1 } },
			{ "LMG_Mk200_F", "Fuzil LMG 6.5mm", 130000, { "", "", -1 } },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 7000, { "", "", -1 } },
			{ "LMG_Zafir_F", "Fuzil LMG 7.62mm", 250000, { "", "", -1 } },
			{ "150Rnd_762x54_Box_Tracer", "", 10000, { "", "", -1 } },
			{ "arifle_MXC_F", "Fuzil 6.5mm", 55000, { "", "", -1 } },
			{ "arifle_MX_F", "Fuzil 6.5mm", 55000, { "", "", -1 } },
			{ "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5mm", 2500, { "", "", -1 } },
			{ "srifle_EBR_F", "Rifle 7.62", 125000, { "", "", -1 } },
            { "20Rnd_762x51_Mag", "Munição 7.62mm", 3500, { "", "", -1 } },	
			{ "bipod_01_F_blk", "Black Bipod", 35000, { "", "", -1 } },
			{ "bipod_01_F_snd", "Desert Bipod", 35000, { "", "", -1 } },
			{ "bipod_01_F_mtp", "Woodland Bipod", 35000, { "", "", -1 } },
            { "acc_flashlight", "Lanterna", 500, { "", "", -1 } },
            { "optic_ACO_grn", "Aco Verde", 2500, { "", "", -1 } },	
            { "optic_Aco", "Aco", 2500, { "", "", -1 } },
            { "optic_MRCO", "Mrco", 10000, { "", "", -1 } },	
			{ "optic_Hamr", "Hamr", 10000, { "", "", -1 } },			
            { "optic_Holosight", "Holosight", 8000, { "", "", -1 } },
            { "optic_Arco", "Arco", 10000, { "", "", -1 } },		
            { "acc_pointer_IR", "Laser", 500, { "", "", -1 } },
            { "SmokeShell", "Granada de Fumaça", 1000, { "", "", -1 } },		
            { "SmokeShellRed", "Granada de Fumaça Vermelha", 1000, { "", "", -1 } },
            { "SmokeShellGreen", "Granada de Fumaça Verde", 1000, { "", "", -1 } },		
            { "SmokeShellYellow", "Granada de Fumaça Amarela", 1000, { "", "", -1 } },
            { "SmokeShellPurple", "Granada de Fumaça Roxo", 1000, { "", "", -1 } },		
            { "SmokeShellOrange", "Granada de Fumaça Laranja", 1000, { "", "", -1 } }									
        };
    };
	
    class rebelA {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
			{ "FirstAidKit", "", 500, { "", "", -1 } },
			{ "ToolKit", "", 500, { "", "", -1 } },
			{ "ItemGPS", "", 50, { "", "", -1 } },
			{ "ItemMap", "", 50, { "", "", -1 } },
			{ "ItemRadio", "", 50, { "", "", -1 } },
			{ "ItemCompass", "", 50, { "", "", -1 } },
			{ "MineDetector", "", 10000, { "", "", -1 } },
            { "Binocular", "", 1000, { "", "", -1 } },
			{ "Rangefinder", "",5000, { "", "", -1 } },
            { "NVGoggles_INDEP", "", 1000, { "", "", -1 } },
            { "NVGoggles", "", 1000, { "", "", -1 } },
			
            { "hgun_Rook40_F", "", 500, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "", 500, { "", "", -1 } },
			
            { "hgun_PDW2000_F", "", 10000, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "", 500, { "", "", -1 } },
			
            { "arifle_sdar_F", "", 25000, { "", "", -1 } },
            { "20Rnd_556x45_UW_mag", "", 500, { "", "", -1 } },
			
            { "hgun_Pistol_heavy_02_F", "", 25000, { "", "", -1 } },
            { "6Rnd_45ACP_Cylinder", "", 500, { "", "", -1 } },
			
            { "arifle_Mk20C_F", "", 30000, { "", "", -1 } },
            { "30Rnd_556x45_Stanag", "", 500, { "", "", -1 } },
			
            { "arifle_TRG20_F", "", 20000, { "", "", -1 } },
            { "30Rnd_556x45_Stanag", "", 500, { "", "", -1 } },
			
            { "arifle_TRG21_F", "", 20000, { "", "", -1 } },
            { "30Rnd_556x45_Stanag", "", 500, { "", "", -1 } },
			
            { "arifle_Katiba_F", "", 35000, { "", "", -1 } },
            { "30Rnd_65x39_caseless_green", "", 500, { "", "", -1 } },
			
            { "SMG_01_F", "", 50000, { "", "", -1 } },
            { "30Rnd_45ACP_Mag_SMG_01", "", 500, { "", "", -1 } },
			
            { "srifle_DMR_01_F", "", 80000, { "", "", -1 } },
            { "10Rnd_762x54_Mag", "", 500, { "", "", -1 } },
			
            { "srifle_EBR_F", "", 100000, { "", "", -1 } },
            { "20Rnd_762x51_Mag", "", 500, { "", "", -1 } },
			
            { "srifle_LRR_LRPS_F", "", 1200000, { "", "", -1 } },
            { "7Rnd_408_Mag", "", 500000, { "", "", -1 } },
			
			{ "LMG_Mk200_F", "", 150000, { "", "", -1 } },
            { "200Rnd_65x39_cased_Box", "", 50000, { "", "", -1 } },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 50000, { "", "", -1 } },
				
			{ "launch_Titan_F", "", 500000, { "", "", -1 } },
            { "Titan_AA", "", 200000, { "", "", -1 } },
            { "acc_flashlight", "", 500, { "", "", -1 } },
            { "optic_ACO_grn", "", 10000, { "", "", -1 } },	
			{ "optic_Hamr", "", 4000, { "", "", -1 } },
            { "optic_Aco", "", 10000, { "", "", -1 } },
            { "optic_MRCO", "", 20000, { "", "", -1 } },		
            { "optic_Holosight", "", 25000, { "", "", -1 } },
            { "optic_Arco", "", 20000, { "", "", -1 } },		
            { "acc_pointer_IR", "", 500, { "", "", -1 } },
            { "SmokeShell", "", 1000, { "", "", -1 } },		
            { "SmokeShellRed", "", 1000, { "", "", -1 } },
            { "SmokeShellGreen", "", 1000, { "", "", -1 } },		
            { "SmokeShellYellow", "", 1000, { "", "", -1 } },
            { "SmokeShellPurple", "", 1000, { "", "", -1 } },		
            { "SmokeShellOrange", "", 1000, { "", "", -1 } },
            { "HandGrenade", "", 50000, { "", "", -1 } }											
        };
    };
	
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "FirstAidKit", "Bolsa de Sangue", 500, { "", "", -1 } },
			{ "ToolKit", "Estojo de ferramentas", 500, { "", "", -1 } },
			{ "ItemGPS", "GPS", 50, { "", "", -1 } },
			{ "ItemMap", "Mapa", 50, { "", "", -1 } },
			{ "ItemRadio", "Radio", 50, { "", "", -1 } },
			{ "ItemCompass", "Bússola", 50, { "", "", -1 } },
            { "Binocular", "Binoculos", 1000, { "", "", -1 } },
			{ "Rangefinder", "Rangefinder",5000, { "", "", -1 } },
            { "NVGoggles_INDEP", "NVG Black", 1000, { "", "", -1 } },
            { "NVGoggles", "NVG Brow", 1000, { "", "", -1 } },
            { "hgun_Rook40_F", "Pistola 9mm", 500, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 500, { "", "", -1 } },
            { "hgun_PDW2000_F", "Submetralhadora 9mm", 10000, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "Munição 30rnd 9mm", 500, { "", "", -1 } },
            { "arifle_sdar_F", "Fuzil Aquático", 15000, { "", "", -1 } },
            { "20Rnd_556x45_UW_mag", "Munição 20rnd Aquático", 500, { "", "", -1 } },
            { "hgun_Pistol_heavy_02_F", "Pistola 45mm", 12000, { "", "", -1 } },
            { "6Rnd_45ACP_Cylinder", "Munição 6rnd 45mm", 500, { "", "", -1 } },	
            { "arifle_Mk20C_F", "Fuzil 5.56mm", 31000, { "", "", -1 } },
            { "30Rnd_556x45_Stanag", "Munição 30rnd 5.56mm", 500, { "", "", -1 } },
            { "acc_flashlight", "Lanterna", 500, { "", "", -1 } },
            { "optic_ACO_grn", "Aco verde", 2500, { "", "", -1 } },	
            { "optic_Aco", "Aco", 2500, { "", "", -1 } },
            { "optic_MRCO", "Mrco", 20000, { "", "", -1 } },		
            { "optic_Holosight", "Holosinght", 15000, { "", "", -1 } },
            { "optic_Arco", "Arco", 20000, { "", "", -1 } },
			{ "optic_Hamr", "Hamr", 20000, { "", "", -1 } },			
            { "acc_pointer_IR", "Laser", 500, { "", "", -1 } },
            { "SmokeShell", "Granada de Fumaça", 1000, { "", "", -1 } },		
            { "SmokeShellRed", "Granada de Fumaça Vermelha", 1000, { "", "", -1 } },
            { "SmokeShellGreen", "Granada de Fumaça Verde", 1000, { "", "", -1 } },		
            { "SmokeShellYellow", "Granada de Fumaça Amarelo", 1000, { "", "", -1 } },
            { "SmokeShellPurple", "Granada de Fumaça Roxo", 1000, { "", "", -1 } },		
            { "SmokeShellOrange", "Granada de Fumaça Laranja", 1000, { "", "", -1 } }	
        };
    };
    //Basic Shops
    class genstore {
        name = "Loja de Utilitarios";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "FirstAidKit", "Bolsa de sangue", 500, { "", "", -1 } },
			{ "ToolKit", "Estojo de ferramentas", 500, { "", "", -1 } },
			{ "ItemGPS", "GPS", 50, { "", "", -1 } },
			{ "ItemMap", "Mapa", 50, { "", "", -1 } },
			{ "ItemRadio", "", 50, { "", "", -1 } },
			{ "ItemCompass", "Bússola", 50, { "", "", -1 } },
            { "Binocular", "Binoculos", 1000, { "", "", -1 } },
            { "NVGoggles_INDEP", "", 1000, { "", "", -1 } },
            { "NVGoggles", "", 1000, { "", "", -1 } },
			{ "Rangefinder", "",5000, { "", "", -1 } },
			{ "Chemlight_red", "", 300, { "", "", -1 } },
			{ "Chemlight_yellow", "", 300, { "", "", -1 } },
			{ "Chemlight_green", "", 300, { "", "", -1 } },
			{ "Chemlight_blue", "", 300, { "", "", -1 } }
        };
    };
    //Cop Shops
    class cop_basic {
        name = "Cop Shop";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "FirstAidKit", "Bolsa de sangue", 500, { "", "", -1 } },
			{ "ToolKit", "Estojo de ferramentas", 500, { "", "", -1 } },
			{ "ItemGPS", "GPS", 50, { "", "", -1 } },
			{ "ItemMap", "Mapa", 50, { "", "", -1 } },
			{ "ItemRadio", "", 50, { "", "", -1 } },
			{ "ItemCompass", "Bússola", 50, { "", "", -1 } },
			{ "MineDetector", "", 10000, { "", "", -1 } },
            { "Binocular", "Binoculos", 1000, { "", "", -1 } },
			{ "Rangefinder", "",5000, { "", "", 3 } },
            { "NVGoggles_OPFOR", "", 1000, { "", "", -1 } },
			{ "SmokeShellBlue", "Bope Gas Nitrogênio", 500, { "life_swatlevel", "SCALAR", 1 } },
            { "hgun_P07_F", "Pistola Taser", 500, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "Taser 30rnd", 500, { "", "", -1 } },
			{ "arifle_Mk20C_F", "Fuzil 5.56 mm", 5000, { "", "", -1 } },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "Munição 30rnd 5.56 mm", 500, { "", "", -1 } },
			{ "arifle_MXC_Black_F", "Fuzil Cano Curto", 15000, { "life_coplevel", "SCALAR", 2 } },
            { "arifle_MX_Black_F", "Fuzil Cano Medio", 15000, { "life_coplevel", "SCALAR", 2 } },
			{ "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5 mm", 1500, { "life_coplevel", "SCALAR", 2 } },
			{ "arifle_MXM_Black_F", "Fuzil Cano Longo", 10000, { "life_coplevel", "SCALAR", 3 } },
			{ "30Rnd_65x39_caseless_mag_Tracer", "Munição 30rnd 6.5 mm", 1000, { "life_coplevel", "SCALAR", 3 } },
			{ "arifle_MX_SW_Black_F", "Fuzil LMG Preto", 15000, { "life_coplevel", "SCALAR", 3 } },
			{ "100Rnd_65x39_caseless_mag_Tracer", "Munição 100rnd 6.5mm", 2500, { "life_coplevel", "SCALAR", 3 } },
			{ "LMG_Mk200_F", "Fuzil LMG", 8000, { "life_coplevel", "SCALAR", 4 } },
			{ "200Rnd_65x39_cased_Box_Tracer", "Munição 200rnd 6.5mm", 1000, { "life_coplevel", "SCALAR", 4 } },
			{ "srifle_EBR_F", "Fuzil 7.62", 15000, { "life_coplevel", "SCALAR", 4 } },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 2500, { "life_coplevel", "SCALAR", 4 } },	
			{ "srifle_DMR_03_F", "Fuzil 7.62mm", 8000, { "life_coplevel", "SCALAR", 5 } },
			{ "20Rnd_762x51_Mag", "Munição 20rnd 7.62mm", 2500, { "life_coplevel", "SCALAR", 5 } },
			{ "LMG_Zafir_F", "Fuzil LMG 7.62mm", 8000, { "life_coplevel", "SCALAR", 6 } },
			{ "150Rnd_762x54_Box_Tracer", "Munição 150rnd 7.62mm", 2500, { "life_coplevel", "SCALAR", 6 } },
			{ "MMG_02_camo_F", "Fuzil LMG 338mm", 8000, { "life_coplevel", "SCALAR", 7 } },
			{ "130Rnd_338_Mag", "Munição 130rnd 3.38mm", 2500, { "life_coplevel", "SCALAR", 7 } },
			{ "srifle_DMR_05_blk_F", "Fuzil 9.3mm", 8000, { "life_coplevel", "SCALAR", 8 } },
			{ "10Rnd_93x64_DMR_05_Mag", "Munição 10rnd 9.3mm", 2500, { "life_coplevel", "SCALAR", 8 } },
			{ "MMG_01_tan_F", "Fuzil LMG 9.3mm", 8000, { "life_coplevel", "SCALAR", 9 } },
			{ "150Rnd_93x64_Mag", "Munição 150rnd 9.3mm", 2500, { "life_coplevel", "SCALAR", 9 } },
			{ "optic_ACO_grn", "ACO Verde", 5000, { "life_coplevel", "SCALAR", 1 } },
            { "optic_Aco_smg", "Aco Vermelha", 5000, { "life_coplevel", "SCALAR", 2 } },
			{ "optic_Holosight", "Holosight", 5000, { "life_coplevel", "SCALAR", 2 } },
            { "acc_flashlight", "Lanterna", 1000, { "life_coplevel", "SCALAR", 1 } },
			{ "acc_pointer_IR", "Laser", 1000, { "life_coplevel", "SCALAR", 1 } },
			{ "optic_MRCO", "MRCO", 1000, { "life_coplevel", "SCALAR", 3 } },
			{ "optic_Arco", "Arco", 1000, { "life_coplevel", "SCALAR", 3 } },
			{ "optic_Hamr", "RCO", 1000, { "life_coplevel", "SCALAR", 4 } },
			{ "optic_DMS", "Dms", 1000, { "life_coplevel", "SCALAR", 5 } },
			{ "optic_NVS", "NVS", 1000, { "life_coplevel", "SCALAR", 6 } },
			{ "muzzle_snds_L", "Silenciador 9mm", 1500, { "life_coplevel", "SCALAR", -1 } },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 1500, { "life_coplevel", "SCALAR", 3 } },
			{ "muzzle_snds_H_MG", "Silenciador LMG 6.5mm", 1500, { "life_coplevel", "SCALAR", 4 } },
			{ "muzzle_snds_B", "Silenciador 7.62mm", 1500, { "life_coplevel", "SCALAR", 5 } },
			{ "bipod_01_F_blk", "Bipod", 1500, { "life_coplevel", "SCALAR", 3 } },
			{ "NVGoggles_INDEP", "NVG", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "Rangefinder", "Ragefinder", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "Medikit", "Estojo de primeiro socorros", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "ToolKit", "Estojo de Ferramentas", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "arifle_MXC_Black_F", "Fuzil 6.5mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "arifle_MX_Black_F", "Fuzil 6.5mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "30Rnd_65x39_caseless_mag", "Munição 30rnd 6.5mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "muzzle_snds_H", "Silenciador 6.5mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "arifle_MX_SW_Black_F", "Fuzil LMG 6.5mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "100Rnd_65x39_caseless_mag", "Munição 100rnd LMG 6.5mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "muzzle_snds_H_MG", "Silenciador LMG 6.5mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "LMG_Mk200_F", "Fuzil LMG 6.5mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "200Rnd_65x39_cased_Box", "Munição 200rnd 6.5mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "LMG_Zafir_F", "Fuzil LMG 7.62mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "150Rnd_762x54_Box", "Munição 150rnd 7.62mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "LMG_Zafir_F", "Fuzil LMG 7.62mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "150Rnd_762x54_Box", "Munição 150rnd 7.62mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "srifle_EBR_F", "Rifle 7.62m", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "20Rnd_762x51_Mag", "Munição 7.62 20rnd", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "srifle_DMR_03_woodland_F", "Rifle 7.62m", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "20Rnd_762x51_Mag", "Munição 7.62 20rnd", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "srifle_DMR_05_tan_f", "Rifle 9.3mm", 500, { "life_swatlevel", "SCALAR", 2 } },
			{ "10Rnd_93x64_DMR_05_Mag", "Munição 10rnd 9.3mm", 500, { "life_swatlevel", "SCALAR", 2 } },
			{ "srifle_DMR_02_camo_F", "Rifle 338mm", 500, { "life_swatlevel", "SCALAR", 2 } },
			{ "srifle_DMR_02_camo_Fg", "Rifle 338mm", 500, { "life_swatlevel", "SCALAR", 2 } },
			{ "MMG_02_camo_F", "Fuzil LMG 338mm", 500, { "life_swatlevel", "SCALAR", 2 } },
			{ "130Rnd_338_Mag", "Munição 130rnd LMG 338mm", 500, { "life_swatlevel", "SCALAR", 2 } },
			{ "MMG_01_hex_F", "Fuzil LMG 9.3mm", 500, { "life_swatlevel", "SCALAR", 3 } },
			{ "150Rnd_93x64_Mag", "Munição 150rnd LMG 9.3mm", 500, { "life_swatlevel", "SCALAR", 3 } },
			{ "muzzle_snds_B", "Silenciador 7.62mm", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "muzzle_snds_93mmg", "Silenciador 9.3mm", 500, { "life_swatlevel", "SCALAR", 2 } },
			{ "muzzle_snds_338_black", "Silenciador 338mm", 500, { "life_swatlevel", "SCALAR", 2 } },
			{ "optic_Arco", "Arco", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "optic_Hamr", "Rco", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "optic_SOS", "SOS", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "optic_MRCO", "MRCO", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "acc_pointer_IR", "Laser", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "acc_flashlight", "Lanterna", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "optic_DMS", "DMS", 500, { "life_swatlevel", "SCALAR", 1 } },
			{ "optic_Holosight", "Holosight", 500, { "life_swatlevel", "SCALAR", 1 } }
        };
    };
 
 
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
			{ "FirstAidKit", "", 500, { "", "", -1 } },
			{ "ToolKit", "", 500, { "", "", -1 } },
			{ "ItemGPS", "", 50, { "", "", -1 } },
			{ "ItemMap", "", 50, { "", "", -1 } },
			{ "ItemRadio", "", 50, { "", "", -1 } },
			{ "ItemCompass", "", 50, { "", "", -1 } },
			{ "MineDetector", "", 10000, { "", "", -1 } },
            { "Binocular", "", 1000, { "", "", -1 } },
			{ "Rangefinder", "",5000, { "", "", -1 } },
            { "NVGoggles_INDEP", "", 1000, { "", "", -1 } },
            { "NVGoggles", "", 1000, { "", "", -1 } },
			{ "SmokeShell", "", 1000, { "", "", -1 } },
			{ "H_MilCap_gry", "", 50, { "", "Hat", -1 } },
			{ "U_I_CombatUniform_tshirt", "Uniform", 50, { "", "", -1 } },			
            { "B_AssaultPack_blk", "", 3000, { "", "", -1 } }
        };
    };
};
