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
	class DZ_Structures_Rail_Rail_Station_big
	{
		units[] = {"Land_rail_station_big"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_rail_station_big: HouseNoDestruct
	{
		armor = 400;
		model = "\dz\structures\Rail\rail_station_big\rail_station_big.p3d";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.5;
			};
			class doors1: doorstwin1
			{
				initOpened = 0.1;
			};
			class doors2: doorstwin1
			{
				initOpened = 0.3;
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
		};
	};
	class Land_sign_elektrozavodsk: HouseNoDestruct
	{
		armor = 1;
		model = "\dz\structures\Rail\Rail_Station_big\sign_elektrozavodsk.p3d";
	};
	class Land_sign_balota: Land_sign_elektrozavodsk
	{
		model = "\dz\structures\Rail\Rail_Station_big\sign_balota.p3d";
	};
	class Land_sign_berezino: Land_sign_elektrozavodsk
	{
		model = "\dz\structures\Rail\Rail_Station_big\sign_berezino.p3d";
	};
	class Land_sign_chernogorsk: Land_sign_elektrozavodsk
	{
		model = "\dz\structures\Rail\Rail_Station_big\sign_chernogorsk.p3d";
	};
	class Land_sign_kamenka: Land_sign_elektrozavodsk
	{
		model = "\dz\structures\Rail\Rail_Station_big\sign_kamenka.p3d";
	};
	class Land_sign_kamyshovo: Land_sign_elektrozavodsk
	{
		model = "\dz\structures\Rail\Rail_Station_big\sign_kamyshovo.p3d";
	};
	class Land_sign_komarovo: Land_sign_elektrozavodsk
	{
		model = "\dz\structures\Rail\Rail_Station_big\sign_komarovo.p3d";
	};
	class Land_sign_prigorodki: Land_sign_elektrozavodsk
	{
		model = "\dz\structures\Rail\Rail_Station_big\sign_prigorodki.p3d";
	};
	class Land_sign_solnichnyi: Land_sign_elektrozavodsk
	{
		model = "\dz\structures\Rail\Rail_Station_big\sign_solnichnyi.p3d";
	};
};
