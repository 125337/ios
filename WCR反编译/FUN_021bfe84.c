// FUN_021bfe84 @ 021bfe84

undefined8 FUN_021bfe84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  double *pdVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 local_348;
  double local_300;
  double local_2a8;
  double local_250;
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined1 auStack_198 [8];
  undefined1 local_190 [8];
  double local_188;
  double local_180;
  undefined8 local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  double local_150;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  undefined8 local_118;
  double local_110;
  undefined1 auStack_108 [24];
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [24];
  double local_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  double local_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined8 local_48;
  undefined8 local_40;
  
  local_80 = 0.0;
  local_b8 = 0.0;
  local_110 = 0.0;
  local_140 = 0.0;
  local_168 = 0.0;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  local_48 = param_1;
  local_40 = param_2;
  _swift_beginAccess(plVar1,auStack_60,0x20,0);
  lVar5 = *plVar1;
  _swift_endAccess(auStack_60);
  if (lVar5 == 1) {
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineWidth);
    _swift_beginAccess(pdVar2,auStack_218,0x20,0);
    local_250 = *pdVar2;
    _swift_endAccess(auStack_218);
  }
  else {
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::ballSize);
    _swift_beginAccess(pdVar2,auStack_78,0x20,0);
    local_250 = *pdVar2;
    _swift_endAccess(auStack_78);
  }
  local_250 = local_250 * 0.5;
  dVar6 = 0.5;
  local_80 = local_250;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  _swift_beginAccess(plVar1,auStack_98,0x20,0);
  lVar5 = *plVar1;
  _swift_endAccess(auStack_98);
  if (lVar5 == 1) {
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
    _swift_beginAccess(pdVar2,auStack_200,0x20,0);
    local_2a8 = *pdVar2;
    _swift_endAccess(auStack_200);
    local_2a8 = local_2a8 + local_250;
    dVar6 = local_250;
  }
  else {
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
    _swift_beginAccess(pdVar2,auStack_b0,0x20,0);
    local_2a8 = *pdVar2;
    _swift_endAccess(auStack_b0);
  }
  local_b8 = local_2a8;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  local_300 = local_2a8;
  _swift_beginAccess(plVar1,auStack_d0,0x20,0);
  lVar5 = *plVar1;
  _swift_endAccess(auStack_d0);
  if (lVar5 == 1) {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222060(unaff_x20,local_348);
    local_1d0 = local_300;
    local_1c8 = dVar6;
    local_1c0 = param_3;
    local_1b8 = param_4;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    FUN_021b0958(local_300,dVar6,param_3);
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
    puVar4 = auStack_1e8;
    _swift_beginAccess(pdVar2,puVar4,0x20,0);
    dVar6 = *pdVar2;
    _swift_endAccess();
    local_300 = (local_300 - dVar6) - local_250;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222060(unaff_x20,local_348);
    local_f0 = local_300;
    local_e8 = dVar6;
    local_e0 = param_3;
    local_d8 = param_4;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    FUN_021b0958(local_300,dVar6,param_3);
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
    puVar4 = auStack_108;
    _swift_beginAccess(pdVar2,puVar4,0x20,0);
    dVar6 = *pdVar2;
    _swift_endAccess();
    local_300 = local_300 - dVar6;
  }
  local_110 = local_300;
  local_130 = local_2a8;
  dVar9 = local_300;
  local_128 = param_1;
  FUN_021c8058();
  puVar3 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  __ss3maxyxx_xtSLRzlF(&local_128,&local_130);
  local_138 = local_300;
  __ss3minyxx_xtSLRzlF(&local_118,auStack_120,&local_138,puVar3,puVar4);
  local_48 = local_118;
  uVar8 = 0x4044000000000000;
  dVar7 = local_250 + 40.0;
  dVar6 = dVar7;
  local_140 = dVar7;
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02222060(unaff_x20,local_348);
  local_160 = dVar6;
  local_158 = uVar8;
  local_150 = dVar9;
  local_148 = param_4;
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_021b0994(dVar6,uVar8,dVar9,param_4);
  puVar3 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  uVar8 = 0x4044000000000000;
  dVar6 = (dVar6 - local_250) - 40.0;
  local_168 = dVar6;
  if (dVar6 < dVar7) {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222060(unaff_x20,local_348);
    local_188 = dVar7;
    local_180 = dVar6;
    local_178 = uVar8;
    local_170 = local_250;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    FUN_021b1fc4(dVar7,dVar6,uVar8,local_250);
  }
  else {
    local_1a8 = dVar7;
    local_1a0 = param_2;
    __ss3maxyxx_xtSLRzlF(&local_1a0,&local_1a8,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar4);
    local_1b0 = dVar6;
    __ss3minyxx_xtSLRzlF(local_190,auStack_198,&local_1b0,puVar3,puVar4);
  }
  return local_118;
}

