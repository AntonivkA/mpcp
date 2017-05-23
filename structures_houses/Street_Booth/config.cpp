#define _ARMA_

enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class DZ_Structures_House_Street_Booth
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Misc_StreetBooth_grocery: HouseNoDestruct
	{
		model = "DZ\structures\House\Street_Booth\Misc_StreetBooth_grocery.p3d";
		ladders[] = {{"start1","end1"}};
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				radius = 2.5;
				onlyForPlayer = 0;
				position = doors1_action;
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				position = doors1_action;
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
		};
	};
	class Land_Misc_StreetBooth_news: Land_Misc_StreetBooth_grocery
	{
		model = "DZ\structures\House\Street_Booth\Misc_StreetBooth_news.p3d";
	};
	class Land_Misc_StreetBooth_fastfood: Land_Misc_StreetBooth_grocery
	{
		model = "DZ\structures\House\Street_Booth\Misc_StreetBooth_fastfood.p3d";
	};
};
