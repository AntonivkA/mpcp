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
	class DZ_Structures_Radio_station
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
	class Land_Radio_building: HouseNoDestruct
	{
		armor = 320;
		model = "\DZ\structures\Radio_station\Radio_building.p3d";
		ladders[] = {{"start1","end1"}};
		class AnimationSources
		{
			class doors3
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
			};
			class doorstwin1: doors3
			{
				initOpened = 0.7;
			};
			class doors4: doors3{};
			class doors5: doors3{};
			class doors6: doors3{};
			class doors7: doors3{};
			class doors8: doors3{};
			class doors9: doors3{};
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
			class OpenDoors_5: OpenDoors_1
			{
				position = doors6_action;
				condition = ((this animationSourcePhase 'doors6') >= 0.5);
				statement = (this animateSource ['doors6', 0]);
			};
			class CloseDoors_5: CloseDoors_1
			{
				position = doors6_action;
				condition = ((this animationSourcePhase 'doors6') < 0.5);
				statement = (this animateSource ['doors6', 1]);
			};
			class OpenDoors_6: OpenDoors_1
			{
				position = doors7_action;
				condition = ((this animationSourcePhase 'doors7') >= 0.5);
				statement = (this animateSource ['doors7', 0]);
			};
			class CloseDoors_6: CloseDoors_1
			{
				position = doors7_action;
				condition = ((this animationSourcePhase 'doors7') < 0.5);
				statement = (this animateSource ['doors7', 1]);
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
		};
	};
	class Land_Radio_tower_redwhite: HouseNoDestruct
	{
		armor = 320;
		model = "\DZ\structures\Radio_station\Radio_tower_redwhite.p3d";
		ladders[] = {{"start1","end1"},{"start2","end2"},{"start3","end3"}};
	};
	class Land_Radio_tower_grey: Land_Radio_tower_redwhite
	{
		model = "\DZ\structures\Radio_station\Radio_tower_grey.p3d";
	};
};
