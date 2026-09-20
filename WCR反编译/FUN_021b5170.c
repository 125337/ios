// FUN_021b5170 @ 021b5170

void FUN_021b5170(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 local_118;
  undefined8 local_d8;
  char *local_c0;
  char *local_b8;
  char *local_90;
  
  pcVar1 = "WCRefineIconNameCaptureSupport";
  uVar3 = 0x1e;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("WCRefineIconNameCaptureSupport",0x1e,1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar3);
  local_90 = pcVar1;
  _NSClassFromString();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_90 == (char *)0x0) {
    local_90 = (char *)0x0;
  }
  else {
    _swift_getObjCClassMetadata();
  }
  if (local_90 == (char *)0x0) {
    local_c0 = (char *)0x0;
  }
  else {
    uVar3 = 0;
    FUN_021c8d68(0);
    _swift_dynamicCastMetatype(local_90,uVar3);
    local_b8 = local_90;
    if (local_90 == (char *)0x0) {
      local_b8 = (char *)0x0;
    }
    local_c0 = local_b8;
  }
  if (local_c0 != (char *)0x0) {
    pcVar1 = "stampResourceName:onView:";
    uVar3 = 0x19;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("stampResourceName:onView:",0x19,1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar3);
    pcVar2 = pcVar1;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_c0;
    _swift_getObjCClassFromMetadata();
    FUN_02222ba0();
    if (((ulong)pcVar1 & 1) != 0) {
      _swift_getObjCClassFromMetadata();
      _swift_bridgeObjectRetain(param_3);
      if (param_3 == 0) {
        local_118 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(param_3);
        local_118 = param_2;
      }
      (*(code *)PTR__objc_retain_02578638)(param_1);
      FUN_02222a60(local_c0,local_d8,pcVar2,local_118,param_1);
      _swift_unknownObjectRelease(param_1);
      _swift_unknownObjectRelease(local_118);
      _objc_autorelease(local_c0);
    }
  }
  return;
}

