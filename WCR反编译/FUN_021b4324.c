// FUN_021b4324 @ 021b4324

/* WARNING: Removing unreachable block (ram,0x021b45fc) */
/* WARNING: Removing unreachable block (ram,0x021b4540) */

void FUN_021b4324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  double dVar10;
  double dVar11;
  double local_3c8;
  double local_370;
  uint local_294;
  long local_270;
  undefined8 local_268;
  long local_250;
  long local_230;
  long local_228;
  long local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  double local_1a8;
  undefined1 auStack_1a0 [24];
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  byte local_e0;
  long local_d8;
  long local_d0;
  undefined1 auStack_c8 [24];
  undefined1 local_b0;
  long local_a8;
  long local_a0;
  undefined1 local_98;
  char *local_90;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long local_50;
  double local_48;
  undefined1 auStack_40 [24];
  
  local_48 = 0.0;
  local_a8 = 0;
  local_b0 = 0;
  local_e0 = 0;
  local_e8 = 0.0;
  local_1a8 = 0.0;
  local_1b0 = 0;
  pdVar1 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::ballSize);
  _swift_beginAccess();
  local_3c8 = *pdVar1;
  _swift_endAccess(auStack_40);
  pcVar5 = "ballAppearance";
  uVar9 = 0xe;
  dVar10 = local_3c8;
  local_48 = local_3c8;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("ballAppearance",0xe,1);
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapshot);
  _swift_beginAccess(puVar2,auStack_80,0x20,0);
  local_90 = pcVar5;
  local_88 = uVar9;
  __sSDyq_Sgxcig(auStack_68,&local_90,*puVar2,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_90);
  _swift_endAccess(auStack_80);
  if (local_50 == 0) {
    FUN_021c7fc0(auStack_68);
    local_230 = 0;
  }
  else {
    uVar9 = 0;
    FUN_021c80bc(0);
    plVar6 = &local_1c8;
    _swift_dynamicCast(plVar6,auStack_68,PTR___sypN_02578b08 + 8,uVar9,6);
    if (((ulong)plVar6 & 1) == 0) {
      local_228 = 0;
    }
    else {
      local_228 = local_1c8;
    }
    local_230 = local_228;
  }
  bVar4 = local_230 == 0;
  if (bVar4) {
    local_250 = 0;
  }
  else {
    local_250 = local_230;
    FUN_02222880(local_230,local_268);
    (*(code *)PTR__objc_release_02578630)(local_230);
  }
  local_a0 = local_250;
  if (bVar4) {
    local_270 = 0;
  }
  else {
    local_270 = local_250;
  }
  local_a8 = local_270;
  local_b0 = local_270 == 2;
  plVar6 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
  local_98 = bVar4;
  _swift_beginAccess(plVar6,auStack_c8,0x20,0);
  lVar7 = *plVar6;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_c8);
  local_d0 = 0;
  local_d8 = lVar7;
  if (lVar7 == 0) {
    FUN_021c82dc(&local_d8);
    local_294 = 1;
  }
  else {
    FUN_021c830c(&local_d8,&local_1b8);
    if (local_d0 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_1b8);
      FUN_021c8298(&local_d8);
      local_294 = 0;
    }
    else {
      local_1c0 = local_d0;
      __s8WCRefine22WCRSuperFloatPetPlayerCMa(0);
      uVar9 = local_1b8;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_1b8,local_1c0);
      local_294 = (uint)uVar9;
      (*(code *)PTR__objc_release_02578630)(local_1c0);
      (*(code *)PTR__objc_release_02578630)(local_1b8);
      FUN_021c82dc(&local_d8);
    }
  }
  uVar3 = local_294 ^ 1;
  local_e0 = (byte)uVar3 & 1;
  if (local_270 == 2) {
    uVar9 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
    (*(code *)PTR__objc_retain_02578638)();
    uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222060(uVar8,local_268);
    local_168 = dVar10;
    local_160 = param_2;
    local_158 = param_3;
    local_150 = param_4;
    (*(code *)PTR__objc_release_02578630)(uVar8);
    local_188 = dVar10;
    local_180 = param_2;
    local_178 = param_3;
    local_170 = param_4;
    FUN_022230c0(dVar10,param_2,param_3,param_4,uVar9,local_268);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    pdVar1 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::ballIconCornerPercent);
    _swift_beginAccess(pdVar1,auStack_1a0,0x20,0);
    dVar10 = *pdVar1;
    _swift_endAccess(auStack_1a0);
    dVar10 = local_3c8 * 0.5 * (dVar10 / 100.0);
    bVar4 = 0.5 < dVar10;
    uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
    local_1b0 = bVar4;
    local_1a8 = dVar10;
    (*(code *)PTR__objc_retain_02578638)();
    uVar9 = uVar8;
    FUN_02222960(uVar8,local_268);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar8);
    FUN_02222f40(dVar10,uVar9,local_268);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222e60(uVar9,local_268,bVar4);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    uVar9 = uVar8;
    FUN_02222960(uVar8,local_268);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar8);
    FUN_02222f40(dVar10,uVar9,local_268);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222e60(uVar9,local_268,bVar4);
    (*(code *)PTR__objc_release_02578630)(uVar9);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    uVar9 = uVar8;
    FUN_02222960(uVar8,local_268);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar8);
    FUN_02222f40(local_3c8 / 2.0,uVar9,local_268);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222e60(uVar9,local_268,0);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    if ((uVar3 & 1) == 0) {
      local_370 = DAT_02323c70;
    }
    else {
      local_370 = DAT_02323d50;
    }
    local_3c8 = local_3c8 * local_370;
    uVar9 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
    dVar10 = local_3c8;
    local_e8 = local_3c8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222060(uVar8,local_268);
    local_108 = dVar10;
    local_100 = local_370;
    local_f8 = param_3;
    local_f0 = param_4;
    (*(code *)PTR__objc_release_02578630)(uVar8);
    dVar11 = local_3c8;
    FUN_021b4eac();
    local_128 = local_3c8;
    local_120 = dVar11;
    local_118 = dVar10;
    local_110 = local_370;
    FUN_022230c0(uVar9,local_268);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
    (*(code *)PTR__objc_retain_02578638)();
    uVar9 = uVar8;
    FUN_02222960(uVar8,local_268);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar8);
    if ((uVar3 & 1) == 0) {
      uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02222060(uVar8,local_268);
      local_148 = local_3c8;
      local_140 = dVar11;
      local_138 = dVar10;
      local_130 = local_370;
      (*(code *)PTR__objc_release_02578630)(uVar8);
      FUN_021b0958(local_3c8,dVar11,dVar10,local_370);
      local_3c8 = local_3c8 / 2.0;
    }
    else {
      local_3c8 = 0.0;
    }
    FUN_02222f40(local_3c8,uVar9,local_268);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222e60(uVar9,local_268,local_294 & 1);
    (*(code *)PTR__objc_release_02578630)(uVar9);
  }
  return;
}

