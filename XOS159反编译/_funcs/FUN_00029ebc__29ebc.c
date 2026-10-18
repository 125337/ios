// FUN_00029ebc @0x29ebc


void FUN_00029ebc(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar3;

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

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar5._0_8_;

  lStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  local_110 = (long *)0x0;

  uStack_f8 = 0;

  local_100 = 0;

  uStack_e8 = 0;

  uStack_f0 = 0;

  auVar5 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bda38,auVar5._8_8_,&local_120,

                        auStack_d8,0x10);

  if (auVar5._0_8_ != 0) {

    lVar3 = *local_110;

    do {

      uVar2 = auVar5._8_8_;

      lVar4 = 0;

      do {

        if (*local_110 != lVar3) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bda38);

          uVar2 = extraout_x1;

        }

        FUN_0029b4a0(uVar1,uVar2,*(undefined8 *)(lStack_118 + lVar4 * 8));

        lVar4 = lVar4 + 1;

        uVar2 = extraout_x1_00;

      } while (auVar5._0_8_ != lVar4);

      auVar5 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bda38,extraout_x1_00,&local_120,

                            auStack_d8,0x10);

    } while (auVar5._0_8_ != 0);

  }

  FUN_002a4a40(uVar1);

  FUN_0029b140(*(undefined8 *)(param_1 + 0x20));

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




