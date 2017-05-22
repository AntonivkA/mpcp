
_clientNew =
{
	_pos = _this select 0;
	_charInv  = _this select 1; 

	_cid  = _this select 2;
	_pid  = _this select 3;

	//load data
	_top = getArray(configFile >> "cfgCharacterCreation" >> "top");
	_bottom = getArray(configFile >> "cfgCharacterCreation" >> "bottom");
	_shoe = getArray(configFile >> "cfgCharacterCreation" >> "shoe");
	
	_myTop = _top select (_charInv select 0);  
	_myBottom = _bottom select (_charInv select 1);
	_myShoe = _shoe select (_charInv select 2);
	_mySkin = DZ_SkinsArray select (_charInv select 3);
	
	_agent = createAgent [_mySkin,  _pos, [], 0, "NONE"];
	{null = _agent createInInventory _x} forEach [_myTop,_myBottom,_myShoe];
	//_v = _agent createInInventory "tool_flashlight";
	//_v = _agent createInInventory "tool_transmitter";
	//_v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
	//_v = _agent createInInventory "Consumable_Chemlight_White";
	_v = _agent createInInventory "Consumable_Roadflare";
	_v = _agent createInInventory "Consumable_Rags"; _v setQuantity 1;
	_agent call init_newPlayer;
	_agent initDBIDs [ _cid, _pid ];

	call init_newBody;
	
	//----- simple scheduler part -----
	diag_log format ["SCHEDULER: Adding new clientId %1, name %2", _id, _name];
	_freePos = connectedPlayers find 0;
	connectedPlayers set [_freePos,_id];	
	diag_log format ["SCHEDULER: Updated 'connected players' array %1", connectedPlayers];	
	//---------------------------------
};
 
_clientReady =
{
	diag_log format["Player %1 ready to load previous character",_id];	
	if (isNull _agent) then 
	{
		//this should never happen!
		diag_log format["Player %1 has no agent on load, kill character",_id];
		_id statusChat ["Your character was unable to be loaded and has been reset. A system administrator has been notified. Please reconnect to continue.","ColorImportant"];
	} 
	else
	{ 
		call init_newBody;
		 
		//----- simple scheduler part -----
		diag_log format ["SCHEDULER: Adding ready clientId %1, name %2", _id, _name];
		_freePos = connectedPlayers find 0;
		connectedPlayers set [_freePos,_id];	
		diag_log format ["SCHEDULER: Updated 'connected players' array %1", connectedPlayers];
		//---------------------------------
	}; 
};

_clientRespawn =
{
	//----- simple scheduler part -----
	diag_log format ["SCHEDULER: Removing respawning clientId %1, name %2", _id, _name];
	_freedPos = connectedPlayers find _id;
	connectedPlayers set [_freedPos,0];
	diag_log format ["SCHEDULER: Updated 'connected players' array %1", connectedPlayers];
	//---------------------------------
};

_disconnectPlayer =
{
	_vm = [_agent,_id,_uid,_name,_queueTime] spawn 
	{
		_agent = _this select 0;
		_id = _this select 1; 
		_uid = _this select 2;
		_name = _this select 3;
		_queueTime = _this select 4;
		
		//----- simple scheduler part -----
		diag_log format ["SCHEDULER: Removing disconnecting clientId %1, name %2", _id, _name];
		_freedPos = connectedPlayers find _id;
		if (_freedPos >= 0) then
		{
			connectedPlayers set [_freedPos,0];
			diag_log format ["SCHEDULER: Updated 'connected players' array %1", connectedPlayers];
		};
		//---------------------------------	
		
		if (!isNull _agent) then
		{
			sleep 1;
			_agent playAction "SitDown";		
			sleep _queueTime;	
		};
		
		endDisconnectPlayer [ _agent, _uid ];
	};
};

// Create player on connection
onClientNew _clientNew;
onClientReady _clientReady;
onClientRespawn _clientRespawn;
onPlayerDisconnected _disconnectPlayer;
