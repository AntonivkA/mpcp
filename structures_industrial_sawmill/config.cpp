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
	class DZ_Structures_Ind_SawMill
	{
		units[] = {"Land_Ind_SawMill"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Buildings"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Ind_SawMill: HouseNoDestruct
	{
		model = "\dz\structures\Ind_SawMill\Ind_SawMill.p3d";
		displayName = "Saw Mill";
		armor = 20000;
		ladders[] = {{"start","end"}};
		class AnimationSources
		{
			class doors3
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.5;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doors3_action;
				radius = 4;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doors3') < 0.5);
				statement = (this animateSource ['doors3', 1]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doors3') >= 0.5);
				statement = (this animateSource ['doors3', 0]);
			};
		};
	};
	class Land_Ind_IlluminantTower: HouseNoDestruct
	{
		displayName = "$STR_MISC_ILLUMINANTTOWER";
		model = "\dz\structures\Ind_SawMill\Ind_IlluminantTower.p3d";
		icon = "\dz\misc3\Data\Icons\icomap_illuminantTower_CA.paa";
		ladders[] = {{"start","end"}};
	};
	class Land_Ind_SawMillPen: HouseNoDestruct
	{
		model = "\dz\structures\Ind_SawMill\Ind_SawMillPen.p3d";
	};
	class Land_Ind_Timbers: HouseNoDestruct
	{
		displayName = "$STR_MISC_TIMBERS";
		model = "\dz\structures\Ind_SawMill\Ind_Timbers.p3d";
		icon = "\dz\structures\Data\Icons\i_timbers_ca.paa";
		mapSize = 9;
	};
	class Land_Ind_BoardsPack1: HouseNoDestruct
	{
		displayName = "$STR_MISC_BOARDSPACK";
		model = "\dz\structures\Ind_SawMill\Ind_BoardsPack1.p3d";
		icon = "\dz\misc3\Data\Icons\icomap_BoardsPack_CA.paa";
		mapSize = 2;
	};
	class Land_Ind_BoardsPack2: Land_Ind_BoardsPack1
	{
		displayName = "$STR_MISC_BOARDSPACK2";
		model = "\dz\structures\Ind_SawMill\Ind_BoardsPack2.p3d";
	};
};
//};
