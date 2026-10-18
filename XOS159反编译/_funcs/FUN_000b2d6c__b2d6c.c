// FUN_000b2d6c @0xb2d6c


void FUN_000b2d6c(long param_1,ulong param_2)



{

  bool bVar1;

  bool bVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar6;

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

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_1 != 0) {

    FUN_00292080(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 != 0) {

      FUN_00292080(param_1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_00292dc0(&_OBJC_CLASS___UIColor);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_002977c0(uVar4,auVar9._8_8_,auVar9._0_8_);

      _objc_release(auVar9._0_8_);

      _objc_release(uVar4);

      _objc_release(lVar3);

      if ((uVar5 & 1) == 0) {

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(param_1,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

      }

    }

    if (param_2 < 5) {

      uStack_108 = 0;

      local_110 = 0;

      uStack_f8 = 0;

      uStack_100 = 0;

      lStack_128 = 0;

      local_130 = 0;

      uStack_118 = 0;

      local_120 = (long *)0x0;

      FUN_002a4840(param_1);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar9._0_8_;

      auVar9 = FUN_00293880(uVar4,auVar9._8_8_,&local_130,auStack_e8,0x10);

      if (auVar9._0_8_ != 0) {

        lVar3 = *local_120;

        do {

          uVar6 = auVar9._8_8_;

          lVar8 = 0;

          do {

            if (*local_120 != lVar3) {

              _objc_enumerationMutation(uVar4);

              uVar6 = extraout_x1;

            }

            lVar7 = *(long *)(lStack_128 + lVar8 * 8);

            if ((lVar7 != 0) &&

               (auVar10 = FUN_002978a0(lVar7), uVar6 = auVar10._8_8_, (auVar10._0_8_ & 1) == 0)) {

              FUN_00295600(lVar7);

              _CGRectGetHeight();

              bVar1 = false;

              bVar2 = true;

              if (!NAN((double)CONCAT17(extraout_var_05,

                                        CONCAT16(extraout_var_04,

                                                 CONCAT15(extraout_var_03,

                                                          CONCAT14(extraout_var_02,

                                                                   CONCAT13(extraout_var_01,

                                                                            CONCAT12(extraout_var_00

                                                                                     ,CONCAT11(

                                                  extraout_var,extraout_b0))))))))) {

                bVar1 = (double)CONCAT17(extraout_var_05,

                                         CONCAT16(extraout_var_04,

                                                  CONCAT15(extraout_var_03,

                                                           CONCAT14(extraout_var_02,

                                                                    CONCAT13(extraout_var_01,

                                                                             CONCAT12(

                                                  extraout_var_00,CONCAT11(extraout_var,extraout_b0)

                                                  )))))) == 2.0;

                bVar2 = 2.0 <= (double)CONCAT17(extraout_var_05,

                                                CONCAT16(extraout_var_04,

                                                         CONCAT15(extraout_var_03,

                                                                  CONCAT14(extraout_var_02,

                                                                           CONCAT13(extraout_var_01,

                                                                                    CONCAT12(

                                                  extraout_var_00,CONCAT11(extraout_var,extraout_b0)

                                                  ))))));

              }

              uVar6 = extraout_x1_00;

              if (bVar2 && !bVar1) {

                FUN_000b2d6c(lVar7,param_2 + 1);

                uVar6 = extraout_x1_01;

              }

            }

            lVar8 = lVar8 + 1;

          } while (auVar9._0_8_ != lVar8);

          auVar9 = FUN_00293880(uVar4,uVar6,&local_130,auStack_e8,0x10);

        } while (auVar9._0_8_ != 0);

      }

      _objc_release(uVar4);

    }

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




