// FUN_021c57d4 @ 021c57d4

/* WARNING: Removing unreachable block (ram,0x021c5e54) */

void FUN_021c57d4(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  double dVar11;
  uint local_29c;
  uint local_28c;
  uint local_25c;
  long local_210;
  undefined8 local_1a0;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  double local_108;
  undefined8 local_100;
  double local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  undefined1 auStack_d8 [24];
  long local_c0;
  byte local_b8;
  char local_b1;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  undefined8 local_38;
  
  local_40 = 0.0;
  local_38 = 0;
  local_b8 = 0;
  local_108 = 0.0;
  local_100 = 0;
  FUN_021bd02c();
  uVar5 = 0;
  dVar11 = param_1;
  uVar9 = param_2;
  local_40 = param_1;
  local_38 = param_2;
  FUN_021c9a0c();
  (*(code *)PTR__objc_retain_02578638)(param_3);
  uVar6 = param_3;
  FUN_022237c0(param_3,local_1a0);
  (*(code *)PTR__objc_release_02578630)(param_3);
  puVar7 = &local_48;
  local_50 = 1;
  local_48 = uVar6;
  FUN_021c9aa0();
  __sSQ2eeoiySbx_xtFZTj(puVar7,&local_50,uVar5);
  if (((ulong)puVar7 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)(param_3);
    uVar8 = param_3;
    FUN_022237c0(param_3,local_1a0);
    (*(code *)PTR__objc_release_02578630)(param_3);
    puVar7 = &local_58;
    local_60 = 2;
    local_58 = uVar8;
    __sSQ2eeoiySbx_xtFZTj(puVar7,&local_60,uVar5,uVar6);
    if (((ulong)puVar7 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)(param_3);
      uVar9 = param_3;
      FUN_022237c0(param_3,local_1a0);
      (*(code *)PTR__objc_release_02578630)(param_3);
      puVar7 = &local_68;
      local_70 = 3;
      local_68 = uVar9;
      __sSQ2eeoiySbx_xtFZTj(puVar7,&local_70,uVar5,uVar6);
      (*(code *)PTR__objc_retain_02578638)(param_3);
      if (((ulong)puVar7 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)(param_3);
        uVar9 = param_3;
        FUN_022237c0(param_3,local_1a0);
        (*(code *)PTR__objc_release_02578630)(param_3);
        puVar7 = &local_78;
        local_80 = 4;
        local_78 = uVar9;
        __sSQ2eeoiySbx_xtFZTj(puVar7,&local_80,uVar5,uVar6);
        local_25c = (uint)puVar7;
        (*(code *)PTR__objc_release_02578630)(param_3);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(param_3);
        local_25c = 1;
      }
      if ((local_25c & 1) != 0) {
        pbVar3 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::menuPanDidMove);
        _swift_beginAccess(pbVar3,auStack_98,0x20,0);
        bVar4 = *pbVar3;
        _swift_endAccess(auStack_98);
        if ((bVar4 & 1) == 0) {
          FUN_021c5ef4(unaff_x20);
        }
        else {
          plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
          _swift_beginAccess(plVar2,auStack_b0,0x20,0);
          if (*plVar2 == 0) {
            _swift_endAccess(auStack_b0);
            local_28c = 2;
          }
          else {
            lVar10 = *plVar2;
            (*(code *)PTR__objc_retain_02578638)(lVar10);
            local_28c = 0;
            _swift_endAccess();
            __s8WCRefine24WCRSuperFloatFanMenuViewC15commitSelection2atSbSo7CGPointV_tF
                      (param_1,param_2);
            (*(code *)PTR__objc_release_02578630)(lVar10);
            local_28c = local_28c & 1;
          }
          local_b1 = (char)local_28c;
          if (local_b1 == '\x02') {
            local_29c = 0;
          }
          else {
            local_29c = local_28c;
          }
          local_b8 = (byte)local_29c & 1;
          if ((local_29c & 1) == 0) {
            FUN_0219eddc(1,0);
          }
          FUN_021c5ef4(unaff_x20);
        }
      }
    }
    else {
      plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
      _swift_beginAccess(plVar2,auStack_d8,0x20,0);
      local_210 = *plVar2;
      (*(code *)PTR__objc_retain_02578638)();
      _swift_endAccess(auStack_d8);
      if (local_210 == 0) {
        local_210 = 0;
      }
      local_e0 = local_210;
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      local_e8 = local_e0;
      if (local_e0 == 0) {
        (*(code *)PTR__objc_retain_02578638)(unaff_x20);
        local_c0 = unaff_x20;
        (*(code *)PTR__objc_release_02578630)();
        if (local_e8 != 0) {
          FUN_021c87dc(&local_e8);
        }
      }
      else {
        (*(code *)PTR__objc_release_02578630)(unaff_x20);
        local_c0 = local_e8;
      }
      lVar10 = local_c0;
      FUN_02223a00(param_3,local_1a0);
      local_f8 = dVar11;
      local_f0 = uVar9;
      (*(code *)PTR__objc_release_02578630)(lVar10);
      local_108 = dVar11;
      local_100 = uVar9;
      _hypot();
      if (6.0 < dVar11) {
        puVar1 = (undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::menuPanDidMove);
        _swift_beginAccess(puVar1,auStack_138,0x21,0);
        *puVar1 = 1;
        _swift_endAccess(auStack_138);
      }
      plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
      _swift_beginAccess(plVar2,auStack_120,0x20,0);
      if (*plVar2 == 0) {
        _swift_endAccess(auStack_120);
      }
      else {
        lVar10 = *plVar2;
        (*(code *)PTR__objc_retain_02578638)(lVar10);
        _swift_endAccess(auStack_120);
        __s8WCRefine24WCRSuperFloatFanMenuViewC15updateHighlight2atySo7CGPointV_tF(param_1,param_2);
        (*(code *)PTR__objc_release_02578630)(lVar10);
      }
    }
  }
  else {
    puVar1 = (undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::menuPanDidMove);
    _swift_beginAccess(puVar1,auStack_150,0x21);
    *puVar1 = 0;
    _swift_endAccess(auStack_150);
    plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
    _swift_beginAccess(plVar2,auStack_168,0x20,0);
    if (*plVar2 == 0) {
      _swift_endAccess(auStack_168);
    }
    else {
      lVar10 = *plVar2;
      (*(code *)PTR__objc_retain_02578638)(lVar10);
      _swift_endAccess(auStack_168);
      __s8WCRefine24WCRSuperFloatFanMenuViewC15updateHighlight2atySo7CGPointV_tF(param_1,param_2);
      (*(code *)PTR__objc_release_02578630)(lVar10);
    }
  }
  return;
}

