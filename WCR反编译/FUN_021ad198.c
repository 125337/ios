// FUN_021ad198 @ 021ad198

/* WARNING: Removing unreachable block (ram,0x021ad578) */
/* WARNING: Removing unreachable block (ram,0x021ad37c) */
/* WARNING: Removing unreachable block (ram,0x021ad544) */
/* WARNING: Removing unreachable block (ram,0x021ad398) */
/* WARNING: Removing unreachable block (ram,0x021adf4c) */
/* WARNING: Removing unreachable block (ram,0x021adccc) */

void FUN_021ad198(void)

{
  byte *pbVar1;
  undefined8 *puVar2;
  double *pdVar3;
  long *plVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x20;
  double dVar16;
  double dVar17;
  uint local_424;
  uint local_298;
  uint local_26c;
  uint local_22c;
  undefined8 local_220;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [29];
  char local_1a3;
  char local_1a2;
  undefined1 local_1a1;
  undefined1 auStack_1a0 [24];
  undefined8 local_188;
  undefined1 auStack_180 [32];
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  double local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined8 local_e0;
  undefined1 auStack_d8 [24];
  double local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  byte local_60;
  undefined1 auStack_58 [24];
  byte local_40;
  
  local_40 = 0;
  local_60 = 0;
  local_a8 = 0;
  local_108 = 0.0;
  uVar7 = 0;
  FUN_021ad108();
  local_40 = (byte)uVar7 & 1;
  if ((uVar7 & 1) == 0) {
    FUN_0219f880();
    pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatLinked);
    _swift_beginAccess(pbVar1,auStack_58,0x20,0);
    bVar5 = *pbVar1;
    _swift_endAccess(auStack_58);
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    if ((bVar5 & 1) == 0) {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      bVar6 = false;
    }
    else {
      puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatUsername);
      _swift_beginAccess(puVar2,auStack_1a0,0x20,0);
      if (puVar2[1] == 0) {
        _swift_endAccess(auStack_1a0);
        local_26c = 2;
      }
      else {
        uVar15 = *puVar2;
        uVar8 = puVar2[1];
        _swift_bridgeObjectRetain();
        _swift_endAccess(auStack_1a0);
        __sSS7isEmptySbvg(uVar15,uVar8);
        _swift_bridgeObjectRelease(uVar8);
        local_26c = (uint)uVar15 & 1;
      }
      local_1a2 = (char)local_26c;
      local_1a1 = 0;
      if (local_1a2 != '\x02') {
        local_1a3 = local_1a2;
      }
      bVar6 = local_1a2 != '\x02' && (local_26c & 1) == 0;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
    }
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    if (bVar6) {
      uVar15 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = uVar15;
      FUN_02223840(uVar15,local_220);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar15);
      uVar9 = 0;
      FUN_021c7714(0);
      uVar15 = uVar8;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar8,uVar9);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      puVar10 = &DAT_028c6d88;
      local_188 = uVar15;
      FUN_021c77d4(&DAT_028c6d88,&DAT_0233a800);
      puVar11 = puVar10;
      FUN_021c83e4();
      __sSlsE7isEmptySbvg(puVar10,puVar11);
      _swift_bridgeObjectRelease(uVar15);
      local_298 = (uint)puVar10 ^ 1;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      local_298 = 0;
    }
    local_60 = (byte)local_298 & 1;
    uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02223100(uVar8,local_220,(local_298 ^ 1) & 1);
    (*(code *)PTR__objc_release_02578630)(uVar8);
    if ((local_298 & 1) == 0) {
      uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02222cc0(0x3ff0000000000000,uVar8,local_220);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      lVar13 = *(long *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
      (*(code *)PTR__objc_retain_02578638)();
      lVar14 = lVar13;
      FUN_02222520(lVar13,local_220);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(lVar13);
      local_68 = 0;
      local_70 = lVar14;
      if (lVar14 == 0) {
        FUN_021c850c(&local_70);
        local_424 = 1;
      }
      else {
        FUN_021c853c(&local_70,&local_b0);
        if (local_68 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_b0);
          FUN_021c84c8(&local_70);
          local_424 = 0;
        }
        else {
          local_b8 = local_68;
          FUN_021c8238(0);
          uVar8 = local_b0;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_b0,local_b8);
          local_424 = (uint)uVar8;
          (*(code *)PTR__objc_release_02578630)(local_b8);
          (*(code *)PTR__objc_release_02578630)(local_b0);
          FUN_021c850c(&local_70);
        }
      }
      if ((local_424 & 1) == 0) {
        uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
        (*(code *)PTR__objc_retain_02578638)();
        FUN_02223100(uVar8,local_220,0);
        (*(code *)PTR__objc_release_02578630)(uVar8);
      }
      plVar4 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
      _swift_beginAccess(plVar4,auStack_88,0x20,0);
      if (*plVar4 == 0) {
        _swift_endAccess(auStack_88);
      }
      else {
        lVar14 = *plVar4;
        (*(code *)PTR__objc_retain_02578638)(lVar14);
        _swift_endAccess(auStack_88);
        __s8WCRefine22WCRSuperFloatPetPlayerC6resumeyyF();
        (*(code *)PTR__objc_release_02578630)(lVar14);
      }
      FUN_021b6b48();
    }
    else {
      puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballSize);
      _swift_beginAccess();
      uVar8 = *puVar2;
      _swift_endAccess(auStack_d8);
      puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarSide);
      puVar12 = auStack_f8;
      local_e0 = uVar8;
      _swift_beginAccess(puVar2,puVar12,0x20,0);
      uVar8 = *puVar2;
      _swift_endAccess(puVar12);
      local_100 = uVar8;
      FUN_021c8058();
      __ss3minyxx_xtSLRzlF
                (&local_c0,&local_e0,&local_100,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar12);
      local_108 = local_c0;
      uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
      (*(code *)PTR__objc_retain_02578638)();
      pdVar3 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::ballSize);
      _swift_beginAccess(pdVar3,auStack_120,0x20,0);
      dVar16 = *pdVar3;
      _swift_endAccess(auStack_120);
      dVar16 = (dVar16 - local_c0) * 0.5;
      pdVar3 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::ballSize);
      _swift_beginAccess(pdVar3,auStack_138,0x20,0);
      dVar17 = *pdVar3;
      _swift_endAccess(auStack_138);
      local_150 = (dVar17 - local_c0) * 0.5;
      local_148 = local_c0;
      local_140 = local_c0;
      local_158 = dVar16;
      FUN_022230c0(dVar16,local_150,local_c0,local_c0,uVar8,local_220);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      uVar15 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = uVar15;
      FUN_02222960(uVar15,local_220);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar15);
      FUN_02222f40(local_c0 * 0.5,uVar8,local_220);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      uVar15 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = uVar15;
      FUN_02223840(uVar15,local_220);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar15);
      uVar9 = 0;
      FUN_021c7714(0);
      uVar15 = uVar8;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar8,uVar9);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      local_160 = uVar15;
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      puVar10 = &DAT_028c6d88;
      FUN_021c77d4(&DAT_028c6d88,&DAT_0233a800);
      puVar11 = puVar10;
      FUN_021c8348();
      __sSTsE7forEachyyy7ElementQzKXEKF(FUN_021c8578,auStack_180,puVar10,puVar11);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      FUN_021c83bc(&local_160);
      uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
      _objc_opt_self();
      FUN_022220e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_02222d60(uVar8,local_220);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      uVar15 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = uVar15;
      FUN_02222960(uVar15,local_220);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar15);
      FUN_02223460(0,uVar8,local_220);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      FUN_021b64c0();
      uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      uVar15 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02222080(uVar8,local_220,uVar15);
      (*(code *)PTR__objc_release_02578630)(uVar15);
      (*(code *)PTR__objc_release_02578630)(uVar8);
    }
    FUN_021b7c9c();
    plVar4 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatOfficialBadge);
    _swift_beginAccess(plVar4,auStack_a0,0x20,0);
    lVar14 = *plVar4;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_a0);
    if (lVar14 != 0) {
      uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      local_a8 = lVar14;
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02222080(uVar8,local_220,lVar14);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      (*(code *)PTR__objc_release_02578630)(lVar14);
    }
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02223100(uVar8,local_220,1);
    (*(code *)PTR__objc_release_02578630)(uVar8);
    FUN_021b6f24();
    FUN_021b6a50();
    pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatLinked);
    _swift_beginAccess(pbVar1,auStack_1c0,0x20,0);
    bVar5 = *pbVar1;
    _swift_endAccess(auStack_1c0);
    if ((bVar5 & 1) != 0) {
      puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatUsername);
      _swift_beginAccess(puVar2,auStack_1d8,0x20,0);
      if (puVar2[1] == 0) {
        _swift_endAccess(auStack_1d8);
        local_22c = 2;
      }
      else {
        uVar15 = *puVar2;
        uVar8 = puVar2[1];
        _swift_bridgeObjectRetain();
        _swift_endAccess(auStack_1d8);
        __sSS7isEmptySbvg(uVar15,uVar8);
        _swift_bridgeObjectRelease(uVar8);
        local_22c = (uint)uVar15 & 1;
      }
      if ((char)local_22c != '\x02' && (local_22c & 1) == 0) {
        FUN_021b7020();
        return;
      }
    }
    FUN_0219f880();
  }
  return;
}

