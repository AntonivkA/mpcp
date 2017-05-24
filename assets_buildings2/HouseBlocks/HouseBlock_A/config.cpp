////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 6.18
//'now' is Wed May 24 10:50:54 2017 : 'file' last modified on Fri Jan 27 09:46:10 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(12 Enums)
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

//Class /mnt/g/HouseBlocks/HouseBlock_A/config.bin{
class CfgPatches
{
	class DZ_Buildings2_HouseBlocks_HouseBlock_A
	{
		units[] = {"Land_HouseBlock_A1","Land_HouseBlock_A1_1","Land_HouseBlock_A1_2","Land_HouseBlock_A2","Land_HouseBlock_A2_1","Land_HouseBlock_A3"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Buildings","DZ_Buildings2"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class HouseBlock_Base;
	class Land_HouseBlock_A1: HouseBlock_Base
	{
		model = "dz\buildings2\HouseBlocks\HouseBlock_A\HouseBlock_A1.p3d";
		displayName = "House Block A1";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.2;
			};
			class doorstwin2: doorstwin1{};
			class doors5: doorstwin1
			{
				initOpened = 0.8;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doorstwin1_action;
				radius = 3;
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
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') >= 0.5);
				statement = (this animateSource ['doorstwin2', 0]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') < 0.5);
				statement = (this animateSource ['doorstwin2', 1]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') >= 0.5);
				statement = (this animateSource ['doors5', 0]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') < 0.5);
				statement = (this animateSource ['doors5', 1]);
			};
		};
	};
	class Land_HouseBlock_A1_1: HouseBlock_Base
	{
		model = "dz\buildings2\HouseBlocks\HouseBlock_A\HouseBlock_A1_1.p3d";
		displayName = "House Block A1_1";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.1;
			};
			class doorstwin2: doorstwin1{};
			class doorstwin3: doorstwin1{};
			class doors5: doorstwin1
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
				radius = 3;
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
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') >= 0.5);
				statement = (this animateSource ['doorstwin2', 0]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') < 0.5);
				statement = (this animateSource ['doorstwin2', 1]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doorstwin3_action;
				condition = ((this animationSourcePhase 'doorstwin3') >= 0.5);
				statement = (this animateSource ['doorstwin3', 0]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doorstwin3_action;
				condition = ((this animationSourcePhase 'doorstwin3') < 0.5);
				statement = (this animateSource ['doorstwin3', 1]);
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
	class Land_HouseBlock_A1_2: HouseBlock_Base
	{
		model = "dz\buildings2\HouseBlocks\HouseBlock_A\HouseBlock_A1_2.p3d";
		displayName = "House Block A1_2";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.2;
			};
			class doorstwin2: doorstwin1{};
			class doors1: doorstwin1
			{
				initOpened = 0.8;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doorstwin1_action;
				radius = 3;
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
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') >= 0.5);
				statement = (this animateSource ['doorstwin2', 0]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') < 0.5);
				statement = (this animateSource ['doorstwin2', 1]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doors1_action;
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doors1_action;
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
		};
	};
	class Land_HouseBlock_A2: HouseBlock_Base
	{
		model = "dz\buildings2\HouseBlocks\HouseBlock_A\HouseBlock_A2.p3d";
		displayName = "House Block A2";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
			};
			class doorstwin2: doorstwin1{};
			class doors1: doorstwin1{};
			class doors4: doorstwin1{};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doorstwin1_action;
				radius = 3;
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
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') >= 0.5);
				statement = (this animateSource ['doorstwin2', 0]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') < 0.5);
				statement = (this animateSource ['doorstwin2', 1]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doors1_action;
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doors1_action;
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
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
	class Land_HouseBlock_A2_2: Land_HouseBlock_A2
	{
		model = "dz\buildings2\HouseBlocks\HouseBlock_A\HouseBlock_A2_2.p3d";
	};
	class Land_HouseBlock_A2_1: HouseBlock_Base
	{
		model = "dz\buildings2\HouseBlocks\HouseBlock_A\HouseBlock_A2_1.p3d";
		displayName = "House Block A2_1";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.1;
			};
			class doorstwin2: doorstwin1{};
			class doors3: doorstwin1
			{
				initOpened = 0.5;
			};
			class doors4: doorstwin1
			{
				initOpened = 0.8;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doorstwin1_action;
				radius = 3;
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
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') >= 0.5);
				statement = (this animateSource ['doorstwin2', 0]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') < 0.5);
				statement = (this animateSource ['doorstwin2', 1]);
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
	class Land_HouseBlock_A3: HouseBlock_Base
	{
		model = "dz\buildings2\HouseBlocks\HouseBlock_A\HouseBlock_A3.p3d";
	};
};
