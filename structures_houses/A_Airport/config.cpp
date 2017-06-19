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
	class DZ_A_Airport
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
	class Land_KrasnoAir_Hangars: HouseNoDestruct
	{
		model = "DZ\structures\House\A_Airport\KrasnoAir_Hangars.p3d";
		scope = 2;
		displayName = "KrasnoAir Hangars";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doors01
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				sound = "DoorWoodSmall";
				soundPosition = "doors1_action";
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doors01_action;
				radius = 2;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doors01') >= 0.5);
				statement = (this animateSource ['doors01', 0]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doors01') < 0.5);
				statement = (this animateSource ['doors01', 1]);
			};
		};
	};
	class Land_KrasnoAir_Control: HouseNoDestruct
	{
		model = "DZ\structures\House\A_Airport\KrasnoAir_Control.p3d";
		class AnimationSources
		{
			class doors01
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
			};
			class doors02: doors01{};
			class doors03: doors01{};
			class doors04: doors01{};
			class doors05: doors01{};
			class doors06: doors01{};
			class doors07: doors01{};
			class doors08: doors01{};
			class doors09: doors01{};
			class doors10: doors01{};
			class doors11: doors01{};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doors01_action;
				radius = 2;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doors01') >= 0.5);
				statement = (this animateSource ['doors01', 0]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doors01') < 0.5);
				statement = (this animateSource ['doors01', 1]);
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = doors02_action;
				condition = ((this animationSourcePhase 'doors02') >= 0.5);
				statement = (this animateSource ['doors02', 0]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doors02_action;
				condition = ((this animationSourcePhase 'doors02') < 0.5);
				statement = (this animateSource ['doors02', 1]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doors03_action;
				condition = ((this animationSourcePhase 'doors03') >= 0.5);
				statement = (this animateSource ['doors03', 0]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doors03_action;
				condition = ((this animationSourcePhase 'doors03') < 0.5);
				statement = (this animateSource ['doors03', 1]);
			};
			class OpenDoors_4: OpenDoors_1
			{
				position = doors04_action;
				condition = ((this animationSourcePhase 'doors04') >= 0.5);
				statement = (this animateSource ['doors04', 0]);
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = doors04_action;
				condition = ((this animationSourcePhase 'doors04') < 0.5);
				statement = (this animateSource ['doors04', 1]);
			};
			class OpenDoors_5: OpenDoors_1
			{
				position = doors05_action;
				condition = ((this animationSourcePhase 'doors05') >= 0.5);
				statement = (this animateSource ['doors05', 0]);
			};
			class CloseDoors_5: CloseDoors_1
			{
				position = doors05_action;
				condition = ((this animationSourcePhase 'doors05') < 0.5);
				statement = (this animateSource ['doors05', 1]);
			};
			class OpenDoors_6: OpenDoors_1
			{
				position = doors06_action;
				condition = ((this animationSourcePhase 'doors06') >= 0.5);
				statement = (this animateSource ['doors06', 0]);
			};
			class CloseDoors_6: CloseDoors_1
			{
				position = doors06_action;
				condition = ((this animationSourcePhase 'doors06') < 0.5);
				statement = (this animateSource ['doors06', 1]);
			};
			class OpenDoors_7: OpenDoors_1
			{
				position = doors07_action;
				condition = ((this animationSourcePhase 'doors07') >= 0.5);
				statement = (this animateSource ['doors07', 0]);
			};
			class CloseDoors_7: CloseDoors_1
			{
				position = doors07_action;
				condition = ((this animationSourcePhase 'doors07') < 0.5);
				statement = (this animateSource ['doors07', 1]);
			};
			class OpenDoors_8: OpenDoors_1
			{
				position = doors08_action;
				condition = ((this animationSourcePhase 'doors08') >= 0.5);
				statement = (this animateSource ['doors08', 0]);
			};
			class CloseDoors_8: CloseDoors_1
			{
				position = doors08_action;
				condition = ((this animationSourcePhase 'doors08') < 0.5);
				statement = (this animateSource ['doors08', 1]);
			};
			class OpenDoors_9: OpenDoors_1
			{
				position = doors09_action;
				condition = ((this animationSourcePhase 'doors09') >= 0.5);
				statement = (this animateSource ['doors09', 0]);
			};
			class CloseDoors_9: CloseDoors_1
			{
				position = doors09_action;
				condition = ((this animationSourcePhase 'doors09') < 0.5);
				statement = (this animateSource ['doors09', 1]);
			};
			class OpenDoors_10: OpenDoors_1
			{
				position = doors10_action;
				condition = ((this animationSourcePhase 'doors10') >= 0.5);
				statement = (this animateSource ['doors10', 0]);
			};
			class CloseDoors_10: CloseDoors_1
			{
				position = doors10_action;
				condition = ((this animationSourcePhase 'doors10') < 0.5);
				statement = (this animateSource ['doors10', 1]);
			};
			class OpenDoors_11: OpenDoors_1
			{
				position = doors11_action;
				condition = ((this animationSourcePhase 'doors11') >= 0.5);
				statement = (this animateSource ['doors11', 0]);
			};
			class CloseDoors_11: CloseDoors_1
			{
				position = doors11_action;
				condition = ((this animationSourcePhase 'doors11') < 0.5);
				statement = (this animateSource ['doors11', 1]);
			};
		};
	};
};
