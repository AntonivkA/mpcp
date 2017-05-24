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
	class DZ_Buildings2_Misc_Cargo
	{
		units[] = {"Misc_Cargo1Bo_military","Misc_Cargo1B_military","Land_Misc_Cargo2E","Land_Misc_Cargo1B"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Buildings2"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Misc_Cargo1Ao: HouseNoDestruct
	{
		model = "dz\buildings2\Misc_Cargo\Misc_Cargo1Ao.p3d";
		scope = 2;
		displayName = "Cargo 1A";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		mapSize = 15.4;
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.1;
			};
			class doors2: doors1{};
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
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') < 0.5);
				statement = (this animateSource ['doors2', 1]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') >= 0.5);
				statement = (this animateSource ['doors2', 0]);
			};
		};
	};
	class Land_Misc_Cargo1Bo: HouseNoDestruct
	{
		model = "dz\buildings2\Misc_Cargo\Misc_Cargo1Bo.p3d";
		scope = 2;
		displayName = "Cargo 1B";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		mapSize = 15.4;
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.1;
			};
			class doors2: doors1{};
			class doors3: doors1{};
			class doors4: doors1{};
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
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') < 0.5);
				statement = (this animateSource ['doors2', 1]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') >= 0.5);
				statement = (this animateSource ['doors2', 0]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') < 0.5);
				statement = (this animateSource ['doors3', 1]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') >= 0.5);
				statement = (this animateSource ['doors3', 0]);
			};
			class OpenDoors_4: OpenDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') < 0.5);
				statement = (this animateSource ['doors4', 1]);
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') >= 0.5);
				statement = (this animateSource ['doors4', 0]);
			};
		};
	};
	class Misc_Cargo1Bo_military: Land_Misc_Cargo1Bo
	{
		displayName = "Cargo 1B Military";
		icon = "dz\buildings2\data\Icons\icon_container_ca.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"dz\buildings2\Misc_Cargo\data\Misc_Cargo1B_khaki_CO.paa"};
	};
	class Land_Misc_Cargo1B: HouseNoDestruct
	{
		displayName = "Cargo 1Bc";
		model = "dz\buildings2\Misc_Cargo\Misc_Cargo1B.p3d";
		icon = "dz\buildings2\data\Icons\icon_container_ca.paa";
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
	class Misc_Cargo1Bo_civil: Land_Misc_Cargo1Bo
	{
		hiddenSelectionsTextures[] = {"dz\buildings2\Misc_Cargo\data\misc_cargo1b_co.paa"};
	};
	class Land_Misc_Cargo1C: HouseNoDestruct
	{
		model = "dz\buildings2\Misc_Cargo\Misc_Cargo1C.p3d";
		scope = 2;
		displayName = "Cargo 1C";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
	class Land_Misc_Cargo1D: HouseNoDestruct
	{
		model = "dz\buildings2\Misc_Cargo\Misc_Cargo1D.p3d";
		scope = 2;
		displayName = "Cargo 2D";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
	class Land_Misc_Cargo2B: HouseNoDestruct
	{
		model = "dz\buildings2\Misc_Cargo\Misc_Cargo2B.p3d";
		scope = 2;
		displayName = "Cargo 2B";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
	class Land_Misc_Cargo2C: HouseNoDestruct
	{
		model = "dz\buildings2\Misc_Cargo\Misc_Cargo2C.p3d";
		scope = 2;
		displayName = "Cargo 2C";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
	class Land_Misc_Cargo2D: HouseNoDestruct
	{
		model = "dz\buildings2\Misc_Cargo\Misc_Cargo2D.p3d";
		scope = 2;
		displayName = "Cargo 2D";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
	class Land_Misc_Cargo2E: HouseNoDestruct
	{
		model = "dz\buildings2\Misc_Cargo\Misc_Cargo2E.p3d";
		icon = "dz\buildings2\data\Icons\icon_container_ca.paa";
		scope = 2;
		displayName = "Cargo 1B";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
	class Land_Misc_Cargo1Mof: HouseNoDestruct
	{
		model = "dz\buildings2\Misc_Cargo\Misc_Cargo1Mof.p3d";
		scope = 2;
		displayName = "Cargo 1Mof";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.1;
			};
			class doors2: doors1{};
			class doors3: doors1{};
			class doors4: doors1{};
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
		};
	};
	class Land_Misc_Cargo1Moh: HouseNoDestruct
	{
		model = "dz\buildings2\Misc_Cargo\Misc_Cargo1Moh.p3d";
		scope = 2;
		displayName = "Cargo 1Moh";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.1;
			};
			class doors2: doors1{};
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
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') < 0.5);
				statement = (this animateSource ['doors2', 1]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') >= 0.5);
				statement = (this animateSource ['doors2', 0]);
			};
		};
	};
};
