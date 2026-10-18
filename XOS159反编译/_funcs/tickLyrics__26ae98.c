// tickLyrics @0x26ae98


/* Function Stack Size: 0x10 bytes */



void XZYDockPlayerEngine::tickLyrics(ID param_1,SEL param_2)



{

  int iVar1;

  long lVar2;

  ulong uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  long lVar9;

  undefined1 extraout_b0;

  undefined1 extraout_b0_00;

  undefined1 extraout_var;

  undefined1 extraout_var_00;

  undefined1 extraout_var_01;

  undefined1 extraout_var_02;

  undefined1 extraout_var_03;

  undefined1 extraout_var_04;

  undefined1 extraout_var_05;

  undefined1 extraout_var_06;

  undefined1 extraout_var_07;

  undefined1 extraout_var_08;

  undefined1 extraout_var_09;

  undefined1 extraout_var_10;

  undefined1 extraout_var_11;

  undefined1 extraout_var_12;

  undefined1 auVar10 [16];

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_f8 [128];

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  lVar2 = FUN_00293860(*(undefined8 *)(param_1 + 0x20));

  if (((lVar2 != 0) && (iVar1 = FUN_00299f80(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) &&

     (iVar1 = FUN_001c4780(), iVar1 != 0)) {

    FUN_00293de0(*(undefined8 *)(param_1 + 0x10));

    uVar4 = *(undefined8 *)(param_1 + 0x20);

    _objc_retain(uVar4);

    lStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    local_130 = (long *)0x0;

    uStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    uStack_110 = 0;

    _objc_retain(uVar4);

    lVar2 = FUN_00293880(uVar4,extraout_x1,&local_140,auStack_f8,0x10);

    if (lVar2 == 0) {

      uVar5 = 0;

    }

    else {

      uVar5 = 0;

      lVar8 = *local_130;

      do {

        lVar9 = 0;

        uVar7 = uVar5;

        do {

          if (*local_130 != lVar8) {

            _objc_enumerationMutation(uVar4);

          }

          uVar6 = *(undefined8 *)(lStack_138 + lVar9 * 8);

          FUN_00295440(uVar6);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_00294860();

          _objc_release(uVar5);

          uVar5 = uVar7;

          if ((double)CONCAT17(extraout_var_11,

                               CONCAT16(extraout_var_09,

                                        CONCAT15(extraout_var_07,

                                                 CONCAT14(extraout_var_05,

                                                          CONCAT13(extraout_var_03,

                                                                   CONCAT12(extraout_var_01,

                                                                            CONCAT11(extraout_var,

                                                                                     extraout_b0))))

                                                ))) <

              (double)CONCAT17(extraout_var_12,

                               CONCAT16(extraout_var_10,

                                        CONCAT15(extraout_var_08,

                                                 CONCAT14(extraout_var_06,

                                                          CONCAT13(extraout_var_04,

                                                                   CONCAT12(extraout_var_02,

                                                                            CONCAT11(extraout_var_00

                                                                                     ,extraout_b0_00

                                                                                    ))))))))

          goto LAB_0026aff0;

          FUN_00297d80(uVar6);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar7);

          lVar9 = lVar9 + 1;

          uVar7 = uVar5;

        } while (lVar2 != lVar9);

        lVar2 = FUN_00293880(uVar4,extraout_x1_00,&local_140,auStack_f8,0x10);

      } while (lVar2 != 0);

    }

LAB_0026aff0:

    _objc_release(uVar4);

    _objc_release(uVar4);

    auVar10 = FUN_00297fa0(uVar5);

    if ((auVar10._0_8_ != 0) &&

       (uVar3 = FUN_00297820(uVar5,auVar10._8_8_,*(undefined8 *)(param_1 + 0x28)), (uVar3 & 1) == 0)

       ) {

      _objc_retain(uVar5);

      uVar4 = *(undefined8 *)(param_1 + 0x28);

      *(undefined8 *)(param_1 + 0x28) = uVar5;

      _objc_release(uVar4);

      FUN_001c3d54(uVar5);

    }

    _objc_release(uVar5);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




