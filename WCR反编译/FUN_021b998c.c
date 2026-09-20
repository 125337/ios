// FUN_021b998c @ 021b998c

void FUN_021b998c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  long *plVar1;
  byte *pbVar2;
  double *pdVar3;
  byte bVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *aBlock;
  undefined *puVar13;
  void *aBlock_00;
  long lVar14;
  long unaff_x20;
  double dVar15;
  double dVar16;
  double local_358;
  double local_2f0;
  undefined8 local_270;
  uint local_240;
  undefined1 auStack_218 [24];
  double local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 auStack_1e0 [24];
  double local_1c8;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  code *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  code *local_120;
  undefined *local_118;
  undefined8 local_110;
  code *local_108;
  undefined *local_100;
  code *local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 auStack_98 [24];
  byte local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  undefined1 auStack_48 [24];
  
  local_80 = 0;
  local_a8 = 0.0;
  local_a0 = 0.0;
  local_f8 = (code *)0x0;
  local_f0 = (undefined *)0x0;
  local_108 = (code *)0x0;
  local_100 = (undefined *)0x0;
  local_1c8 = 0.0;
  FUN_021bc6d8();
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  puVar6 = auStack_48;
  _swift_beginAccess(plVar1,puVar6,0x20,0);
  lVar14 = *plVar1;
  _swift_endAccess();
  local_240 = (uint)puVar6;
  if (lVar14 == 1) {
    FUN_021b9908(0);
    dVar16 = param_1;
    param_1 = param_2;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_022220c0(uVar7,local_270);
    dVar16 = param_1;
    local_58 = param_1;
    local_50 = param_2;
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222060(unaff_x20,local_270);
    local_78 = dVar16;
    local_70 = param_2;
    local_68 = param_3;
    local_60 = param_4;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    FUN_021b1f88(dVar16,param_2);
    local_240 = (uint)(dVar16 <= param_1);
  }
  bVar4 = (byte)local_240;
  local_80 = bVar4 & 1;
  pbVar2 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::lastSideRight);
  _swift_beginAccess(pbVar2,auStack_98,0x21);
  *pbVar2 = bVar4 & 1;
  _swift_endAccess(auStack_98);
  uVar7 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_022220c0(uVar7,local_270);
  dVar15 = param_1;
  local_b8 = dVar16;
  local_b0 = param_1;
  (*(code *)PTR__objc_release_02578630)(uVar7);
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  local_358 = param_1;
  local_a8 = dVar16;
  local_a0 = param_1;
  _swift_beginAccess(plVar1,auStack_d0,0x20,0);
  lVar14 = *plVar1;
  _swift_endAccess(auStack_d0);
  if (lVar14 == 1) {
    pdVar3 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineWidth);
    _swift_beginAccess(pdVar3,auStack_1c0,0x20,0);
    local_2f0 = *pdVar3;
    _swift_endAccess(auStack_1c0);
    uVar7 = 0x3fe0000000000000;
    local_2f0 = local_2f0 * 0.5;
    local_1c8 = local_2f0;
    if ((local_240 & 1) == 0) {
      pdVar3 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
      _swift_beginAccess(pdVar3,auStack_1e0,0x20,0);
      dVar16 = *pdVar3;
      _swift_endAccess(auStack_1e0);
      local_2f0 = dVar16 + local_2f0;
    }
    else {
      dVar16 = local_2f0;
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_02222060(unaff_x20,local_270);
      local_200 = dVar16;
      local_1f8 = uVar7;
      local_1f0 = param_3;
      local_1e8 = param_4;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      FUN_021b0958(dVar16,uVar7,param_3,param_4);
      pdVar3 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
      _swift_beginAccess(pdVar3,auStack_218,0x20,0);
      dVar15 = *pdVar3;
      _swift_endAccess(auStack_218);
      local_2f0 = (dVar16 - dVar15) - local_2f0;
    }
    local_a8 = local_2f0;
  }
  else {
    if ((local_240 & 1) == 0) {
      pdVar3 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
      _swift_beginAccess(pdVar3,auStack_e8,0x20,0);
      local_358 = *pdVar3;
      _swift_endAccess(auStack_e8);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_02222060(unaff_x20,local_270);
      local_190 = local_358;
      local_188 = dVar15;
      local_180 = param_3;
      local_178 = param_4;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      FUN_021b0958(local_358,dVar15,param_3,param_4);
      pdVar3 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
      _swift_beginAccess(pdVar3,auStack_1a8,0x20,0);
      dVar16 = *pdVar3;
      _swift_endAccess(auStack_1a8);
      local_358 = local_358 - dVar16;
    }
    local_a8 = local_358;
  }
  dVar16 = local_a8;
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar8 = &DAT_0258d740;
  _swift_allocObject(&DAT_0258d740,0x29);
  *(long *)(puVar8 + 0x10) = unaff_x20;
  *(double *)(puVar8 + 0x18) = dVar16;
  *(double *)(puVar8 + 0x20) = param_1;
  puVar8[0x28] = bVar4 & 1;
  local_f8 = FUN_021c98a4;
  local_f0 = puVar8;
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar9 = &DAT_0258d768;
  _swift_allocObject(&DAT_0258d768,0x18,7);
  *(long *)(puVar9 + 0x10) = unaff_x20;
  local_108 = FUN_021c9900;
  local_100 = puVar9;
  if ((param_5 & 1) == 0) {
    FUN_021c3fcc(dVar16,param_1,unaff_x20,local_240 & 1);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    FUN_021c42cc(unaff_x20);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    puVar10 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_opt_self();
    uVar11 = 0;
    FUN_021c720c();
    uVar12 = 0;
    __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,uVar11);
    uVar7 = uVar12;
    FUN_021c72a0();
    __ss10SetAlgebraPs7ElementQz012ArrayLiteralC0RtzrlE05arrayE0xAFd_tcfC
              (&local_110,uVar12,uVar11,uVar7);
    _swift_retain(puVar8);
    puVar5 = PTR___NSConcreteStackBlock_02578660;
    local_120 = FUN_021c98a4;
    local_140 = PTR___NSConcreteStackBlock_02578660;
    local_138 = 0x42000000;
    local_134 = 0;
    local_130 = FUN_021ae198;
    local_128 = &DAT_0258d780;
    local_118 = puVar8;
    aBlock = __Block_copy(&local_140);
    _swift_release(local_118);
    _swift_retain(puVar9);
    puVar13 = &DAT_0258d7b8;
    _swift_allocObject(&DAT_0258d7b8,0x20,7);
    *(code **)(puVar13 + 0x10) = FUN_021c9900;
    *(undefined **)(puVar13 + 0x18) = puVar9;
    local_150 = FUN_021c99a0;
    local_170 = puVar5;
    local_168 = 0x42000000;
    local_164 = 0;
    local_160 = FUN_021ae4cc;
    local_158 = &DAT_0258d7d0;
    local_148 = puVar13;
    aBlock_00 = __Block_copy(&local_170);
    _swift_release(local_148);
    FUN_02221f20(0x3fd0000000000000,0,0x3feb333333333333,DAT_02324020,puVar10,local_270,local_110,
                 aBlock,aBlock_00);
    __Block_release(aBlock_00);
    __Block_release(aBlock);
  }
  _swift_release(puVar9);
  _swift_release(puVar8);
  return;
}

