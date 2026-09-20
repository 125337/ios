// FUN_021da8d4 @ 021da8d4

/* WARNING: Removing unreachable block (ram,0x021db118) */
/* WARNING: Removing unreachable block (ram,0x021db134) */
/* WARNING: Removing unreachable block (ram,0x021db2cc) */
/* WARNING: Removing unreachable block (ram,0x021dad50) */
/* WARNING: Removing unreachable block (ram,0x021db55c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_021da8d4(ulong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char **ppcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 local_520;
  undefined4 local_50c;
  long local_4f8;
  long local_4e0;
  long local_4c0;
  long local_4b8;
  uint local_484;
  uint local_474;
  long local_460;
  long local_458;
  uint local_414;
  long local_3f8;
  long local_3f0;
  long local_358;
  long local_340;
  long local_320;
  long local_318;
  undefined8 local_280;
  long local_248;
  undefined1 auStack_240 [32];
  long local_220;
  char local_211;
  long local_210;
  char local_201;
  char *local_200;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  long local_1c0;
  char local_1b2;
  undefined1 local_1b1;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  long lStack_198;
  char *local_190;
  undefined8 local_188;
  undefined *local_178;
  long local_170;
  undefined1 auStack_168 [24];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 auStack_128 [24];
  long local_110;
  long local_108;
  undefined1 local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  long local_b8;
  ulong local_b0;
  long local_a8 [5];
  undefined1 local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  long local_38;
  
  local_a8[3] = 0;
  local_b0 = 0;
  local_110 = 0;
  uVar3 = param_1;
  FUN_021cf8f4();
  if ((uVar3 & 1) != 0) {
    uVar3 = param_1;
    (*(code *)PTR__objc_retain_02578638)();
    FUN_021d0384();
    FUN_02222d60(param_1,local_280);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_retain_02578638)(param_1);
    uVar3 = param_1;
    FUN_02222960(param_1,local_280);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_1);
    FUN_02222da0(0,uVar3,local_280);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_retain_02578638)(param_1);
    uVar3 = param_1;
    FUN_02222960(param_1,local_280);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_1);
    FUN_02223460(0,uVar3,local_280);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = param_1;
    FUN_02223ac0(param_1,local_280,0x77636963);
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_022220e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_02222d60(uVar3,local_280);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      uVar6 = uVar3;
      FUN_02222960(uVar3,local_280);
      _objc_retainAutoreleasedReturnValue();
      FUN_02222da0(0);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = uVar3;
      FUN_021e34b8();
      puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_022220e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_02222d60(uVar6,local_280);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    FUN_021e3da4(param_1);
    return;
  }
  uVar3 = param_1;
  FUN_02223ac0(param_1,local_280,0x77636963);
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) goto LAB_021db3b8;
  pcVar4 = "fanType";
  uVar12 = 7;
  local_b0 = uVar3;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("fanType",7,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_e8,0x20,0);
  local_f8 = pcVar4;
  local_f0 = uVar12;
  __sSDyq_Sgxcig(auStack_d0,&local_f8,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_f8);
  _swift_endAccess(auStack_e8);
  if (local_b8 == 0) {
    FUN_021c7fc0(auStack_d0);
    local_320 = 0;
  }
  else {
    uVar12 = 0;
    FUN_021c80bc(0);
    plVar5 = &local_248;
    _swift_dynamicCast(plVar5,auStack_d0,PTR___sypN_02578b08 + 8,uVar12,6);
    if (((ulong)plVar5 & 1) == 0) {
      local_318 = 0;
    }
    else {
      local_318 = local_248;
    }
    local_320 = local_318;
  }
  bVar2 = local_320 == 0;
  if (bVar2) {
    local_340 = 0;
  }
  else {
    local_340 = local_320;
    FUN_02222880(local_320,local_280);
    (*(code *)PTR__objc_release_02578630)(local_320);
  }
  local_108 = local_340;
  if (bVar2) {
    local_358 = 0;
  }
  else {
    local_358 = local_340;
  }
  local_110 = local_358;
  local_100 = bVar2;
  (*(code *)PTR__objc_retain_02578638)(param_1);
  uVar6 = param_1;
  FUN_022239a0(param_1,local_280);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((long)uVar6 < 0) {
LAB_021db35c:
    FUN_021df2c0(uVar3,local_358);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)(param_1);
    uVar6 = param_1;
    FUN_022239a0(param_1,local_280);
    (*(code *)PTR__objc_release_02578630)(param_1);
    plVar5 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::actions);
    _swift_beginAccess(plVar5,auStack_128,0x20,0);
    lVar7 = *plVar5;
    _swift_bridgeObjectRetain();
    _swift_endAccess(auStack_128);
    uVar12 = 0;
    FUN_021c9d78();
    lVar8 = lVar7;
    __sSa5countSivg();
    _swift_bridgeObjectRelease(lVar7);
    if (lVar8 <= (long)uVar6) goto LAB_021db35c;
    (*(code *)PTR__objc_retain_02578638)(param_1);
    uVar6 = param_1;
    FUN_022239a0(param_1,local_280);
    (*(code *)PTR__objc_release_02578630)(param_1);
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actions);
    _swift_beginAccess(puVar1,auStack_168,0x20,0);
    __sSayxSicig(&local_170,uVar6,*puVar1,uVar12);
    _swift_endAccess(auStack_168);
    pcVar4 = "_wcrAvatar";
    uVar12 = 10;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("_wcrAvatar",10,1);
    ppcVar9 = &local_190;
    local_178 = PTR___sSSN_02578938;
    local_190 = pcVar4;
    local_188 = uVar12;
    FUN_021cdd90();
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    lVar8 = local_170;
    FUN_02221d60(local_170,local_280);
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(ppcVar9);
    (*(code *)PTR__objc_release_02578630)(local_170);
    if (lVar8 == 0) {
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = 0;
      lStack_198 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF();
      _swift_unknownObjectRelease(lVar8);
      FUN_021e29f0(auStack_240,&local_1b0);
    }
    uStack_148 = uStack_1a8;
    local_150 = local_1b0;
    local_140 = local_1a0;
    if (lStack_198 == 0) {
      FUN_021c7ff8(&local_190);
      FUN_021c7fc0(&local_150);
      local_3f8 = 0;
    }
    else {
      uVar12 = 0;
      FUN_021c80bc(0);
      plVar5 = &local_220;
      _swift_dynamicCast(plVar5,&local_150,PTR___sypN_02578b08 + 8,uVar12,6);
      if (((ulong)plVar5 & 1) == 0) {
        local_3f0 = 0;
      }
      else {
        local_3f0 = local_220;
      }
      FUN_021c7ff8(&local_190);
      local_3f8 = local_3f0;
    }
    if (local_3f8 == 0) {
      local_414 = 2;
    }
    else {
      lVar8 = local_3f8;
      FUN_02222040(local_3f8,local_280);
      local_414 = (uint)lVar8;
      (*(code *)PTR__objc_release_02578630)(local_3f8);
    }
    local_1b2 = (char)local_414;
    local_1b1 = 1;
    if (local_1b2 != '\x02') {
      local_211 = local_1b2;
    }
    if (local_1b2 == '\x02' || (local_414 & 1) != 1) goto LAB_021db35c;
    pcVar4 = "menuAvatarEdgeFill";
    uVar12 = 0x12;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("menuAvatarEdgeFill",0x12,1);
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
    _swift_beginAccess(puVar1,auStack_1f0,0x20,0);
    local_200 = pcVar4;
    local_1f8 = uVar12;
    __sSDyq_Sgxcig(auStack_1d8,&local_200,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                   PTR___sSSSHsWP_02578940);
    FUN_021c7f98(&local_200);
    _swift_endAccess(auStack_1f0);
    if (local_1c0 == 0) {
      FUN_021c7fc0(auStack_1d8);
      local_460 = 0;
    }
    else {
      uVar12 = 0;
      FUN_021c80bc(0);
      plVar5 = &local_210;
      _swift_dynamicCast(plVar5,auStack_1d8,PTR___sypN_02578b08 + 8,uVar12,6);
      if (((ulong)plVar5 & 1) == 0) {
        local_458 = 0;
      }
      else {
        local_458 = local_210;
      }
      local_460 = local_458;
    }
    if (local_460 == 0) {
      local_474 = 2;
    }
    else {
      lVar8 = local_460;
      FUN_02222040(local_460,local_280);
      local_474 = (uint)lVar8;
      (*(code *)PTR__objc_release_02578630)(local_460);
    }
    local_201 = (char)local_474;
    if (local_201 == '\x02') {
      local_484 = 1;
    }
    else {
      local_484 = local_474 & 0xff;
    }
    if ((local_484 & 1) == 0) goto LAB_021db35c;
    FUN_021defc8(uVar3);
  }
  FUN_021e3654(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar3);
LAB_021db3b8:
  FUN_021e3da4(param_1);
  pcVar4 = "fanType";
  uVar12 = 7;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("fanType",7,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_68,0x20,0);
  local_78 = pcVar4;
  local_70 = uVar12;
  __sSDyq_Sgxcig(auStack_50,&local_78,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_78);
  _swift_endAccess(auStack_68);
  if (local_38 == 0) {
    FUN_021c7fc0(auStack_50);
    local_4c0 = 0;
  }
  else {
    uVar12 = 0;
    FUN_021c80bc(0);
    plVar5 = local_a8;
    _swift_dynamicCast(plVar5,auStack_50,PTR___sypN_02578b08 + 8,uVar12,6);
    if (((ulong)plVar5 & 1) == 0) {
      local_4b8 = 0;
    }
    else {
      local_4b8 = local_a8[0];
    }
    local_4c0 = local_4b8;
  }
  bVar2 = local_4c0 == 0;
  if (bVar2) {
    local_4e0 = 0;
  }
  else {
    local_4e0 = local_4c0;
    FUN_02222880(local_4c0,local_280);
    (*(code *)PTR__objc_release_02578630)(local_4c0);
  }
  local_a8[4] = local_4e0;
  if (bVar2) {
    local_4f8 = 0;
  }
  else {
    local_4f8 = local_4e0;
  }
  local_a8[3] = local_4f8;
  local_80 = bVar2;
  (*(code *)PTR__objc_retain_02578638)(param_1);
  uVar3 = param_1;
  FUN_02222960(param_1,local_280);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_4f8 == 3) {
    local_50c = 0x3da3d70a;
  }
  else {
    local_50c = 0x3e23d70a;
  }
  FUN_02223460(local_50c,uVar3,local_280);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_retain_02578638)(param_1);
  uVar3 = param_1;
  FUN_02222960(param_1,local_280);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_4f8 + -3 == 0) {
    local_520 = 0x4000000000000000;
  }
  else {
    local_520 = 0x4010000000000000;
  }
  FUN_022234a0(local_4f8 + -3,local_520,uVar3,local_280);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_retain_02578638)(param_1);
  uVar3 = param_1;
  FUN_02222960(param_1,local_280);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_a8[1] = 0;
  local_a8[2] = 0x3ff0000000000000;
  FUN_02223440(0,0x3ff0000000000000,uVar3,local_280);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_retain_02578638)(param_1);
  uVar3 = param_1;
  FUN_02222960(param_1,local_280);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
  _objc_opt_self();
  FUN_02222020();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  FUN_02221d00();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar10);
  FUN_02223420(uVar3,local_280,puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  return;
}

