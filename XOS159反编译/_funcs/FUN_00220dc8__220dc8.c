// FUN_00220dc8 @0x220dc8


void FUN_00220dc8(long param_1)



{

  int iVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  ulong uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  long lVar12;

  undefined8 uVar13;

  long lVar14;

  long lVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

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

  long lVar18;

  long lVar19;

  long lVar20;

  undefined8 uVar21;

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  long local_3b8;

  long local_3b0;

  long local_398;

  long local_388;

  undefined8 local_370;

  long lStack_368;

  long *local_360;

  undefined8 uStack_358;

  undefined8 local_350;

  undefined8 uStack_348;

  undefined8 uStack_340;

  undefined8 uStack_338;

  undefined8 local_330;

  long lStack_328;

  long *local_320;

  undefined8 uStack_318;

  undefined8 local_310;

  undefined8 uStack_308;

  undefined8 uStack_300;

  undefined8 uStack_2f8;

  undefined8 local_2f0;

  long lStack_2e8;

  long *local_2e0;

  undefined8 uStack_2d8;

  undefined8 local_2d0;

  undefined8 uStack_2c8;

  undefined8 uStack_2c0;

  undefined8 uStack_2b8;

  undefined8 local_2b0;

  long lStack_2a8;

  long *local_2a0;

  undefined8 uStack_298;

  undefined8 local_290;

  undefined8 uStack_288;

  undefined8 uStack_280;

  undefined8 uStack_278;

  undefined1 auStack_270 [128];

  undefined1 auStack_1f0 [128];

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  lVar2 = _objc_loadWeakRetained(param_1 + 0x20);

  if (((lVar2 != 0) &&

      (_objc_setAssociatedObject(lVar2,&DAT_003eaf02,PTR____kCFBooleanFalse_00388318,1),

      DAT_003eaa30 == '\x01')) && ((DAT_003ead50 & 1) == 0)) {

    _objc_retain(lVar2);

    FUN_002a6080(lVar2,extraout_x1,&cf_m_tableView);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 != 0) {

      _objc_getAssociatedObject(lVar2,&DAT_003ead5c);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 != 0) {

        uStack_288 = 0;

        local_290 = 0;

        uStack_278 = 0;

        uStack_280 = 0;

        lStack_2a8 = 0;

        local_2b0 = 0;

        uStack_298 = 0;

        local_2a0 = (long *)0x0;

        FUN_00291600();

        auVar22 = _objc_retainAutoreleasedReturnValue();

        uVar17 = auVar22._0_8_;

        auVar22 = FUN_00293880(uVar17,auVar22._8_8_,&local_2b0,auStack_f0,0x10);

        if (auVar22._0_8_ != 0) {

          lVar18 = *local_2a0;

          do {

            uVar5 = auVar22._8_8_;

            local_3b8 = auVar22._0_8_;

            local_3b0 = 0;

            do {

              if (*local_2a0 != lVar18) {

                _objc_enumerationMutation(uVar17);

                uVar5 = extraout_x1_00;

              }

              FUN_00299540(lVar4,uVar5,*(undefined8 *)(lStack_2a8 + local_3b0 * 8));

              uVar5 = _objc_retainAutoreleasedReturnValue();

              uVar6 = FUN_00297aa0();

              if ((uVar6 & 1) != 0) {

                FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

                uVar7 = _objc_retainAutoreleasedReturnValue();

                FUN_00291640(uVar5);

                lVar8 = _objc_retainAutoreleasedReturnValue();

                if (lVar8 == 0) {

                  FUN_00294d00(uVar5);

                  local_388 = _objc_retainAutoreleasedReturnValue();

                }

                else {

                  _objc_retain(lVar8);

                  local_388 = lVar8;

                }

                _objc_release(lVar8);

                auVar22 = FUN_00293860(local_388);

                FUN_002a26e0(&_OBJC_CLASS___NSMutableSet,auVar22._8_8_,auVar22._0_8_);

                uVar9 = _objc_retainAutoreleasedReturnValue();

                FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                uStack_2c8 = 0;

                local_2d0 = 0;

                uStack_2b8 = 0;

                uStack_2c0 = 0;

                lStack_2e8 = 0;

                local_2f0 = 0;

                uStack_2d8 = 0;

                local_2e0 = (long *)0x0;

                _objc_retain(local_388);

                lVar8 = FUN_00293880(local_388,extraout_x1_01,&local_2f0,auStack_170,0x10);

                if (lVar8 == 0) {

                  local_398 = 0;

                }

                else {

                  local_398 = 0;

                  lVar19 = *local_2e0;

                  do {

                    lVar20 = 0;

                    do {

                      if (*local_2e0 != lVar19) {

                        _objc_enumerationMutation(local_388);

                      }

                      uVar21 = *(undefined8 *)(lStack_2e8 + lVar20 * 8);

                      auVar22 = FUN_00297760(uVar21);

                      uVar16 = auVar22._8_8_;

                      if ((auVar22._0_8_ & 1) == 0) {

                        FUN_00299980(uVar21);

                        FUN_00299940(uVar21);

                        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_02,&cf__ld__ld);

                        auVar22 = _objc_retainAutoreleasedReturnValue();

                        uVar16 = auVar22._0_8_;

                        auVar22 = FUN_00293560(uVar9,auVar22._8_8_,uVar16);

                        if ((auVar22._0_8_ & 1) == 0) {

                          FUN_00291240(uVar9,auVar22._8_8_,uVar16);

                          uVar11 = FUN_00299940(uVar21);

                          auVar22 = FUN_00299980(uVar21);

                          FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar22._8_8_,uVar11,auVar22._0_8_

                                      );

                          uVar11 = _objc_retainAutoreleasedReturnValue();

                          FUN_00211d9c(lVar2,uVar11);

                          lVar12 = _objc_retainAutoreleasedReturnValue();

                          _objc_release(uVar11);

                          if (lVar12 != 0) {

                            uVar11 = FUN_00297680(uVar21);

                            _objc_retain(lVar12);

                            uVar13 = FUN_00212188(lVar12);

                            lVar14 = FUN_00212374(lVar12,uVar11,uVar13);

                            _objc_release(lVar12);

                            FUN_002a5fe0(uVar21);

                            uVar11 = _objc_retainAutoreleasedReturnValue();

                            lVar15 = FUN_00297fa0();

                            _objc_release(uVar11);

                            if (lVar15 != 0) {

                              FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1_03,lVar14);

                              uVar11 = _objc_retainAutoreleasedReturnValue();

                              FUN_002a5fe0(uVar21);

                              auVar22 = _objc_retainAutoreleasedReturnValue();

                              FUN_002a00a0(uVar10,auVar22._8_8_,uVar11,auVar22._0_8_);

                              _objc_release(auVar22._0_8_);

                              _objc_release(uVar11);

                            }

                            if (lVar14 != 0) {

                              FUN_00295de0(uVar21);

                              auVar22 = _objc_retainAutoreleasedReturnValue();

                              FUN_00299540(uVar7,auVar22._8_8_,auVar22._0_8_);

                              uVar11 = _objc_retainAutoreleasedReturnValue();

                              lVar15 = FUN_002984c0();

                              _objc_release(uVar11);

                              _objc_release(auVar22._0_8_);

                              FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1_04,lVar15 + lVar14);

                              uVar11 = _objc_retainAutoreleasedReturnValue();

                              FUN_00295de0(uVar21);

                              auVar22 = _objc_retainAutoreleasedReturnValue();

                              FUN_002a00a0(uVar7,auVar22._8_8_,uVar11,auVar22._0_8_);

                              _objc_release(auVar22._0_8_);

                              _objc_release(uVar11);

                              local_398 = lVar14 + local_398;

                            }

                          }

                          _objc_release(lVar12);

                        }

                        _objc_release(uVar16);

                        uVar16 = extraout_x1_05;

                      }

                      lVar20 = lVar20 + 1;

                    } while (lVar8 != lVar20);

                    lVar8 = FUN_00293880(local_388,uVar16,&local_2f0,auStack_170,0x10);

                  } while (lVar8 != 0);

                }

                _objc_release(local_388);

                FUN_002a2760(uVar5,extraout_x1_06,uVar10);

                if (DAT_003eaac1 == '\x01') {

                  FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1_07,local_398);

                  auVar22 = _objc_retainAutoreleasedReturnValue();

                  FUN_002a00a0(uVar7,auVar22._8_8_,auVar22._0_8_,&cf_other);

                  _objc_release(auVar22._0_8_);

                }

                FUN_00294780(uVar5);

                uVar16 = _objc_retainAutoreleasedReturnValue();

                lVar8 = FUN_00293860();

                if (lVar8 == 0) {

                  FUN_00294d00(uVar5);

                  uVar21 = _objc_retainAutoreleasedReturnValue();

                }

                else {

                  FUN_00294780(uVar5);

                  uVar21 = _objc_retainAutoreleasedReturnValue();

                }

                _objc_release(uVar16);

                uStack_308 = 0;

                local_310 = 0;

                uStack_2f8 = 0;

                uStack_300 = 0;

                lStack_328 = 0;

                local_330 = 0;

                uStack_318 = 0;

                local_320 = (long *)0x0;

                _objc_retain(uVar21);

                lVar8 = FUN_00293880(uVar21,extraout_x1_08,&local_330,auStack_1f0,0x10);

                if (lVar8 != 0) {

                  lVar19 = *local_320;

                  do {

                    lVar20 = 0;

                    do {

                      if (*local_320 != lVar19) {

                        _objc_enumerationMutation(uVar21);

                      }

                      uVar11 = *(undefined8 *)(lStack_328 + lVar20 * 8);

                      iVar1 = FUN_00297760(uVar11);

                      uVar16 = extraout_x1_09;

                      if (iVar1 != 0) {

                        FUN_00295de0(uVar11);

                        auVar22 = _objc_retainAutoreleasedReturnValue();

                        FUN_00299540(uVar7,auVar22._8_8_,auVar22._0_8_);

                        uVar16 = _objc_retainAutoreleasedReturnValue();

                        auVar23 = FUN_002984c0();

                        FUN_002a2340(uVar11,auVar23._8_8_,auVar23._0_8_);

                        _objc_release(uVar16);

                        _objc_release(auVar22._0_8_);

                        uVar16 = extraout_x1_10;

                      }

                      lVar20 = lVar20 + 1;

                    } while (lVar8 != lVar20);

                    lVar8 = FUN_00293880(uVar21,uVar16,&local_330,auStack_1f0,0x10);

                  } while (lVar8 != 0);

                }

                _objc_release(uVar21);

                _objc_release(uVar21);

                _objc_release(uVar10);

                _objc_release(uVar9);

                _objc_release(local_388);

                _objc_release(uVar7);

              }

              _objc_release(uVar5);

              local_3b0 = local_3b0 + 1;

              uVar5 = extraout_x1_11;

            } while (local_3b0 != local_3b8);

            auVar22 = FUN_00293880(uVar17,extraout_x1_11,&local_2b0,auStack_f0,0x10);

          } while (auVar22._0_8_ != 0);

        }

        _objc_release(uVar17);

        uStack_348 = 0;

        local_350 = 0;

        uStack_338 = 0;

        uStack_340 = 0;

        lStack_368 = 0;

        local_370 = 0;

        uStack_358 = 0;

        local_360 = (long *)0x0;

        FUN_002a62e0(lVar3);

        auVar22 = _objc_retainAutoreleasedReturnValue();

        uVar17 = auVar22._0_8_;

        lVar18 = FUN_00293880(uVar17,auVar22._8_8_,&local_370,auStack_270,0x10);

        if (lVar18 != 0) {

          lVar8 = *local_360;

          do {

            lVar19 = 0;

            do {

              if (*local_360 != lVar8) {

                _objc_enumerationMutation(uVar17);

              }

              uVar7 = *(undefined8 *)(lStack_368 + lVar19 * 8);

              FUN_0029b9c0(uVar7);

              auVar22 = _objc_retainAutoreleasedReturnValue();

              uVar6 = FUN_00297820(auVar22._0_8_,auVar22._8_8_,&cf_XZYCLGDividerCell);

              _objc_release(auVar22._0_8_);

              uVar5 = extraout_x1_12;

              if ((uVar6 & 1) != 0) {

                _objc_getAssociatedObject(uVar7,&DAT_003eaab0);

                lVar20 = _objc_retainAutoreleasedReturnValue();

                if ((lVar20 != 0) && (uVar6 = FUN_00297760(lVar20), (uVar6 & 1) != 0)) {

                  _objc_getAssociatedObject(uVar7,&DAT_003eaabc);

                  auVar22 = _objc_retainAutoreleasedReturnValue();

                  lVar12 = auVar22._0_8_;

                  if (lVar12 != 0) {

                    if (DAT_003e70f0 == '\x01') {

                      auVar23 = FUN_002a59c0(lVar20);

                    }

                    else {

                      auVar23._8_8_ = 0;

                      auVar23._0_8_ = auVar22._8_8_;

                      auVar23 = auVar23 << 0x40;

                    }

                    FUN_002a2340(lVar12,auVar23._8_8_,auVar23._0_8_);

                    uVar5 = _objc_opt_class(&objc::class_t::XZYCLG3DGroupCell);

                    uVar6 = _objc_opt_isKindOfClass(uVar7,uVar5);

                    if ((uVar6 & 1) != 0) {

                      FUN_0029ff40(uVar7);

                    }

                  }

                  _objc_release(lVar12);

                }

                _objc_release(lVar20);

                uVar5 = extraout_x1_13;

              }

              lVar19 = lVar19 + 1;

            } while (lVar18 != lVar19);

            lVar18 = FUN_00293880(uVar17,uVar5,&local_370,auStack_270,0x10);

          } while (lVar18 != 0);

        }

        _objc_release(uVar17);

        _objc_getAssociatedObject(lVar2,&DAT_003eae53);

        lVar18 = _objc_retainAutoreleasedReturnValue();

        _objc_getAssociatedObject(lVar2,&DAT_003ead83);

        lVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_0020e91c(lVar2);

        auVar22 = _objc_retainAutoreleasedReturnValue();

        lVar19 = auVar22._0_8_;

        if (lVar19 == 0) {

          uVar17 = 0;

        }

        else {

          FUN_00299540(lVar4,auVar22._8_8_,lVar19);

          uVar17 = _objc_retainAutoreleasedReturnValue();

        }

        if ((lVar18 != 0) && (iVar1 = FUN_00297aa0(uVar17), iVar1 != 0)) {

          FUN_00220818(uVar17);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_002a5ec0(lVar18,auVar22._8_8_,auVar22._0_8_);

          _objc_release(auVar22._0_8_);

        }

        if ((lVar8 != 0) && (iVar1 = FUN_00297aa0(uVar17), iVar1 != 0)) {

          FUN_00220818(uVar17);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_002a5ec0(lVar8,auVar22._8_8_,auVar22._0_8_);

          _objc_release(auVar22._0_8_);

        }

        _objc_release(uVar17);

        _objc_release(lVar19);

        _objc_release(lVar8);

        _objc_release(lVar18);

      }

      _objc_release(lVar4);

      _objc_release(lVar3);

    }

    _objc_release(lVar2);

  }

  _objc_release(lVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




