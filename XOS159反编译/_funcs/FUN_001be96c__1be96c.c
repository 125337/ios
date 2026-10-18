// FUN_001be96c @0x1be96c


void FUN_001be96c(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar4;

  long lVar5;

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

  DAT_003e978a = 0;

  if ((DAT_003e9789 & 1) == 0) {

    FUN_001bc4e0();

  }

  if (DAT_003e9788 == '\x01') {

    _CACurrentMediaTime();

    DAT_003e9790 = CONCAT17(extraout_var_05,

                            CONCAT16(extraout_var_04,

                                     CONCAT15(extraout_var_03,

                                              CONCAT14(extraout_var_02,

                                                       CONCAT13(extraout_var_01,

                                                                CONCAT12(extraout_var_00,

                                                                         CONCAT11(extraout_var,

                                                                                  extraout_b0)))))))

    ;

    FUN_002a2e60(&_OBJC_CLASS___UIApplication);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6560();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar1);

    uStack_e8 = 0;

    local_f0 = 0;

    uStack_d8 = 0;

    uStack_e0 = 0;

    lStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    local_100 = (long *)0x0;

    _objc_retain(uVar2);

    lVar3 = FUN_00293880(uVar2,extraout_x1,&local_110,auStack_c8,0x10);

    if (lVar3 != 0) {

      lVar4 = *local_100;

      do {

        lVar5 = 0;

        do {

          if (*local_100 != lVar4) {

            _objc_enumerationMutation(uVar2);

          }

          FUN_001beb04(*(undefined8 *)(lStack_108 + lVar5 * 8));

          lVar5 = lVar5 + 1;

        } while (lVar3 != lVar5);

        lVar3 = FUN_00293880(uVar2,extraout_x1_00,&local_110,auStack_c8,0x10);

      } while (lVar3 != 0);

    }

    _objc_release(uVar2);

    _objc_release(uVar2);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




