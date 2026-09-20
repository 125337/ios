// FUN_021afab8 @ 021afab8

/* WARNING: Removing unreachable block (ram,0x021afe3c) */
/* WARNING: Removing unreachable block (ram,0x021b01e0) */

long FUN_021afab8(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  char *pcVar9;
  char **ppcVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  uint local_20c;
  undefined8 local_1a0;
  long local_158;
  char *local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_98 = 0;
  local_f8 = 0;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::secureCanvas);
  _swift_beginAccess(plVar1,auStack_50,0x20);
  local_158 = *plVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_50);
  if (local_158 == 0) {
    uVar3 = 0;
    FUN_021c8948();
    FUN_021b01e4(0,0,0x4059000000000000,0x4044000000000000);
    local_58 = uVar3;
    FUN_02223400();
    FUN_02222980(uVar3,local_1a0);
    local_60 = 0;
    (*(code *)PTR__objc_retain_02578638)(uVar3);
    uVar13 = uVar3;
    FUN_02223840(uVar3,local_1a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar4 = 0;
    FUN_021c7714();
    uVar5 = uVar13;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    (*(code *)PTR__objc_release_02578630)(uVar13);
    puVar6 = &DAT_028c6d88;
    local_78 = uVar5;
    FUN_021c77d4(&DAT_028c6d88,&DAT_0233a800);
    puVar7 = puVar6;
    FUN_021c83e4();
    __sSlss16IndexingIteratorVyxG0B0RtzrlE04makeB0ACyF(&local_70,puVar6);
    while( true ) {
      puVar12 = &DAT_0233a808;
      FUN_021c77d4(&DAT_028c6db0);
      __ss16IndexingIteratorV4next7ElementQzSgyF(&local_80);
      lVar11 = local_80;
      if (local_80 == 0) break;
      local_f8 = local_80;
      lVar8 = local_80;
      _swift_getObjectType();
      _swift_getObjCClassFromMetadata();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      (*(code *)PTR__objc_release_02578630)(lVar8);
      pcVar9 = "CanvasView";
      uVar13 = 10;
      local_100 = puVar12;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("CanvasView",10,1);
      local_118 = pcVar9;
      local_110 = uVar13;
      FUN_021c81a4();
      ppcVar10 = &local_118;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (&local_118,PTR___sSSN_02578938,PTR___sSSN_02578938,pcVar9);
      FUN_021c7f98(&local_118);
      FUN_021c7f98(local_108);
      if (((ulong)ppcVar10 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        lVar8 = local_60;
        local_60 = lVar11;
        (*(code *)PTR__objc_release_02578630)(lVar8);
        (*(code *)PTR__objc_release_02578630)(lVar11);
        break;
      }
      (*(code *)PTR__objc_release_02578630)(lVar11);
    }
    FUN_021c89a8(&local_70);
    lVar11 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = lVar11;
    local_88 = 0;
    if (lVar11 == 0) {
      FUN_021c87dc(&local_90);
      local_20c = 1;
    }
    else {
      FUN_021c890c(&local_90,&local_e8);
      if (local_88 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
        FUN_021c8798(&local_90);
        local_20c = 0;
      }
      else {
        local_f0 = local_88;
        uVar13 = local_e8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_e8,local_88);
        local_20c = (uint)uVar13;
        (*(code *)PTR__objc_release_02578630)(local_f0);
        (*(code *)PTR__objc_release_02578630)(local_e8);
        FUN_021c87dc(&local_90);
      }
    }
    if ((local_20c & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)(uVar3);
      uVar13 = uVar3;
      FUN_02223840(uVar3,local_1a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar5 = uVar13;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar13,uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar13);
      local_d8 = uVar5;
      __sSlsE5first7ElementQzSgvg(&local_e0,puVar6,puVar7);
      _swift_bridgeObjectRelease(uVar5);
      lVar11 = local_60;
      local_60 = local_e0;
      (*(code *)PTR__objc_release_02578630)(lVar11);
    }
    local_158 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    if (local_158 == 0) {
      FUN_021c87dc(&local_60);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_158 = 0;
    }
    else {
      local_98 = local_158;
      FUN_02222b40(local_158,local_1a0);
      lVar11 = local_158;
      FUN_02223840(local_158,local_1a0);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar11;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
      (*(code *)PTR__objc_release_02578630)(lVar11);
      local_a0 = lVar8;
      FUN_021c8348();
      __sSTsE7forEachyyy7ElementQzKXEKF(FUN_021b0238,0,puVar6,lVar8);
      FUN_021c83bc(&local_a0);
      FUN_022236a0(local_158,local_1a0,1);
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_022220e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_02222d60(local_158,local_1a0);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      FUN_02223320(local_158,local_1a0,0);
      FUN_02222e60(local_158,local_1a0,0);
      (*(code *)PTR__objc_retain_02578638)(uVar3);
      puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::secureField);
      _swift_beginAccess();
      uVar13 = *puVar2;
      *puVar2 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar13);
      _swift_endAccess(auStack_b8);
      (*(code *)PTR__objc_retain_02578638)(local_158);
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::secureCanvas);
      _swift_beginAccess(plVar1,auStack_d0,0x21,0);
      lVar11 = *plVar1;
      *plVar1 = local_158;
      (*(code *)PTR__objc_release_02578630)(lVar11);
      _swift_endAccess(auStack_d0);
      FUN_021c87dc(&local_60);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  return local_158;
}

