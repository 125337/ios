// _$s8WCRefine23WCRSuperFloatBallWindowC7hitTest_4withSo6UIViewCSgSo7CGPointV_So7UIEventCSgtF @ 021b2828

/* WARNING: Removing unreachable block (ram,0x021b29a0) */
/* WARNING: Removing unreachable block (ram,0x021b330c) */

undefined1 *
__s8WCRefine23WCRSuperFloatBallWindowC7hitTest_4withSo6UIViewCSgSo7CGPointV_So7UIEventCSgtF
          (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *unaff_x20;
  undefined1 *local_4c8;
  undefined1 *local_490;
  uint local_480;
  long local_468;
  undefined1 *local_438;
  uint local_428;
  undefined1 *local_408;
  uint local_3f8;
  uint local_3ec;
  undefined1 *local_378;
  undefined1 *local_340;
  undefined8 local_310;
  undefined1 *local_300;
  uint local_2f0;
  long local_2d8;
  undefined1 *local_2a8;
  uint local_298;
  undefined1 *local_278;
  uint local_268;
  uint local_25c;
  undefined8 local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined1 auStack_1f0 [24];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 *local_1b0;
  undefined1 local_1a8 [8];
  undefined1 auStack_1a0 [24];
  long local_188;
  long local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 auStack_f8 [24];
  long local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [24];
  undefined1 local_b8 [8];
  undefined1 auStack_b0 [24];
  long local_98;
  long local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 auStack_58 [24];
  
  _swift_getObjectType();
  local_80 = (undefined1 *)0x0;
  local_100 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  uVar5 = param_3;
  __s8WCRefine23WCRSuperFloatBallWindowC5point6inside4withSbSo7CGPointV_So7UIEventCSgtF();
  if ((uVar5 & 1) == 0) {
    return (undefined1 *)0x0;
  }
  pbVar1 = unaff_x20 + WCRSuperFloatBallWindow::menuExpanded;
  puVar7 = auStack_58;
  _swift_beginAccess(pbVar1,puVar7,0x20,0);
  bVar4 = *pbVar1;
  _swift_endAccess();
  if ((bVar4 & 1) == 0) {
    FUN_021ad108();
    if (((ulong)puVar7 & 1) != 0) {
      plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView);
      _swift_beginAccess(plVar2,auStack_f8,0x20,0);
      puVar7 = (undefined1 *)*plVar2;
      (*(code *)PTR__objc_retain_02578638)();
      _swift_endAccess(auStack_f8);
      if (puVar7 != (undefined1 *)0x0) {
        local_100 = puVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = param_1;
        local_110 = param_2;
        FUN_02222220(unaff_x20,local_310,puVar7);
        local_128 = param_1;
        local_120 = param_2;
        _swift_unknownObjectRelease(puVar7);
        puVar6 = puVar7;
        local_138 = param_1;
        local_130 = param_2;
        FUN_02222500(param_1,param_2,puVar7,local_310,param_3);
        _objc_retainAutoreleasedReturnValue();
        local_140 = puVar6;
        (*(code *)PTR__objc_retain_02578638)(puVar7);
        local_148 = local_140;
        if (local_140 == (undefined1 *)0x0) {
          (*(code *)PTR__objc_retain_02578638)(puVar7);
          local_108 = puVar7;
          (*(code *)PTR__objc_release_02578630)();
          if (local_148 != (undefined1 *)0x0) {
            FUN_021c87dc(&local_148);
          }
        }
        else {
          (*(code *)PTR__objc_release_02578630)(puVar7);
          local_108 = local_148;
        }
        puVar6 = local_108;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        return puVar6;
      }
    }
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    puVar7 = local_68;
    local_78 = param_1;
    local_70 = param_2;
    _objc_msgSendSuper2(param_1,param_2,puVar7,PTR_s_hitTest_withEvent__026ca670,param_3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    local_88 = puVar7;
    local_80 = puVar7;
    FUN_021c890c(&local_88,&local_98);
    local_90 = 0;
    if (local_98 == 0) {
      FUN_021c87dc(&local_98);
      local_3ec = 1;
    }
    else {
      FUN_021c890c(&local_98,&local_d8);
      if (local_90 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
        FUN_021c8798(&local_98);
        local_3ec = 0;
      }
      else {
        local_e0 = local_90;
        FUN_021c7714(0);
        uVar8 = local_d8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_d8,local_e0);
        local_3ec = (uint)uVar8;
        (*(code *)PTR__objc_release_02578630)(local_e0);
        (*(code *)PTR__objc_release_02578630)(local_d8);
        FUN_021c87dc(&local_98);
      }
    }
    (*(code *)PTR__objc_retain_02578638)(puVar7);
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    if ((local_3ec & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)(puVar7);
      local_408 = puVar7;
      if (puVar7 == (undefined1 *)0x0) {
        local_408 = (undefined1 *)0x0;
      }
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      puVar6 = local_408;
      __ss3eeeoiySbyXlSg_ABtF();
      local_3f8 = (uint)puVar6;
      _swift_unknownObjectRelease(unaff_x20);
      _swift_unknownObjectRelease(local_408);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      local_3f8 = 1;
    }
    (*(code *)PTR__objc_retain_02578638)(puVar7);
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    if ((local_3f8 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)(puVar7);
      local_438 = puVar7;
      if (puVar7 == (undefined1 *)0x0) {
        local_438 = (undefined1 *)0x0;
      }
      plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::secureCanvas);
      _swift_beginAccess(plVar2,auStack_b0,0x20,0);
      local_468 = *plVar2;
      (*(code *)PTR__objc_retain_02578638)();
      _swift_endAccess(auStack_b0);
      if (local_468 == 0) {
        local_468 = 0;
      }
      puVar6 = local_438;
      __ss3eeeoiySbyXlSg_ABtF();
      local_428 = (uint)puVar6;
      _swift_unknownObjectRelease(local_468);
      _swift_unknownObjectRelease(local_438);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      local_428 = 1;
    }
    (*(code *)PTR__objc_retain_02578638)(puVar7);
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    if ((local_428 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      local_480 = 1;
      goto LAB_021b3808;
    }
    (*(code *)PTR__objc_retain_02578638)(puVar7);
    local_490 = puVar7;
    if (puVar7 == (undefined1 *)0x0) {
      local_490 = (undefined1 *)0x0;
    }
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    puVar6 = unaff_x20;
    FUN_02222bc0(unaff_x20,local_310);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    if (puVar6 == (undefined1 *)0x0) {
      FUN_021c89d0(local_b8);
LAB_021b37fc:
      local_4c8 = (undefined1 *)0x0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      FUN_021c89d0(local_b8);
      local_4c8 = puVar6;
      FUN_02223aa0(puVar6,local_310);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (local_4c8 == (undefined1 *)0x0) goto LAB_021b37fc;
    }
    puVar6 = local_490;
    __ss3eeeoiySbyXlSg_ABtF();
    local_480 = (uint)puVar6;
    _swift_unknownObjectRelease(local_4c8);
    _swift_unknownObjectRelease(local_490);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
LAB_021b3808:
    if ((local_480 & 1) == 0) {
      return puVar7;
    }
    plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
    _swift_beginAccess(plVar2,auStack_d0,0x20,0);
    lVar9 = *plVar2;
    _swift_endAccess(auStack_d0);
    if (lVar9 == 2) {
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      return unaff_x20;
    }
    puVar6 = *(undefined1 **)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    return puVar6;
  }
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar7 = local_158;
  local_168 = param_1;
  local_160 = param_2;
  _objc_msgSendSuper2(param_1,param_2,puVar7,PTR_s_hitTest_withEvent__026ca670,param_3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  local_178 = puVar7;
  local_170 = puVar7;
  FUN_021c890c(&local_178,&local_188);
  local_180 = 0;
  if (local_188 == 0) {
    FUN_021c87dc(&local_188);
    local_25c = 1;
  }
  else {
    FUN_021c890c(&local_188,&local_208);
    lVar9 = local_180;
    if (local_180 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_208);
      FUN_021c8798(&local_188);
      local_25c = 0;
    }
    else {
      FUN_021c7714(0);
      uVar8 = local_208;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_208,lVar9);
      local_25c = (uint)uVar8;
      (*(code *)PTR__objc_release_02578630)(lVar9);
      (*(code *)PTR__objc_release_02578630)(local_208);
      FUN_021c87dc(&local_188);
    }
  }
  (*(code *)PTR__objc_retain_02578638)(puVar7);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  if ((local_25c & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)(puVar7);
    local_278 = puVar7;
    if (puVar7 == (undefined1 *)0x0) {
      local_278 = (undefined1 *)0x0;
    }
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    puVar6 = local_278;
    __ss3eeeoiySbyXlSg_ABtF();
    local_268 = (uint)puVar6;
    _swift_unknownObjectRelease(unaff_x20);
    _swift_unknownObjectRelease(local_278);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_268 = 1;
  }
  (*(code *)PTR__objc_retain_02578638)(puVar7);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  if ((local_268 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)(puVar7);
    local_2a8 = puVar7;
    if (puVar7 == (undefined1 *)0x0) {
      local_2a8 = (undefined1 *)0x0;
    }
    plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::secureCanvas);
    _swift_beginAccess(plVar2,auStack_1a0,0x20,0);
    local_2d8 = *plVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_1a0);
    if (local_2d8 == 0) {
      local_2d8 = 0;
    }
    puVar6 = local_2a8;
    __ss3eeeoiySbyXlSg_ABtF();
    local_298 = (uint)puVar6;
    _swift_unknownObjectRelease(local_2d8);
    _swift_unknownObjectRelease(local_2a8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_298 = 1;
  }
  (*(code *)PTR__objc_retain_02578638)(puVar7);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  if ((local_298 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_2f0 = 1;
    goto LAB_021b2e9c;
  }
  (*(code *)PTR__objc_retain_02578638)(puVar7);
  local_300 = puVar7;
  if (puVar7 == (undefined1 *)0x0) {
    local_300 = (undefined1 *)0x0;
  }
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar6 = unaff_x20;
  FUN_02222bc0(unaff_x20,local_310);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  if (puVar6 == (undefined1 *)0x0) {
    FUN_021c89d0(local_1a8);
LAB_021b2e90:
    local_340 = (undefined1 *)0x0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    FUN_021c89d0(local_1a8);
    local_340 = puVar6;
    FUN_02223aa0(puVar6,local_310);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (local_340 == (undefined1 *)0x0) goto LAB_021b2e90;
  }
  puVar6 = local_300;
  __ss3eeeoiySbyXlSg_ABtF();
  local_2f0 = (uint)puVar6;
  _swift_unknownObjectRelease(local_340);
  _swift_unknownObjectRelease(local_300);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
LAB_021b2e9c:
  if ((local_2f0 & 1) != 0) {
    puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
    _swift_beginAccess(puVar3,auStack_1c8,0x20,0);
    local_378 = (undefined1 *)*puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_1c8);
    if (local_378 == (undefined1 *)0x0) {
      local_378 = (undefined1 *)0x0;
    }
    local_1d0 = local_378;
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    local_1d8 = local_1d0;
    if (local_1d0 == (undefined1 *)0x0) {
      puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::menuBackdropView);
      _swift_beginAccess(puVar3,auStack_1f0,0x20,0);
      puVar6 = (undefined1 *)*puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      _swift_endAccess(auStack_1f0);
      local_1f8 = puVar6;
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      local_200 = local_1f8;
      if (local_1f8 == (undefined1 *)0x0) {
        (*(code *)PTR__objc_retain_02578638)(unaff_x20);
        local_1b0 = unaff_x20;
        (*(code *)PTR__objc_release_02578630)();
        if (local_200 != (undefined1 *)0x0) {
          FUN_021c87dc(&local_200);
        }
      }
      else {
        (*(code *)PTR__objc_release_02578630)(unaff_x20);
        local_1b0 = local_200;
      }
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      if (local_1d8 != (undefined1 *)0x0) {
        FUN_021c87dc(&local_1d8);
      }
    }
    else {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      local_1b0 = local_1d8;
    }
    puVar6 = local_1b0;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar7 = puVar6;
  }
  return puVar7;
}

