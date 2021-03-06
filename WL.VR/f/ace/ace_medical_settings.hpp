class ace_medical_level
{
	category = "$STR_ace_medical_Category_Medical";
	value = 2;
	typeName = "SCALAR";
	values[] = {"Disabled","Basic","Advanced"};
};
class ace_medical_medicSetting
{
	category = "$STR_ace_medical_Category_Medical";
	value = 2;
	typeName = "SCALAR";
	values[] = {"Disabled","Normal","Advanced"};
};
class ace_medical_enableFor
{
	category = "$STR_ace_medical_Category_Medical";
	value = 0;
	typeName = "SCALAR";
	values[] = {"Players only","Players and AI"};
};
class ace_medical_enableOverdosing
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 1;
};
class ace_medical_bleedingCoefficient
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 1;
};
class ace_medical_painCoefficient
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 1;
};
class ace_medical_enableAirway
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 0;
};
class ace_medical_enableFractures
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 0;
};
class ace_medical_enableAdvancedWounds
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 0;
};
class ace_medical_enableVehicleCrashes
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 1;
};
class ace_medical_enableScreams
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 1;
};
class ace_medical_playerDamageThreshold
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 1.5;
};
class ace_medical_AIDamageThreshold
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = .5;
};
class ace_medical_enableUnconsciousnessAI
{
	category = "$STR_ace_medical_Category_Medical";
	value = 1;
	typeName = "SCALAR";
	values[] = {"Disabled","50/50","Enabled"};
};
class ace_medical_remoteControlledAI
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 1;
};
class ace_medical_preventInstaDeath
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 1;
};
class ace_medical_enableRevive
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 0;
	values[] = {"Disabled","Players only","Players and AI"};
};
class ace_medical_maxReviveTime
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 120;
};
class ace_medical_amountOfReviveLives
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = -1;
};
class ace_medical_allowDeadBodyMovement
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 1;
};
class ace_medical_allowLitterCreation
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 1;
};
class ace_medical_litterSimulationDetail
{
	category = "$STR_ace_medical_Category_Medical";
	displayName = "$STR_ace_medical_litterSimulationDetail";
	description = "$STR_ace_medical_litterSimulationDetail_Desc";
	typeName = "SCALAR";
	value = 3;
	values[] = {"Off","Low","Medium","High","Ultra"};
	_values[] = {0,50,100,1000,5000};
	isClientSettable = 1;
};
class ace_medical_litterCleanUpDelay
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 0;
};
class ace_medical_medicSetting_PAK
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 0;
	values[] = {"Anyone","Medics only","Doctors only"};
};
class ace_medical_medicSetting_SurgicalKit
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 0;
	values[] = {"Anyone","Medics only","Doctors only"};
};
class ace_medical_consumeItem_PAK
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 0;
	values[] = {"No","Yes"};
};
class ace_medical_consumeItem_SurgicalKit
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 0;
	values[] = {"No","Yes"};
};
class ace_medical_useLocation_PAK
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 0;
	values[] = {"$STR_ace_medical_AdvancedMedicalSettings_anywhere","$STR_ace_medical_AdvancedMedicalSettings_vehicle","$STR_ace_medical_AdvancedMedicalSettings_facility","$STR_ace_medical_AdvancedMedicalSettings_vehicleAndFacility","$STR_ace_common_Disabled"};
};
class ace_medical_useLocation_SurgicalKit
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "SCALAR";
	value = 0;
	values[] = {"$STR_ace_medical_AdvancedMedicalSettings_anywhere","$STR_ace_medical_AdvancedMedicalSettings_vehicle","$STR_ace_medical_AdvancedMedicalSettings_facility","$STR_ace_medical_AdvancedMedicalSettings_vehicleAndFacility","$STR_ace_common_Disabled"};
};
class ace_medical_useCondition_PAK
{
	category = "$STR_ace_medical_Category_Medical";
	displayName = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_PAK_DisplayName";
	description = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_PAK_Description";
	typeName = "SCALAR";
	value = 1;
	values[] = {"Anytime","Stable"};
};
class ace_medical_useCondition_SurgicalKit
{
	category = "$STR_ace_medical_Category_Medical";
	displayName = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_SurgicalKit_DisplayName";
	description = "$STR_ace_medical_AdvancedMedicalSettings_useCondition_SurgicalKit_Description";
	typeName = "SCALAR";
	value = 1;
	values[] = {"Anytime","Stable"};
};
class ace_medical_keepLocalSettingsSynced
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 1;
};
class ace_medical_healHitPointAfterAdvBandage
{
	category = "$STR_ace_medical_Category_Medical";
	displayName = "$STR_ace_medical_healHitPointAfterAdvBandage";
	typeName = "BOOL";
	value = 0;
};
class ace_medical_painIsOnlySuppressed
{
	category = "$STR_ace_medical_Category_Medical";
	displayName = "$STR_ace_medical_painIsOnlySuppressed";
	typeName = "BOOL";
	value = 1;
};
class ace_medical_painEffectType
{
	category = "$STR_ace_medical_Category_Medical";
	displayName = "$STR_ace_medical_painEffectType";
	typeName = "SCALAR";
	value = 0;
	values[] = {"$STR_ace_medical_painEffect_Flash","$STR_ace_medical_painEffect_Chroma"};
	isClientSettable = 1;
};
class ace_medical_allowUnconsciousAnimationOnTreatment
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 0;
};
class ace_medical_moveUnitsFromGroupOnUnconscious
{
	category = "$STR_ace_medical_Category_Medical";
	typeName = "BOOL";
	value = 0;
};
class ace_medical_menuTypeStyle
{
	category = "$STR_ace_medical_Category_Medical";
	displayName = "$STR_ace_medical_menuTypeDisplay";
	description = "$STR_ace_medical_menuTypeDescription";
	typeName = "SCALAR";
	value = 0;
	values[] = {"$STR_ace_medical_useSelection","$STR_ace_medical_useRadial","Disabled"};
	isClientSettable = 1;
};
