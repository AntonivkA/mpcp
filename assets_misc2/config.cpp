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
	class DZ_Misc2
	{
		units[] = {"FoldChair_with_Cargo"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Buildings2","DZ_Buildings","DZ_UI"};
	};
};
class cfgVehicles
{
	class HouseNoDestruct;
	class Ruins;
	class Land_Barrack2: HouseNoDestruct
	{
		displayName = "Barrack 2";
		model = "\dz\misc2\Barrack2\Barrack2.p3d";
		icon = "\dz\misc2\data\icons\icon_barrack2_ca.paa";
		mapSize = 11;
		accuracy = 0.2;
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
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
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
		};
	};
	class Land_GuardShed: HouseNoDestruct
	{
		displayName = "$STR_DN_GUARDSHED";
		model = "\dz\misc2\GuardShed.p3d";
		icon = "\dz\misc2\data\Icons\icon_guardShed_ca.paa";
		mapSize = 2.4;
		cost = 0;
	};
	class Land_PowGen_Big: HouseNoDestruct
	{
		model = "\dz\misc2\Samsite\PowGen_Big.p3d";
		ladders[] = {{"start1","end1"}};
	};
	class Land_PowGen_Big_ruins: HouseNoDestruct
	{
		model = "\dz\misc2\Samsite\PowGen_Big_ruins.p3d";
	};
	class Land_Gunrack1: HouseNoDestruct
	{
		model = "\dz\misc2\Gunrack1.p3d";
	};
	class Land_DoorTest: HouseNoDestruct
	{
		displayName = "DoorTest";
		model = "\dz\misc2\DoorTest\DoorTest.p3d";
		mapSize = 11;
		accuracy = 0.2;
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0;
			};
			class doors2: doors1{};
			class doors3: doors1{};
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
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') >= 0.5);
				statement = (this animateSource ['doors2', 0]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') < 0.5);
				statement = (this animateSource ['doors2', 1]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') >= 0.5);
				statement = (this animateSource ['doors3', 0]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') < 0.5);
				statement = (this animateSource ['doors3', 1]);
			};
		};
	};
	class Land_DoorTest2: Land_DoorTest
	{
		displayName = "DoorTestDirectional";
		model = "\dz\misc2\DoorTest\DoorTest2.p3d";
	};
};
