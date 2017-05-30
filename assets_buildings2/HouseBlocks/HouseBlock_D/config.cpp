////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 6.18
//'now' is Wed May 24 11:04:41 2017 : 'file' last modified on Fri Jan 27 09:46:10 2017
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

//Class /mnt/g/HouseBlocks/HouseBlock_D/config.bin{
class CfgPatches
{
	class DZ_Buildings2_HouseBlocks_HouseBlock_D
	{
		units[] = {"Land_HouseBlock_D1","Land_HouseBlock_D2","Land_HouseBlock_D1_Ruins"};
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
	class Land_HouseBlock_D1: HouseBlock_Base
	{
		armor = 1200;
		model = "dz\buildings2\HouseBlocks\HouseBlock_D\HouseBlock_D1.p3d";
		displayName = "House Block D1";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.1;
				sound = "doorWoodTwin";
				soundPosition = "doorstwin1_action";
			};
			class doorstwin2: doorstwin1
			{
				sound = "doorWoodTwin";
				soundPosition = "doorstwin2_action";
			};
			class doors5: doorstwin1
			{
				sound = "doorWoodSmall";
				soundPosition = "doors5_action";
			};
			class doors6: doorstwin1
			{
				sound = "doorWoodSmall";
				soundPosition = "doors6_action";
			};
			class doors7: doorstwin1
			{
				sound = "doorWoodSmall";
				soundPosition = "doors7_action";
			};
			class doors8: doorstwin1
			{
				sound = "doorWoodSmall";
				soundPosition = "doors8_action";
			};
			class doors9: doorstwin1
			{
				sound = "doorWoodSmall";
				soundPosition = "doors9_action";
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
				position = doorstwin1_action;
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
			class OpenDoors_4: OpenDoors_1
			{
				position = doors6_action;
				condition = ((this animationSourcePhase 'doors6') >= 0.5);
				statement = (this animateSource ['doors6', 0]);
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = doors6_action;
				condition = ((this animationSourcePhase 'doors6') < 0.5);
				statement = (this animateSource ['doors6', 1]);
			};
			class OpenDoors_5: OpenDoors_1
			{
				position = doors7_action;
				condition = ((this animationSourcePhase 'doors7') >= 0.5);
				statement = (this animateSource ['doors7', 0]);
			};
			class CloseDoors_5: CloseDoors_1
			{
				position = doors7_action;
				condition = ((this animationSourcePhase 'doors7') < 0.5);
				statement = (this animateSource ['doors7', 1]);
			};
			class OpenDoors_6: OpenDoors_1
			{
				position = doors8_action;
				condition = ((this animationSourcePhase 'doors8') >= 0.5);
				statement = (this animateSource ['doors8', 0]);
			};
			class CloseDoors_6: CloseDoors_1
			{
				position = doors8_action;
				condition = ((this animationSourcePhase 'doors8') < 0.5);
				statement = (this animateSource ['doors8', 1]);
			};
			class OpenDoors_7: OpenDoors_1
			{
				position = doors9_action;
				condition = ((this animationSourcePhase 'doors9') >= 0.5);
				statement = (this animateSource ['doors9', 0]);
			};
			class CloseDoors_7: CloseDoors_1
			{
				position = doors9_action;
				condition = ((this animationSourcePhase 'doors9') < 0.5);
				statement = (this animateSource ['doors9', 1]);
			};
		};
	};
	class Land_HouseBlock_D2: Land_HouseBlock_D1
	{
		scope = 1;
		model = "dz\buildings2\HouseBlocks\HouseBlock_D\HouseBlock_D2.p3d";
	};
	class Land_HouseBlock_D1_Ruins: Ruins
	{
		model = "\dz\buildings2\HouseBlocks\HouseBlock_D\houseblock_d1_ruins.p3d";
	};
};
