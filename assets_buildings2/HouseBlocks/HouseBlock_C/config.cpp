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
	class DZ_Buildings2_HouseBlocks_HouseBlock_C
	{
		units[] = {"Land_HouseBlock_C2","Land_HouseBlock_C3","Land_HouseBlock_C4","Land_HouseBlock_C5","Land_HouseBlock_C5_Ruins"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Buildings","DZ_Buildings2"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Ruins;
	class HouseBlock_Base;
	class Land_HouseBlock_C2: HouseBlock_Base
	{
		model = "dz\buildings2\HouseBlocks\HouseBlock_C\HouseBlock_C2.p3d";
		scope = 2;
		displayName = "House Block C2";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.4;
			};
			class doors1: doorstwin1
			{
				initOpened = 0.5;
			};
			class doors2: doorstwin1
			{
				initOpened = 0.5;
			};
			class doors4: doorstwin1
			{
				initOpened = 0.5;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doorstwin1_action;
				radius = 2;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doorstwin1') >= 0.5);
				statement = (this animateSource ['doorstwin1', 0]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doorstwin1') < 0.5);
				statement = (this animateSource ['doorstwin1', 1]);
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = doors1_action;
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doors1_action;
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') >= 0.5);
				statement = (this animateSource ['doors2', 0]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') < 0.5);
				statement = (this animateSource ['doors2', 1]);
			};
			class OpenDoors_4: OpenDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') >= 0.5);
				statement = (this animateSource ['doors4', 0]);
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') < 0.5);
				statement = (this animateSource ['doors4', 1]);
			};
		};
	};
	class Land_HouseBlock_C3: HouseBlock_Base
	{
		model = "dz\buildings2\HouseBlocks\HouseBlock_C\HouseBlock_C3.p3d";
		scope = 2;
		displayName = "House Block C3";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.7;
			};
			class doors2: doorstwin1
			{
				initOpened = 0.9;
			};
			class doors3: doorstwin1
			{
				initOpened = 0.4;
			};
			class doors4: doorstwin1
			{
				initOpened = 0.2;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doorstwin1_action;
				radius = 2;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doorstwin1') >= 0.5);
				statement = (this animateSource ['doorstwin1', 0]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doorstwin1') < 0.5);
				statement = (this animateSource ['doorstwin1', 1]);
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
			class OpenDoors_4: OpenDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') >= 0.5);
				statement = (this animateSource ['doors4', 0]);
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') < 0.5);
				statement = (this animateSource ['doors4', 1]);
			};
		};
	};
	class Land_HouseBlock_C3_occluder: Land_HouseBlock_C3
	{
		model = "\dz\buildings2\HouseBlocks\HouseBlock_C\HouseBlock_C3_occluder.p3d";
		scope = 2;
		displayName = "House Block C3 occluder";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
	class Land_HouseBlock_C4: HouseBlock_Base
	{
		model = "dz\buildings2\HouseBlocks\HouseBlock_C\HouseBlock_C4.p3d";
		scope = 2;
		displayName = "House Block C4";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.1;
			};
			class doors2: doorstwin1
			{
				initOpened = 0.6;
			};
			class doors3: doorstwin1
			{
				initOpened = 0.7;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doorstwin1_action;
				radius = 2;
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
	class Land_HouseBlock_C5: Land_HouseBlock_C4
	{
		model = "dz\buildings2\HouseBlocks\HouseBlock_C\HouseBlock_C5.p3d";
		scope = 2;
		displayName = "House Block C5";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
	class Land_HouseBlock_C5_Ruins: Ruins
	{
		model = "\dz\buildings2\HouseBlocks\HouseBlock_C\houseblock_c5_ruins.p3d";
		scope = 2;
		displayName = "House Block C5 (ruins)";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
};
