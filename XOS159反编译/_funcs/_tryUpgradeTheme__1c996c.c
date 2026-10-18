// _tryUpgradeTheme @0x1c996c


/* Function Stack Size: 0x10 bytes */



void XZYCLGUnreadBadge::_tryUpgradeTheme(ID param_1,SEL param_2)



{

  int iVar1;

  int iVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  ulong uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  SEL extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 uVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  long lVar15;

  long lVar16;

  long lVar17;

  undefined8 uVar18;

  double dVar19;

  double in_d1;

  double in_d2;

  double dVar20;

  double in_d3;

  undefined1 auVar21 [16];

  undefined8 local_380;

  long lStack_378;

  long *local_370;

  undefined8 uStack_368;

  undefined8 local_360;

  undefined8 uStack_358;

  undefined8 uStack_350;

  undefined8 uStack_348;

  undefined8 local_340;

  long lStack_338;

  long *local_330;

  undefined8 uStack_328;

  undefined8 local_320;

  undefined8 uStack_318;

  undefined8 uStack_310;

  undefined8 uStack_308;

  undefined8 local_300;

  long lStack_2f8;

  long *local_2f0;

  undefined8 uStack_2e8;

  undefined8 local_2e0;

  undefined8 uStack_2d8;

  undefined8 uStack_2d0;

  undefined8 uStack_2c8;

  undefined8 local_2c0;

  long lStack_2b8;

  long *local_2b0;

  undefined8 uStack_2a8;

  undefined8 local_2a0;

  undefined8 uStack_298;

  undefined8 uStack_290;

  undefined8 uStack_288;

  undefined1 auStack_280 [128];

  undefined1 auStack_200 [128];

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  if ((DAT_003e70e8 & 1) == 0) {

    lVar8 = (long)_bgImageView;

    lVar3 = *(long *)(param_1 + lVar8);

    if (lVar3 != 0) {

      FUN_0029ec00(lVar3,param_2,0);

      FUN_0029e8a0(*(undefined8 *)(param_1 + lVar8),extraout_x1,1);

      param_2 = extraout_x1_00;

    }

    lVar3 = (long)_renderMode;

    if (*(long *)(param_1 + lVar3) != 0) {

      FUN_002a4cc0(&_OBJC_CLASS___UIColor,param_2);

      auVar21 = _objc_retainAutoreleasedReturnValue();

      lVar8 = (long)_capsule;

      FUN_0029cf60(*(undefined8 *)(param_1 + lVar8),auVar21._8_8_,auVar21._0_8_);

      _objc_release(auVar21._0_8_);

      FUN_002a64a0(&_OBJC_CLASS___UIColor);

      auVar21 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1da0(*(undefined8 *)(param_1 + lVar8),auVar21._8_8_,auVar21._0_8_);

      _objc_release(auVar21._0_8_);

      FUN_00297e40(*(undefined8 *)(param_1 + lVar8));

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(0x4022000000000000);

      _objc_release(uVar9);

      FUN_00297e40(*(undefined8 *)(param_1 + lVar8));

      auVar21 = _objc_retainAutoreleasedReturnValue();

      FUN_0029f960(auVar21._0_8_,auVar21._8_8_,1);

      _objc_release(auVar21._0_8_);

      *(undefined8 *)(param_1 + lVar3) = 0;

    }

    goto LAB_001ca3fc;

  }

  iVar1 = FUN_001ca5d8(DAT_003eaa80);

  lVar3 = DAT_003eaa80;

  if (iVar1 == 0) {

    if ((DAT_003eaa98 & 1) == 0) {

      DAT_003eaa98 = 1;

      lVar3 = _NSClassFromString(&cf_MMBadgeView);

      if (lVar3 == 0) {

LAB_001c9ce0:

        lVar15 = 0;

        uVar9 = 0;

      }

      else {

        uStack_298 = 0;

        local_2a0 = 0;

        uStack_288 = 0;

        uStack_290 = 0;

        lStack_2b8 = 0;

        local_2c0 = 0;

        uStack_2a8 = 0;

        local_2b0 = (long *)0x0;

        FUN_002a2e60(&_OBJC_CLASS___UIApplication);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_00293440();

        lVar8 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar9);

        lVar15 = FUN_00293880(lVar8,extraout_x1_01,&local_2c0,auStack_100,0x10);

        if (lVar15 == 0) {

          uVar9 = 0;

          lVar15 = 0;

        }

        else {

          lVar12 = 0;

          lVar13 = *local_2b0;

          do {

            lVar17 = 0;

            do {

              if (*local_2b0 != lVar13) {

                _objc_enumerationMutation(lVar8);

              }

              uVar10 = *(undefined8 *)(lStack_2b8 + lVar17 * 8);

              uVar9 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

              auVar21 = _objc_opt_isKindOfClass(uVar10,uVar9);

              uVar9 = auVar21._8_8_;

              if ((auVar21._0_8_ & 1) != 0) {

                uStack_2d8 = 0;

                local_2e0 = 0;

                uStack_2c8 = 0;

                uStack_2d0 = 0;

                lStack_2f8 = 0;

                local_300 = 0;

                uStack_2e8 = 0;

                local_2f0 = (long *)0x0;

                FUN_002a6560(uVar10);

                auVar21 = _objc_retainAutoreleasedReturnValue();

                uVar9 = auVar21._0_8_;

                lVar4 = FUN_00293880(uVar9,auVar21._8_8_,&local_300,auStack_180,0x10);

                if (lVar4 != 0) {

                  lVar11 = *local_2f0;

                  do {

                    lVar14 = 0;

                    do {

                      if (*local_2f0 != lVar11) {

                        _objc_enumerationMutation(uVar9);

                      }

                      lVar16 = *(long *)(lStack_2f8 + lVar14 * 8);

                      if (lVar12 == 0) {

                        _objc_retain(lVar16);

                        lVar12 = lVar16;

                      }

                      auVar21 = FUN_00297900(lVar16);

                      if ((auVar21._0_8_ & 1) != 0) {

                        _objc_retain(lVar16);

                        _objc_release(uVar9);

                        uVar9 = extraout_x1_03;

                        if (lVar16 == 0) goto LAB_001c9cac;

                        _objc_release(lVar8);

                        _objc_release(lVar12);

                        uVar9 = extraout_x1_05;

                        lVar8 = lVar16;

                        goto LAB_001c9d00;

                      }

                      lVar14 = lVar14 + 1;

                    } while (lVar4 != lVar14);

                    lVar4 = FUN_00293880(uVar9,auVar21._8_8_,&local_300,auStack_180,0x10);

                  } while (lVar4 != 0);

                }

                _objc_release(uVar9);

                uVar9 = extraout_x1_02;

              }

LAB_001c9cac:

              lVar17 = lVar17 + 1;

            } while (lVar17 != lVar15);

            lVar15 = FUN_00293880(lVar8,uVar9,&local_2c0,auStack_100,0x10);

          } while (lVar15 != 0);

          _objc_release(lVar8);

          uVar9 = extraout_x1_04;

          lVar8 = lVar12;

          if (lVar12 == 0) goto LAB_001c9ce0;

LAB_001c9d00:

          FUN_00291dc0(&_OBJC_CLASS___NSMutableArray,uVar9,lVar8);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          iVar1 = 8000;

          while( true ) {

            lVar15 = 0;

            lVar12 = FUN_00293860(uVar10);

            if ((lVar12 == 0) || (iVar1 == 0)) break;

            FUN_00295440(uVar10);

            auVar21 = _objc_retainAutoreleasedReturnValue();

            uVar5 = auVar21._0_8_;

            FUN_0029b480(uVar10,auVar21._8_8_,0);

            uVar6 = _objc_opt_isKindOfClass(uVar5,lVar3);

            if (((((uVar6 & 1) != 0) && (uVar6 = FUN_002978a0(uVar5), (uVar6 & 1) == 0)) &&

                (dVar19 = (double)FUN_002916a0(uVar5), 0.1 < dVar19)) &&

               ((FUN_002925a0(uVar5), 0.0 < in_d2 && (FUN_002925a0(uVar5), 0.0 < in_d3)))) {

              FUN_00296480(uVar5);

              lVar12 = _objc_retainAutoreleasedReturnValue();

              iVar2 = FUN_001ca5d8();

              if (iVar2 == 0) {

                uStack_318 = 0;

                local_320 = 0;

                uStack_308 = 0;

                uStack_310 = 0;

                lStack_338 = 0;

                local_340 = 0;

                uStack_328 = 0;

                local_330 = (long *)0x0;

                FUN_002a4840(uVar5);

                auVar21 = _objc_retainAutoreleasedReturnValue();

                uVar9 = auVar21._0_8_;

                lVar13 = FUN_00293880(uVar9,auVar21._8_8_,&local_340,auStack_200,0x10);

                if (lVar13 != 0) {

                  lVar17 = *local_330;

                  do {

                    lVar4 = 0;

                    do {

                      if (*local_330 != lVar17) {

                        _objc_enumerationMutation(uVar9);

                      }

                      uVar18 = *(undefined8 *)(lStack_338 + lVar4 * 8);

                      uVar7 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

                      auVar21 = _objc_opt_isKindOfClass(uVar18,uVar7);

                      uVar7 = auVar21._8_8_;

                      if ((auVar21._0_8_ & 1) != 0) {

                        FUN_00296480(uVar18);

                        lVar15 = _objc_retainAutoreleasedReturnValue();

                        iVar2 = FUN_001ca5d8();

                        if (iVar2 != 0) {

                          _objc_release(0);

                          goto LAB_001c9eb4;

                        }

                        _objc_release(lVar15);

                        uVar7 = extraout_x1_06;

                      }

                      lVar4 = lVar4 + 1;

                    } while (lVar13 != lVar4);

                    lVar13 = FUN_00293880(uVar9,uVar7,&local_340,auStack_200,0x10);

                  } while (lVar13 != 0);

                }

                lVar15 = 0;

              }

              else {

                _objc_retain(lVar12);

                uVar9 = 0;

                lVar15 = lVar12;

              }

LAB_001c9eb4:

              _objc_release(uVar9);

              if (lVar15 != 0) {

                FUN_0020b94c(uVar5);

                uVar7 = _objc_retainAutoreleasedReturnValue();

                iVar1 = FUN_001ca7ec();

                if (iVar1 == 0) {

                  uVar9 = 0;

                }

                else {

                  _objc_retain(uVar7);

                  uVar9 = uVar7;

                }

                _objc_release(uVar7);

                _objc_release(lVar12);

                _objc_release(uVar5);

                goto LAB_001ca068;

              }

              _objc_release(lVar12);

            }

            uStack_358 = 0;

            local_360 = 0;

            uStack_348 = 0;

            uStack_350 = 0;

            lStack_378 = 0;

            local_380 = 0;

            uStack_368 = 0;

            local_370 = (long *)0x0;

            FUN_002a4840(uVar5);

            auVar21 = _objc_retainAutoreleasedReturnValue();

            uVar9 = auVar21._0_8_;

            auVar21 = FUN_00293880(uVar9,auVar21._8_8_,&local_380,auStack_280,0x10);

            if (auVar21._0_8_ != 0) {

              lVar15 = *local_370;

              do {

                uVar7 = auVar21._8_8_;

                lVar12 = 0;

                do {

                  if (*local_370 != lVar15) {

                    _objc_enumerationMutation(uVar9);

                    uVar7 = extraout_x1_07;

                  }

                  FUN_00291240(uVar10,uVar7,*(undefined8 *)(lStack_378 + lVar12 * 8));

                  lVar12 = lVar12 + 1;

                  uVar7 = extraout_x1_08;

                } while (auVar21._0_8_ != lVar12);

                auVar21 = FUN_00293880(uVar9,extraout_x1_08,&local_380,auStack_280,0x10);

              } while (auVar21._0_8_ != 0);

            }

            _objc_release(uVar9);

            _objc_release(uVar5);

            iVar1 = iVar1 + -1;

          }

          uVar9 = 0;

LAB_001ca068:

          _objc_retainAutorelease(lVar15);

          _objc_retainAutorelease(uVar9);

          _objc_release(uVar9);

          _objc_release(lVar15);

          _objc_release(uVar10);

        }

        _objc_release(lVar8);

      }

      _objc_retain(lVar15);

      _objc_retain(uVar9);

      _objc_retain(lVar15);

      lVar3 = DAT_003eaa78;

      DAT_003eaa78 = lVar15;

      _objc_release(lVar3);

      iVar1 = FUN_001ca7ec(uVar9);

      if (iVar1 != 0) {

        _objc_retain(uVar9);

        uVar10 = DAT_003eaa88;

        DAT_003eaa88 = uVar9;

        _objc_release(uVar10);

      }

      _objc_release(uVar9);

      _objc_release(lVar15);

    }

  }

  else {

    _objc_retain(DAT_003eaa80);

    lVar8 = DAT_003eaa78;

    DAT_003eaa78 = lVar3;

    _objc_release(lVar8);

    DAT_003eaa98 = 1;

    iVar1 = FUN_001ca7ec(DAT_003eaa90);

    uVar9 = DAT_003eaa90;

    if (iVar1 != 0) {

      _objc_retain(DAT_003eaa90);

      uVar10 = DAT_003eaa88;

      DAT_003eaa88 = uVar9;

      _objc_release(uVar10);

    }

  }

  lVar3 = DAT_003eaa78;

  _objc_retain(DAT_003eaa78);

  iVar1 = FUN_001ca5d8(lVar3);

  lVar15 = (long)_bgImageView;

  lVar8 = *(long *)(param_1 + lVar15);

  if (iVar1 == 0) {

    if (lVar8 != 0) {

      FUN_0029e8a0(lVar8,extraout_x1_09,1);

    }

    lVar8 = (long)_renderMode;

    if (*(long *)(param_1 + lVar8) != 0) {

      FUN_002a4cc0(&_OBJC_CLASS___UIColor);

      auVar21 = _objc_retainAutoreleasedReturnValue();

      lVar15 = (long)_capsule;

      FUN_0029cf60(*(undefined8 *)(param_1 + lVar15),auVar21._8_8_,auVar21._0_8_);

      _objc_release(auVar21._0_8_);

      FUN_002a64a0(&_OBJC_CLASS___UIColor);

      auVar21 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1da0(*(undefined8 *)(param_1 + lVar15),auVar21._8_8_,auVar21._0_8_);

      _objc_release(auVar21._0_8_);

      FUN_00297e40(*(undefined8 *)(param_1 + lVar15));

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(0x4022000000000000);

      _objc_release(uVar9);

      FUN_00297e40(*(undefined8 *)(param_1 + lVar15));

      auVar21 = _objc_retainAutoreleasedReturnValue();

      FUN_0029f960(auVar21._0_8_,auVar21._8_8_,1);

      _objc_release(auVar21._0_8_);

      *(undefined8 *)(param_1 + lVar8) = 0;

    }

  }

  else {

    if (lVar8 == 0) {

      uVar9 = _objc_alloc_init(&_OBJC_CLASS___UIImageView);

      uVar10 = *(undefined8 *)(param_1 + lVar15);

      *(undefined8 *)(param_1 + lVar15) = uVar9;

      _objc_release(uVar10);

      FUN_002925a0(param_1);

      FUN_0029e5e0(*(undefined8 *)(param_1 + lVar15));

      FUN_002a21e0(*(undefined8 *)(param_1 + lVar15),extraout_x1_10,1);

      FUN_0029ce00(*(undefined8 *)(param_1 + lVar15),extraout_x1_11,0x12);

      FUN_0029d6c0(*(undefined8 *)(param_1 + lVar15),extraout_x1_12,0);

      FUN_00297120(param_1,extraout_x1_13,*(undefined8 *)(param_1 + lVar15),

                   *(undefined8 *)(param_1 + (long)_capsule));

    }

    FUN_002a3d80(lVar3);

    dVar19 = (double)FUN_002a3d80(lVar3);

    dVar20 = in_d1 * 0.5 + -0.5;

    if (dVar20 <= 0.0) {

      dVar20 = 0.0;

    }

    dVar19 = dVar19 * 0.5 + -0.5;

    if (dVar19 <= 0.0) {

      dVar19 = 0.0;

    }

    FUN_0029b880(dVar20,dVar19,dVar20,dVar19,lVar3,extraout_x1_14,1);

    auVar21 = _objc_retainAutoreleasedReturnValue();

    FUN_0029ec00(*(undefined8 *)(param_1 + lVar15),auVar21._8_8_,auVar21._0_8_);

    _objc_release(auVar21._0_8_);

    FUN_0029e8a0(*(undefined8 *)(param_1 + lVar15),extraout_x1_15,0);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar21 = _objc_retainAutoreleasedReturnValue();

    lVar8 = (long)_capsule;

    FUN_0029cf60(*(undefined8 *)(param_1 + lVar8),auVar21._8_8_,auVar21._0_8_);

    _objc_release(auVar21._0_8_);

    FUN_00297e40(*(undefined8 *)(param_1 + lVar8));

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0);

    _objc_release(uVar9);

    FUN_00297e40(*(undefined8 *)(param_1 + lVar8));

    auVar21 = _objc_retainAutoreleasedReturnValue();

    FUN_0029f960(auVar21._0_8_,auVar21._8_8_,0);

    _objc_release(auVar21._0_8_);

    iVar1 = FUN_001ca7ec(DAT_003eaa88);

    if (iVar1 == 0) {

      FUN_002a64a0(&_OBJC_CLASS___UIColor);

      auVar21 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1da0(*(undefined8 *)(param_1 + lVar8),auVar21._8_8_,auVar21._0_8_);

      _objc_release(auVar21._0_8_);

    }

    else {

      FUN_002a1da0(*(undefined8 *)(param_1 + lVar8),extraout_x1_16,DAT_003eaa88);

    }

    *(undefined8 *)(param_1 + (long)_renderMode) = 1;

  }

  _objc_release(lVar3);

LAB_001ca3fc:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




