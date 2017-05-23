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
	class DZ_Vehicles_Wrecks
	{
		units[] = {"Land_bmp2_wrecked","Land_BRDM2_wrecked","Land_bvp1T","Land_datsun01T","Land_datsun01T_spodok","Land_datsun02T","Land_hiluxT","Land_HMMWV_wrecked","Land_Mi8_Crashed","Land_UH1Y_Wreck","Land_Skodovka_wrecked","Land_T72_Wrecked","Land_t72_wrecked_turret","Land_uaz_wrecked","Land_ural_wrecked","Land_Ikarus_Dayz","Land_Ikarus_ground_Dayz","Land_Lada_DayZ","Land_Lada_ground_DayZ","Land_S1023_ground_DayZ","Land_s1203_DayZ","Land_Volha_DayZ","Land_Volha_ground_DayZ"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Wreck_Base: HouseNoDestruct
	{
		accuracy = 0.3;
		cost = 10000;
	};
	class Land_bmp2_wrecked: Wreck_Base
	{
		scope = 2;
		displayName = "$STR_DN_BMP2WRECK";
		model = "\DZ\vehicles\wrecks\arma2\bmp2_wrecked.p3d";
	};
	class Land_BRDM2_wrecked: Wreck_Base
	{
		scope = 2;
		displayName = "$STR_DN_BRDMWRECK";
		model = "\DZ\vehicles\wrecks\arma2\BRDM2_wrecked.p3d";
	};
	class Land_bvp1T: Wreck_Base
	{
		scope = 2;
		displayName = "bvp1T";
		model = "\DZ\vehicles\wrecks\arma2\bvp1T.p3d";
	};
	class Land_datsun01T: Wreck_Base
	{
		scope = 2;
		displayName = "datsun01T";
		model = "\DZ\vehicles\wrecks\arma2\datsun01T.p3d";
	};
	class Land_datsun01T_spodok: Wreck_Base
	{
		scope = 2;
		displayName = "$STR_DN_DATSUN01WRECK";
		model = "\DZ\vehicles\wrecks\arma2\datsun01T_spodok.p3d";
	};
	class Land_datsun02T: Wreck_Base
	{
		scope = 2;
		displayName = "$STR_DN_DATSUN02WRECK";
		model = "\DZ\vehicles\wrecks\arma2\datsun02T.p3d";
	};
	class Land_hiluxT: Wreck_Base
	{
		scope = 2;
		displayName = "$STR_DN_HILUXWRECK";
		model = "\DZ\vehicles\wrecks\arma2\hiluxT.p3d";
	};
	class Land_HMMWV_wrecked: Wreck_Base
	{
		scope = 2;
		displayName = "$STR_DN_JEEPWRECK1";
		model = "\DZ\vehicles\wrecks\arma2\HMMWV_wrecked.p3d";
	};
	class Land_Skodovka_wrecked: Wreck_Base
	{
		scope = 2;
		displayName = "$STR_DN_SKODAWRECK";
		model = "\DZ\vehicles\wrecks\arma2\Skodovka_wrecked.p3d";
	};
	class Land_T72_Wrecked: Wreck_Base
	{
		scope = 2;
		displayName = "$STR_DN_T72WRECK";
		model = "\DZ\vehicles\wrecks\arma2\T72_Wrecked.p3d";
	};
	class Land_t72_wrecked_turret: Wreck_Base
	{
		scope = 2;
		displayName = "$STR_DN_T72WRECK_Turret";
		model = "\DZ\vehicles\wrecks\arma2\t72_wrecked_turret.p3d";
	};
	class Land_uaz_wrecked: Wreck_Base
	{
		scope = 2;
		displayName = "$STR_DN_UAZWRECK";
		model = "\DZ\vehicles\wrecks\arma2\uaz_wrecked.p3d";
	};
	class Land_ural_wrecked: Wreck_Base
	{
		scope = 2;
		displayName = "$STR_DN_URALWRECK";
		model = "\DZ\vehicles\wrecks\arma2\ural_wrecked.p3d";
	};
	class Land_Ikarus_Dayz: Wreck_Base
	{
		scope = 2;
		displayName = "Ikarus_Dayz";
		model = "\DZ\vehicles\wrecks\Ikarus\Ikarus_Dayz.p3d";
	};
	class Land_Ikarus_ground_Dayz: Wreck_Base
	{
		scope = 2;
		displayName = "Ikarus_ground_Dayz";
		model = "\DZ\vehicles\wrecks\Ikarus\Ikarus_ground_Dayz.p3d";
	};
	class Land_Lada_DayZ: Wreck_Base
	{
		scope = 2;
		displayName = "Lada_DayZ";
		model = "\DZ\vehicles\wrecks\Lada\Lada_DayZ.p3d";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
			};
			class doors2: doors1
			{
				initOpened = 0.3;
			};
			class doors3: doors1
			{
				initOpened = 0.2;
			};
			class doors4: doors1
			{
				initOpened = 0.3;
			};
			class doors5: doors1
			{
				initOpened = 0.1;
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
			class OpenDoors_5: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') >= 0.5);
				statement = (this animateSource ['doors5', 0]);
			};
			class CloseDoors_5: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') < 0.5);
				statement = (this animateSource ['doors5', 1]);
			};
		};
	};
	class Land_Lada_red_DayZ: Land_Lada_DayZ
	{
		model = "\DZ\vehicles\wrecks\Lada\Lada_red_DayZ.p3d";
	};
	class Land_Lada_ground_DayZ: Wreck_Base
	{
		scope = 2;
		displayName = "Lada_ground_DayZ";
		model = "\DZ\vehicles\wrecks\Lada\Lada_ground_DayZ.p3d";
	};
	class Land_S1023_ground_DayZ: Wreck_Base
	{
		scope = 2;
		displayName = "S1023_ground_DayZ";
		model = "\DZ\vehicles\wrecks\s1203\S1023_ground_DayZ.p3d";
	};
	class Land_s1203_DayZ: Wreck_Base
	{
		scope = 2;
		displayName = "s1203_DayZ";
		model = "\DZ\vehicles\wrecks\s1203\s1203_DayZ.p3d";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.1;
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
		};
	};
	class Land_s1203_baige_DayZ: Land_s1203_DayZ
	{
		model = "\DZ\vehicles\wrecks\s1203\s1203_baige_DayZ.p3d";
	};
	class Land_Volha_DayZ: Wreck_Base
	{
		scope = 2;
		displayName = "Volha_DayZ";
		model = "\DZ\vehicles\wrecks\Volha\Volha_DayZ.p3d";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.3;
			};
			class doors2: doors1
			{
				initPhase = 0;
				initOpened = 0.2;
			};
			class doors3: doors1
			{
				initPhase = 0;
				initOpened = 0.3;
			};
			class doors4: doors1
			{
				initOpened = 0.2;
			};
			class doors5: doors1
			{
				initOpened = 0.1;
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
			class OpenDoors_5: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') >= 0.5);
				statement = (this animateSource ['doors5', 0]);
			};
			class CloseDoors_5: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') < 0.5);
				statement = (this animateSource ['doors5', 1]);
			};
		};
	};
	class Land_Volha_grey_DayZ: Land_Volha_DayZ
	{
		model = "\DZ\vehicles\wrecks\Volha\Volha_grey_DayZ.p3d";
	};
	class Land_Volha_ground_DayZ: Wreck_Base
	{
		scope = 2;
		displayName = "Volha_ground_DayZ";
		model = "\DZ\vehicles\wrecks\Volha\Volha_ground_DayZ.p3d";
	};
	class Land_Volha_police_DayZ: Land_Volha_DayZ
	{
		storageCategory = 6;
		model = "\DZ\vehicles\wrecks\Volha\Volha_police_DayZ.p3d";
	};
	class Land_Mi8_Crashed: Wreck_Base
	{
		scope = 2;
		storageCategory = 6;
		displayName = "$STR_DN_MI8WRECK";
		model = "\DZ\vehicles\wrecks\arma2\Mi8_Crashed.p3d";
	};
	class Land_UH1Y_Wreck: Wreck_Base
	{
		scope = 2;
		storageCategory = 6;
		model = "\DZ\vehicles\wrecks\UH1Y\UH1Y_Wreck.p3d";
		class EventHandlers
		{
			Init = "(_this select 0) call effect_createWreckSmoke;";
		};
	};
	class Land_V3S_wreck: Wreck_Base
	{
		scope = 2;
		displayName = "V3S wreck";
		model = "DZ\vehicles\wrecks\V3S_wreck\V3S_wreck.p3d";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0;
			};
			class doors2: doors1{};
			class doors5: doors1
			{
				initPhase = 0;
			};
			class doorstwin1: doors1{};
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
				position = doorstwin1_action;
				condition = ((this animationSourcePhase 'doorstwin1') >= 0.5);
				statement = (this animateSource ['doorstwin1', 0]);
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = doorstwin1_action;
				condition = ((this animationSourcePhase 'doorstwin1') < 0.5);
				statement = (this animateSource ['doorstwin1', 1]);
			};
		};
	};
};
