// FUN_021b159c @ 021b159c

/* WARNING: Removing unreachable block (ram,0x021b186c) */
/* WARNING: Removing unreachable block (ram,0x021b1758) */
/* WARNING: Removing unreachable block (ram,0x021b1a98) */

uint FUN_021b159c(double param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  bool bVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  double dVar12;
  double local_218;
  double local_1f0;
  uint local_1bc;
  uint local_184;
  long local_180;
  undefined8 local_178;
  long local_160;
  long local_140;
  long local_138;
  long local_100;
  undefined1 auStack_f8 [24];
  long local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  undefined1 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  long local_88;
  long local_80;
  undefined1 local_78;
  char *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long local_30;
  
  local_88 = 0;
  local_d0 = 0.0;
  pcVar4 = "ballAppearance";
  uVar11 = 0xe;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("ballAppearance",0xe,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapshot);
  _swift_beginAccess(puVar1,auStack_60,0x20,0);
  local_70 = pcVar4;
  local_68 = uVar11;
  __sSDyq_Sgxcig(auStack_48,&local_70,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_70);
  _swift_endAccess(auStack_60);
  if (local_30 == 0) {
    FUN_021c7fc0(auStack_48);
    local_140 = 0;
  }
  else {
    uVar11 = 0;
    FUN_021c80bc(0);
    plVar5 = &local_100;
    _swift_dynamicCast(plVar5,auStack_48,PTR___sypN_02578b08 + 8,uVar11,6);
    if (((ulong)plVar5 & 1) == 0) {
      local_138 = 0;
    }
    else {
      local_138 = local_100;
    }
    local_140 = local_138;
  }
  bVar3 = local_140 == 0;
  if (bVar3) {
    local_160 = 0;
  }
  else {
    local_160 = local_140;
    FUN_02222880(local_140,local_178);
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  local_80 = local_160;
  if (bVar3) {
    local_180 = 0;
  }
  else {
    local_180 = local_160;
  }
  local_88 = local_180;
  local_78 = bVar3;
  if (local_180 == 2) {
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::ballIconCornerPercent);
    _swift_beginAccess(pdVar2,auStack_f8,0x20,0);
    dVar12 = *pdVar2;
    _swift_endAccess(auStack_f8);
    local_184 = (uint)(95.0 <= dVar12);
  }
  else {
    plVar5 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
    _swift_beginAccess(plVar5,auStack_a0,0x20,0);
    lVar6 = *plVar5;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_a0);
    local_a8 = 0;
    local_b0 = lVar6;
    if (lVar6 == 0) {
      FUN_021c82dc(&local_b0);
      local_1bc = 1;
    }
    else {
      FUN_021c830c(&local_b0,&local_d8);
      if (local_a8 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
        FUN_021c8298(&local_b0);
        local_1bc = 0;
      }
      else {
        local_e0 = local_a8;
        __s8WCRefine22WCRSuperFloatPetPlayerCMa(0);
        uVar11 = local_d8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_d8,local_e0);
        local_1bc = (uint)uVar11;
        (*(code *)PTR__objc_release_02578630)(local_e0);
        (*(code *)PTR__objc_release_02578630)(local_d8);
        FUN_021c82dc(&local_b0);
      }
    }
    if ((local_1bc & 1) == 0) {
      local_184 = 0;
    }
    else {
      uVar7 = *(ulong *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = uVar7;
      FUN_022228e0(uVar7,local_178);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      if ((uVar8 & 1) == 0) {
        local_184 = 1;
      }
      else {
        lVar9 = *(long *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
        (*(code *)PTR__objc_retain_02578638)();
        lVar6 = lVar9;
        FUN_02221fa0(lVar9,local_178);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(lVar9);
        bVar3 = lVar6 == 0;
        local_b8 = lVar6;
        if (bVar3) {
          FUN_021c8208(&local_b8);
          local_1f0 = 0.0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          FUN_021c8208(&local_b8);
          lVar9 = lVar6;
          FUN_02221d00(lVar6,local_178);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(lVar6);
          _CGColorGetAlpha(lVar9);
          (*(code *)PTR__objc_release_02578630)(lVar9);
          local_1f0 = param_1;
        }
        local_c8 = local_1f0;
        if (bVar3) {
          local_218 = 0.0;
        }
        else {
          local_218 = local_1f0;
        }
        local_d0 = local_218;
        if (DAT_02323d38 < local_218) {
          local_184 = 1;
        }
        else {
          uVar10 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
          local_c0 = bVar3;
          (*(code *)PTR__objc_retain_02578638)();
          uVar11 = uVar10;
          FUN_022228e0(uVar10,local_178);
          (*(code *)PTR__objc_release_02578630)(uVar10);
          local_184 = (uint)uVar11 ^ 1;
        }
      }
    }
  }
  return local_184 & 1;
}

