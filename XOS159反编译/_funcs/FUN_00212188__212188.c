// FUN_00212188 @0x212188


undefined8 FUN_00212188(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar5;

  long lVar6;

  undefined1 auVar7 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_1 == 0) {

    uVar4 = 0;

  }

  else {

    if (DAT_003eade8 != -1) {

      FUN_0028fa0c();

    }

    uVar1 = DAT_003eade0;

    uStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    uStack_100 = 0;

    lStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    local_120 = (long *)0x0;

    _objc_retain(DAT_003eade0);

    auVar7 = FUN_00293880(uVar1,extraout_x1,&local_130,auStack_f0,0x10);

    if (auVar7._0_8_ != 0) {

      lVar5 = *local_120;

      do {

        uVar4 = auVar7._8_8_;

        lVar6 = 0;

        do {

          if (*local_120 != lVar5) {

            _objc_enumerationMutation(uVar1);

            uVar4 = extraout_x1_00;

          }

          FUN_002a6080(param_1,uVar4,*(undefined8 *)(lStack_128 + lVar6 * 8));

          uVar2 = _objc_retainAutoreleasedReturnValue();

          uVar3 = _objc_opt_respondsToSelector(uVar2,"longLongValue");

          if ((uVar3 & 1) != 0) {

            uVar4 = FUN_002984c0(uVar2);

            _objc_release(uVar2);

            goto LAB_002122e8;

          }

          _objc_release(uVar2);

          lVar6 = lVar6 + 1;

          uVar4 = extraout_x1_01;

        } while (auVar7._0_8_ != lVar6);

        auVar7 = FUN_00293880(uVar1,extraout_x1_01,&local_130,auStack_f0,0x10);

      } while (auVar7._0_8_ != 0);

    }

    uVar4 = 0;

LAB_002122e8:

    _objc_release(uVar1);

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return uVar4;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




