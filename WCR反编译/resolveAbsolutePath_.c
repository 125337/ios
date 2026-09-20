// resolveAbsolutePath: @ 021ff2fc

/* Function Stack Size: 0x18 bytes */

ID WCRSuperFloatPetPlayer::resolveAbsolutePath_(ID param_1,SEL param_2,ID param_3)

{
  SEL SVar1;
  undefined8 local_98;
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
  SVar1 = local_40;
  __s8WCRefine22WCRSuperFloatPetPlayerC19resolveAbsolutePathySSSgAEFZ();
  _swift_bridgeObjectRelease(local_40);
  if (SVar1 == 0) {
    local_98 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(SVar1);
    local_98 = local_48;
  }
  _objc_autoreleaseReturnValue();
  return local_98;
}

