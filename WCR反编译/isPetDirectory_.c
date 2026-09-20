// isPetDirectory: @ 021fed74

/* Function Stack Size: 0x18 bytes */

bool WCRSuperFloatPetPlayer::isPetDirectory_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  undefined8 local_48;
  undefined8 local_40;
  
  _swift_getObjCClassMetadata();
  (*(code *)PTR__objc_retain_02578638)(param_3);
  if (param_3 == 0) {
    local_48 = 0;
    local_40 = 0;
  }
  else {
    local_48 = param_3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    (*(code *)PTR__objc_release_02578630)(param_3);
    local_40 = param_2;
  }
  _swift_getObjCClassMetadata(param_1);
  __s8WCRefine22WCRSuperFloatPetPlayerC02isD9DirectoryySbSSSgFZ(local_48,local_40);
  _swift_bridgeObjectRelease(local_40);
  uVar1 = (uint)local_48 & 1;
  __s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF();
  return uVar1 & 1;
}

