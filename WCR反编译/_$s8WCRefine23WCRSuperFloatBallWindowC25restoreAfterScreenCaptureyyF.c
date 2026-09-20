// _$s8WCRefine23WCRSuperFloatBallWindowC25restoreAfterScreenCaptureyyF @ 021ae7c4

/* WARNING: Removing unreachable block (ram,0x021ae96c) */

void __s8WCRefine23WCRSuperFloatBallWindowC25restoreAfterScreenCaptureyyF(void)

{
  undefined8 *puVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  uint local_134;
  undefined8 local_130;
  uint local_11c;
  long local_108;
  long local_100;
  long local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  byte local_78;
  char local_71;
  char *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long local_30;
  
  local_78 = 0;
  pcVar2 = "superFloatEnabled";
  uVar4 = 0x11;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("superFloatEnabled",0x11,1)
  ;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapshot);
  _swift_beginAccess(puVar1,auStack_60,0x20,0);
  local_70 = pcVar2;
  local_68 = uVar4;
  __sSDyq_Sgxcig(auStack_48,&local_70,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_70);
  _swift_endAccess(auStack_60);
  if (local_30 == 0) {
    FUN_021c7fc0(auStack_48);
    local_108 = 0;
  }
  else {
    uVar4 = 0;
    FUN_021c80bc(0);
    plVar3 = &local_c8;
    _swift_dynamicCast(plVar3,auStack_48,PTR___sypN_02578b08 + 8,uVar4,6);
    if (((ulong)plVar3 & 1) == 0) {
      local_100 = 0;
    }
    else {
      local_100 = local_c8;
    }
    local_108 = local_100;
  }
  if (local_108 == 0) {
    local_11c = 2;
  }
  else {
    lVar5 = local_108;
    FUN_02222040(local_108,local_130);
    local_11c = (uint)lVar5;
    (*(code *)PTR__objc_release_02578630)(local_108);
  }
  local_71 = (char)local_11c;
  if (local_71 == '\x02') {
    local_134 = 1;
  }
  else {
    local_134 = local_11c & 0xff;
  }
  local_78 = (byte)local_134 & 1;
  if ((local_134 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02223100(unaff_x20,local_130,0);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222cc0(0x3ff0000000000000,unaff_x20,local_130);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    uVar4 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    plVar3 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
    _swift_beginAccess();
    lVar5 = *plVar3;
    _swift_endAccess(auStack_90);
    lVar5 = lVar5 + -2;
    FUN_02223100(lVar5,uVar4,local_130,lVar5 == 0);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    plVar3 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineView);
    _swift_beginAccess(plVar3,auStack_a8,0x20,0);
    if (*plVar3 == 0) {
      _swift_endAccess(auStack_a8);
    }
    else {
      lVar5 = *plVar3;
      (*(code *)PTR__objc_retain_02578638)();
      _swift_endAccess(auStack_a8);
      FUN_02223100(lVar5,local_130,0);
      (*(code *)PTR__objc_release_02578630)(lVar5);
    }
    plVar3 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView);
    _swift_beginAccess(plVar3,auStack_c0,0x20,0);
    if (*plVar3 == 0) {
      _swift_endAccess(auStack_c0);
    }
    else {
      lVar5 = *plVar3;
      (*(code *)PTR__objc_retain_02578638)();
      _swift_endAccess(auStack_c0);
      FUN_02223100(lVar5,local_130,0);
      (*(code *)PTR__objc_release_02578630)(lVar5);
    }
    FUN_021aa990();
  }
  return;
}

