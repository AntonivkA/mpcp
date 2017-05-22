private["_sourceObject","_waterVessel","_person","_name","_playAnim","_animationLenght"];

//Define
//[this,_inHands,_owner,_name]
_sourceObject	= _this select 0;
_waterVessel	= _this select 1;
_person		= _this select 2;
_sourceType	= _this select 3;
//_name		= _this select 3;

if (damage _waterVessel >= 1) exitWith
{
	//feedback to player
	[_person,format["Can not fill ruined %1 with water",displayName _waterVessel],"colorAction"] call fnc_playerMessage;
};

//conduct action
_person say3D ["z_fillwater_0", 20];

// Default play animation for filling from pod
_playAnim		= "fillBottlePond";
_animationLenght	= 3;

// If source object is OBJECT
if ( typeName _sourceObject == "OBJECT" ) then
{
	// IBJECT is Well then play animation filling bottle from well
	if ( typeOf _sourceObject == "Land_pumpa" ) then
	{
		_playAnim		= "fillBottleWell";
		_animationLenght	= 10;
	};
	
	if ( typeOf _sourceObject == "Land_A_FuelStation_Feed" ) then
	{
		//hint "projde to sem";
		_playAnim		= "fillBottleWell";
		_animationLenght	= 10;
	};
};

_person playAction [_playAnim, {}];

//wait until animation finish
while { _animationLenght > 0 && _person getVariable ['wasCanceled',0] == 0 } do
{
	sleep 1;
	_animationLenght = _animationLenght - 1;
};

//sleep _animationLenght;

//Update resources
if ( _person getVariable ['wasCanceled',0] == 0 ) then
{
	_waterVessel setQuantity (maxQuantity _waterVessel);

	//feedback to player
	[_person,format["I have filled the %1 with %2.",displayName _waterVessel, _sourceType],"colorAction"] call fnc_playerMessage;
	_person setVariable ['isUsingSomething',0];
	_person setSlotLock ["Hands", false];
	diag_log format ["FillBottle:::Lock::: %1", _person getSlotLock "Hands" ];
}
else
{
	_person setVariable ['wasCanceled',0];
	_person setSlotLock ["Hands", false];
	diag_log format ["FillBottle:::Lock::: %1", _person getSlotLock "Hands" ];
};
