// FUN_00131ac4 @0x131ac4


ulong FUN_00131ac4(undefined8 param_1,long param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  ulong uVar4;

  long lVar5;

  undefined1 auVar6 [16];

  undefined8 local_120;

  long lStack_118;

  long *local_110;

  undefined8 uStack_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  undefined8 uStack_f0;

  undefined8 uStack_e8;

  undefined1 auStack_d8 [128];

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  FUN_002a4840(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_00293860();

  _objc_release(uVar1);

  uStack_f8 = 0;

  local_100 = 0;

  uStack_e8 = 0;

  uStack_f0 = 0;

  lStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  local_110 = (long *)0x0;

  FUN_002a4840(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar6._0_8_;

  auVar6 = FUN_00293880(uVar1,auVar6._8_8_,&local_120,auStack_d8,0x10);

  uVar4 = lVar2 * param_2;

  if (auVar6._0_8_ != 0) {

    lVar2 = *local_110;

    do {

      uVar3 = auVar6._8_8_;

      lVar5 = 0;

      do {

        if (*local_110 != lVar2) {

          _objc_enumerationMutation(uVar1);

          uVar3 = extraout_x1;

        }

        uVar4 = uVar4 * 0x40 + (uVar4 >> 2) + (*(ulong *)(lStack_118 + lVar5 * 8) >> 4) + 0x9e3779b9

                ^ uVar4;

        lVar5 = lVar5 + 1;

      } while (auVar6._0_8_ != lVar5);

      auVar6 = FUN_00293880(uVar1,uVar3,&local_120,auStack_d8,0x10);

    } while (auVar6._0_8_ != 0);

  }

  _objc_release(uVar1);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return uVar4;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




