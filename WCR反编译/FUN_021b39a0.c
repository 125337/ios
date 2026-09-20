// FUN_021b39a0 @ 021b39a0

/* WARNING: Removing unreachable block (ram,0x021b4044) */

void FUN_021b39a0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char **ppcVar11;
  undefined1 *puVar12;
  long lVar13;
  long unaff_x20;
  char *local_2e0;
  long local_2d8;
  char *local_2d0;
  long local_2c8;
  long local_220;
  undefined8 local_208;
  undefined1 auStack_1e0 [16];
  long local_1d0;
  long local_1c8;
  char *local_1c0;
  long local_1b8;
  undefined1 auStack_1b0 [24];
  undefined1 *local_198;
  undefined1 local_190 [32];
  undefined1 auStack_170 [24];
  byte local_158;
  char *local_150;
  long lStack_148;
  char *local_140;
  long lStack_138;
  char *local_130;
  undefined8 local_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  long local_f0;
  char *local_e8;
  long local_e0;
  undefined1 *local_d8;
  undefined1 local_d0 [32];
  undefined1 auStack_b0 [24];
  undefined1 *local_98;
  undefined1 local_90 [32];
  undefined1 *local_70;
  undefined1 local_68 [32];
  long local_48;
  
  _swift_getObjectType();
  local_70 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x0;
  local_d8 = (undefined1 *)0x0;
  local_158 = 0;
  local_198 = (undefined1 *)0x0;
  lVar13 = param_1;
  FUN_02222480(param_1,local_208);
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    local_220 = 0;
  }
  else {
    uVar4 = 0;
    FUN_021c8c08(0);
    local_220 = lVar13;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(lVar13,uVar4);
    (*(code *)PTR__objc_release_02578630)(lVar13);
  }
  local_48 = local_220;
  if (local_220 == 0) {
    FUN_021c8a00(&local_48);
  }
  else {
    _swift_bridgeObjectRetain();
    FUN_021c8a00(&local_48);
    local_1c8 = local_220;
    (*(code *)PTR__objc_retain_02578638)(param_1);
    puVar5 = &DAT_028c6dd0;
    local_1d0 = param_1;
    FUN_021c77d4(&DAT_028c6dd0,&DAT_0233a810);
    puVar6 = puVar5;
    FUN_021c8b6c();
    __sSTsE7forEachyyy7ElementQzKXEKF(FUN_021c8b48,auStack_1e0,puVar5,puVar6);
    (*(code *)PTR__objc_release_02578630)(param_1);
    FUN_021c8be0(&local_1c8);
  }
  FUN_021c8a28();
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar7 = local_68;
  FUN_021b40e8(puVar7,PTR_s_handlePan__026a2a90);
  local_70 = puVar7;
  FUN_02221de0(param_1,local_208);
  FUN_021c8a88();
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar8 = local_90;
  FUN_021b412c(puVar8,PTR_s_handleDoubleTap_026ca450);
  local_98 = puVar8;
  FUN_022232c0();
  FUN_02221de0(param_1,local_208,puVar8);
  (*(code *)PTR__objc_retain_02578638)(puVar8);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::doubleTapRecognizer);
  _swift_beginAccess(puVar1,auStack_b0,0x21);
  uVar4 = *puVar1;
  *puVar1 = puVar8;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _swift_endAccess(auStack_b0);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar9 = local_d0;
  FUN_021b412c(puVar9,PTR_s_handleTap_026be600);
  local_d8 = puVar9;
  FUN_022232c0();
  pcVar10 = "ballGestureDoubleTap";
  uVar4 = 0x14;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("ballGestureDoubleTap",0x14,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapshot);
  _swift_beginAccess(puVar1,auStack_120,0x20,0);
  local_130 = pcVar10;
  local_128 = uVar4;
  __sSDyq_Sgxcig(auStack_108,&local_130,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_130);
  _swift_endAccess(auStack_120);
  if (local_f0 == 0) {
    FUN_021c7fc0(auStack_108);
    local_2e0 = (char *)0x0;
    local_2d8 = 0;
  }
  else {
    ppcVar11 = &local_1c0;
    _swift_dynamicCast(ppcVar11,auStack_108,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar11 & 1) == 0) {
      local_2d0 = (char *)0x0;
      local_2c8 = 0;
    }
    else {
      local_2d0 = local_1c0;
      local_2c8 = local_1b8;
    }
    local_2e0 = local_2d0;
    local_2d8 = local_2c8;
  }
  local_140 = local_2e0;
  lStack_138 = local_2d8;
  lStack_148 = local_2d8;
  local_150 = local_2e0;
  if (local_2d8 == 0) {
    pcVar10 = "";
    lVar13 = 0;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("",0,1);
    local_e8 = pcVar10;
    local_e0 = lVar13;
    if (lStack_148 != 0) {
      FUN_021c811c(&local_150);
    }
  }
  else {
    local_e8 = local_2e0;
    local_e0 = local_2d8;
  }
  lVar13 = local_e0;
  pcVar10 = local_e8;
  __sSS7isEmptySbvg();
  _swift_bridgeObjectRelease(lVar13);
  uVar3 = (uint)pcVar10 ^ 1;
  local_158 = (byte)uVar3 & 1;
  if ((uVar3 & 1) != 0) {
    FUN_02222b80(puVar9,local_208,puVar8);
  }
  FUN_02221de0(param_1,local_208,puVar9);
  (*(code *)PTR__objc_retain_02578638)(puVar9);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::singleTapRecognizer);
  _swift_beginAccess();
  uVar4 = *puVar1;
  *puVar1 = puVar9;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _swift_endAccess(auStack_170);
  FUN_021c8ae8(0);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar12 = local_190;
  FUN_021b4170(puVar12,PTR_s_handleLongPress__026a48f8);
  local_198 = puVar12;
  FUN_02223260(DAT_02323c78);
  FUN_02221de0(param_1,local_208,puVar12);
  (*(code *)PTR__objc_retain_02578638)(puVar12);
  plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::longPressRecognizer);
  _swift_beginAccess(plVar2,auStack_1b0,0x21,0);
  lVar13 = *plVar2;
  *plVar2 = (long)puVar12;
  (*(code *)PTR__objc_release_02578630)(lVar13);
  _swift_endAccess(auStack_1b0);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  return;
}

