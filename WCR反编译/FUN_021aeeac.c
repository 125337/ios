// FUN_021aeeac @ 021aeeac

/* WARNING: Removing unreachable block (ram,0x021aef8c) */

void FUN_021aeeac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong unaff_x20;
  ulong local_390;
  ulong local_330;
  ulong local_2c8;
  ulong local_288;
  ulong local_238;
  long local_1d0;
  ulong local_1a0;
  uint local_188;
  uint local_170;
  undefined8 local_160;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  ulong local_70;
  ulong local_68;
  undefined1 auStack_60 [24];
  ulong local_48;
  long local_40;
  ulong local_38;
  
  local_68 = 0;
  local_70 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  uVar3 = *(ulong *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = uVar3;
  FUN_02223880(uVar3,local_160);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_retain_02578638)(uVar4);
  local_40 = 0;
  local_48 = uVar4;
  local_38 = uVar4;
  if (uVar4 == 0) {
    FUN_021c87dc(&local_48);
    local_170 = 1;
  }
  else {
    FUN_021c890c(&local_48,&local_140);
    lVar9 = local_40;
    if (local_40 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_140);
      FUN_021c8798(&local_48);
      local_170 = 0;
    }
    else {
      FUN_021c7714(0);
      uVar5 = local_140;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_140,lVar9);
      local_170 = (uint)uVar5;
      (*(code *)PTR__objc_release_02578630)(lVar9);
      (*(code *)PTR__objc_release_02578630)(local_140);
      FUN_021c87dc(&local_48);
    }
  }
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  local_1a0 = local_38;
  if ((local_170 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    if (local_1a0 == 0) {
      local_1a0 = 0;
    }
    else {
    }
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::secureCanvas);
    _swift_beginAccess(plVar1,auStack_60,0x20,0);
    local_1d0 = *plVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_60);
    if (local_1d0 == 0) {
      local_1d0 = 0;
    }
    uVar4 = local_1a0;
    __ss3eeeoiySbyXlSg_ABtF();
    local_188 = (uint)uVar4;
    _swift_unknownObjectRelease(local_1d0);
    _swift_unknownObjectRelease(local_1a0);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    local_188 = 1;
  }
  if ((local_188 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    uVar4 = unaff_x20;
    (*(code *)PTR__objc_release_02578630)(local_38);
    local_38 = uVar4;
  }
  uVar4 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  if (uVar4 == 0) {
    FUN_021c87dc(&local_38);
  }
  else {
    local_68 = uVar4;
    uVar3 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar4;
    if ((param_5 & 1) != 0) {
      FUN_021afab8();
      if (uVar3 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        FUN_021c87dc(&local_38);
        return;
      }
      local_f0 = uVar3;
      FUN_02222060(uVar4,local_160);
      local_130 = param_1;
      local_128 = param_2;
      local_120 = param_3;
      local_118 = param_4;
      local_110 = param_1;
      local_108 = param_2;
      local_100 = param_3;
      local_f8 = param_4;
      FUN_022230c0(param_1,param_2,param_3,param_4,uVar3,local_160);
      uVar5 = 0;
      FUN_021c880c(0);
      lVar6 = 2;
      __ss27_allocateUninitializedArrayySayxG_BptBwlF(2,uVar5);
      *(undefined8 *)(lVar6 + 0x20) = 2;
      *(undefined8 *)(lVar6 + 0x28) = 0x10;
      FUN_021b0268();
      lVar9 = lVar6;
      FUN_021c88a0();
      __ss10SetAlgebraPs7ElementQz012ArrayLiteralC0RtzrlE05arrayE0xAFd_tcfC
                (&local_138,lVar6,uVar5,lVar9);
      FUN_02222d20(uVar3,local_160,local_138);
      local_238 = uVar3;
      FUN_02223880(uVar3,local_160);
      _objc_retainAutoreleasedReturnValue();
      if (local_238 == 0) {
        local_238 = 0;
      }
      (*(code *)PTR__objc_retain_02578638)(uVar4);
      uVar7 = local_238;
      __ss3neeoiySbyXlSg_ABtF(local_238,uVar4);
      _swift_unknownObjectRelease(uVar4);
      _swift_unknownObjectRelease(local_238);
      if ((uVar7 & 1) != 0) {
        FUN_02221e40(uVar4,local_160,uVar3);
      }
      (*(code *)PTR__objc_retain_02578638)(uVar3);
      uVar7 = local_70;
      local_70 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    puVar2 = (ulong *)(unaff_x20 + WCRSuperFloatBallWindow::menuBackdropView);
    _swift_beginAccess(puVar2,auStack_88,0x20,0);
    uVar3 = *puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_88);
    if (uVar3 != 0) {
      local_288 = uVar3;
      local_e8 = uVar3;
      FUN_02223880(uVar3,local_160);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_70;
      if (local_288 == 0) {
        local_288 = 0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = local_288;
      __ss3neeoiySbyXlSg_ABtF(local_288,uVar7);
      _swift_unknownObjectRelease(uVar7);
      _swift_unknownObjectRelease(local_288);
      uVar7 = local_70;
      if ((uVar8 & 1) == 0) {
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        FUN_02222860(uVar7,local_160,uVar3,0);
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    uVar3 = *(ulong *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    local_2c8 = uVar3;
    FUN_02223880(uVar3,local_160);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_70;
    if (local_2c8 == 0) {
      local_2c8 = 0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    uVar7 = local_2c8;
    __ss3neeoiySbyXlSg_ABtF(local_2c8,uVar3);
    _swift_unknownObjectRelease(uVar3);
    _swift_unknownObjectRelease(local_2c8);
    uVar3 = local_70;
    if ((uVar7 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02221e40(uVar3,local_160,uVar5);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    puVar2 = (ulong *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView);
    _swift_beginAccess(puVar2,auStack_a0,0x20,0);
    uVar3 = *puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_a0);
    if (uVar3 != 0) {
      local_330 = uVar3;
      local_e0 = uVar3;
      FUN_02223880(uVar3,local_160);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_70;
      if (local_330 == 0) {
        local_330 = 0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = local_330;
      __ss3neeoiySbyXlSg_ABtF(local_330,uVar7);
      _swift_unknownObjectRelease(uVar7);
      _swift_unknownObjectRelease(local_330);
      uVar7 = local_70;
      if ((uVar8 & 1) == 0) {
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        FUN_02221e40(uVar7,local_160,uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    puVar2 = (ulong *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
    _swift_beginAccess(puVar2,auStack_b8,0x20,0);
    uVar3 = *puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_b8);
    if (uVar3 != 0) {
      local_d8 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_390 = uVar3;
      FUN_02223880(uVar3,local_160);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar7 = local_70;
      if (local_390 == 0) {
        local_390 = 0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = local_390;
      __ss3neeoiySbyXlSg_ABtF(local_390,uVar7);
      _swift_unknownObjectRelease(uVar7);
      _swift_unknownObjectRelease(local_390);
      uVar7 = local_70;
      if ((uVar8 & 1) == 0) {
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        FUN_02221e40(uVar7,local_160,uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    if ((param_5 & 1) == 0) {
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::secureCanvas);
      _swift_beginAccess(plVar1,auStack_d0,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_d0);
      }
      else {
        lVar9 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_d0);
        FUN_02222b40(lVar9,local_160);
        (*(code *)PTR__objc_release_02578630)(lVar9);
      }
    }
    (*(code *)PTR__objc_release_02578630)(local_70);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    FUN_021c87dc(&local_38);
  }
  return;
}

