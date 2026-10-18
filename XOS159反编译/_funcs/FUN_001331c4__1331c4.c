// FUN_001331c4 @0x1331c4


byte FUN_001331c4(void)



{

  byte bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  undefined1 extraout_b0;

  undefined1 extraout_var;

  undefined1 extraout_var_00;

  undefined1 extraout_var_01;

  undefined1 extraout_var_02;

  undefined1 extraout_var_03;

  undefined1 extraout_var_04;

  undefined1 extraout_var_05;

  undefined1 auVar12 [16];

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  long lStack_1a8;

  long *local_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _CFAbsoluteTimeGetCurrent();

  bVar1 = DAT_003e8788;

  if (1.0 <= (double)CONCAT17(extraout_var_05,

                              CONCAT16(extraout_var_04,

                                       CONCAT15(extraout_var_03,

                                                CONCAT14(extraout_var_02,

                                                         CONCAT13(extraout_var_01,

                                                                  CONCAT12(extraout_var_00,

                                                                           CONCAT11(extraout_var,

                                                                                    extraout_b0)))))

                                      )) - DAT_003e8780) {

    DAT_003e8780 = (double)CONCAT17(extraout_var_05,

                                    CONCAT16(extraout_var_04,

                                             CONCAT15(extraout_var_03,

                                                      CONCAT14(extraout_var_02,

                                                               CONCAT13(extraout_var_01,

                                                                        CONCAT12(extraout_var_00,

                                                                                 CONCAT11(

                                                  extraout_var,extraout_b0)))))));

    FUN_002a2e60(&_OBJC_CLASS___UIApplication);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00293440();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    uStack_188 = 0;

    local_190 = 0;

    uStack_178 = 0;

    uStack_180 = 0;

    lStack_1a8 = 0;

    local_1b0 = 0;

    uStack_198 = 0;

    local_1a0 = (long *)0x0;

    _objc_retain(uVar3);

    lVar4 = FUN_00293880(uVar3,extraout_x1,&local_1b0,auStack_f0,0x10);

    if (lVar4 != 0) {

      lVar7 = *local_1a0;

      do {

        lVar10 = 0;

        do {

          if (*local_1a0 != lVar7) {

            _objc_enumerationMutation(uVar3);

          }

          uVar8 = *(undefined8 *)(lStack_1a8 + lVar10 * 8);

          uVar2 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

          auVar12 = _objc_opt_isKindOfClass(uVar8,uVar2);

          uVar2 = auVar12._8_8_;

          if ((auVar12._0_8_ & 1) != 0) {

            _objc_retain(uVar8);

            lStack_1e8 = 0;

            local_1f0 = 0;

            uStack_1d8 = 0;

            local_1e0 = (long *)0x0;

            uStack_1c8 = 0;

            local_1d0 = 0;

            uStack_1b8 = 0;

            uStack_1c0 = 0;

            FUN_002a6560(uVar8);

            auVar12 = _objc_retainAutoreleasedReturnValue();

            uVar2 = auVar12._0_8_;

            lVar5 = FUN_00293880(uVar2,auVar12._8_8_,&local_1f0,auStack_170,0x10);

            if (lVar5 != 0) {

              lVar11 = *local_1e0;

              do {

                lVar6 = 0;

                do {

                  if (*local_1e0 != lVar11) {

                    _objc_enumerationMutation(uVar2);

                  }

                  lVar9 = *(long *)(lStack_1e8 + lVar6 * 8);

                  auVar12 = FUN_00297900(lVar9);

                  if ((auVar12._0_8_ & 1) != 0) {

                    _objc_retain(lVar9);

                    _objc_release(uVar2);

                    _objc_release(uVar8);

                    uVar2 = extraout_x1_01;

                    if (lVar9 == 0) goto LAB_001333b8;

                    _objc_release(uVar3);

                    FUN_002a5680(lVar9);

                    uVar2 = _objc_retainAutoreleasedReturnValue();

                    lVar4 = FUN_002a5fc0();

                    DAT_003e8788 = lVar4 == 2;

                    _objc_release(uVar2);

                    bVar1 = DAT_003e8788;

                    _objc_release(lVar9);

                    goto LAB_0013346c;

                  }

                  lVar6 = lVar6 + 1;

                } while (lVar5 != lVar6);

                lVar5 = FUN_00293880(uVar2,auVar12._8_8_,&local_1f0,auStack_170,0x10);

              } while (lVar5 != 0);

            }

            _objc_release(uVar2);

            _objc_release(uVar8);

            uVar2 = extraout_x1_00;

          }

LAB_001333b8:

          lVar10 = lVar10 + 1;

        } while (lVar10 != lVar4);

        lVar4 = FUN_00293880(uVar3,uVar2,&local_1b0,auStack_f0,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar3);

    FUN_00293e40(&_OBJC_CLASS___UITraitCollection);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar4 = FUN_002a5fc0();

    DAT_003e8788 = lVar4 == 2;

    _objc_release(uVar2);

    bVar1 = DAT_003e8788;

LAB_0013346c:

    _objc_release(uVar3);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return bVar1 & 1;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




