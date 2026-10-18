// FUN_00131c60 @0x131c60


ulong FUN_00131c60(undefined8 param_1,long param_2)



{

  long lVar1;

  undefined8 extraout_x1;

  undefined8 uVar2;

  undefined8 extraout_x1_00;

  ulong uVar3;

  long lVar4;

  undefined1 auVar5 [16];

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

  lVar1 = FUN_00293860(param_1);

  uStack_f8 = 0;

  local_100 = 0;

  uStack_e8 = 0;

  uStack_f0 = 0;

  lStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  local_110 = (long *)0x0;

  _objc_retain(param_1);

  auVar5 = FUN_00293880(param_1,extraout_x1,&local_120,auStack_d8,0x10);

  uVar3 = lVar1 * param_2;

  if (auVar5._0_8_ != 0) {

    lVar1 = *local_110;

    do {

      uVar2 = auVar5._8_8_;

      lVar4 = 0;

      do {

        if (*local_110 != lVar1) {

          _objc_enumerationMutation(param_1);

          uVar2 = extraout_x1_00;

        }

        uVar3 = uVar3 * 0x40 + (uVar3 >> 2) + (*(ulong *)(lStack_118 + lVar4 * 8) >> 4) + 0x9e3779b9

                ^ uVar3;

        lVar4 = lVar4 + 1;

      } while (auVar5._0_8_ != lVar4);

      auVar5 = FUN_00293880(param_1,uVar2,&local_120,auStack_d8,0x10);

    } while (auVar5._0_8_ != 0);

  }

  _objc_release(param_1);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return uVar3;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




