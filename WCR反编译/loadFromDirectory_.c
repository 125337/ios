// loadFromDirectory: @ 022040bc

/* Function Stack Size: 0x18 bytes */

bool WCRSuperFloatPetPlayer::loadFromDirectory_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  ID IVar2;
  
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)(param_1);
  IVar2 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  (*(code *)PTR__objc_release_02578630)(param_3);
  __s8WCRefine22WCRSuperFloatPetPlayerC4load13fromDirectorySbSS_tF(IVar2,param_2);
  _swift_bridgeObjectRelease(param_2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar1 = (uint)IVar2 & 1;
  __s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF();
  return uVar1 & 1;
}

