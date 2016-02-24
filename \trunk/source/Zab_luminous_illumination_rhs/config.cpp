#define ZAB_NICE_FLARE useFlare=1; \
    flareSize=30; \
    brightness=4000000; \
    intensity=3000000

class cfgPatches
{
	class Zab_luminous_illumination_rhs
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F", "Zab_luminous_illumination", "rhs_c_weapons", "rhsusf_c_weapons", "rhs_c_heavyweapons"};
		author[] = {"[W] Zabuza"};
	};
};

class CfgAmmo
{
	class F_40mm_White;
	class rhs_40mm_white: F_40mm_White
	{
		ZAB_NICE_FLARE;
	};
	class F_40mm_Green;
	class rhs_40mm_green: F_40mm_Green
	{
		ZAB_NICE_FLARE;
	};
	class F_40mm_Red;
	class rhs_40mm_red: F_40mm_Red
	{
		ZAB_NICE_FLARE;
	};
	class rhsusf_40mm_white: F_40mm_White
	{
		ZAB_NICE_FLARE;
	};
	class rhsusf_40mm_green: F_40mm_Green
	{
		ZAB_NICE_FLARE;
	};
	class rhsusf_40mm_red: F_40mm_Red
	{
		ZAB_NICE_FLARE;
	};
	class Flare_82mm_AMOS_White;
	class rhs_ammo_3WS23: Flare_82mm_AMOS_White
	{
		ZAB_NICE_FLARE;
	};
};