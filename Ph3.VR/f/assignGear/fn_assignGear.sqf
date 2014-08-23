// F3 - Folk Assign Gear Script (Server-side)
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

// DECLARE VARIABLES AND FUNCTIONS

private ["_faction","_typeofUnit","_unit"];

// ====================================================================================

// DETECT unit FACTION
// The following code detects what faction the unit's slot belongs to, and stores
// it in the private variable _faction

_typeofUnit = toLower (_this select 0);
_unit = _this select 1;
_faction = toLower (faction _unit);

// ====================================================================================

// DECIDE IF THE SCRIPT SHOULD RUN
// Depending on locality the script decides if it should run

if !(local _unit) exitWith {};

// ====================================================================================

// SET A PUBLIC VARIABLE
// A public variable is set on the unit, indicating their type. This is mostly relevant for the F3 respawn component

_unit setVariable ["f_var_assignGear",_typeofUnit,true];

// ====================================================================================

// DECLARE VARIABLES AND FUNCTIONS 2

private [
"_glrifle","_glriflemag","_glriflemag_tr","_glmag",
"_glsmokewhite","_glsmokegreen","_glsmokered",
"_glflarewhite","_glflarered","_glflareyellow","_glflaregreen",
"_AR","_ARmag","_ARmag_tr",
"_MMG","_MMGmag","_MMGmag_tr",
"_HMG","_HMGmount",
"_RAT","_RATmag",
"_MAT","_MATmag1","_MATmag2",
"_HAT","_HATmag1","_HATmag2",
"_MTR","_MTRmount",
"_RAA","_RAAmag",
"_SNrifle","_SNriflemag",
"_pistol","_pistolmag",
"_grenade","_smokegrenade","_smokegrenadegreen",
"_rifle","_riflemag","_riflemag_tr",
"_carbine","_carbinemag","_carbinemag_tr",
"_smg","_smgmag","_smgmag_tr",
"_bagsmall","_bagmedium","_baglarge",
"_ATmine","_satchel",
"_medkit","_rifle_attach",
"_carbine_attach","_smg_attach",
"_glrifle_attach","_AR_attach",
"_MMG_attach","_SNrifle_attach"
,"_APmine", "_nvg",
"_chemgreen","_chemred","_chemblue","_chemyellow",
"_epipen","_morphine","_bandage","_bloodbag","_earplugs","_sparebarrel"
];

// ====================================================================================

// This variable simply tracks the progress of the gear assignation process, for other
// scripts to reference.

_unit setVariable ["f_var_assignGear_done",false,true];

// ====================================================================================

// If the unitfaction is different from the group leader's faction and the unit is not a vehicle, the latters faction is used
if ((_unit isKindOF "CAManBase")&&(_faction != toLower (faction (leader group _unit)))) then {_faction = toLower (faction (leader group _unit))};

// DEBUG
if (f_var_debugMode == 1) then
{
	_unit sideChat format ["DEBUG (assignGear.sqf): unit faction: %1",_faction];
};

// ====================================================================================
// GEAR: BLUFOR > UN
// The following block of code executes only if the unit is in a NATO slot; it
// automatically includes a file which contains the appropriate equipment data.


if (_faction == "mas_afr_onu") then {
	#include "f_assignGear_un.sqf"
};
// ====================================================================================
// GEAR: BLUFOR > NATO
// The following block of code executes only if the unit is in a NATO slot; it
// automatically includes a file which contains the appropriate equipment data.


if (_faction == "blu_f") then {
	#include "f_assignGear_nato.sqf"
};
// ====================================================================================
// GEAR: BLUFOR > USMC MEU
// The following block of code executes only if the player is in a USMC slot; it
// automatically includes a file which contains the appropriate equipment data.

if (_faction == "mas_usa_mars") then {
	#include "f_assignGear_usmc.sqf"
};
// ====================================================================================
// GEAR: BLUFOR > US Army
// The following block of code executes only if the player is in a US Army slot; it
// automatically includes a file which contains the appropriate equipment data.

if (_faction == "AV_USArmy") then {
	#include "f_assignGear_usarmy.sqf"
};

// ====================================================================================
// GEAR: INDFOR > AGF
// The following block of code executes only if the player is in a AGF slot; it
// automatically includes a file which contains the appropriate equipment data.

if (_faction == "mas_afr_ind") then {
	#include "f_assignGear_agf.sqf"
};
// ====================================================================================

// GEAR: OPFOR > MIDDLE EAST INSURGENTS (CAF)
// The following block of code executes only if the player is in a African slot; it
// automatically includes a file which contains the appropriate equipment data.

if (_faction == "caf_ag_me_t") then {
	#include "f_assignGear_middle_east.sqf"
};
// ====================================================================================

// GEAR: OPFOR > AFRICA (CAF)
// The following block of code executes only if the player is in a African slot; it
// automatically includes a file which contains the appropriate equipment data.

if (_faction == "caf_ag_afr_p") then {
	#include "f_assignGear_africa.sqf"
};
// ====================================================================================

// GEAR: BLUFOR > BAF
// The following block of code executes only if the player is in a BAF slot; it
// automatically includes a file which contains the appropriate equipment data.

if (_faction == "BLU_BAF_F") then {
	#include "f_assignGear_baf.sqf"
};
// ====================================================================================

// GEAR: OPFOR > CSAT
// The following block of code executes only if the unit is in a CSAT slot; it
// automatically includes a file which contains the appropriate equipment data.

if (_faction == "opf_f") then {
	#include "f_assignGear_csat.sqf"
};

// ====================================================================================

// GEAR: INDEPEDENT > AAF
// The following block of code executes only if the unit is in a AAF slot; it
// automatically includes a file which contains the appropriate equipment data.

if (_faction == "ind_f") then {
	#include "f_assignGear_aaf.sqf";
};

// ====================================================================================

// GEAR: INDEPENDENT > Russians
// The following block of code executes only if the player is in a Russian slot; it
// automatically includes a file which contains the appropriate equipment data.

if (_faction == "SUD_RU") then {
	#include "f_assignGear_russia.sqf"
};
// ====================================================================================

// GEAR: FIA
// The following block of code executes only if the unit is in a FIA slot (any faction); it
// automatically includes a file which contains the appropriate equipment data.

if (_faction in ["blu_g_f","opf_g_f","ind_g_f"]) then {
	#include "f_assignGear_fia.sqf"
};

// ====================================================================================


// This variable simply tracks the progress of the gear assignation process, for other
// scripts to reference.

_unit setVariable ["f_var_assignGear_done",true,true];

// DEBUG

// ====================================================================================

// ERROR CHECKING
// If the faction of the unit cannot be defined, the script exits with an error.

if (isNil "_carbine") then { //_carbine should exist unless no faction has been called
	player globalchat format ["DEBUG (assignGear.sqf): Faction %1 is not defined.",_faction];
} else {
 	if (f_var_debugMode == 1) then	{
		player sideChat format ["DEBUG (assignGear.sqf): Gear for %1: %1 slot selected.",_unit,_faction,_typeofUnit];
	};
};

// ====================================================================================