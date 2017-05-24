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
	class DZ_Structures_House_Big_police_station
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
	class Land_Big_police_station: HouseNoDestruct
	{
		armor = 320;
		model = "\DZ\structures\House\Big_Police_Station\Big_police_station.p3d";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.7;
			};
			class doorstwin2: doorstwin1{};
			class doorstwin3: doorstwin1{};
			class doors3
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
			};
			class doors4: doors3{};
			class doors5: doors3{};
			class doors8: doors3{};
			class doors9: doors3{};
			class doors10: doors3{};
			class doors11: doors3{};
			class doors12: doors3{};
			class doors13: doors3{};
			class doors15: doors3{};
			class doors16: doors3{};
			class doors17: doors3{};
			class doors18: doors3{};
			class doors19: doors3{};
			class doors20: doors3{};
			class doors21: doors3{};
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
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') >= 0.5);
				statement = (this animateSource ['doors3', 0]);
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') < 0.5);
				statement = (this animateSource ['doors3', 1]);
			};
			class OpenDoors_5: OpenDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') >= 0.5);
				statement = (this animateSource ['doors4', 0]);
			};
			class CloseDoors_5: CloseDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') < 0.5);
				statement = (this animateSource ['doors4', 1]);
			};
			class OpenDoors_6: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') >= 0.5);
				statement = (this animateSource ['doors5', 0]);
			};
			class CloseDoors_6: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') < 0.5);
				statement = (this animateSource ['doors5', 1]);
			};
			class OpenDoors_7: OpenDoors_1
			{
				position = doors8_action;
				condition = ((this animationSourcePhase 'doors8') >= 0.5);
				statement = (this animateSource ['doors8', 0]);
			};
			class CloseDoors_7: CloseDoors_1
			{
				position = doors8_action;
				condition = ((this animationSourcePhase 'doors8') < 0.5);
				statement = (this animateSource ['doors8', 1]);
			};
			class OpenDoors_8: OpenDoors_1
			{
				position = doors9_action;
				condition = ((this animationSourcePhase 'doors9') >= 0.5);
				statement = (this animateSource ['doors9', 0]);
			};
			class CloseDoors_8: CloseDoors_1
			{
				position = doors9_action;
				condition = ((this animationSourcePhase 'doors9') < 0.5);
				statement = (this animateSource ['doors9', 1]);
			};
			class OpenDoors_9: OpenDoors_1
			{
				position = doors10_action;
				condition = ((this animationSourcePhase 'doors10') >= 0.5);
				statement = (this animateSource ['doors10', 0]);
			};
			class CloseDoors_9: CloseDoors_1
			{
				position = doors10_action;
				condition = ((this animationSourcePhase 'doors10') < 0.5);
				statement = (this animateSource ['doors10', 1]);
			};
			class OpenDoors_10: OpenDoors_1
			{
				position = doors11_action;
				condition = ((this animationSourcePhase 'doors11') >= 0.5);
				statement = (this animateSource ['doors11', 0]);
			};
			class CloseDoors_10: CloseDoors_1
			{
				position = doors11_action;
				condition = ((this animationSourcePhase 'doors11') < 0.5);
				statement = (this animateSource ['doors11', 1]);
			};
			class OpenDoors_11: OpenDoors_1
			{
				position = doors12_action;
				condition = ((this animationSourcePhase 'doors12') >= 0.5);
				statement = (this animateSource ['doors12', 0]);
			};
			class CloseDoors_11: CloseDoors_1
			{
				position = doors12_action;
				condition = ((this animationSourcePhase 'doors12') < 0.5);
				statement = (this animateSource ['doors12', 1]);
			};
			class OpenDoors_12: OpenDoors_1
			{
				position = doors13_action;
				condition = ((this animationSourcePhase 'doors13') >= 0.5);
				statement = (this animateSource ['doors13', 0]);
			};
			class CloseDoors_12: CloseDoors_1
			{
				position = doors13_action;
				condition = ((this animationSourcePhase 'doors13') < 0.5);
				statement = (this animateSource ['doors13', 1]);
			};
			class OpenDoors_13: OpenDoors_1
			{
				position = doors15_action;
				condition = ((this animationSourcePhase 'doors15') >= 0.5);
				statement = (this animateSource ['doors15', 0]);
			};
			class CloseDoors_13: CloseDoors_1
			{
				position = doors15_action;
				condition = ((this animationSourcePhase 'doors15') < 0.5);
				statement = (this animateSource ['doors15', 1]);
			};
			class OpenDoors_14: OpenDoors_1
			{
				position = doors16_action;
				condition = ((this animationSourcePhase 'doors16') >= 0.5);
				statement = (this animateSource ['doors16', 0]);
			};
			class CloseDoors_14: CloseDoors_1
			{
				position = doors16_action;
				condition = ((this animationSourcePhase 'doors16') < 0.5);
				statement = (this animateSource ['doors16', 1]);
			};
			class OpenDoors_15: OpenDoors_1
			{
				position = doors17_action;
				condition = ((this animationSourcePhase 'doors17') >= 0.5);
				statement = (this animateSource ['doors17', 0]);
			};
			class CloseDoors_15: CloseDoors_1
			{
				position = doors17_action;
				condition = ((this animationSourcePhase 'doors17') < 0.5);
				statement = (this animateSource ['doors17', 1]);
			};
			class OpenDoors_16: OpenDoors_1
			{
				position = doors18_action;
				condition = ((this animationSourcePhase 'doors18') >= 0.5);
				statement = (this animateSource ['doors18', 0]);
			};
			class CloseDoors_16: CloseDoors_1
			{
				position = doors18_action;
				condition = ((this animationSourcePhase 'doors18') < 0.5);
				statement = (this animateSource ['doors18', 1]);
			};
			class OpenDoors_17: OpenDoors_1
			{
				position = doors19_action;
				condition = ((this animationSourcePhase 'doors19') >= 0.5);
				statement = (this animateSource ['doors19', 0]);
			};
			class CloseDoors_17: CloseDoors_1
			{
				position = doors19_action;
				condition = ((this animationSourcePhase 'doors19') < 0.5);
				statement = (this animateSource ['doors19', 1]);
			};
			class OpenDoors_18: OpenDoors_1
			{
				position = doors20_action;
				condition = ((this animationSourcePhase 'doors20') >= 0.5);
				statement = (this animateSource ['doors20', 0]);
			};
			class CloseDoors_18: CloseDoors_1
			{
				position = doors20_action;
				condition = ((this animationSourcePhase 'doors20') < 0.5);
				statement = (this animateSource ['doors20', 1]);
			};
			class OpenDoors_19: OpenDoors_1
			{
				position = doors21_action;
				condition = ((this animationSourcePhase 'doors21') >= 0.5);
				statement = (this animateSource ['doors21', 0]);
			};
			class CloseDoors_19: CloseDoors_1
			{
				position = doors21_action;
				condition = ((this animationSourcePhase 'doors21') < 0.5);
				statement = (this animateSource ['doors21', 1]);
			};
		};
	};
};
