// config.bin - 12:12:56 05/22/17, generated in 0.01 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

#define true	1
#define false	0

enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXISY = 2,
	DESTRUCTNO = 0,
	STABILIZEDINAXESBOTH = 3,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class CfgPatches {
	class DZ_Structures_Rail_Rail_Station_big {
		units[] = {"Land_rail_station_big"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};

class CfgVehicles {
	class HouseNoDestruct;	// External class reference
	
	class Land_rail_station_big : HouseNoDestruct {
		armor = 400;
		model = "\dz\structures\Rail\rail_station_big\rail_station_big.p3d";
		
		class HitPoints {
			class Hit1 {
				armor = 0.2;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = false;
				convexComponent = "dam 1";
				
				class DestructionEffects {
					class Dust {
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					
					class Dust2 : Dust {
						type = "HousePartDustLong";
					};
					
					class Walls : Dust {
						type = "HousePartWall";
					};
				};
			};
		};
		
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		
		class Doors {
			class Doors1 {
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.1;
				armor = 0.2;
				soundOpen = "doorWoodFrontOpen";
				soundClose = "doorWoodFrontClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors2 {
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class DoorsTwin1 {
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodTwinOpen";
				soundClose = "doorWoodTwinClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
	
	class Land_sign_elektrozavodsk : HouseNoDestruct {
		armor = 1;
		model = "\dz\structures\Rail\Rail_Station_big\sign_elektrozavodsk.p3d";
	};
	
	class Land_sign_balota : Land_sign_elektrozavodsk {
		model = "\dz\structures\Rail\Rail_Station_big\sign_balota.p3d";
	};
	
	class Land_sign_berezino : Land_sign_elektrozavodsk {
		model = "\dz\structures\Rail\Rail_Station_big\sign_berezino.p3d";
	};
	
	class Land_sign_chernogorsk : Land_sign_elektrozavodsk {
		model = "\dz\structures\Rail\Rail_Station_big\sign_chernogorsk.p3d";
	};
	
	class Land_sign_kamenka : Land_sign_elektrozavodsk {
		model = "\dz\structures\Rail\Rail_Station_big\sign_kamenka.p3d";
	};
	
	class Land_sign_kamyshovo : Land_sign_elektrozavodsk {
		model = "\dz\structures\Rail\Rail_Station_big\sign_kamyshovo.p3d";
	};
	
	class Land_sign_komarovo : Land_sign_elektrozavodsk {
		model = "\dz\structures\Rail\Rail_Station_big\sign_komarovo.p3d";
	};
	
	class Land_sign_prigorodki : Land_sign_elektrozavodsk {
		model = "\dz\structures\Rail\Rail_Station_big\sign_prigorodki.p3d";
	};
	
	class Land_sign_solnichnyi : Land_sign_elektrozavodsk {
		model = "\dz\structures\Rail\Rail_Station_big\sign_solnichnyi.p3d";
	};
};
