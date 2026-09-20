// FUN_021bdf4c @ 021bdf4c

/* WARNING: Removing unreachable block (ram,0x021be490) */

void FUN_021bdf4c(double param_1,double param_2,undefined8 param_3)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  double *pdVar13;
  double *pdVar14;
  long lVar15;
  double *unaff_x20;
  double dVar16;
  double dVar17;
  double dVar18;
  char *local_a30;
  undefined8 local_a28;
  char *local_a18;
  undefined8 local_a10;
  uint local_914;
  char *local_888;
  undefined8 local_880;
  char *local_848;
  undefined8 local_840;
  char *local_818;
  undefined8 local_810;
  char *local_7b8;
  double *local_7b0;
  uint local_674;
  uint local_5b4;
  uint local_5a4;
  uint local_58c;
  uint local_55c;
  undefined8 local_548;
  undefined1 auStack_4b8 [24];
  byte local_4a0;
  char local_499;
  undefined1 auStack_498 [24];
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  double local_440;
  double local_438;
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  undefined1 auStack_3d0 [24];
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  undefined1 auStack_398 [24];
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  double local_2c8;
  double local_2c0;
  undefined1 auStack_2b8 [24];
  char *local_2a0;
  double *local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double adStack_260 [3];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  char *local_1f8;
  undefined8 local_1f0;
  undefined1 auStack_1e8 [24];
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined1 auStack_1b0 [24];
  undefined8 local_198;
  long local_190;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  local_f0 = 0.0;
  local_e8 = 0.0;
  local_110 = 0.0;
  local_108 = 0.0;
  local_118 = 0.0;
  local_120 = 0.0;
  local_198 = 0;
  local_190 = 0;
  local_1d0 = 0.0;
  local_1c8 = 0.0;
  local_1f8 = (char *)0x0;
  local_1f0 = 0;
  local_2a0 = (char *)0x0;
  local_298 = (double *)0x0;
  local_3b8 = 0.0;
  local_3b0 = 0.0;
  local_440 = 0.0;
  local_438 = 0.0;
  local_4a0 = 0;
  plVar1 = (long *)((long)unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  _swift_beginAccess(plVar1,auStack_48,0x20,0);
  lVar15 = *plVar1;
  _swift_endAccess(auStack_48);
  if (lVar15 != 2) {
    pbVar2 = (byte *)((long)unaff_x20 + WCRSuperFloatBallWindow::longPressDragging);
    _swift_beginAccess(pbVar2,auStack_60,0x20,0);
    bVar3 = *pbVar2;
    _swift_endAccess(auStack_60);
    if ((bVar3 & 1) == 0) {
      pbVar2 = (byte *)((long)unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
      puVar6 = auStack_78;
      _swift_beginAccess(pbVar2,puVar6,0x20,0);
      bVar3 = *pbVar2;
      _swift_endAccess();
      if ((bVar3 & 1) == 0) {
        FUN_021ad108();
        if (((ulong)puVar6 & 1) == 0) {
          uVar7 = 0;
          FUN_021c9a0c();
          (*(code *)PTR__objc_retain_02578638)(param_3);
          uVar10 = param_3;
          FUN_022237c0(param_3,local_548);
          (*(code *)PTR__objc_release_02578630)(param_3);
          puVar9 = &local_80;
          local_88 = 1;
          local_80 = uVar10;
          FUN_021c9aa0();
          __sSQ2eeoiySbx_xtFZTj(puVar9,&local_88,uVar7);
          if (((ulong)puVar9 & 1) == 0) {
            (*(code *)PTR__objc_retain_02578638)(param_3);
            uVar11 = param_3;
            FUN_022237c0(param_3,local_548);
            (*(code *)PTR__objc_release_02578630)(param_3);
            puVar9 = &local_90;
            local_98 = 2;
            local_90 = uVar11;
            __sSQ2eeoiySbx_xtFZTj(puVar9,&local_98,uVar7,uVar10);
            if (((ulong)puVar9 & 1) == 0) {
              (*(code *)PTR__objc_retain_02578638)(param_3);
              uVar11 = param_3;
              FUN_022237c0(param_3,local_548);
              (*(code *)PTR__objc_release_02578630)(param_3);
              puVar9 = &local_a0;
              local_a8 = 3;
              local_a0 = uVar11;
              __sSQ2eeoiySbx_xtFZTj(puVar9,&local_a8,uVar7,uVar10);
              (*(code *)PTR__objc_retain_02578638)(param_3);
              if (((ulong)puVar9 & 1) == 0) {
                (*(code *)PTR__objc_retain_02578638)(param_3);
                uVar11 = param_3;
                FUN_022237c0(param_3,local_548);
                (*(code *)PTR__objc_release_02578630)(param_3);
                puVar9 = &local_b0;
                local_b8 = 4;
                local_b0 = uVar11;
                __sSQ2eeoiySbx_xtFZTj(puVar9,&local_b8,uVar7,uVar10);
                local_914 = (uint)puVar9;
                (*(code *)PTR__objc_release_02578630)(param_3);
              }
              else {
                (*(code *)PTR__objc_release_02578630)(param_3);
                local_914 = 1;
              }
              if ((local_914 & 1) != 0) {
                FUN_021b5b1c(0);
                pbVar2 = (byte *)((long)unaff_x20 + WCRSuperFloatBallWindow::panConsumedAsSwipe);
                _swift_beginAccess(pbVar2,auStack_d0,0x20,0);
                bVar3 = *pbVar2;
                _swift_endAccess(auStack_d0);
                if ((bVar3 & 1) == 0) {
                  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
                  FUN_02223a00(param_3,local_548);
                  local_e0 = param_1;
                  local_d8 = param_2;
                  (*(code *)PTR__objc_release_02578630)(unaff_x20);
                  dVar16 = param_2;
                  dVar18 = param_1;
                  local_f0 = param_1;
                  local_e8 = param_2;
                  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
                  FUN_02223a80(param_3,local_548);
                  pdVar13 = unaff_x20;
                  local_100 = dVar16;
                  local_f8 = dVar18;
                  (*(code *)PTR__objc_release_02578630)();
                  local_110 = dVar16;
                  local_108 = dVar18;
                  _hypot(param_1,param_2);
                  dVar17 = dVar16;
                  local_118 = param_1;
                  _hypot(dVar16,dVar18);
                  local_120 = dVar17;
                  FUN_021bdc88();
                  if (((ulong)pdVar13 & 1) == 0) {
                    if (param_1 < 96.0 && 480.0 < dVar17) {
                      local_130 = dVar16;
                      FUN_021c8058();
                      pdVar14 = pdVar13;
                      FUN_021c9b6c();
                      puVar4 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
                      __ss3absyxxSLRzs13SignedNumericRzlF
                                (&local_128,&local_130,PTR___s12CoreGraphics7CGFloatVN_02578ba0,
                                 pdVar13);
                      local_140 = dVar18;
                      __ss3absyxxSLRzs13SignedNumericRzlF
                                (&local_138,&local_140,puVar4,pdVar13,pdVar14);
                      if (local_128 <= local_138) {
                        if (dVar18 <= 0.0) {
                          local_a30 = "swipeUp";
                          local_a28 = 7;
                          __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                                    ("swipeUp",7,1);
                        }
                        else {
                          local_a30 = "swipeDown";
                          local_a28 = 9;
                          __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                                    ("swipeDown",9,1);
                        }
                        FUN_021bad3c(local_a30);
                        _swift_bridgeObjectRelease(local_a28);
                      }
                      else {
                        if (dVar16 <= 0.0) {
                          local_a18 = "swipeLeft";
                          local_a10 = 9;
                          __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                                    ("swipeLeft",9,1);
                        }
                        else {
                          local_a18 = "swipeRight";
                          local_a10 = 10;
                          __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                                    ("swipeRight",10,1);
                        }
                        FUN_021bad3c(local_a18);
                        _swift_bridgeObjectRelease(local_a10);
                      }
                      puVar6 = (undefined1 *)
                               ((long)unaff_x20 + WCRSuperFloatBallWindow::panConsumedAsSwipe);
                      _swift_beginAccess(puVar6,auStack_158,0x21,0);
                      *puVar6 = 1;
                      _swift_endAccess(auStack_158);
                      FUN_021bf8c4(1);
                    }
                    else {
                      FUN_021bcd84();
                    }
                  }
                  else {
                    puVar9 = (undefined8 *)
                             ((long)unaff_x20 + WCRSuperFloatBallWindow::pendingSwipeKey);
                    _swift_beginAccess(puVar9,auStack_170,0x20,0);
                    uVar10 = *puVar9;
                    lVar15 = puVar9[1];
                    _swift_bridgeObjectRetain();
                    _swift_endAccess(auStack_170);
                    if (lVar15 != 0) {
                      local_198 = uVar10;
                      local_190 = lVar15;
                      if (param_1 <= 22.0) {
                        _swift_bridgeObjectRelease(lVar15);
                      }
                      else {
                        FUN_021bad3c(uVar10,lVar15);
                        _swift_bridgeObjectRelease(lVar15);
                      }
                    }
                    puVar9 = (undefined8 *)
                             ((long)unaff_x20 + WCRSuperFloatBallWindow::pendingSwipeKey);
                    _swift_beginAccess(puVar9,auStack_188,0x21,0);
                    uVar10 = puVar9[1];
                    *puVar9 = 0;
                    puVar9[1] = 0;
                    _swift_bridgeObjectRelease(uVar10);
                    _swift_endAccess(auStack_188);
                    FUN_021bf8c4(1);
                  }
                }
                else {
                  puVar6 = (undefined1 *)
                           ((long)unaff_x20 + WCRSuperFloatBallWindow::panConsumedAsSwipe);
                  _swift_beginAccess(puVar6,auStack_1b0,0x21,0);
                  *puVar6 = 0;
                  _swift_endAccess(auStack_1b0);
                  FUN_021bf8c4(1);
                }
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)(unaff_x20);
              FUN_02223a00(param_3,local_548);
              local_7b0 = unaff_x20;
              local_1c0 = param_1;
              local_1b8 = param_2;
              (*(code *)PTR__objc_release_02578630)();
              local_1d0 = param_1;
              local_1c8 = param_2;
              FUN_021ba1f8();
              if (local_7b0 == (double *)((long)&MACH_HEADER.magic + 2)) {
                pbVar2 = (byte *)((long)unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
                pdVar13 = adStack_260;
                _swift_beginAccess(pbVar2,pdVar13,0x20,0);
                bVar3 = *pbVar2;
                _swift_endAccess();
                local_7b0 = pdVar13;
                if ((bVar3 & 1) == 0) {
                  local_270 = param_1;
                  FUN_021c8058();
                  pdVar14 = pdVar13;
                  FUN_021c9b6c();
                  puVar4 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
                  __ss3absyxxSLRzs13SignedNumericRzlF
                            (&local_268,&local_270,PTR___s12CoreGraphics7CGFloatVN_02578ba0,pdVar13)
                  ;
                  local_7b0 = &local_280;
                  local_280 = param_2;
                  __ss3absyxxSLRzs13SignedNumericRzlF(&local_278,local_7b0,puVar4,pdVar13,pdVar14);
                  if (local_278 < local_268) {
                    local_7b0 = &local_290;
                    local_290 = param_1;
                    __ss3absyxxSLRzs13SignedNumericRzlF
                              (&local_288,local_7b0,PTR___s12CoreGraphics7CGFloatVN_02578ba0,pdVar13
                               ,pdVar14);
                    if (22.0 < local_288) {
                      if (param_1 <= 0.0) {
                        local_7b8 = "swipeLeft";
                        local_7b0 = (double *)((long)&MACH_HEADER.cpusubtype + 1);
                        __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                                  ("swipeLeft",9,1);
                      }
                      else {
                        local_7b8 = "swipeRight";
                        local_7b0 = (double *)((long)&MACH_HEADER.cpusubtype + 2);
                        __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                                  ("swipeRight",10,1);
                      }
                      local_2a0 = local_7b8;
                      local_298 = local_7b0;
                      pdVar13 = local_7b0;
                      FUN_021bd198();
                      uVar5 = (uint)local_7b8;
                      __sSS7isEmptySbvg();
                      _swift_bridgeObjectRelease(pdVar13);
                      if ((uVar5 & 1) != 0) {
                        puVar6 = (undefined1 *)
                                 ((long)unaff_x20 + WCRSuperFloatBallWindow::panConsumedAsSwipe);
                        _swift_beginAccess(puVar6,auStack_2b8,0x21,0);
                        *puVar6 = 1;
                        _swift_endAccess(auStack_2b8);
                        FUN_021bc7c0();
                        FUN_021bab7c();
                        _swift_bridgeObjectRelease(local_7b0);
                        return;
                      }
                      _swift_bridgeObjectRelease();
                    }
                  }
                }
              }
              FUN_021bdc88();
              if (((ulong)local_7b0 & 1) == 0) {
                puVar9 = (undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::panStart);
                _swift_beginAccess(puVar9,auStack_1e8,0x20,0);
                uVar10 = *puVar9;
                uVar7 = puVar9[1];
                _swift_endAccess(auStack_1e8);
                FUN_021bd95c(uVar10,uVar7,param_1,param_2);
              }
              else {
                local_208 = param_1;
                FUN_021c8058();
                pdVar13 = local_7b0;
                FUN_021c9b6c();
                puVar4 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
                __ss3absyxxSLRzs13SignedNumericRzlF
                          (&local_200,&local_208,PTR___s12CoreGraphics7CGFloatVN_02578ba0,local_7b0)
                ;
                local_218 = param_2;
                __ss3absyxxSLRzs13SignedNumericRzlF(&local_210,&local_218,puVar4,local_7b0,pdVar13);
                if (local_200 <= local_210) {
                  if (param_2 <= 0.0) {
                    local_848 = "swipeUp";
                    local_840 = 7;
                    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                              ("swipeUp",7,1);
                  }
                  else {
                    local_848 = "swipeDown";
                    local_840 = 9;
                    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                              ("swipeDown",9,1);
                  }
                  _swift_bridgeObjectRetain();
                  local_1f8 = local_848;
                  local_1f0 = local_840;
                }
                else {
                  if (param_1 <= 0.0) {
                    local_818 = "swipeLeft";
                    local_810 = 9;
                    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                              ("swipeLeft",9,1);
                  }
                  else {
                    local_818 = "swipeRight";
                    local_810 = 10;
                    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                              ("swipeRight",10,1);
                  }
                  _swift_bridgeObjectRetain();
                  local_1f8 = local_818;
                  local_1f0 = local_810;
                }
                uVar10 = local_1f0;
                pcVar12 = local_1f8;
                uVar7 = local_1f0;
                FUN_021bd198();
                _swift_bridgeObjectRelease(uVar10);
                __sSS7isEmptySbvg(pcVar12,uVar7);
                _swift_bridgeObjectRelease(uVar7);
                local_880 = local_1f0;
                local_888 = local_1f8;
                if (((ulong)pcVar12 & 1) == 0) {
                  _swift_bridgeObjectRetain();
                }
                else {
                  local_888 = (char *)0x0;
                  local_880 = 0;
                }
                puVar9 = (undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::pendingSwipeKey);
                _swift_beginAccess(puVar9,auStack_230,0x21);
                uVar10 = puVar9[1];
                *puVar9 = local_888;
                puVar9[1] = local_880;
                _swift_bridgeObjectRelease(uVar10);
                _swift_endAccess(auStack_230);
                puVar9 = (undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::panStart);
                _swift_beginAccess(puVar9,auStack_248,0x20,0);
                uVar10 = *puVar9;
                uVar7 = puVar9[1];
                _swift_endAccess(auStack_248);
                FUN_021bd95c(uVar10,uVar7,0);
                FUN_021c7f98(&local_1f8);
              }
            }
          }
          else {
            FUN_021bc6d8();
            FUN_021b6634();
            uVar10 = *(undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
            (*(code *)PTR__objc_retain_02578638)();
            FUN_022220c0(uVar10,local_548);
            local_2c8 = param_1;
            local_2c0 = param_2;
            (*(code *)PTR__objc_release_02578630)(uVar10);
            pdVar13 = (double *)((long)unaff_x20 + WCRSuperFloatBallWindow::panStart);
            _swift_beginAccess();
            *pdVar13 = param_1;
            pdVar13[1] = param_2;
            _swift_endAccess(auStack_2e0);
            puVar6 = (undefined1 *)((long)unaff_x20 + WCRSuperFloatBallWindow::panConsumedAsSwipe);
            _swift_beginAccess(puVar6,auStack_2f8,0x21,0);
            *puVar6 = 0;
            _swift_endAccess(auStack_2f8);
            puVar9 = (undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::pendingSwipeKey);
            _swift_beginAccess(puVar9,auStack_310,0x21,0);
            uVar10 = puVar9[1];
            *puVar9 = 0;
            puVar9[1] = 0;
            _swift_bridgeObjectRelease(uVar10);
            _swift_endAccess(auStack_310);
            plVar1 = (long *)((long)unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
            _swift_beginAccess(plVar1,auStack_328,0x20,0);
            lVar15 = *plVar1;
            _swift_endAccess(auStack_328);
            if (lVar15 == 0) {
              uVar10 = *(undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
              (*(code *)PTR__objc_retain_02578638)();
              puVar9 = (undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::ballAlpha);
              _swift_beginAccess(puVar9,auStack_340,0x20,0);
              uVar7 = *puVar9;
              _swift_endAccess(auStack_340);
              FUN_02222cc0(uVar7,uVar10,local_548);
              (*(code *)PTR__objc_release_02578630)(uVar10);
            }
          }
        }
        else {
          uVar7 = 0;
          FUN_021c9a0c();
          (*(code *)PTR__objc_retain_02578638)(param_3);
          uVar10 = param_3;
          FUN_022237c0(param_3,local_548);
          (*(code *)PTR__objc_release_02578630)(param_3);
          puVar9 = &local_348;
          local_350 = 1;
          local_348 = uVar10;
          FUN_021c9aa0();
          __sSQ2eeoiySbx_xtFZTj(puVar9,&local_350,uVar7);
          if (((ulong)puVar9 & 1) == 0) {
            (*(code *)PTR__objc_retain_02578638)(param_3);
            uVar11 = param_3;
            FUN_022237c0(param_3,local_548);
            (*(code *)PTR__objc_release_02578630)(param_3);
            puVar9 = &local_358;
            local_360 = 2;
            local_358 = uVar11;
            __sSQ2eeoiySbx_xtFZTj(puVar9,&local_360,uVar7,uVar10);
            if (((ulong)puVar9 & 1) == 0) {
              (*(code *)PTR__objc_retain_02578638)(param_3);
              uVar11 = param_3;
              FUN_022237c0(param_3,local_548);
              (*(code *)PTR__objc_release_02578630)(param_3);
              puVar9 = &local_368;
              local_370 = 3;
              local_368 = uVar11;
              __sSQ2eeoiySbx_xtFZTj(puVar9,&local_370,uVar7,uVar10);
              (*(code *)PTR__objc_retain_02578638)(param_3);
              if (((ulong)puVar9 & 1) == 0) {
                (*(code *)PTR__objc_retain_02578638)(param_3);
                uVar11 = param_3;
                FUN_022237c0(param_3,local_548);
                (*(code *)PTR__objc_release_02578630)(param_3);
                puVar9 = &local_378;
                local_380 = 4;
                local_378 = uVar11;
                __sSQ2eeoiySbx_xtFZTj(puVar9,&local_380,uVar7,uVar10);
                local_674 = (uint)puVar9;
                (*(code *)PTR__objc_release_02578630)(param_3);
              }
              else {
                (*(code *)PTR__objc_release_02578630)(param_3);
                local_674 = 1;
              }
              if ((local_674 & 1) != 0) {
                puVar6 = (undefined1 *)
                         ((long)unaff_x20 + WCRSuperFloatBallWindow::panConsumedAsSwipe);
                _swift_beginAccess(puVar6,auStack_398,0x21,0);
                *puVar6 = 0;
                _swift_endAccess(auStack_398);
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)(unaff_x20);
              FUN_02223a00(param_3,local_548);
              pdVar13 = unaff_x20;
              local_3a8 = param_1;
              local_3a0 = param_2;
              (*(code *)PTR__objc_release_02578630)();
              local_3b8 = param_1;
              local_3b0 = param_2;
              FUN_021ba1f8();
              if (pdVar13 == (double *)((long)&MACH_HEADER.magic + 2)) {
                pbVar2 = (byte *)((long)unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
                puVar6 = auStack_3d0;
                _swift_beginAccess(pbVar2,puVar6,0x20,0);
                bVar3 = *pbVar2;
                _swift_endAccess();
                if ((bVar3 & 1) == 0) {
                  local_3e0 = param_1;
                  FUN_021c8058();
                  puVar8 = puVar6;
                  FUN_021c9b6c();
                  puVar4 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
                  __ss3absyxxSLRzs13SignedNumericRzlF
                            (&local_3d8,&local_3e0,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar6);
                  local_3f0 = param_2;
                  __ss3absyxxSLRzs13SignedNumericRzlF(&local_3e8,&local_3f0,puVar4,puVar6,puVar8);
                  if ((local_3e8 < local_3d8) &&
                     (local_400 = param_1,
                     __ss3absyxxSLRzs13SignedNumericRzlF
                               (&local_3f8,&local_400,PTR___s12CoreGraphics7CGFloatVN_02578ba0,
                                puVar6,puVar8), 22.0 < local_3f8)) {
                    puVar6 = (undefined1 *)
                             ((long)unaff_x20 + WCRSuperFloatBallWindow::panConsumedAsSwipe);
                    _swift_beginAccess(puVar6,auStack_418,0x21,0);
                    *puVar6 = 1;
                    _swift_endAccess(auStack_418);
                    FUN_021bc7c0();
                    FUN_021bab7c();
                  }
                }
              }
            }
          }
          else {
            puVar6 = (undefined1 *)((long)unaff_x20 + WCRSuperFloatBallWindow::panConsumedAsSwipe);
            _swift_beginAccess(puVar6,auStack_430,0x21,0);
            *puVar6 = 0;
            _swift_endAccess(auStack_430);
          }
        }
      }
      else {
        FUN_021bd02c(param_3);
        uVar7 = 0;
        local_440 = param_1;
        local_438 = param_2;
        FUN_021c9a0c();
        (*(code *)PTR__objc_retain_02578638)(param_3);
        uVar10 = param_3;
        FUN_022237c0(param_3,local_548);
        (*(code *)PTR__objc_release_02578630)(param_3);
        puVar9 = &local_448;
        local_450 = 1;
        local_448 = uVar10;
        FUN_021c9aa0();
        __sSQ2eeoiySbx_xtFZTj(puVar9,&local_450,uVar7);
        (*(code *)PTR__objc_retain_02578638)(param_3);
        if (((ulong)puVar9 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)(param_3);
          uVar11 = param_3;
          FUN_022237c0(param_3,local_548);
          (*(code *)PTR__objc_release_02578630)(param_3);
          puVar9 = &local_458;
          local_460 = 2;
          local_458 = uVar11;
          __sSQ2eeoiySbx_xtFZTj(puVar9,&local_460,uVar7,uVar10);
          local_55c = (uint)puVar9;
          (*(code *)PTR__objc_release_02578630)(param_3);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(param_3);
          local_55c = 1;
        }
        if ((local_55c & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)(param_3);
          uVar11 = param_3;
          FUN_022237c0(param_3,local_548);
          (*(code *)PTR__objc_release_02578630)(param_3);
          puVar9 = &local_468;
          local_470 = 3;
          local_468 = uVar11;
          __sSQ2eeoiySbx_xtFZTj(puVar9,&local_470,uVar7,uVar10);
          (*(code *)PTR__objc_retain_02578638)(param_3);
          if (((ulong)puVar9 & 1) == 0) {
            (*(code *)PTR__objc_retain_02578638)(param_3);
            uVar11 = param_3;
            FUN_022237c0(param_3,local_548);
            (*(code *)PTR__objc_release_02578630)(param_3);
            puVar9 = &local_478;
            local_480 = 4;
            local_478 = uVar11;
            __sSQ2eeoiySbx_xtFZTj(puVar9,&local_480,uVar7,uVar10);
            local_58c = (uint)puVar9;
            (*(code *)PTR__objc_release_02578630)(param_3);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(param_3);
            local_58c = 1;
          }
          if ((local_58c & 1) != 0) {
            plVar1 = (long *)((long)unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
            _swift_beginAccess(plVar1,auStack_498,0x20,0);
            if (*plVar1 == 0) {
              _swift_endAccess(auStack_498);
              local_5a4 = 2;
            }
            else {
              lVar15 = *plVar1;
              (*(code *)PTR__objc_retain_02578638)(lVar15);
              local_5a4 = 0;
              _swift_endAccess();
              __s8WCRefine24WCRSuperFloatFanMenuViewC15commitSelection2atSbSo7CGPointV_tF
                        (param_1,param_2);
              (*(code *)PTR__objc_release_02578630)(lVar15);
              local_5a4 = local_5a4 & 1;
            }
            local_499 = (char)local_5a4;
            if (local_499 == '\x02') {
              local_5b4 = 0;
            }
            else {
              local_5b4 = local_5a4;
            }
            local_4a0 = (byte)local_5b4 & 1;
            if ((local_5b4 & 1) == 0) {
              FUN_0219eddc(1,0);
            }
          }
        }
        else {
          plVar1 = (long *)((long)unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
          _swift_beginAccess(plVar1,auStack_4b8,0x20,0);
          if (*plVar1 == 0) {
            _swift_endAccess(auStack_4b8);
          }
          else {
            lVar15 = *plVar1;
            (*(code *)PTR__objc_retain_02578638)(lVar15);
            _swift_endAccess(auStack_4b8);
            __s8WCRefine24WCRSuperFloatFanMenuViewC15updateHighlight2atySo7CGPointV_tF
                      (param_1,param_2);
            (*(code *)PTR__objc_release_02578630)(lVar15);
          }
        }
      }
    }
  }
  return;
}

