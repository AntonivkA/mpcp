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

//Class structures_walls : config.bin{
class CfgPatches
{
	class DZ_Structures_Wall
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
	class Land_Wall_CBrk_5_D: HouseNoDestruct
	{
		model = "\dz\structures\Wall\Wall_CBrk_5_D";
	};
	class Land_Wall_CGry_5_D: HouseNoDestruct
	{
		model = "\dz\structures\Wall\Wall_CGry_5_D";
	};
	class Land_Wall_Gate_Kolchoz: HouseNoDestruct
	{
		model = "\dz\structures\Wall\Wall_Gate_Kolchoz";
	};
	class Land_Wall_Gate_Ind1_L: HouseNoDestruct
	{
		armor = 50;
		model = "\dz\structures\Wall\Wall_Gate_Ind1_L.p3d";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doors1_action;
				radius = 2;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
		};
	};
	class Land_Wall_Gate_Ind1_R: Land_Wall_Gate_Ind1_L
	{
		model = "\dz\structures\Wall\Wall_Gate_Ind1_R";
	};
	class Land_Wall_Gate_Ind2A_L: Land_Wall_Gate_Ind1_L
	{
		model = "\dz\structures\Wall\Wall_Gate_Ind2A_L";
	};
	class Land_Wall_Gate_Ind2A_R: Land_Wall_Gate_Ind1_L
	{
		model = "\dz\structures\Wall\Wall_Gate_Ind2A_R";
	};
	class Land_Wall_Gate_Ind2B_L: Land_Wall_Gate_Ind1_L
	{
		model = "\dz\structures\Wall\Wall_Gate_Ind2B_L";
	};
	class Land_Wall_Gate_Ind2B_R: Land_Wall_Gate_Ind1_L
	{
		model = "\dz\structures\Wall\Wall_Gate_Ind2B_R";
	};
	class Land_Wall_Gate_Ind2Rail_L: Land_Wall_Gate_Ind1_L
	{
		model = "\dz\structures\Wall\Wall_Gate_Ind2Rail_L";
	};
	class Land_Wall_Gate_Ind2Rail_R: Land_Wall_Gate_Ind1_L
	{
		model = "\dz\structures\Wall\Wall_Gate_Ind2Rail_R";
	};
	class Land_Wall_Gate_Village: Land_Wall_Gate_Ind1_L
	{
		model = "\dz\structures\Wall\Wall_Gate_Village";
	};
	class Land_Wall_Gate_Wood1: Land_Wall_Gate_Ind1_L
	{
		model = "\dz\structures\Wall\Wall_Gate_Wood1";
	};
	class Land_Gate_wood2_5: Land_Wall_Gate_Ind1_L
	{
		model = "\dz\structures\Wall\Gate_wood2_5";
	};
	class Land_Gate_Wood1_5: Land_Wall_Gate_Ind1_L
	{
		model = "\dz\structures\Wall\Gate_Wood1_5";
	};
};
class CfgNonAIVehicles
{
	class StaticObject;
	class WallWithHole: StaticObject{};
	class Static_Wall_WoodF_5: WallWithHole
	{
		model = "\dz\structures\Wall\Wall_WoodF_5";
	};
	class Static_Wall_WoodF_5_2: WallWithHole
	{
		model = "\dz\structures\Wall\Wall_WoodF_5_2";
	};
	class Static_Wall_IndCnc_4_D: WallWithHole
	{
		model = "\dz\structures\Wall\Wall_IndCnc_4_D";
	};
};
