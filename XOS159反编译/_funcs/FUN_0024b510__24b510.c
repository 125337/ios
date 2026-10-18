// FUN_0024b510 @0x24b510


void FUN_0024b510(long param_1)



{

  bool bVar1;

  bool bVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar7;

  long lVar8;

  undefined1 extraout_b0;

  undefined1 extraout_var;

  undefined1 extraout_var_00;

  undefined1 extraout_var_01;

  undefined1 extraout_var_02;

  undefined1 extraout_var_03;

  undefined1 extraout_var_04;

  undefined1 extraout_var_05;

  undefined8 local_110;

  long lStack_108;

  long *local_100;

  undefined8 uStack_f8;

  undefined8 local_f0;

  undefined8 uStack_e8;

  undefined8 uStack_e0;

  undefined8 uStack_d8;

  undefined1 auStack_c8 [128];

  long local_48;

  

  local_48 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_1 != 0) {

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UITabBar);

    uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

    if ((uVar4 & 1) == 0) {

      uVar4 = FUN_002978a0(param_1);

      if ((uVar4 & 1) == 0) {

        FUN_002916a0(param_1);

        bVar1 = false;

        bVar2 = true;

        if (!NAN((double)CONCAT17(extraout_var_05,

                                  CONCAT16(extraout_var_04,

                                           CONCAT15(extraout_var_03,

                                                    CONCAT14(extraout_var_02,

                                                             CONCAT13(extraout_var_01,

                                                                      CONCAT12(extraout_var_00,

                                                                               CONCAT11(extraout_var

                                                                                        ,extraout_b0

                                                                                       ))))))))) {

          bVar1 = (double)CONCAT17(extraout_var_05,

                                   CONCAT16(extraout_var_04,

                                            CONCAT15(extraout_var_03,

                                                     CONCAT14(extraout_var_02,

                                                              CONCAT13(extraout_var_01,

                                                                       CONCAT12(extraout_var_00,

                                                                                CONCAT11(

                                                  extraout_var,extraout_b0))))))) == 0.01;

          bVar2 = 0.01 <= (double)CONCAT17(extraout_var_05,

                                           CONCAT16(extraout_var_04,

                                                    CONCAT15(extraout_var_03,

                                                             CONCAT14(extraout_var_02,

                                                                      CONCAT13(extraout_var_01,

                                                                               CONCAT12(

                                                  extraout_var_00,CONCAT11(extraout_var,extraout_b0)

                                                  ))))));

        }

        if (bVar2 && !bVar1) {

          uStack_e8 = 0;

          local_f0 = 0;

          uStack_d8 = 0;

          uStack_e0 = 0;

          lStack_108 = 0;

          local_110 = 0;

          uStack_f8 = 0;

          local_100 = (long *)0x0;

          FUN_002a4840(param_1);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          uVar5 = FUN_002937a0();

          _objc_release(uVar3);

          lVar6 = FUN_00293880(uVar5,extraout_x1,&local_110,auStack_c8,0x10);

          if (lVar6 != 0) {

            lVar7 = *local_100;

            do {

              lVar8 = 0;

              do {

                if (*local_100 != lVar7) {

                  _objc_enumerationMutation(uVar5);

                }

                FUN_0024b510(*(undefined8 *)(lStack_108 + lVar8 * 8));

                lVar8 = lVar8 + 1;

              } while (lVar6 != lVar8);

              lVar6 = FUN_00293880(uVar5,extraout_x1_00,&local_110,auStack_c8,0x10);

            } while (lVar6 != 0);

          }

          _objc_release(uVar5);

        }

      }

    }

    else {

      FUN_0023d46c(param_1);

    }

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




