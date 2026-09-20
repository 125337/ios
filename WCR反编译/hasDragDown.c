// hasDragDown @ 021fe260

/* Function Stack Size: 0x10 bytes */

bool WCRSuperFloatPetPlayer::hasDragDown(ID param_1,SEL param_2)

{
  uint uVar1;
  ID IVar2;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = (uint)IVar2;
  __s8WCRefine22WCRSuperFloatPetPlayerC11hasDragDownSbvg();
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar1 = uVar1 & 1;
  __s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF();
  return uVar1 & 1;
}

