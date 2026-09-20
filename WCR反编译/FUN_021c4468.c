// FUN_021c4468 @ 021c4468

void FUN_021c4468(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long local_150;
  long local_148;
  char *local_120;
  char *local_c8;
  char *local_c0;
  char *local_98;
  long local_68;
  char *local_60;
  undefined1 auStack_58 [24];
  long local_40;
  char *local_38;
  char *local_30;
  
  local_30 = (char *)0x0;
  local_38 = (char *)0x0;
  local_40 = 0;
  pcVar1 = "WCRSuperFloatDisplayHelper";
  uVar6 = 0x1a;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("WCRSuperFloatDisplayHelper",0x1a,1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar6);
  local_98 = pcVar1;
  _NSClassFromString();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_98 == (char *)0x0) {
    local_98 = (char *)0x0;
  }
  else {
    _swift_getObjCClassMetadata();
  }
  if (local_98 == (char *)0x0) {
    local_c8 = (char *)0x0;
  }
  else {
    uVar6 = 0;
    FUN_021c8d68(0);
    _swift_dynamicCastMetatype(local_98,uVar6);
    local_c0 = local_98;
    if (local_98 == (char *)0x0) {
      local_c0 = (char *)0x0;
    }
    local_c8 = local_c0;
  }
  if (local_c8 != (char *)0x0) {
    local_30 = local_c8;
    pcVar1 = "enrichedSnapshot";
    uVar6 = 0x10;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("enrichedSnapshot",0x10,1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar6);
    pcVar2 = pcVar1;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_c8;
    local_38 = pcVar2;
    _swift_getObjCClassFromMetadata();
    FUN_02222ba0();
    if (((ulong)pcVar1 & 1) != 0) {
      _swift_getObjCClassFromMetadata();
      local_120 = local_c8;
      FUN_02222a20();
      _objc_autorelease(local_c8);
      if (local_120 == (char *)0x0) {
        local_120 = (char *)0x0;
      }
      else {
        _swift_unknownObjectRetain();
      }
      if (local_120 == (char *)0x0) {
        local_150 = 0;
      }
      else {
        local_60 = local_120;
        puVar3 = &DAT_028c6d50;
        FUN_021c77d4(&DAT_028c6d50,&DAT_0233a7f8);
        plVar4 = &local_68;
        _swift_dynamicCast(plVar4,&local_60,PTR___syXlN_02578b00 + 8,puVar3,6);
        if (((ulong)plVar4 & 1) == 0) {
          local_148 = 0;
        }
        else {
          local_148 = local_68;
        }
        local_150 = local_148;
      }
      if (local_150 != 0) {
        local_40 = local_150;
        _swift_bridgeObjectRetain();
        plVar4 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::snapshot);
        _swift_beginAccess(plVar4,auStack_58,0x21,0);
        lVar5 = *plVar4;
        *plVar4 = local_150;
        _swift_bridgeObjectRelease(lVar5);
        _swift_endAccess(auStack_58);
        _swift_bridgeObjectRelease(local_150);
      }
    }
  }
  return;
}

