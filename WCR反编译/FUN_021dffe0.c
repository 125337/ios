// FUN_021dffe0 @ 021dffe0

/* WARNING: Removing unreachable block (ram,0x021e00c0) */

char * FUN_021dffe0(undefined8 param_1,undefined8 param_2,char *param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  char *local_218;
  char *local_210;
  char *local_1e0;
  undefined8 local_198;
  char *local_180;
  char *local_178;
  char *local_150;
  uint local_f4;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_90;
  char *local_88;
  long local_80;
  undefined8 local_78;
  long lStack_70;
  char *local_68;
  long local_60;
  undefined8 local_58;
  char *local_50;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  long local_30;
  undefined8 local_28;
  
  local_48 = (char *)0x0;
  local_50 = (char *)0x0;
  local_58 = 0;
  local_68 = (char *)0x0;
  local_60 = 0;
  local_90 = (char *)0x0;
  local_40 = param_1;
  local_38 = param_3;
  local_30 = param_4;
  local_28 = param_2;
  _swift_bridgeObjectRetain();
  if (param_4 != 0) {
    pcVar1 = param_3;
    lVar4 = param_4;
    local_68 = param_3;
    local_60 = param_4;
    FUN_021f5f10();
    local_78 = 0;
    lStack_70 = 0;
    local_88 = pcVar1;
    local_80 = lVar4;
    if (lVar4 == 0) {
      FUN_021c811c(&local_88);
      local_f4 = 1;
    }
    else {
      FUN_021c848c(&local_88,&local_a0);
      if (lStack_70 == 0) {
        FUN_021c7f98(&local_a0);
        FUN_021c8458(&local_88);
        local_f4 = 0;
      }
      else {
        lStack_a8 = lStack_70;
        local_b0 = local_78;
        __sSS2eeoiySbSS_SStFZ(local_a0,local_98,local_78,lStack_70);
        local_f4 = (uint)local_a0;
        FUN_021c7f98(&local_b0);
        FUN_021c7f98(&local_a0);
        FUN_021c811c(&local_88);
      }
    }
    if ((local_f4 & 1) == 0) {
      _swift_bridgeObjectRetain(param_4);
      pcVar1 = param_3;
      FUN_021f83cc(param_1,param_3,param_4);
      _swift_bridgeObjectRelease(param_4);
      if (pcVar1 != (char *)0x0) {
        local_90 = pcVar1;
        _swift_bridgeObjectRelease(param_4);
        return pcVar1;
      }
      _swift_bridgeObjectRelease(param_4);
    }
    else {
      _swift_bridgeObjectRelease(param_4);
    }
  }
  pcVar1 = "WCRSuperFloatDisplayHelper";
  uVar5 = 0x1a;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("WCRSuperFloatDisplayHelper",0x1a,1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar5);
  local_150 = pcVar1;
  _NSClassFromString();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_150 == (char *)0x0) {
    local_150 = (char *)0x0;
  }
  else {
    _swift_getObjCClassMetadata();
  }
  if (local_150 == (char *)0x0) {
    local_180 = (char *)0x0;
  }
  else {
    uVar5 = 0;
    FUN_021c8d68(0);
    _swift_dynamicCastMetatype(local_150,uVar5);
    local_178 = local_150;
    if (local_150 == (char *)0x0) {
      local_178 = (char *)0x0;
    }
    local_180 = local_178;
  }
  if (local_180 != (char *)0x0) {
    local_48 = local_180;
    pcVar1 = "imageForAction:sizeNumber:";
    uVar5 = 0x1a;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("imageForAction:sizeNumber:",0x1a,1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar5);
    pcVar2 = pcVar1;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_180;
    local_50 = pcVar2;
    _swift_getObjCClassFromMetadata();
    FUN_02222ba0();
    if (((ulong)pcVar1 & 1) != 0) {
      _swift_getObjCClassFromMetadata();
      (*(code *)PTR__objc_retain_02578638)(param_2);
      uVar5 = 0;
      FUN_021c80bc();
      FUN_021f8cd4(param_1);
      local_1e0 = local_180;
      FUN_02222a60(local_180,local_198,pcVar2,param_2);
      _swift_unknownObjectRelease(uVar5);
      _swift_unknownObjectRelease(param_2);
      _objc_autorelease(local_180);
      if (local_1e0 == (char *)0x0) {
        local_1e0 = (char *)0x0;
      }
      else {
        _swift_unknownObjectRetain();
      }
      if (local_1e0 == (char *)0x0) {
        local_218 = (char *)0x0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        _objc_opt_self(PTR__OBJC_CLASS___UIImage_026cdfd0);
        local_210 = local_1e0;
        _swift_dynamicCastObjCClass(local_1e0,puVar3);
        if (local_210 == (char *)0x0) {
          _swift_unknownObjectRelease(local_1e0);
          local_210 = (char *)0x0;
        }
        local_218 = local_210;
      }
      if (local_218 != (char *)0x0) {
        return local_218;
      }
    }
  }
  FUN_021f83cc(param_1,param_3,param_4);
  return param_3;
}

