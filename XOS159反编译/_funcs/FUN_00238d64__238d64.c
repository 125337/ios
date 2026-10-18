// FUN_00238d64 @0x238d64


void FUN_00238d64(void)



{

  bool bVar1;

  bool bVar2;

  bool bVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  long lVar10;

  ulong uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar12;

  long lVar13;

  long lVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  long lVar17;

  undefined1 extraout_b0;

  undefined1 extraout_var;

  undefined1 extraout_var_00;

  undefined1 extraout_var_01;

  undefined1 extraout_var_02;

  undefined1 extraout_var_03;

  undefined1 extraout_var_04;

  undefined1 extraout_var_05;

  undefined1 auVar18 [16];

  undefined8 local_2c0;

  long lStack_2b8;

  long *local_2b0;

  undefined8 uStack_2a8;

  undefined8 local_2a0;

  undefined8 uStack_298;

  undefined8 uStack_290;

  undefined8 uStack_288;

  undefined8 local_280;

  long lStack_278;

  long *local_270;

  undefined8 uStack_268;

  undefined8 local_260;

  undefined8 uStack_258;

  undefined8 uStack_250;

  undefined8 uStack_248;

  undefined8 local_240;

  long lStack_238;

  long *local_230;

  undefined8 uStack_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 uStack_210;

  undefined8 uStack_208;

  undefined1 auStack_200 [128];

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  lVar4 = DAT_003eb1b0;

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  if (DAT_003eb1a0 == 0 || DAT_003eb1a8 == 0) {

    if (DAT_003eb1b0 != 0) {

      if (DAT_003eb1a0 == 0) {

        _objc_retain(DAT_003eb1b0);

        lVar8 = DAT_003eb1a0;

        DAT_003eb1a0 = lVar4;

        _objc_release(lVar8);

      }

      lVar4 = DAT_003eb1b8;

      if (DAT_003eb1a8 == 0 && DAT_003eb1b8 != 0) {

        _objc_retain(DAT_003eb1b8);

        lVar8 = DAT_003eb1a8;

        DAT_003eb1a8 = lVar4;

        _objc_release(lVar8);

      }

      if (DAT_003eb1a8 != 0 && DAT_003eb1a0 != 0) goto LAB_00239180;

    }

    if ((DAT_003eb1cc & 1) == 0) {

      DAT_003eb1cc = 1;

      lVar4 = _NSClassFromString(&cf_MMBadgeView);

      if (lVar4 != 0) {

        FUN_002a2e60(&_OBJC_CLASS___UIApplication);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        uStack_218 = 0;

        local_220 = 0;

        uStack_208 = 0;

        uStack_210 = 0;

        lStack_238 = 0;

        local_240 = 0;

        uStack_228 = 0;

        local_230 = (long *)0x0;

        FUN_00293440(uVar5);

        auVar18 = _objc_retainAutoreleasedReturnValue();

        uVar7 = auVar18._0_8_;

        lVar8 = FUN_00293880(uVar7,auVar18._8_8_,&local_240,auStack_100,0x10);

        if (lVar8 != 0) {

          lVar12 = *local_230;

          do {

            lVar17 = 0;

            do {

              if (*local_230 != lVar12) {

                _objc_enumerationMutation(uVar7);

              }

              uVar15 = *(undefined8 *)(lStack_238 + lVar17 * 8);

              uVar9 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

              auVar18 = _objc_opt_isKindOfClass(uVar15,uVar9);

              uVar9 = auVar18._8_8_;

              if ((auVar18._0_8_ & 1) != 0) {

                uStack_258 = 0;

                local_260 = 0;

                uStack_248 = 0;

                uStack_250 = 0;

                lStack_278 = 0;

                local_280 = 0;

                uStack_268 = 0;

                local_270 = (long *)0x0;

                FUN_002a6560(uVar15);

                auVar18 = _objc_retainAutoreleasedReturnValue();

                uVar9 = auVar18._0_8_;

                lVar10 = FUN_00293880(uVar9,auVar18._8_8_,&local_280,auStack_180,0x10);

                if (lVar10 != 0) {

                  lVar13 = *local_270;

                  do {

                    lVar14 = 0;

                    do {

                      if (*local_270 != lVar13) {

                        _objc_enumerationMutation(uVar9);

                      }

                      uVar16 = *(undefined8 *)(lStack_278 + lVar14 * 8);

                      auVar18 = FUN_002978a0(uVar16);

                      uVar15 = auVar18._8_8_;

                      if ((auVar18._0_8_ & 1) == 0) {

                        FUN_002916a0(uVar16);

                        bVar2 = false;

                        bVar3 = false;

                        bVar1 = NAN((double)CONCAT17(extraout_var_05,

                                                     CONCAT16(extraout_var_04,

                                                              CONCAT15(extraout_var_03,

                                                                       CONCAT14(extraout_var_02,

                                                                                CONCAT13(

                                                  extraout_var_01,

                                                  CONCAT12(extraout_var_00,

                                                           CONCAT11(extraout_var,extraout_b0))))))))

                        ;

                        if (!bVar1) {

                          bVar2 = (double)CONCAT17(extraout_var_05,

                                                   CONCAT16(extraout_var_04,

                                                            CONCAT15(extraout_var_03,

                                                                     CONCAT14(extraout_var_02,

                                                                              CONCAT13(

                                                  extraout_var_01,

                                                  CONCAT12(extraout_var_00,

                                                           CONCAT11(extraout_var,extraout_b0)))))))

                                  < 0.1;

                          bVar3 = (double)CONCAT17(extraout_var_05,

                                                   CONCAT16(extraout_var_04,

                                                            CONCAT15(extraout_var_03,

                                                                     CONCAT14(extraout_var_02,

                                                                              CONCAT13(

                                                  extraout_var_01,

                                                  CONCAT12(extraout_var_00,

                                                           CONCAT11(extraout_var,extraout_b0)))))))

                                  == 0.1;

                        }

                        uVar15 = extraout_x1;

                        if (!bVar3 && bVar2 == bVar1) {

                          FUN_00291240(uVar6,extraout_x1,uVar16);

                          uVar15 = extraout_x1_00;

                        }

                      }

                      lVar14 = lVar14 + 1;

                    } while (lVar10 != lVar14);

                    lVar10 = FUN_00293880(uVar9,uVar15,&local_280,auStack_180,0x10);

                  } while (lVar10 != 0);

                }

                _objc_release(uVar9);

                uVar9 = extraout_x1_01;

              }

              lVar17 = lVar17 + 1;

            } while (lVar17 != lVar8);

            lVar8 = FUN_00293880(uVar7,uVar9,&local_240,auStack_100,0x10);

          } while (lVar8 != 0);

        }

        _objc_release(uVar7);

        lVar8 = 3000;

LAB_00239000:

        lVar12 = FUN_00293860(uVar6);

        if ((lVar12 == 0) || (lVar8 == 0)) goto LAB_00239170;

        FUN_00295440(uVar6);

        auVar18 = _objc_retainAutoreleasedReturnValue();

        uVar7 = auVar18._0_8_;

        FUN_0029b480(uVar6,auVar18._8_8_,0);

        uVar11 = _objc_opt_isKindOfClass(uVar7,lVar4);

        if (((uVar11 & 1) != 0) && (FUN_00242cbc(uVar7), lVar12 = DAT_003eb1b0, DAT_003eb1b0 != 0))

        {

          if (DAT_003eb1a0 == 0) {

            _objc_retain(DAT_003eb1b0);

            lVar17 = DAT_003eb1a0;

            DAT_003eb1a0 = lVar12;

            _objc_release(lVar17);

          }

          lVar12 = DAT_003eb1b8;

          if ((DAT_003eb1a8 == 0) && (DAT_003eb1b8 != 0)) {

            _objc_retain(DAT_003eb1b8);

            lVar17 = DAT_003eb1a8;

            DAT_003eb1a8 = lVar12;

            _objc_release(lVar17);

          }

          if ((DAT_003eb1a0 != 0) && (DAT_003eb1a8 != 0)) {

            _objc_release(uVar7);

LAB_00239170:

            _objc_release(uVar6);

            _objc_release(uVar5);

            goto LAB_00239180;

          }

        }

        uStack_298 = 0;

        local_2a0 = 0;

        uStack_288 = 0;

        uStack_290 = 0;

        lStack_2b8 = 0;

        local_2c0 = 0;

        uStack_2a8 = 0;

        local_2b0 = (long *)0x0;

        FUN_002a4840(uVar7);

        auVar18 = _objc_retainAutoreleasedReturnValue();

        uVar9 = auVar18._0_8_;

        auVar18 = FUN_00293880(uVar9,auVar18._8_8_,&local_2c0,auStack_200,0x10);

        if (auVar18._0_8_ != 0) {

          lVar12 = *local_2b0;

          do {

            uVar15 = auVar18._8_8_;

            lVar17 = 0;

            do {

              if (*local_2b0 != lVar12) {

                _objc_enumerationMutation(uVar9);

                uVar15 = extraout_x1_02;

              }

              FUN_00291240(uVar6,uVar15,*(undefined8 *)(lStack_2b8 + lVar17 * 8));

              lVar17 = lVar17 + 1;

              uVar15 = extraout_x1_03;

            } while (auVar18._0_8_ != lVar17);

            auVar18 = FUN_00293880(uVar9,extraout_x1_03,&local_2c0,auStack_200,0x10);

          } while (auVar18._0_8_ != 0);

        }

        _objc_release(uVar9);

        _objc_release(uVar7);

        lVar8 = lVar8 + -1;

        goto LAB_00239000;

      }

    }

  }

LAB_00239180:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




