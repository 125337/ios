// FUN_021e4380 @ 021e4380

/* WARNING: Removing unreachable block (ram,0x021e4570) */

void FUN_021e4380(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *local_d0;
  char *local_c8;
  char *local_98;
  
  pcVar2 = "WCRefineIconNameCaptureSupport";
  uVar3 = 0x1e;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("WCRefineIconNameCaptureSupport",0x1e,1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar3);
  local_98 = pcVar2;
  _NSClassFromString();
  _objc_release(pcVar2);
  if (local_98 == (char *)0x0) {
    local_98 = (char *)0x0;
  }
  else {
    _swift_getObjCClassMetadata();
  }
  if (local_98 == (char *)0x0) {
    local_d0 = (char *)0x0;
  }
  else {
    uVar3 = 0;
    FUN_021c8d68();
    _swift_dynamicCastMetatype(local_98,uVar3);
    local_c8 = local_98;
    if (local_98 == (char *)0x0) {
      local_c8 = (char *)0x0;
    }
    local_d0 = local_c8;
  }
  if (local_d0 != (char *)0x0) {
    pcVar2 = "stampResourceName:onView:";
    uVar3 = 0x19;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("stampResourceName:onView:",0x19,1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar3);
    _NSSelectorFromString();
    _objc_release(pcVar2);
    pcVar2 = local_d0;
    _swift_getObjCClassFromMetadata();
    iVar1 = (int)pcVar2;
    FUN_02222ba0();
    if (iVar1 != 0) {
      _swift_getObjCClassFromMetadata();
      _objc_retain(param_1);
      FUN_02222a60(local_d0);
      _swift_unknownObjectRelease(param_1);
      _swift_unknownObjectRelease(0);
      _objc_autorelease(local_d0);
    }
  }
  return;
}

