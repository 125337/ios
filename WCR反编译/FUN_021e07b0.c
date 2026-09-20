// FUN_021e07b0 @ 021e07b0

void FUN_021e07b0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  char *local_a0;
  char *local_98;
  char *local_70;
  
  pcVar1 = "WCRSuperFloatDisplayHelper";
  uVar3 = 0x1a;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("WCRSuperFloatDisplayHelper",0x1a,1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar3);
  local_70 = pcVar1;
  _NSClassFromString();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_70 == (char *)0x0) {
    local_70 = (char *)0x0;
  }
  else {
    _swift_getObjCClassMetadata();
  }
  if (local_70 == (char *)0x0) {
    local_a0 = (char *)0x0;
  }
  else {
    uVar3 = 0;
    FUN_021c8d68(0);
    _swift_dynamicCastMetatype(local_70,uVar3);
    local_98 = local_70;
    if (local_70 == (char *)0x0) {
      local_98 = (char *)0x0;
    }
    local_a0 = local_98;
  }
  if (local_a0 != (char *)0x0) {
    pcVar1 = "stampIconCaptureOnView:action:";
    uVar3 = 0x1e;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("stampIconCaptureOnView:action:",0x1e,1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar3);
    pcVar2 = pcVar1;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_a0;
    _swift_getObjCClassFromMetadata();
    FUN_02222ba0();
    if (((ulong)pcVar1 & 1) != 0) {
      _swift_getObjCClassFromMetadata();
      (*(code *)PTR__objc_retain_02578638)(param_1);
      (*(code *)PTR__objc_retain_02578638)(param_2);
      FUN_02222a60(local_a0,local_b8,pcVar2,param_1,param_2);
      _swift_unknownObjectRelease(param_2);
      _swift_unknownObjectRelease(param_1);
      _objc_autorelease(local_a0);
    }
  }
  return;
}

