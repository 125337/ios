// FUN_021bb024 @ 021bb024

/* WARNING: Removing unreachable block (ram,0x021bbca4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_021bb024(double param_1,double param_2,ulong param_3)

{
  byte *pbVar1;
  double *pdVar2;
  undefined1 *puVar3;
  long *plVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long unaff_x20;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  uint local_98c;
  uint local_8fc;
  uint local_74c;
  uint local_73c;
  uint local_6f4;
  uint local_614;
  undefined8 local_4d0;
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  double local_430;
  double local_428;
  undefined1 auStack_420 [24];
  double local_408;
  double local_400;
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  undefined8 local_348;
  ulong local_340 [3];
  undefined8 local_328;
  ulong local_320 [3];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  byte local_290;
  char local_289;
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined8 local_228;
  ulong local_220 [3];
  undefined8 local_208;
  ulong local_200 [3];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  double local_1b8;
  double local_1b0;
  undefined1 auStack_1a8 [24];
  double local_190;
  double local_188;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  ulong local_b0 [3];
  undefined8 local_98;
  ulong local_90 [3];
  undefined1 auStack_78 [24];
  undefined8 local_60;
  ulong local_58 [3];
  undefined8 local_40;
  ulong local_38;
  
  local_120 = 0.0;
  local_118 = 0.0;
  local_290 = 0;
  local_3b0 = 0.0;
  local_3a8 = 0.0;
  uVar6 = param_3;
  FUN_021ad108();
  if ((uVar6 & 1) == 0) {
    FUN_021ba1f8();
    if (uVar6 == 1) {
      uVar7 = 0;
      FUN_021c9a0c(0);
      (*(code *)PTR__objc_retain_02578638)(param_3);
      uVar6 = param_3;
      FUN_022237c0(param_3,local_4d0);
      (*(code *)PTR__objc_release_02578630)(param_3);
      puVar13 = local_200 + 2;
      local_200[1] = 1;
      local_200[2] = uVar6;
      FUN_021c9aa0();
      __sSQ2eeoiySbx_xtFZTj(puVar13,local_200 + 1,uVar7);
      if (((ulong)puVar13 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)(param_3);
        uVar11 = param_3;
        FUN_022237c0(param_3,local_4d0);
        (*(code *)PTR__objc_release_02578630)(param_3);
        uVar12 = (ulong)local_200;
        local_208 = 2;
        local_200[0] = uVar11;
        __sSQ2eeoiySbx_xtFZTj(uVar12,&local_208,uVar7,uVar6);
        if ((uVar12 & 1) != 0) {
          pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::holdOpenTracking);
          _swift_beginAccess(pbVar1,auStack_2a8,0x20,0);
          bVar5 = *pbVar1;
          _swift_endAccess(auStack_2a8);
          if ((bVar5 & 1) != 0) {
            pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
            _swift_beginAccess(pbVar1,auStack_2c0,0x20,0);
            bVar5 = *pbVar1;
            _swift_endAccess(auStack_2c0);
            if ((bVar5 & 1) != 0) {
              plVar4 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
              _swift_beginAccess(plVar4,auStack_2d8,0x20,0);
              if (*plVar4 != 0) {
                lVar8 = *plVar4;
                (*(code *)PTR__objc_retain_02578638)();
                _swift_endAccess(auStack_2d8);
                FUN_021bd02c(param_3);
                __s8WCRefine24WCRSuperFloatFanMenuViewC15updateHighlight2atySo7CGPointV_tF();
                (*(code *)PTR__objc_release_02578630)(lVar8);
                return;
              }
              _swift_endAccess(auStack_2d8);
              return;
            }
          }
        }
        (*(code *)PTR__objc_retain_02578638)(param_3);
        uVar12 = param_3;
        FUN_022237c0(param_3,local_4d0);
        (*(code *)PTR__objc_release_02578630)(param_3);
        puVar13 = local_220 + 2;
        local_220[1] = 3;
        local_220[2] = uVar12;
        __sSQ2eeoiySbx_xtFZTj(puVar13,local_220 + 1,uVar7,uVar6);
        (*(code *)PTR__objc_retain_02578638)(param_3);
        if (((ulong)puVar13 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)(param_3);
          uVar12 = param_3;
          FUN_022237c0(param_3,local_4d0);
          (*(code *)PTR__objc_release_02578630)(param_3);
          puVar13 = local_220;
          local_228 = 4;
          local_220[0] = uVar12;
          __sSQ2eeoiySbx_xtFZTj(puVar13,&local_228,uVar7,uVar6);
          local_6f4 = (uint)puVar13;
          (*(code *)PTR__objc_release_02578630)(param_3);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(param_3);
          local_6f4 = 1;
        }
        if ((local_6f4 & 1) != 0) {
          pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::holdOpenTracking);
          _swift_beginAccess(pbVar1,auStack_240,0x20,0);
          bVar5 = *pbVar1;
          _swift_endAccess(auStack_240);
          if ((bVar5 & 1) != 0) {
            pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
            _swift_beginAccess(pbVar1,auStack_270,0x20,0);
            bVar5 = *pbVar1;
            _swift_endAccess(auStack_270);
            if ((bVar5 & 1) != 0) {
              plVar4 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
              _swift_beginAccess(plVar4,auStack_288,0x20,0);
              if (*plVar4 == 0) {
                _swift_endAccess(auStack_288);
                local_73c = 2;
              }
              else {
                lVar8 = *plVar4;
                (*(code *)PTR__objc_retain_02578638)();
                _swift_endAccess(auStack_288);
                FUN_021bd02c();
                local_73c = (uint)param_3;
                __s8WCRefine24WCRSuperFloatFanMenuViewC15commitSelection2atSbSo7CGPointV_tF();
                (*(code *)PTR__objc_release_02578630)(lVar8);
                local_73c = local_73c & 1;
              }
              local_289 = (char)local_73c;
              if (local_289 == '\x02') {
                local_74c = 0;
              }
              else {
                local_74c = local_73c;
              }
              local_290 = (byte)local_74c & 1;
              if ((local_74c & 1) == 0) {
                FUN_0219eddc(1,0);
              }
            }
          }
          puVar3 = (undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::holdOpenTracking);
          _swift_beginAccess(puVar3,auStack_258,0x21,0);
          *puVar3 = 0;
          _swift_endAccess(auStack_258);
          FUN_021b5b1c(0);
        }
      }
      else {
        FUN_021b5b1c(1);
        pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
        _swift_beginAccess(pbVar1,auStack_2f0,0x20,0);
        bVar5 = *pbVar1;
        _swift_endAccess(auStack_2f0);
        if ((bVar5 & 1) == 0) {
          puVar3 = (undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::holdOpenTracking);
          _swift_beginAccess(puVar3,auStack_308,0x21,0);
          *puVar3 = 1;
          _swift_endAccess(auStack_308);
          FUN_021bc7c0();
          FUN_021bab7c();
        }
      }
    }
    else {
      pcVar9 = "longPress";
      puVar10 = (undefined8 *)((long)&MACH_HEADER.cpusubtype + 1);
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("longPress",9,1);
      puVar14 = puVar10;
      FUN_021bd198();
      _swift_bridgeObjectRelease();
      FUN_021a2be8();
      uVar15 = *puVar10;
      uVar7 = puVar10[1];
      _swift_bridgeObjectRetain();
      __sSS2eeoiySbSS_SStFZ(pcVar9,puVar14,uVar15,uVar7);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(puVar14);
      if (((ulong)pcVar9 & 1) == 0) {
        uVar7 = 0;
        FUN_021c9a0c();
        (*(code *)PTR__objc_retain_02578638)(param_3);
        uVar12 = param_3;
        FUN_022237c0(param_3,local_4d0);
        (*(code *)PTR__objc_release_02578630)(param_3);
        uVar6 = (ulong)&local_38;
        local_40 = 1;
        local_38 = uVar12;
        FUN_021c9aa0();
        __sSQ2eeoiySbx_xtFZTj(uVar6,&local_40,uVar7);
        if ((uVar6 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)(param_3);
          uVar6 = param_3;
          FUN_022237c0(param_3,local_4d0);
          (*(code *)PTR__objc_release_02578630)(param_3);
          puVar13 = local_58 + 2;
          local_58[1] = 3;
          local_58[2] = uVar6;
          __sSQ2eeoiySbx_xtFZTj(puVar13,local_58 + 1,uVar7,uVar12);
          (*(code *)PTR__objc_retain_02578638)(param_3);
          if (((ulong)puVar13 & 1) == 0) {
            (*(code *)PTR__objc_retain_02578638)(param_3);
            uVar6 = param_3;
            FUN_022237c0(param_3,local_4d0);
            (*(code *)PTR__objc_release_02578630)(param_3);
            puVar13 = local_58;
            local_60 = 4;
            local_58[0] = uVar6;
            __sSQ2eeoiySbx_xtFZTj(puVar13,&local_60,uVar7,uVar12);
            local_98c = (uint)puVar13;
            (*(code *)PTR__objc_release_02578630)(param_3);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(param_3);
            local_98c = 1;
          }
          if ((local_98c & 1) != 0) {
            FUN_021b5b1c(0);
          }
        }
        else {
          FUN_021b5b1c(1);
          pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
          _swift_beginAccess(pbVar1,auStack_78,0x20,0);
          bVar5 = *pbVar1;
          _swift_endAccess(auStack_78);
          if ((bVar5 & 1) == 0) {
            uVar7 = 9;
            __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("longPress",9,1);
            FUN_021bad3c();
            _swift_bridgeObjectRelease(uVar7);
          }
        }
      }
      else {
        uVar7 = 0;
        FUN_021c9a0c();
        (*(code *)PTR__objc_retain_02578638)(param_3);
        uVar6 = param_3;
        FUN_022237c0(param_3,local_4d0);
        (*(code *)PTR__objc_release_02578630)(param_3);
        puVar13 = local_90 + 2;
        local_90[1] = 1;
        local_90[2] = uVar6;
        FUN_021c9aa0();
        __sSQ2eeoiySbx_xtFZTj(puVar13,local_90 + 1,uVar7);
        if (((ulong)puVar13 & 1) != 0) {
          pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
          _swift_beginAccess(pbVar1,auStack_180,0x20,0);
          bVar5 = *pbVar1;
          _swift_endAccess(auStack_180);
          if ((bVar5 & 1) == 0) {
            FUN_021bc6d8();
            FUN_021b6634();
            uVar7 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
            (*(code *)PTR__objc_retain_02578638)();
            FUN_022220c0(uVar7,local_4d0);
            dVar16 = param_1;
            dVar17 = param_2;
            local_190 = param_1;
            local_188 = param_2;
            (*(code *)PTR__objc_release_02578630)(uVar7);
            pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragStart);
            _swift_beginAccess();
            *pdVar2 = param_1;
            pdVar2[1] = param_2;
            _swift_endAccess(auStack_1a8);
            (*(code *)PTR__objc_retain_02578638)(unaff_x20);
            FUN_022229a0(param_3,local_4d0);
            local_1b8 = dVar16;
            local_1b0 = dVar17;
            (*(code *)PTR__objc_release_02578630)(unaff_x20);
            pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::longPressTouchStart);
            _swift_beginAccess(pdVar2,auStack_1d0,0x21,0);
            *pdVar2 = dVar16;
            pdVar2[1] = dVar17;
            _swift_endAccess(auStack_1d0);
            puVar3 = (undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragging);
            _swift_beginAccess(puVar3,auStack_1e8,0x21,0);
            *puVar3 = 1;
            _swift_endAccess(auStack_1e8);
            FUN_021b5b1c(1);
            FUN_021bc7c0();
            return;
          }
        }
        (*(code *)PTR__objc_retain_02578638)(param_3);
        uVar11 = param_3;
        FUN_022237c0(param_3,local_4d0);
        (*(code *)PTR__objc_release_02578630)(param_3);
        uVar12 = (ulong)local_90;
        local_98 = 2;
        local_90[0] = uVar11;
        __sSQ2eeoiySbx_xtFZTj(uVar12,&local_98,uVar7,uVar6);
        if ((uVar12 & 1) != 0) {
          pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragging);
          _swift_beginAccess(pbVar1,auStack_100,0x20,0);
          bVar5 = *pbVar1;
          _swift_endAccess(auStack_100);
          if ((bVar5 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)(unaff_x20);
            FUN_022229a0(param_3,local_4d0);
            local_110 = param_1;
            local_108 = param_2;
            (*(code *)PTR__objc_release_02578630)(unaff_x20);
            puVar14 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragStart);
            local_120 = param_1;
            local_118 = param_2;
            _swift_beginAccess();
            uVar7 = *puVar14;
            uVar15 = puVar14[1];
            _swift_endAccess(auStack_138);
            pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::longPressTouchStart);
            _swift_beginAccess(pdVar2,auStack_150,0x20,0);
            dVar16 = *pdVar2;
            _swift_endAccess(auStack_150);
            lVar8 = unaff_x20 + WCRSuperFloatBallWindow::longPressTouchStart;
            _swift_beginAccess(lVar8,auStack_168,0x20,0);
            dVar17 = *(double *)(lVar8 + 8);
            _swift_endAccess(auStack_168);
            FUN_021bd95c(uVar7,uVar15,param_1 - dVar16,param_2 - dVar17);
            return;
          }
        }
        (*(code *)PTR__objc_retain_02578638)(param_3);
        uVar12 = param_3;
        FUN_022237c0(param_3,local_4d0);
        (*(code *)PTR__objc_release_02578630)(param_3);
        puVar13 = local_b0 + 2;
        local_b0[1] = 3;
        local_b0[2] = uVar12;
        __sSQ2eeoiySbx_xtFZTj(puVar13,local_b0 + 1,uVar7,uVar6);
        (*(code *)PTR__objc_retain_02578638)(param_3);
        if (((ulong)puVar13 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)(param_3);
          uVar12 = param_3;
          FUN_022237c0(param_3,local_4d0);
          (*(code *)PTR__objc_release_02578630)(param_3);
          puVar13 = local_b0;
          local_b8 = 4;
          local_b0[0] = uVar12;
          __sSQ2eeoiySbx_xtFZTj(puVar13,&local_b8,uVar7,uVar6);
          local_8fc = (uint)puVar13;
          (*(code *)PTR__objc_release_02578630)(param_3);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(param_3);
          local_8fc = 1;
        }
        if ((local_8fc & 1) != 0) {
          pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragging);
          _swift_beginAccess(pbVar1,auStack_d0,0x20,0);
          bVar5 = *pbVar1;
          _swift_endAccess(auStack_d0);
          if ((bVar5 & 1) != 0) {
            puVar3 = (undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragging);
            _swift_beginAccess(puVar3,auStack_e8,0x21,0);
            *puVar3 = 0;
            _swift_endAccess(auStack_e8);
            FUN_021bcd84();
          }
        }
      }
    }
  }
  else {
    uVar7 = 0;
    FUN_021c9a0c();
    (*(code *)PTR__objc_retain_02578638)(param_3);
    uVar6 = param_3;
    FUN_022237c0(param_3,local_4d0);
    (*(code *)PTR__objc_release_02578630)(param_3);
    puVar13 = local_320 + 2;
    local_320[1] = 1;
    local_320[2] = uVar6;
    FUN_021c9aa0();
    __sSQ2eeoiySbx_xtFZTj(puVar13,local_320 + 1,uVar7);
    if (((ulong)puVar13 & 1) != 0) {
      pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
      _swift_beginAccess(pbVar1,auStack_3f8,0x20,0);
      bVar5 = *pbVar1;
      _swift_endAccess(auStack_3f8);
      if ((bVar5 & 1) == 0) {
        FUN_021bc6d8();
        uVar7 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
        (*(code *)PTR__objc_retain_02578638)();
        FUN_022220c0(uVar7,local_4d0);
        dVar16 = param_1;
        dVar17 = param_2;
        local_408 = param_1;
        local_400 = param_2;
        (*(code *)PTR__objc_release_02578630)(uVar7);
        pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragStart);
        _swift_beginAccess();
        *pdVar2 = param_1;
        pdVar2[1] = param_2;
        _swift_endAccess(auStack_420);
        (*(code *)PTR__objc_retain_02578638)(unaff_x20);
        FUN_022229a0(param_3,local_4d0);
        local_430 = dVar16;
        local_428 = dVar17;
        (*(code *)PTR__objc_release_02578630)(unaff_x20);
        pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::longPressTouchStart);
        _swift_beginAccess(pdVar2,auStack_448,0x21,0);
        *pdVar2 = dVar16;
        pdVar2[1] = dVar17;
        _swift_endAccess(auStack_448);
        puVar3 = (undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragging);
        _swift_beginAccess(puVar3,auStack_460,0x21,0);
        *puVar3 = 1;
        _swift_endAccess(auStack_460);
        plVar4 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineView);
        _swift_beginAccess(plVar4,auStack_478,0x20,0);
        if (*plVar4 == 0) {
          _swift_endAccess(auStack_478);
        }
        else {
          lVar8 = *plVar4;
          (*(code *)PTR__objc_retain_02578638)();
          _swift_endAccess(auStack_478);
          puVar14 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballAlpha);
          _swift_beginAccess(puVar14,auStack_490,0x20,0);
          uVar7 = *puVar14;
          _swift_endAccess(auStack_490);
          FUN_02222cc0(uVar7,lVar8,local_4d0);
          (*(code *)PTR__objc_release_02578630)(lVar8);
        }
        FUN_021bc7c0();
        return;
      }
    }
    (*(code *)PTR__objc_retain_02578638)(param_3);
    uVar11 = param_3;
    FUN_022237c0(param_3,local_4d0);
    (*(code *)PTR__objc_release_02578630)(param_3);
    uVar12 = (ulong)local_320;
    local_328 = 2;
    local_320[0] = uVar11;
    __sSQ2eeoiySbx_xtFZTj(uVar12,&local_328,uVar7,uVar6);
    if ((uVar12 & 1) != 0) {
      pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragging);
      _swift_beginAccess(pbVar1,auStack_390,0x20,0);
      bVar5 = *pbVar1;
      _swift_endAccess(auStack_390);
      if ((bVar5 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)(unaff_x20);
        FUN_022229a0(param_3,local_4d0);
        local_3a0 = param_1;
        local_398 = param_2;
        (*(code *)PTR__objc_release_02578630)(unaff_x20);
        puVar14 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragStart);
        local_3b0 = param_1;
        local_3a8 = param_2;
        _swift_beginAccess();
        uVar7 = *puVar14;
        uVar15 = puVar14[1];
        _swift_endAccess(auStack_3c8);
        lVar8 = unaff_x20 + WCRSuperFloatBallWindow::longPressTouchStart;
        _swift_beginAccess(lVar8,auStack_3e0,0x20,0);
        dVar16 = *(double *)(lVar8 + 8);
        _swift_endAccess(auStack_3e0);
        FUN_021bca90(uVar7,uVar15,param_2 - dVar16);
        return;
      }
    }
    (*(code *)PTR__objc_retain_02578638)(param_3);
    uVar12 = param_3;
    FUN_022237c0(param_3,local_4d0);
    (*(code *)PTR__objc_release_02578630)(param_3);
    puVar13 = local_340 + 2;
    local_340[1] = 3;
    local_340[2] = uVar12;
    __sSQ2eeoiySbx_xtFZTj(puVar13,local_340 + 1,uVar7,uVar6);
    (*(code *)PTR__objc_retain_02578638)(param_3);
    if (((ulong)puVar13 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)(param_3);
      uVar12 = param_3;
      FUN_022237c0(param_3,local_4d0);
      (*(code *)PTR__objc_release_02578630)(param_3);
      puVar13 = local_340;
      local_348 = 4;
      local_340[0] = uVar12;
      __sSQ2eeoiySbx_xtFZTj(puVar13,&local_348,uVar7,uVar6);
      local_614 = (uint)puVar13;
      (*(code *)PTR__objc_release_02578630)(param_3);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(param_3);
      local_614 = 1;
    }
    if ((local_614 & 1) != 0) {
      pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragging);
      _swift_beginAccess(pbVar1,auStack_360,0x20,0);
      bVar5 = *pbVar1;
      _swift_endAccess(auStack_360);
      if ((bVar5 & 1) != 0) {
        puVar3 = (undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::longPressDragging);
        _swift_beginAccess(puVar3,auStack_378,0x21,0);
        *puVar3 = 0;
        _swift_endAccess(auStack_378);
        FUN_021bcd84();
      }
    }
  }
  return;
}

