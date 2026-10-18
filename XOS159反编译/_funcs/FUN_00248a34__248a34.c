// FUN_00248a34 @0x248a34


void FUN_00248a34(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined1 auVar6 [16];

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

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  auVar6 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bef20,param_2,&local_130,auStack_e8,

                        0x10);

  if (auVar6._0_8_ != 0) {

    lVar4 = *local_120;

    do {

      uVar1 = auVar6._8_8_;

      lVar5 = 0;

      do {

        if (*local_120 != lVar4) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bef20);

          uVar1 = extraout_x1;

        }

        uVar3 = *(undefined8 *)(lStack_128 + lVar5 * 8);

        FUN_00299540(uVar3,uVar1,&cf_id);

        uVar1 = _objc_retainAutoreleasedReturnValue();

        lVar2 = FUN_002974a0();

        _objc_release(uVar1);

        if (lVar2 == param_1) {

          _objc_retain(uVar3);

          goto LAB_00248b38;

        }

        lVar5 = lVar5 + 1;

        uVar1 = extraout_x1_00;

      } while (auVar6._0_8_ != lVar5);

      auVar6 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bef20,extraout_x1_00,&local_130,

                            auStack_e8,0x10);

    } while (auVar6._0_8_ != 0);

  }

  uVar3 = 0;

LAB_00248b38:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    _objc_autoreleaseReturnValue(uVar3);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




