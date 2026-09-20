// FUN_021e3a54 @ 021e3a54

char * FUN_021e3a54(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *local_160;
  char *local_158;
  char *local_150;
  char *local_120;
  undefined8 local_c8;
  char *local_b0;
  char *local_a8;
  char *local_80;
  
  pcVar1 = "WCRefineHelper";
  uVar5 = 0xe;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("WCRefineHelper",0xe,1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar5);
  local_80 = pcVar1;
  _NSClassFromString();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_80 == (char *)0x0) {
    local_80 = (char *)0x0;
  }
  else {
    _swift_getObjCClassMetadata();
  }
  if (local_80 == (char *)0x0) {
    local_b0 = (char *)0x0;
  }
  else {
    uVar5 = 0;
    FUN_021c8d68(0);
    _swift_dynamicCastMetatype(local_80,uVar5);
    local_a8 = local_80;
    if (local_80 == (char *)0x0) {
      local_a8 = (char *)0x0;
    }
    local_b0 = local_a8;
  }
  if (local_b0 == (char *)0x0) {
    local_160 = (char *)0x0;
  }
  else {
    pcVar1 = "officialUnreadBadgeViewWithCount:asRedDot:";
    uVar5 = 0x2a;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("officialUnreadBadgeViewWithCount:asRedDot:",0x2a,1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar5);
    pcVar2 = pcVar1;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_b0;
    _swift_getObjCClassFromMetadata();
    FUN_02222ba0();
    if (((ulong)pcVar1 & 1) == 0) {
      local_160 = (char *)0x0;
    }
    else {
      _swift_getObjCClassFromMetadata();
      FUN_021c80bc();
      FUN_021b88e4();
      uVar3 = (ulong)(param_2 & 1);
      FUN_021b8920();
      local_120 = local_b0;
      FUN_02222a60(local_b0,local_c8,pcVar2,param_1);
      _swift_unknownObjectRelease(uVar3);
      _swift_unknownObjectRelease(param_1);
      _objc_autorelease(local_b0);
      if (local_120 == (char *)0x0) {
        local_120 = (char *)0x0;
      }
      else {
        _swift_unknownObjectRetain();
      }
      if (local_120 == (char *)0x0) {
        local_158 = (char *)0x0;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_opt_self(PTR__OBJC_CLASS___UIView_026cdfd8);
        local_150 = local_120;
        _swift_dynamicCastObjCClass(local_120,puVar4);
        if (local_150 == (char *)0x0) {
          _swift_unknownObjectRelease(local_120);
          local_150 = (char *)0x0;
        }
        local_158 = local_150;
      }
      local_160 = local_158;
    }
  }
  return local_160;
}

