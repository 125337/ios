// FUN_021c1154 @ 021c1154

/* WARNING: Removing unreachable block (ram,0x021c1acc) */

void FUN_021c1154(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint local_3dc;
  uint local_3cc;
  uint local_3b4;
  double local_368;
  byte local_30c;
  undefined8 local_258;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  byte local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [24];
  byte local_e8;
  char local_e1;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined1 auStack_68 [24];
  undefined1 local_50;
  undefined1 auStack_48 [24];
  undefined1 *puVar7;
  
  local_50 = 0;
  local_88 = 0.0;
  local_80 = 0.0;
  local_e8 = 0;
  dStack_188 = 0.0;
  local_190 = 0.0;
  dStack_178 = 0.0;
  local_180 = 0.0;
  dVar14 = 0.0;
  dStack_1a8 = 0.0;
  local_1b0 = 0.0;
  dStack_198 = 0.0;
  local_1a0 = 0.0;
  local_1c8 = 0;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  _swift_beginAccess(plVar1,auStack_48,0x20,0);
  lVar12 = *plVar1;
  _swift_endAccess(auStack_48);
  lVar13 = unaff_x20;
  (*(code *)PTR__objc_retain_02578638)();
  if (lVar12 == 1) {
    FUN_021ba1f8(0);
    bVar5 = lVar13 == 2;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    bVar5 = false;
  }
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  puVar7 = auStack_68;
  local_50 = bVar5;
  _swift_beginAccess(plVar1,puVar7,0x20,0);
  lVar13 = *plVar1;
  _swift_endAccess();
  uVar6 = (uint)puVar7;
  bVar4 = bVar5;
  if (lVar13 == 2) {
    bVar4 = true;
  }
  if (bVar4) {
    if (bVar5 != false) {
      FUN_021b9908();
      local_1c8 = (byte)uVar6 & 1;
      if ((uVar6 & 1) != 0) {
        uVar10 = param_5;
        FUN_022223c0(param_5,local_258);
        puVar9 = &local_1e8;
        local_1e8 = 8;
        uVar8 = 0;
        local_1e0 = uVar10;
        FUN_021c9c78();
        uVar10 = uVar8;
        FUN_021c9d0c();
        __ss9OptionSetPs7ElementQzRszrlE8containsySbxF(puVar9,uVar8,uVar10);
        if (((ulong)puVar9 & 1) == 0) {
          return;
        }
      }
      if ((uVar6 & 1) == 0) {
        uVar10 = param_5;
        FUN_022223c0(param_5,local_258);
        puVar9 = &local_1d8;
        local_1d8 = 2;
        uVar8 = 0;
        local_1d0 = uVar10;
        FUN_021c9c78();
        uVar10 = uVar8;
        FUN_021c9d0c();
        __ss9OptionSetPs7ElementQzRszrlE8containsySbxF(puVar9,uVar8,uVar10);
        if (((ulong)puVar9 & 1) == 0) {
          return;
        }
      }
    }
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_022229a0(param_5,local_258);
    local_78 = dVar14;
    local_70 = param_2;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    local_368 = param_2;
    dVar15 = dVar14;
    local_88 = dVar14;
    local_80 = param_2;
    if (bVar5 != false) {
      uVar10 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      dVar15 = param_2;
      dVar16 = dVar14;
      (*(code *)PTR__objc_retain_02578638)();
      FUN_022220c0(uVar10,local_258);
      dVar18 = dVar16;
      local_170 = dVar15;
      local_168 = dVar16;
      (*(code *)PTR__objc_release_02578630)(uVar10);
      uVar6 = (uint)uVar10;
      FUN_021b9908();
      FUN_021b0724(uVar6 & 1);
      dVar17 = 0.0;
      dVar19 = -24.0;
      local_190 = dVar16;
      dStack_188 = dVar18;
      local_180 = param_3;
      dStack_178 = param_4;
      FUN_021b4eac();
      uVar8 = 0;
      local_368 = dVar17;
      dVar15 = dVar19;
      local_1b0 = dVar17;
      dStack_1a8 = dVar19;
      local_1a0 = dVar16;
      dStack_198 = dVar18;
      FUN_021c9a0c();
      (*(code *)PTR__objc_retain_02578638)(param_5);
      uVar10 = param_5;
      FUN_022237c0(param_5,local_258);
      (*(code *)PTR__objc_release_02578630)(param_5);
      puVar9 = &local_1b8;
      local_1c0 = 1;
      local_1b8 = uVar10;
      FUN_021c9aa0();
      __sSQ2eeoiySbx_xtFZTj(puVar9,&local_1c0,uVar8,uVar10);
      param_3 = dVar16;
      param_4 = dVar18;
      if ((((ulong)puVar9 & 1) != 0) &&
         (dVar15 = param_2, FUN_021b1f24(), local_368 = dVar14, param_3 = dVar17, param_4 = dVar19,
         ((ulong)puVar9 & 1) == 0)) {
        return;
      }
    }
    uVar8 = 0;
    FUN_021c9a0c();
    (*(code *)PTR__objc_retain_02578638)(param_5);
    uVar10 = param_5;
    FUN_022237c0(param_5,local_258);
    (*(code *)PTR__objc_release_02578630)(param_5);
    puVar9 = &local_90;
    local_98 = 1;
    local_90 = uVar10;
    FUN_021c9aa0();
    __sSQ2eeoiySbx_xtFZTj(puVar9,&local_98,uVar8);
    local_30c = (byte)puVar9;
    if (((ulong)puVar9 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)(param_5);
      uVar11 = param_5;
      FUN_022237c0(param_5,local_258);
      (*(code *)PTR__objc_release_02578630)(param_5);
      puVar9 = &local_a0;
      local_a8 = 2;
      local_a0 = uVar11;
      __sSQ2eeoiySbx_xtFZTj(puVar9,&local_a8,uVar8,uVar10);
      if (((ulong)puVar9 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)(param_5);
        uVar11 = param_5;
        FUN_022237c0(param_5,local_258);
        (*(code *)PTR__objc_release_02578630)(param_5);
        puVar9 = &local_b0;
        local_b8 = 3;
        local_b0 = uVar11;
        __sSQ2eeoiySbx_xtFZTj(puVar9,&local_b8,uVar8,uVar10);
        (*(code *)PTR__objc_retain_02578638)(param_5);
        if (((ulong)puVar9 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)(param_5);
          uVar11 = param_5;
          FUN_022237c0(param_5,local_258);
          (*(code *)PTR__objc_release_02578630)(param_5);
          puVar9 = &local_c0;
          local_c8 = 4;
          local_c0 = uVar11;
          __sSQ2eeoiySbx_xtFZTj(puVar9,&local_c8,uVar8,uVar10);
          local_3b4 = (uint)puVar9;
          (*(code *)PTR__objc_release_02578630)(param_5);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(param_5);
          local_3b4 = 1;
        }
        if ((local_3b4 & 1) != 0) {
          plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
          _swift_beginAccess(plVar1,auStack_e0,0x20,0);
          if (*plVar1 == 0) {
            _swift_endAccess(auStack_e0);
            local_3cc = 2;
          }
          else {
            lVar13 = *plVar1;
            (*(code *)PTR__objc_retain_02578638)();
            _swift_endAccess(auStack_e0);
            FUN_021bd02c();
            local_3cc = (uint)param_5;
            __s8WCRefine24WCRSuperFloatFanMenuViewC15commitSelection2atSbSo7CGPointV_tF();
            (*(code *)PTR__objc_release_02578630)(lVar13);
            local_3cc = local_3cc & 1;
          }
          local_e1 = (char)local_3cc;
          if (local_e1 == '\x02') {
            local_3dc = 0;
          }
          else {
            local_3dc = local_3cc;
          }
          local_e8 = (byte)local_3dc & 1;
          if ((local_3dc & 1) == 0) {
            FUN_0219eddc(1,0);
          }
        }
      }
      else {
        plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
        _swift_beginAccess(plVar1,auStack_100,0x20,0);
        if (*plVar1 == 0) {
          _swift_endAccess(auStack_100);
        }
        else {
          lVar13 = *plVar1;
          (*(code *)PTR__objc_retain_02578638)();
          _swift_endAccess(auStack_100);
          FUN_021bd02c(param_5);
          __s8WCRefine24WCRSuperFloatFanMenuViewC15updateHighlight2atySo7CGPointV_tF();
          (*(code *)PTR__objc_release_02578630)(lVar13);
        }
      }
    }
    else {
      if (bVar5 == false) {
        FUN_022223c0(param_5,local_258);
        puVar9 = &local_110;
        local_110 = 8;
        uVar8 = 0;
        local_108 = param_5;
        FUN_021c9c78();
        uVar10 = uVar8;
        FUN_021c9d0c();
        __ss9OptionSetPs7ElementQzRszrlE8containsySbxF(puVar9,uVar8,uVar10);
        local_30c = (byte)puVar9;
      }
      else {
        FUN_021b9908();
      }
      pbVar2 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::lastSideRight);
      _swift_beginAccess(pbVar2,auStack_128,0x21);
      *pbVar2 = local_30c & 1;
      _swift_endAccess(auStack_128);
      FUN_021bc7c0();
      pbVar2 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::lastSideRight);
      _swift_beginAccess(pbVar2,auStack_140,0x20,0);
      bVar3 = *pbVar2;
      _swift_endAccess(auStack_140);
      if ((bVar3 & 1) == 0) {
        local_368 = 24.0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)(unaff_x20);
        FUN_02222060(unaff_x20,local_258);
        local_160 = local_368;
        local_158 = dVar15;
        local_150 = param_3;
        local_148 = param_4;
        (*(code *)PTR__objc_release_02578630)(unaff_x20);
        FUN_021b0958(local_368,dVar15,param_3,param_4);
        local_368 = local_368 - 24.0;
      }
      FUN_021c1b5c(local_368,param_2);
    }
  }
  return;
}

