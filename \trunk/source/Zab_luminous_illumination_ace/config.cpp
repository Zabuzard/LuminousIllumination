#define ZAB_NICE_FLARE useFlare=1; \
    flareSize=30; \
    brightness=4000000; \
    intensity=3000000

class cfgPatches
{
	class Zab_luminous_illumination
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F", "ace_grenades"};
		author[] = {"[W] Zabuza"};
	};
};

class CfgAmmo
{
	class FlareCore;
	class FlareBase: FlareCore
	{
		intensity=500000;
	};
	class F_40mm_White: FlareBase
	{
		ZAB_NICE_FLARE;
	};
	class F_20mm_White: FlareBase
	{
		ZAB_NICE_FLARE;
	};
	class B_9x21_Ball;
	class Sub_F_Signal_Green: B_9x21_Ball
	{
		ZAB_NICE_FLARE;
	};
	class Flare_82mm_AMOS_White: FlareCore
	{
		ZAB_NICE_FLARE;
	};
};