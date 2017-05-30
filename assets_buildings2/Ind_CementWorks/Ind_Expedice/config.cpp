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
	class DZ_Buildings2_Ind_CementWorks_Ind_Expedice
	{
		units[] = {"Land_Ind_Expedice_1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Buildings","DZ_Buildings2"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Ind_Expedice_1: HouseNoDestruct
	{
		model = "dz\buildings2\Ind_CementWorks\Ind_Expedice\Ind_Expedice_1.p3d";
		ladders[] = {{"start1","end1"},{"start2","end2"},{"start3","end3"},{"start4","end4"}};
		scope = 2;
		displayName = "Expedice 1";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		mapSize = 15.4;
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0;
				sound = "doorMetalTwin";
				soundPosition = "doorstwin1_action";
			};
			class doors3: doorstwin1
			{
				sound = "doorMetalSmall";
				soundPosition = "doors3_action";
			};
			class doors4: doorstwin1
			{
				sound = "doorMetalSmall";
				soundPosition = "doors4_action";
			};
			class doors5: doorstwin1
			{
				sound = "doorMetalSmall";
				soundPosition = "doors5_action";
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doorstwin1_action;
				radius = 6;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doorstwin1') >= 0.5);
				statement = (this animateSource ['doorstwin1', 0]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				position = doorstwin1_action;
				condition = ((this animationSourcePhase 'doorstwin1') < 0.5);
				statement = (this animateSource ['doorstwin1', 1]);
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') >= 0.5);
				statement = (this animateSource ['doors3', 0]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') < 0.5);
				statement = (this animateSource ['doors3', 1]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') >= 0.5);
				statement = (this animateSource ['doors4', 0]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') < 0.5);
				statement = (this animateSource ['doors4', 1]);
			};
			class OpenDoors_4: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') >= 0.5);
				statement = (this animateSource ['doors5', 0]);
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') < 0.5);
				statement = (this animateSource ['doors5', 1]);
			};
		};
	};
	class Land_Ind_Expedice_2: HouseNoDestruct
	{
		model = "dz\buildings2\Ind_CementWorks\Ind_Expedice\Ind_Expedice_2.p3d";
		scope = 2;
		displayName = "Expedice 2";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
	class Land_Ind_Expedice_3: HouseNoDestruct
	{
		model = "dz\buildings2\Ind_CementWorks\Ind_Expedice\Ind_Expedice_3.p3d";
		scope = 2;
		displayName = "Expedice 3";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
};
