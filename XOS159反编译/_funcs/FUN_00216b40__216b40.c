// FUN_00216b40 @0x216b40


undefined8 FUN_00216b40(long param_1)



{

  long lVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  long lVar12;

  long lVar13;

  long lVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  long lVar17;

  undefined8 uVar18;

  undefined1 auVar19 [16];

  long local_3f0;

  long local_3e8;

  long local_3e0;

  long local_3c0;

  long local_3b8;

  long local_3b0;

  undefined8 local_390;

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

  _objc_retain();

  if (param_1 == 0) {

    uVar16 = 0;

    goto LAB_002171fc;

  }

  FUN_0029b9c0(param_1);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_00297820(auVar19._0_8_,auVar19._8_8_,&cf_XZYCLGDividerCell);

  _objc_release(auVar19._0_8_);

  if (((uVar3 & 1) != 0) || (uVar3 = FUN_00217a98(param_1), (uVar3 & 1) != 0)) {

    uVar16 = 1;

    goto LAB_002171fc;

  }

  _objc_retain(param_1);

  _objc_getAssociatedObject(param_1,&DAT_003eaec8);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_002924e0();

  if ((uVar3 & 1) == 0) {

    if (DAT_003eaee0 != -1) {

      FUN_0028fb04();

    }

    FUN_00293640(param_1);

    uVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4840();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    lVar6 = FUN_00293860();

    _objc_release(uVar5);

    _objc_release(uVar16);

    _objc_getAssociatedObject(param_1,&DAT_003eaee8);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_1,&DAT_003eaec8);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if ((((lVar7 == 0) || (lVar8 == 0)) || (lVar9 = FUN_002a5a20(lVar7), lVar9 != lVar6)) ||

       (uVar3 = FUN_002924e0(lVar8), (uVar3 & 1) != 0)) {

      FUN_00293640(param_1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      lVar12 = DAT_003eaed8;

      lVar9 = DAT_003eaed0;

      _objc_retain();

      if ((lVar9 == 0) || (uVar3 = _objc_opt_isKindOfClass(uVar5,lVar9), (uVar3 & 1) == 0)) {

        if (lVar12 == 0) {

          _objc_release(uVar5);

        }

        else {

          uVar3 = _objc_opt_isKindOfClass(uVar5,lVar12);

          _objc_release(uVar5);

          uVar11 = extraout_x1_00;

          if ((uVar3 & 1) != 0) goto LAB_00216d20;

        }

        uStack_288 = 0;

        local_290 = 0;

        uStack_278 = 0;

        uStack_280 = 0;

        lStack_2a8 = 0;

        local_2b0 = 0;

        uStack_298 = 0;

        local_2a0 = (long *)0x0;

        FUN_002a4840(uVar5);

        auVar19 = _objc_retainAutoreleasedReturnValue();

        uVar11 = auVar19._0_8_;

        local_3e0 = FUN_00293880(uVar11,auVar19._8_8_,&local_2b0,auStack_f0,0x10);

        if (local_3e0 != 0) {

          lVar9 = *local_2a0;

          do {

            local_3b0 = 0;

            do {

              if (*local_2a0 != lVar9) {

                _objc_enumerationMutation(uVar11);

              }

              lVar13 = DAT_003eaed8;

              lVar12 = DAT_003eaed0;

              local_390 = *(undefined8 *)(lStack_2a8 + local_3b0 * 8);

              _objc_retain();

              if ((lVar12 != 0) &&

                 (uVar3 = _objc_opt_isKindOfClass(local_390,lVar12), (uVar3 & 1) != 0)) {

LAB_0021714c:

                _objc_release(local_390);

LAB_00217154:

                uVar16 = 1;

                goto LAB_00217158;

              }

              if (lVar13 == 0) {

                _objc_release(local_390);

              }

              else {

                uVar3 = _objc_opt_isKindOfClass(local_390,lVar13);

                _objc_release(local_390);

                if ((uVar3 & 1) != 0) goto LAB_00217154;

              }

              uStack_2c8 = 0;

              local_2d0 = 0;

              uStack_2b8 = 0;

              uStack_2c0 = 0;

              lStack_2e8 = 0;

              local_2f0 = 0;

              uStack_2d8 = 0;

              local_2e0 = (long *)0x0;

              FUN_002a4840(local_390);

              auVar19 = _objc_retainAutoreleasedReturnValue();

              local_390 = auVar19._0_8_;

              local_3e8 = FUN_00293880(local_390,auVar19._8_8_,&local_2f0,auStack_170,0x10);

              if (local_3e8 != 0) {

                lVar12 = *local_2e0;

                do {

                  local_3b8 = 0;

                  do {

                    if (*local_2e0 != lVar12) {

                      _objc_enumerationMutation(local_390);

                    }

                    lVar10 = DAT_003eaed8;

                    lVar13 = DAT_003eaed0;

                    uVar16 = *(undefined8 *)(lStack_2e8 + local_3b8 * 8);

                    _objc_retain(uVar16);

                    if ((lVar13 != 0) &&

                       (uVar3 = _objc_opt_isKindOfClass(uVar16,lVar13), (uVar3 & 1) != 0)) {

LAB_00217144:

                      _objc_release(uVar16);

                      goto LAB_0021714c;

                    }

                    if (lVar10 == 0) {

                      _objc_release(uVar16);

                    }

                    else {

                      uVar3 = _objc_opt_isKindOfClass(uVar16,lVar10);

                      _objc_release(uVar16);

                      if ((uVar3 & 1) != 0) goto LAB_0021714c;

                    }

                    uStack_308 = 0;

                    local_310 = 0;

                    uStack_2f8 = 0;

                    uStack_300 = 0;

                    lStack_328 = 0;

                    local_330 = 0;

                    uStack_318 = 0;

                    local_320 = (long *)0x0;

                    FUN_002a4840(uVar16);

                    auVar19 = _objc_retainAutoreleasedReturnValue();

                    uVar16 = auVar19._0_8_;

                    local_3f0 = FUN_00293880(uVar16,auVar19._8_8_,&local_330,auStack_1f0,0x10);

                    if (local_3f0 != 0) {

                      lVar13 = *local_320;

                      do {

                        local_3c0 = 0;

                        do {

                          if (*local_320 != lVar13) {

                            _objc_enumerationMutation(uVar16);

                          }

                          lVar17 = DAT_003eaed8;

                          lVar10 = DAT_003eaed0;

                          uVar18 = *(undefined8 *)(lStack_328 + local_3c0 * 8);

                          _objc_retain(uVar18);

                          if ((lVar10 != 0) &&

                             (uVar3 = _objc_opt_isKindOfClass(uVar18,lVar10), (uVar3 & 1) != 0)) {

LAB_0021713c:

                            _objc_release(uVar18);

                            goto LAB_00217144;

                          }

                          if (lVar17 == 0) {

                            _objc_release(uVar18);

                          }

                          else {

                            uVar3 = _objc_opt_isKindOfClass(uVar18,lVar17);

                            _objc_release(uVar18);

                            if ((uVar3 & 1) != 0) goto LAB_00217144;

                          }

                          uStack_348 = 0;

                          local_350 = 0;

                          uStack_338 = 0;

                          uStack_340 = 0;

                          lStack_368 = 0;

                          local_370 = 0;

                          uStack_358 = 0;

                          local_360 = (long *)0x0;

                          FUN_002a4840(uVar18);

                          auVar19 = _objc_retainAutoreleasedReturnValue();

                          uVar18 = auVar19._0_8_;

                          lVar10 = FUN_00293880(uVar18,auVar19._8_8_,&local_370,auStack_270,0x10);

                          if (lVar10 != 0) {

                            lVar17 = *local_360;

                            do {

                              lVar14 = 0;

                              do {

                                if (*local_360 != lVar17) {

                                  _objc_enumerationMutation(uVar18);

                                }

                                lVar2 = DAT_003eaed8;

                                lVar1 = DAT_003eaed0;

                                uVar15 = *(undefined8 *)(lStack_368 + lVar14 * 8);

                                _objc_retain(uVar15);

                                if ((lVar1 != 0) &&

                                   (uVar3 = _objc_opt_isKindOfClass(uVar15,lVar1), (uVar3 & 1) != 0)

                                   ) {

                                  _objc_release(uVar15);

                                  goto LAB_0021713c;

                                }

                                if (lVar2 == 0) {

                                  _objc_release(uVar15);

                                  uVar15 = extraout_x1_02;

                                }

                                else {

                                  uVar3 = _objc_opt_isKindOfClass(uVar15,lVar2);

                                  _objc_release(uVar15);

                                  uVar15 = extraout_x1_01;

                                  if ((uVar3 & 1) != 0) goto LAB_0021713c;

                                }

                                lVar14 = lVar14 + 1;

                              } while (lVar10 != lVar14);

                              lVar10 = FUN_00293880(uVar18,uVar15,&local_370,auStack_270,0x10);

                            } while (lVar10 != 0);

                          }

                          _objc_release(uVar18);

                          local_3c0 = local_3c0 + 1;

                        } while (local_3c0 != local_3f0);

                        local_3f0 = FUN_00293880(uVar16,extraout_x1_03,&local_330,auStack_1f0,0x10);

                      } while (local_3f0 != 0);

                    }

                    _objc_release(uVar16);

                    local_3b8 = local_3b8 + 1;

                  } while (local_3b8 != local_3e8);

                  local_3e8 = FUN_00293880(local_390,extraout_x1_04,&local_2f0,auStack_170,0x10);

                } while (local_3e8 != 0);

              }

              _objc_release(local_390);

              local_3b0 = local_3b0 + 1;

            } while (local_3b0 != local_3e0);

            local_3e0 = FUN_00293880(uVar11,extraout_x1_05,&local_2b0,auStack_f0,0x10);

          } while (local_3e0 != 0);

        }

        uVar16 = 0;

LAB_00217158:

        _objc_release(uVar11);

        uVar11 = extraout_x1_06;

      }

      else {

        _objc_release(uVar5);

        uVar11 = extraout_x1;

LAB_00216d20:

        uVar16 = 1;

      }

      FUN_00299380(&_OBJC_CLASS___NSNumber,uVar11,uVar16);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_1,&DAT_003eaec8,uVar11,1);

      _objc_release(uVar11);

      FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_07,lVar6);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_1,&DAT_003eaee8,uVar11,1);

      _objc_release(uVar11);

      _objc_release(uVar5);

    }

    else {

      uVar16 = 0;

    }

    _objc_release(lVar8);

    _objc_release(lVar7);

  }

  else {

    uVar16 = 1;

  }

  _objc_release(uVar4);

  _objc_release(param_1);

LAB_002171fc:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return uVar16;

}




