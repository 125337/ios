// FUN_021aa990 @ 021aa990

void FUN_021aa990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  double *pdVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long unaff_x20;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 local_210;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  double local_1a8;
  undefined1 auStack_1a0 [24];
  undefined8 local_188;
  undefined1 local_180 [8];
  undefined1 auStack_178 [24];
  undefined8 local_160;
  undefined8 local_158;
  undefined1 auStack_150 [24];
  byte local_138;
  undefined1 auStack_130 [24];
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  
  local_138 = 0;
  local_158 = 0;
  local_160 = 0;
  FUN_0219f880();
  lVar8 = WCRSuperFloatBallWindow::shortLineHitView;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_40);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + lVar8);
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_40);
    FUN_02222b40(uVar7,local_210);
    (*(code *)PTR__objc_release_02578630)(uVar7);
  }
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView);
  _swift_beginAccess(puVar2,auStack_58,0x21);
  uVar7 = *puVar2;
  *puVar2 = 0;
  (*(code *)PTR__objc_release_02578630)(uVar7);
  _swift_endAccess(auStack_58);
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineView);
  _swift_beginAccess(plVar1,auStack_70,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_70);
  }
  else {
    lVar8 = *plVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_70);
    FUN_02222b40(lVar8,local_210);
    (*(code *)PTR__objc_release_02578630)(lVar8);
  }
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineView);
  _swift_beginAccess(puVar2,auStack_88,0x21);
  uVar7 = *puVar2;
  *puVar2 = 0;
  (*(code *)PTR__objc_release_02578630)(uVar7);
  _swift_endAccess(auStack_88);
  uVar7 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02223100(uVar7,local_210,0);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  uVar9 = *(ulong *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
  (*(code *)PTR__objc_retain_02578638)();
  pdVar3 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::ballAlpha);
  _swift_beginAccess(pdVar3,auStack_a0,0x20,0);
  dVar14 = *pdVar3;
  _swift_endAccess(auStack_a0);
  FUN_02222cc0(uVar9,local_210);
  (*(code *)PTR__objc_release_02578630)();
  FUN_021ad108();
  uVar6 = (uint)uVar9;
  if ((uVar9 & 1) == 0) {
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
    _swift_beginAccess(plVar1,auStack_b8,0x20,0);
    lVar8 = *plVar1;
    _swift_endAccess(auStack_b8);
    if (lVar8 == 2) {
      uVar7 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02223100(uVar7,local_210,1);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      uVar7 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_022220c0(uVar7,local_210);
      dVar16 = dVar14;
      local_f8 = dVar14;
      local_f0 = param_2;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_02222060(unaff_x20,local_210);
      local_118 = dVar16;
      local_110 = param_2;
      local_108 = param_3;
      local_100 = param_4;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      FUN_021b1f88(dVar16,param_2,param_3,param_4);
      lVar8 = unaff_x20 + WCRSuperFloatBallWindow::lastSideRight;
      _swift_beginAccess(lVar8,auStack_130,0x21,0);
      *(bool *)lVar8 = dVar16 < dVar14;
      _swift_endAccess(auStack_130);
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballAlpha);
      _swift_beginAccess();
      uVar15 = *puVar2;
      _swift_endAccess(auStack_d0);
      FUN_02222cc0(uVar15,uVar7,local_210);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      uVar7 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_021b39a0(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      pbVar4 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::autoSnapEnabled);
      _swift_beginAccess(pbVar4,auStack_e8,0x20,0);
      bVar5 = *pbVar4;
      _swift_endAccess(auStack_e8);
      if ((bVar5 & 1) != 0) {
        FUN_021b998c(0);
      }
    }
  }
  else {
    FUN_021b9908();
    local_138 = (byte)uVar6 & 1;
    pbVar4 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::lastSideRight);
    _swift_beginAccess();
    *pbVar4 = (byte)uVar6 & 1;
    _swift_endAccess(auStack_150);
    uVar10 = 0;
    FUN_021c7714();
    FUN_021b9938(0,0,0);
    puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_158 = uVar10;
    _objc_opt_self();
    FUN_022220e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_02222d60(uVar10,local_210);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    uVar7 = uVar10;
    FUN_022236a0(uVar10,local_210,1);
    FUN_021a087c();
    uVar12 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    local_160 = uVar7;
    (*(code *)PTR__objc_retain_02578638)();
    uVar15 = uVar12;
    FUN_02221fa0(uVar12,local_210);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar12);
    FUN_02222d60(uVar7,local_210,uVar15);
    (*(code *)PTR__objc_release_02578630)(uVar15);
    puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballAlpha);
    _swift_beginAccess();
    uVar15 = *puVar2;
    _swift_endAccess(auStack_178);
    FUN_02222cc0(uVar15,uVar7,local_210);
    uVar15 = uVar7;
    FUN_02222960(uVar7,local_210);
    _objc_retainAutoreleasedReturnValue();
    local_188 = 0x4008000000000000;
    pdVar3 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineWidth);
    puVar13 = auStack_1a0;
    _swift_beginAccess(pdVar3,puVar13,0x20,0);
    dVar14 = *pdVar3;
    _swift_endAccess(puVar13);
    uVar12 = 0x3fe0000000000000;
    local_1a8 = dVar14 * 0.5;
    FUN_021c8058();
    __ss3minyxx_xtSLRzlF
              (local_180,&local_188,&local_1a8,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar13);
    FUN_02222f40(uVar15,local_210);
    (*(code *)PTR__objc_release_02578630)(uVar15);
    FUN_022236a0(uVar7,local_210,0);
    uVar15 = uVar10;
    FUN_02221e40(uVar10,local_210,uVar7);
    FUN_021a3a44();
    FUN_02221e40();
    (*(code *)PTR__objc_release_02578630)(uVar15);
    (*(code *)PTR__objc_retain_02578638)(uVar10);
    puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView);
    _swift_beginAccess(puVar2,auStack_1c0,0x21,0);
    uVar15 = *puVar2;
    *puVar2 = uVar10;
    (*(code *)PTR__objc_release_02578630)(uVar15);
    _swift_endAccess(auStack_1c0);
    (*(code *)PTR__objc_retain_02578638)(uVar7);
    puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineView);
    _swift_beginAccess(puVar2,auStack_1d8,0x21,0);
    uVar15 = *puVar2;
    *puVar2 = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar15);
    _swift_endAccess(auStack_1d8);
    uVar15 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_022220c0(uVar15,local_210);
    (*(code *)PTR__objc_release_02578630)(uVar15);
    FUN_021b09d0(uVar12,uVar6 & 1);
    uVar15 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222cc0(DAT_02323db0,uVar15,local_210);
    (*(code *)PTR__objc_release_02578630)(uVar15);
    FUN_021b39a0(uVar10);
    FUN_021b998c(0);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar10);
  }
  FUN_021ad198();
  return;
}

