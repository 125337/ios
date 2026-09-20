// FUN_021b7c9c @ 021b7c9c

/* WARNING: Type propagation algorithm not settling */

void FUN_021b7c9c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  byte *pbVar2;
  long *plVar3;
  byte bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double local_468;
  undefined4 local_3a4;
  double local_310;
  double local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2d0;
  undefined1 auStack_1d8 [24];
  double local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  undefined1 auStack_1a0 [24];
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160 [3];
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  long local_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [31];
  undefined1 local_d9;
  long local_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  
  local_90 = 0;
  local_310 = 0.0;
  dStack_c8 = 0.0;
  local_d0 = 0.0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  local_d9 = 0;
  local_118 = 0;
  local_128 = 0.0;
  local_120 = 0.0;
  local_168 = 0.0;
  pbVar2 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatLinked);
  _swift_beginAccess(pbVar2,auStack_40,0x20,0);
  bVar4 = *pbVar2;
  _swift_endAccess(auStack_40);
  if ((bVar4 & 1) != 0) {
    pbVar2 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatShowBadge);
    puVar5 = auStack_58;
    _swift_beginAccess(pbVar2,puVar5,0x20,0);
    bVar4 = *pbVar2;
    _swift_endAccess();
    if (((bVar4 & 1) != 0) && (FUN_021ad108(), ((ulong)puVar5 & 1) == 0)) {
      plVar3 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatBadgeSide);
      _swift_beginAccess(plVar3,auStack_70,0x20,0);
      lVar10 = *plVar3;
      _swift_endAccess(auStack_70);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      if (lVar10 == 1) {
        (*(code *)PTR__objc_release_02578630)(unaff_x20);
        bVar1 = true;
      }
      else {
        plVar3 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatBadgeSide);
        _swift_beginAccess(plVar3,auStack_88,0x20,0);
        lVar10 = *plVar3;
        _swift_endAccess(auStack_88);
        (*(code *)PTR__objc_retain_02578638)(unaff_x20);
        if (lVar10 == 0) {
          uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
          (*(code *)PTR__objc_retain_02578638)();
          FUN_022220c0(uVar8,local_2d0);
          dVar11 = local_310;
          (*(code *)PTR__objc_release_02578630)(uVar8);
          (*(code *)PTR__objc_retain_02578638)(unaff_x20);
          FUN_02222060(unaff_x20,local_2d0);
          (*(code *)PTR__objc_release_02578630)(unaff_x20);
          FUN_021b1f88(dVar11,param_2);
          bVar1 = dVar11 <= local_310;
          param_2 = local_310;
          (*(code *)PTR__objc_release_02578630)(unaff_x20);
          local_310 = dVar11;
        }
        else {
          (*(code *)PTR__objc_release_02578630)(unaff_x20);
          bVar1 = false;
        }
        (*(code *)PTR__objc_release_02578630)(unaff_x20);
      }
      uVar6 = *(ulong *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
      local_90 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      uVar7 = uVar6;
      FUN_022228e0(uVar6,local_2d0);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      if ((uVar7 & 1) == 0) {
        uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
        (*(code *)PTR__objc_retain_02578638)();
        FUN_02222440(uVar8,local_2d0);
        local_b0 = local_310;
        local_a8 = param_2;
        local_a0 = param_3;
        local_98 = param_4;
        (*(code *)PTR__objc_release_02578630)(uVar8);
        local_308 = param_2;
        local_300 = param_3;
        local_2f8 = param_4;
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
        (*(code *)PTR__objc_retain_02578638)();
        FUN_02222440(uVar8,local_2d0);
        (*(code *)PTR__objc_release_02578630)(uVar8);
        local_308 = param_2;
        local_300 = param_3;
        local_2f8 = param_4;
      }
      local_d0 = local_310;
      dStack_c8 = local_308;
      local_c0 = local_300;
      uStack_b8 = local_2f8;
      plVar3 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatUnread);
      uVar8 = local_2f8;
      uVar14 = local_300;
      dVar11 = local_308;
      dVar12 = local_310;
      _swift_beginAccess(plVar3,auStack_f8,0x20,0);
      lVar10 = *plVar3;
      _swift_endAccess(auStack_f8);
      if (lVar10 == 0) {
        pbVar2 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatMutedOnly);
        _swift_beginAccess(pbVar2,auStack_110,0x20,0);
        bVar4 = *pbVar2;
        _swift_endAccess(auStack_110);
        if ((bVar4 & 1) == 0) {
          FUN_021b6f24();
          return;
        }
        local_d8 = 1;
        local_d9 = 1;
        local_3a4 = 1;
      }
      else {
        plVar3 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatUnread);
        _swift_beginAccess(plVar3,auStack_1d8,0x20,0);
        lVar10 = *plVar3;
        _swift_endAccess(auStack_1d8);
        local_d9 = 0;
        local_3a4 = 0;
        local_d8 = lVar10;
      }
      lVar10 = local_d8;
      FUN_021b6f24();
      FUN_021b8594(lVar10,local_3a4);
      if (lVar10 == 0) {
        return;
      }
      lVar9 = lVar10;
      local_118 = lVar10;
      FUN_02222060(lVar10,local_2d0);
      uVar15 = 0x3ff0000000000000;
      local_148 = uVar8;
      local_140 = uVar14;
      local_138 = dVar11;
      local_130 = dVar12;
      local_128 = dVar11;
      local_120 = dVar12;
      if (dVar11 < 1.0 || dVar12 < 1.0) {
        lVar9 = lVar10;
        dVar13 = dVar12;
        FUN_02222440(lVar10,local_2d0);
        local_1c0 = dVar12;
        local_1b8 = uVar15;
        local_1b0 = dVar11;
        local_1a8 = dVar13;
        local_128 = dVar11;
        local_120 = dVar13;
      }
      dVar12 = local_120;
      dVar11 = local_128;
      if (bVar1 == false) {
        local_160[1] = 0.0;
        dVar13 = local_310;
        FUN_021b899c(local_310,local_308,local_300,local_2f8);
        local_160[0] = dVar13 - dVar11;
        FUN_021c8058();
        __ss3maxyxx_xtSLRzlF
                  (local_160 + 2,local_160 + 1,local_160,PTR___s12CoreGraphics7CGFloatVN_02578ba0,
                   lVar9);
        local_468 = local_160[2];
      }
      else {
        local_468 = local_310;
        FUN_021b8960(local_310,local_308,local_300,local_2f8);
      }
      local_168 = local_468;
      FUN_021b89d8(local_310,local_308,local_300,local_2f8);
      local_188 = local_468;
      local_178 = dVar11;
      local_170 = dVar12;
      local_180 = local_310;
      FUN_022230c0(local_468,local_310,dVar11,dVar12,lVar10,local_2d0);
      uVar8 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02221e40(uVar8,local_2d0,lVar10);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      (*(code *)PTR__objc_retain_02578638)(lVar10);
      plVar3 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatOfficialBadge);
      _swift_beginAccess(plVar3,auStack_1a0,0x21,0);
      lVar9 = *plVar3;
      *plVar3 = lVar10;
      (*(code *)PTR__objc_release_02578630)(lVar9);
      _swift_endAccess(auStack_1a0);
      (*(code *)PTR__objc_release_02578630)(lVar10);
      return;
    }
  }
  FUN_021b6f24();
  return;
}

