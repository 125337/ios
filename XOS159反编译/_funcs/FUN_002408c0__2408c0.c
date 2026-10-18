// FUN_002408c0 @0x2408c0


void FUN_002408c0(void)



{

  bool bVar1;

  bool bVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  undefined1 extraout_b0;

  undefined1 extraout_var;

  undefined1 extraout_var_00;

  undefined1 extraout_var_01;

  undefined1 extraout_var_02;

  undefined1 extraout_var_03;

  undefined1 extraout_var_04;

  undefined1 extraout_var_05;

  undefined1 auVar14 [16];

  undefined8 local_200;

  long lStack_1f8;

  long *local_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 uStack_1d8;

  undefined8 uStack_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1c0;

  long lStack_1b8;

  long *local_1b0;

  undefined8 uStack_1a8;

  undefined8 local_1a0;

  undefined8 uStack_198;

  undefined8 uStack_190;

  undefined8 uStack_188;

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lStack_1b8 = 0;

  local_1c0 = 0;

  uStack_1a8 = 0;

  local_1b0 = (long *)0x0;

  uStack_198 = 0;

  local_1a0 = 0;

  uStack_188 = 0;

  uStack_190 = 0;

  FUN_00293440();

  auVar14 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar14._0_8_;

  lVar5 = FUN_00293880(uVar4,auVar14._8_8_,&local_1c0,auStack_100,0x10);

  if (lVar5 != 0) {

    lVar11 = *local_1b0;

    do {

      lVar12 = 0;

      do {

        if (*local_1b0 != lVar11) {

          _objc_enumerationMutation(uVar4);

        }

        uVar9 = *(undefined8 *)(lStack_1b8 + lVar12 * 8);

        uVar6 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

        auVar14 = _objc_opt_isKindOfClass(uVar9,uVar6);

        uVar6 = auVar14._8_8_;

        if ((auVar14._0_8_ & 1) != 0) {

          uStack_1d8 = 0;

          local_1e0 = 0;

          uStack_1c8 = 0;

          uStack_1d0 = 0;

          lStack_1f8 = 0;

          local_200 = 0;

          uStack_1e8 = 0;

          local_1f0 = (long *)0x0;

          FUN_002a6560(uVar9);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          uVar6 = auVar14._0_8_;

          lVar7 = FUN_00293880(uVar6,auVar14._8_8_,&local_200,auStack_180,0x10);

          if (lVar7 != 0) {

            lVar13 = *local_1f0;

            do {

              lVar8 = 0;

              do {

                if (*local_1f0 != lVar13) {

                  _objc_enumerationMutation(uVar6);

                }

                uVar10 = *(undefined8 *)(lStack_1f8 + lVar8 * 8);

                auVar14 = FUN_002978a0(uVar10);

                uVar9 = auVar14._8_8_;

                if ((auVar14._0_8_ & 1) == 0) {

                  FUN_002916a0(uVar10);

                  bVar1 = false;

                  bVar2 = true;

                  if (!NAN((double)CONCAT17(extraout_var_05,

                                            CONCAT16(extraout_var_04,

                                                     CONCAT15(extraout_var_03,

                                                              CONCAT14(extraout_var_02,

                                                                       CONCAT13(extraout_var_01,

                                                                                CONCAT12(

                                                  extraout_var_00,CONCAT11(extraout_var,extraout_b0)

                                                  )))))))) {

                    bVar1 = (double)CONCAT17(extraout_var_05,

                                             CONCAT16(extraout_var_04,

                                                      CONCAT15(extraout_var_03,

                                                               CONCAT14(extraout_var_02,

                                                                        CONCAT13(extraout_var_01,

                                                                                 CONCAT12(

                                                  extraout_var_00,CONCAT11(extraout_var,extraout_b0)

                                                  )))))) == 0.01;

                    bVar2 = 0.01 <= (double)CONCAT17(extraout_var_05,

                                                     CONCAT16(extraout_var_04,

                                                              CONCAT15(extraout_var_03,

                                                                       CONCAT14(extraout_var_02,

                                                                                CONCAT13(

                                                  extraout_var_01,

                                                  CONCAT12(extraout_var_00,

                                                           CONCAT11(extraout_var,extraout_b0)))))));

                  }

                  uVar9 = extraout_x1;

                  if (bVar2 && !bVar1) {

                    FUN_0024b510(uVar10);

                    FUN_0029bac0(uVar10);

                    uVar9 = _objc_retainAutoreleasedReturnValue();

                    FUN_0024b6c4();

                    _objc_release(uVar9);

                    uVar9 = extraout_x1_00;

                  }

                }

                lVar8 = lVar8 + 1;

              } while (lVar7 != lVar8);

              lVar7 = FUN_00293880(uVar6,uVar9,&local_200,auStack_180,0x10);

            } while (lVar7 != 0);

          }

          _objc_release(uVar6);

          uVar6 = extraout_x1_01;

        }

        lVar12 = lVar12 + 1;

      } while (lVar12 != lVar5);

      lVar5 = FUN_00293880(uVar4,uVar6,&local_1c0,auStack_100,0x10);

    } while (lVar5 != 0);

  }

  _objc_release(uVar4);

  _objc_release(uVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




