#pragma once

#include <unordered_map>

struct Item_t {
	bool is_valid = false;

	Item_t(const char* display_name, const char* entity_name, const char* model) {
		this->is_valid = true;
		this->display_name = display_name;
		this->entity_name = entity_name;
		this->model = model;
	}

	const char* display_name = nullptr;
	const char* entity_name = nullptr;
	const char* model = nullptr;
};

const std::unordered_map<size_t, Item_t> ItemDefinitionIndex = {
	{1, {"Desert Eagle", "WEAPON_DEAGLE", "models/weapons/v_pist_deagle.mdl"}},
	{2, {"Dual Berettas", "WEAPON_ELITE", "models/weapons/v_pist_elite.mdl"}},
	{3, {"Five-SeveN", "WEAPON_FIVESEVEN", "models/weapons/v_pist_fiveseven.mdl"}},
	{4, {"Glock-18", "WEAPON_GLOCK", "models/weapons/v_pist_glock18.mdl"}},
	{7, {"AK-47", "WEAPON_AK47", "models/weapons/v_rif_ak47.mdl"}},
	{8, {"AUG", "WEAPON_AUG", "models/weapons/v_rif_aug.mdl"}},
	{9, {"AWP", "WEAPON_AWP", "models/weapons/v_snip_awp.mdl"}},
	{10, {"FAMAS", "WEAPON_FAMAS", "models/weapons/v_rif_famas.mdl"}},
	{11, {"G3SG1", "WEAPON_G3SG1", "models/weapons/v_snip_g3sg1.mdl"}},
	{13, {"Galil AR", "WEAPON_GALILAR", "models/weapons/v_rif_galilar.mdl"}},
	{14, {"M249", "WEAPON_M249", "models/weapons/v_mach_m249para.mdl"}},
	{16, {"M4A4", "WEAPON_M4A1", "models/weapons/v_rif_m4a1.mdl"}},
	{17, {"MAC-10", "WEAPON_MAC10", "models/weapons/v_smg_mac10.mdl"}},
	{19, {"P90", "WEAPON_P90", "models/weapons/v_smg_p90.mdl"}},
	{24, {"UMP-45", "WEAPON_UMP45", "models/weapons/v_smg_ump45.mdl"}},
	{25, {"XM1014", "WEAPON_XM1014", "models/weapons/v_shot_xm1014.mdl"}},
	{26, {"PP-Bizon", "WEAPON_BIZON", "models/weapons/v_smg_bizon.mdl"}},
	{27, {"MAG-7", "WEAPON_MAG7", "models/weapons/v_shot_mag7.mdl"}},
	{28, {"Negev", "WEAPON_NEGEV", "models/weapons/v_mach_negev.mdl"}},
	{29, {"Sawed-Off", "WEAPON_SAWEDOFF", "models/weapons/v_shot_sawedoff.mdl"}},
	{30, {"Tec-9", "WEAPON_TEC9", "models/weapons/v_pist_tec9.mdl"}},
	{31, {"Zeus x27", "WEAPON_TASER", "models/weapons/v_eq_taser.mdl"}},
	{32, {"P2000", "WEAPON_HKP2000", "models/weapons/v_pist_hkp2000.mdl"}},
	{33, {"MP7", "WEAPON_MP7", "models/weapons/v_smg_mp7.mdl"}},
	{34, {"MP9", "WEAPON_MP9", "models/weapons/v_smg_mp9.mdl"}},
	{35, {"Nova", "WEAPON_NOVA", "models/weapons/v_shot_nova.mdl"}},
	{36, {"P250", "WEAPON_P250", "models/weapons/v_pist_p250.mdl"}},
	{38, {"SCAR-20", "WEAPON_SCAR20", "models/weapons/v_snip_scar20.mdl"}},
	{39, {"SG 553", "WEAPON_SG556", "models/weapons/v_rif_sg556.mdl"}},
	{40, {"SSG 08", "WEAPON_SSG08", "models/weapons/v_snip_ssg08.mdl"}},
	{42, {"Knife (Counter-Terrorists)", "WEAPON_KNIFE", "models/weapons/v_knife_default_ct.mdl"}},
	{43, {"Flashbang", "WEAPON_FLASHBANG", "models/weapons/v_eq_flashbang.mdl"}},
	{44, {"HE Grenade", "WEAPON_HEGRENADE", "models/weapons/v_eq_fraggrenade.mdl"}},
	{45, {"Smoke Grenade", "WEAPON_SMOKEGRENADE", "models/weapons/v_eq_smokegrenade.mdl"}},
	{46, {"Molotov", "WEAPON_MOLOTOV", "models/weapons/v_eq_molotov.mdl"}},
	{47, {"Decoy Grenade", "WEAPON_DECOY", "models/weapons/v_eq_decoy.mdl"}},
	{48, {"Incendiary Grenade", "WEAPON_INCGRENADE", "models/weapons/v_eq_incendiarygrenade.mdl"}},
	{49, {"C4 Explosive", "WEAPON_C4", "models/weapons/v_ied.mdl"}},
	{59, {"Knife (Terrorists)", "WEAPON_KNIFE_T", "models/weapons/v_knife_default_t.mdl"}},
	{60, {"M4A1-S", "WEAPON_M4A1_SILENCER", "models/weapons/v_rif_m4a1_s.mdl"}},
	{61, {"USP-S", "WEAPON_USP_SILENCER", "models/weapons/v_pist_223.mdl"}},
	{63, {"CZ75 Auto", "WEAPON_CZ75A", "models/weapons/v_pist_cz_75.mdl"}},
	{64, {"R8 Revolver", "WEAPON_REVOLVER", "models/weapons/v_pist_revolver.mdl"}},
	{500, {"Bayonet", "WEAPON_KNIFE_BAYONET", "models/weapons/v_knife_bayonet.mdl"}},
	{505, {"Flip Knife", "WEAPON_KNIFE_FLIP", "models/weapons/v_knife_flip.mdl"}},
	{506, {"Gut Knife", "WEAPON_KNIFE_GUT", "models/weapons/v_knife_gut.mdl"}},
	{507, {"Karambit", "WEAPON_KNIFE_KARAMBIT", "models/weapons/v_knife_karam.mdl"}},
	{508, {"M9 Bayonet", "WEAPON_KNIFE_M9_BAYONET", "models/weapons/v_knife_m9_bay.mdl"}},
	{509, {"Huntsman Knife", "WEAPON_KNIFE_TACTICAL", "models/weapons/v_knife_tactical.mdl"}},
	{512, {"Falchion Knife", "WEAPON_KNIFE_FALCHION", "models/weapons/v_knife_falchion_advanced.mdl"}},
	{514, {"Bowie Knife", "WEAPON_KNIFE_SURVIVAL_BOWIE", "models/weapons/v_knife_survival_bowie.mdl"}},
	{515, {"Butterfly Knife", "WEAPON_KNIFE_BUTTERFLY", "models/weapons/v_knife_butterfly.mdl"}},
	{516, {"Shadow Daggers", "WEAPON_KNIFE_PUSH", "models/weapons/v_knife_push.mdl"}}
};