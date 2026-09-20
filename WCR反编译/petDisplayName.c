// petDisplayName @ 021fdfe4

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatPetPlayer::petDisplayName(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  __s8WCRefine22WCRSuperFloatPetPlayerC14petDisplayNameSSvg();
  (*(code *)PTR__objc_release_02578630)(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(IVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

