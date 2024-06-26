/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct NPC_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int behaviorVariationId{ 0 };
    int resistCorrectId_poison{ -1 };
    int nameId{ -1 };
    float turnVellocity{ 0 };
    float hitHeight{ 0 };
    float hitRadius{ 0 };
    unsigned int weight{ 0 };
    float hitYOffset{ 0 };
    unsigned int hp{ 0 };
    unsigned int mp{ 0 };
    unsigned int getSoul{ 0 };
    int itemLotId_enemy{ -1 };
    int itemLotId_map{ -1 };
    float maxAnkleRollAngle{ -1 };
    unsigned char chrHitGroupAndNavimesh{ 0 };
    unsigned char faceIconId{ 0 };
    short deactivateDist{ -1 };
    unsigned int chrActivateConditionParamId{ 0 };
    float footIkErrorHeightLimit{ 0 };
    int humanityLotId{ -1 };
    int spEffectID0{ -1 };
    int spEffectID1{ -1 };
    int spEffectID2{ -1 };
    int spEffectID3{ -1 };
    int spEffectID4{ -1 };
    int spEffectID5{ -1 };
    int spEffectID6{ -1 };
    int spEffectID7{ -1 };
    int GameClearSpEffectID{ -1 };
    float physGuardCutRate{ 0 };
    float magGuardCutRate{ 0 };
    float fireGuardCutRate{ 0 };
    float thunGuardCutRate{ 0 };
    int animIdOffset{ 0 };
    short lockGazePoint0{ -1 };
    short lockGazePoint1{ -1 };
    short lockGazePoint2{ -1 };
    short lockGazePoint3{ -1 };
    short lockGazePoint4{ -1 };
    short lockGazePoint5{ -1 };
    float networkWarpDist{ 0 };
    int dbgBehaviorR1{ -1 };
    int dbgBehaviorL1{ -1 };
    int dbgBehaviorR2{ -1 };
    int dbgBehaviorL2{ -1 };
    int dbgBehaviorRL{ -1 };
    int dbgBehaviorRR{ -1 };
    int dbgBehaviorRD{ -1 };
    int dbgBehaviorRU{ -1 };
    int dbgBehaviorLL{ -1 };
    int dbgBehaviorLR{ -1 };
    int dbgBehaviorLD{ -1 };
    int dbgBehaviorLU{ -1 };
    int animIdOffset2{ 0 };
    float partsDamageRate1{ 1 };
    float partsDamageRate2{ 1 };
    float partsDamageRate3{ 1 };
    float partsDamageRate4{ 1 };
    float partsDamageRate5{ 1 };
    float partsDamageRate6{ 1 };
    float partsDamageRate7{ 1 };
    float partsDamageRate8{ 1 };
    float weakPartsDamageRate{ 1 };
    float superArmorRecoverCorrection{ 0 };
    float superArmorBrakeKnockbackDist{ 0 };
    unsigned short stamina{ 0 };
    unsigned short staminaRecoverBaseVel{ 0 };
    unsigned short def_phys{ 0 };
    short def_slash{ 0 };
    short def_blow{ 0 };
    short def_thrust{ 0 };
    unsigned short def_mag{ 0 };
    unsigned short def_fire{ 0 };
    unsigned short def_thunder{ 0 };
    unsigned short defFlickPower{ 0 };
    unsigned short resist_poison{ 0 };
    unsigned short resist_desease{ 0 };
    unsigned short resist_blood{ 0 };
    unsigned short resist_curse{ 0 };
    short ghostModelId{ -1 };
    short normalChangeResouceId{ -1 };
    short guardAngle{ 0 };
    short slashGuardCutRate{ 0 };
    short blowGuardCutRate{ 0 };
    short thrustGuardCutRate{ 0 };
    short lockGazePoint6{ -1 };
    short normalChangeTexChrId{ -1 };
    unsigned short dropType{ 0 };
    unsigned char knockbackRate{ 0 };
    unsigned char knockbackParamId{ 0 };
    unsigned char fallDamageDump{ 0 };
    unsigned char staminaGuardDef{ 0 };
    unsigned short resist_sleep{ 0 };
    unsigned short resist_madness{ 0 };
    signed char sleepGuardResist{ 0 };
    signed char madnessGuardResist{ 0 };
    short lockGazePoint7{ -1 };
    unsigned char mpRecoverBaseVel{ 0 };
    unsigned char flickDamageCutRate{ 0 };
    signed char defaultLodParamId{ -1 };
    signed char drawType{ 0 };
    unsigned char npcType{ 0 };
    unsigned char teamType{ 0 };
    unsigned char moveType{ 0 };
    unsigned char lockDist{ 0 };
    unsigned short materialSe_Weak1{ 0 };
    unsigned short materialSfx_Weak1{ 0 };
    unsigned char partsDamageType{ 0 };
    unsigned char vowType{ 0 };
    signed char guardLevel{ 0 };
    unsigned char burnSfxType{ 0 };
    signed char poisonGuardResist{ 0 };
    signed char diseaseGuardResist{ 0 };
    signed char bloodGuardResist{ 0 };
    signed char curseGuardResist{ 0 };
    unsigned char parryAttack{ 0 };
    unsigned char parryDefence{ 0 };
    unsigned char sfxSize{ 0 };
    unsigned char pushOutCamRegionRadius{ 12 };
    unsigned char hitStopType{ 0 };
    unsigned char ladderEndChkOffsetTop{ 15 };
    unsigned char ladderEndChkOffsetLow{ 8 };
    bool useRagdollCamHit : 1 { false };
    bool disableClothRigidHit : 1 { false };
    bool useUndulationAddAnimFB : 1 { false };
    bool isWeakA : 1 { false };
    bool isGhost : 1 { false };
    bool isNoDamageMotion : 1 { false };
    bool isUnduration : 1 { false };
    bool isChangeWanderGhost : 1 { false };
    bool modelDispMask0 : 1 { false };
    bool modelDispMask1 : 1 { false };
    bool modelDispMask2 : 1 { false };
    bool modelDispMask3 : 1 { false };
    bool modelDispMask4 : 1 { false };
    bool modelDispMask5 : 1 { false };
    bool modelDispMask6 : 1 { false };
    bool modelDispMask7 : 1 { false };
    bool modelDispMask8 : 1 { false };
    bool modelDispMask9 : 1 { false };
    bool modelDispMask10 : 1 { false };
    bool modelDispMask11 : 1 { false };
    bool modelDispMask12 : 1 { false };
    bool modelDispMask13 : 1 { false };
    bool modelDispMask14 : 1 { false };
    bool modelDispMask15 : 1 { false };
    bool isEnableNeckTurn : 1 { false };
    bool disableRespawn : 1 { false };
    bool isMoveAnimWait : 1 { false };
    bool isCrowd : 1 { false };
    bool isWeakB : 1 { false };
    bool isWeakC : 1 { false };
    bool isWeakD : 1 { false };
    bool doesAlwaysUseSpecialTurn : 1 { false };
    bool isRideAtkTarget : 1 { false };
    bool isEnableStepDispInterpolate : 1 { false };
    bool isStealthTarget : 1 { true };
    bool disableInitializeDead : 1 { false };
    bool isHitRumble : 1 { false };
    bool isSmoothTurn : 1 { true };
    bool isWeakE : 1 { false };
    bool isWeakF : 1 { false };
    bool modelDispMask16 : 1 { false };
    bool modelDispMask17 : 1 { false };
    bool modelDispMask18 : 1 { false };
    bool modelDispMask19 : 1 { false };
    bool modelDispMask20 : 1 { false };
    bool modelDispMask21 : 1 { false };
    bool modelDispMask22 : 1 { false };
    bool modelDispMask23 : 1 { false };
    bool modelDispMask24 : 1 { false };
    bool modelDispMask25 : 1 { false };
    bool modelDispMask26 : 1 { false };
    bool modelDispMask27 : 1 { false };
    bool modelDispMask28 : 1 { false };
    bool modelDispMask29 : 1 { false };
    bool modelDispMask30 : 1 { false };
    bool modelDispMask31 : 1 { false };
    float itemSearchRadius{ 0 };
    float chrHitHeight{ 0 };
    float chrHitRadius{ 0 };
    unsigned char specialTurnType{ 0 };
    bool isSoulGetByBoss : 1 { false };
    bool isBulletOwner_byObject : 1 { false };
    bool isUseLowHitFootIk : 1 { false };
    bool isCalculatePvPDamage : 1 { false };
    bool isHostSyncChr : 1 { false };
    bool isSkipWeakDamageAnim : 1 { false };
    bool isKeepHitOnRide : 1 { false };
    bool isSpCollide : 1 { false };
    unsigned short def_dark{ 0 };
    unsigned int threatLv{ 1 };
    float specialTurnDistanceThreshold{ 4 };
    int autoFootEffectSfxId{ -1 };
    unsigned short materialSe1{ 0 };
    unsigned short materialSfx1{ 0 };
    unsigned short materialSe_Weak2{ 0 };
    unsigned short materialSfx_Weak2{ 0 };
    unsigned short materialSe2{ 0 };
    unsigned short materialSfx2{ 0 };
    int spEffectID8{ -1 };
    int spEffectID9{ -1 };
    int spEffectID10{ -1 };
    int spEffectID11{ -1 };
    int spEffectID12{ -1 };
    int spEffectID13{ -1 };
    int spEffectID14{ -1 };
    int spEffectID15{ -1 };
    int autoFootEffectDecalBaseId1{ -1 };
    unsigned int toughness{ 0 };
    float toughnessRecoverCorrection{ 0 };
    float neutralDamageCutRate{ 1 };
    float slashDamageCutRate{ 1 };
    float blowDamageCutRate{ 1 };
    float thrustDamageCutRate{ 1 };
    float magicDamageCutRate{ 1 };
    float fireDamageCutRate{ 1 };
    float thunderDamageCutRate{ 1 };
    float darkDamageCutRate{ 1 };
    float darkGuardCutRate{ 0 };
    signed char clothUpdateOffset{ 0 };
    unsigned char npcPlayerWeightType{ 0 };
    short normalChangeModelId{ -1 };
    short normalChangeAnimChrId{ -1 };
    unsigned short paintRenderTargetSize{ 256 };
    int resistCorrectId_disease{ -1 };
    int phantomShaderId{ -1 };
    int multiPlayCorrectionParamId{ -1 };
    float maxAnklePitchAngle{ -1 };
    unsigned short resist_freeze{ 0 };
    signed char freezeGuardResist{ 0 };
    unsigned char pad1[1];
    int lockCameraParamId{ -1 };
    int spEffectID16{ -1 };
    int spEffectID17{ -1 };
    int spEffectID18{ -1 };
    int spEffectID19{ -1 };
    int spEffectID20{ -1 };
    int spEffectID21{ -1 };
    int spEffectID22{ -1 };
    int spEffectID23{ -1 };
    int spEffectID24{ -1 };
    int spEffectID25{ -1 };
    int spEffectID26{ -1 };
    int spEffectID27{ -1 };
    int spEffectID28{ -1 };
    int spEffectID29{ -1 };
    int spEffectID30{ -1 };
    int spEffectID31{ -1 };
    float disableLockOnAng{ 0 };
    signed char clothOffLodLevel{ -1 };
    bool isUseFootIKNormalByUnduration : 1 { false };
    bool attachHitInitializeDead : 1 { false };
    bool excludeGroupRewardCheck : 1 { false };
    bool enableAILockDmyPoly_212 : 1 { true };
    bool enableAILockDmyPoly_213 : 1 { true };
    bool enableAILockDmyPoly_214 : 1 { true };
    bool disableActivateOpen_xb1 : 1 { false };
    bool disableActivateLegacy_xb1 : 1 { false };
    short estusFlaskRecoveryParamId{ -1 };
    int roleNameId{ -1 };
    unsigned short estusFlaskLotPoint{ 0 };
    unsigned short hpEstusFlaskLotPoint{ 0 };
    unsigned short mpEstusFlaskLotPoint{ 0 };
    unsigned short estusFlaskRecovery_failedLotPointAdd{ 0 };
    unsigned short hpEstusFlaskRecovery_failedLotPointAdd{ 0 };
    unsigned short mpEstusFlaskRecovery_failedLotPointAdd{ 0 };
    int WanderGhostPhantomId{ -1 };
    float hearingHeadSize{ -1 };
    short SoundBankId{ -1 };
    unsigned char forwardUndulationLimit{ 0 };
    unsigned char sideUndulationLimit{ 0 };
    float deactiveMoveSpeed{ 0 };
    float deactiveMoveDist{ 0 };
    float enableSoundObjDist{ 48 };
    float undulationCorrectGain{ 0.1 };
    short autoFootEffectDecalBaseId2{ -1 };
    short autoFootEffectDecalBaseId3{ -1 };
    short RetargetReferenceChrId{ -1 };
    short SfxResBankId{ -1 };
    float updateActivatePriolity{ 1 };
    unsigned char chrNavimeshFlag_Alive{ 0 };
    unsigned char chrNavimeshFlag_Dead{ 0 };
    unsigned char pad7[1];
    unsigned char wheelRotType{ 0 };
    float wheelRotRadius{ 0 };
    float retargetMoveRate{ 1 };
    float ladderWarpOffset{ 0 };
    int loadAssetId{ -1 };
    int overlapCameraDmypolyId{ -1 };
    int residentMaterialExParamId00{ -1 };
    int residentMaterialExParamId01{ -1 };
    int residentMaterialExParamId02{ -1 };
    int residentMaterialExParamId03{ -1 };
    int residentMaterialExParamId04{ -1 };
    int sleepCollectorItemLotId_enemy{ -1 };
    int sleepCollectorItemLotId_map{ -1 };
    float footIkErrorOnGain{ 0.1 };
    float footIkErrorOffGain{ 0.4 };
    short SoundAddBankId{ -1 };
    unsigned char materialVariationValue{ 0 };
    unsigned char materialVariationValue_Weak{ 0 };
    float superArmorDurability{ 0 };
    float saRecoveryRate{ 1 };
    float saGuardCutRate{ 0 };
    int resistCorrectId_blood{ -1 };
    int resistCorrectId_curse{ -1 };
    int resistCorrectId_freeze{ -1 };
    int resistCorrectId_sleep{ -1 };
    int resistCorrectId_madness{ -1 };
    unsigned int chrDeadTutorialFlagId{ 0 };
    float stepDispInterpolateTime{ 0.5 };
    float stepDispInterpolateTriggerValue{ 0.6 };
    float lockScoreOffset{ 0 };
    unsigned char pad12[8];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::NPC_PARAM_ST) == 736,
    "NPC_PARAM_ST paramdef size does not match detected size");
