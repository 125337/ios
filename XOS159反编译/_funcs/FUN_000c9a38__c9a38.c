// FUN_000c9a38 @0xc9a38


undefined8 FUN_000c9a38(void)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar5;

  long lVar6;

  undefined1 auVar7 [16];

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

  FUN_00290e20();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_000c9e94();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  if (lVar2 != 0) {

    uStack_f8 = 0;

    local_100 = 0;

    uStack_e8 = 0;

    uStack_f0 = 0;

    lStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    local_110 = (long *)0x0;

    lVar3 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdf60,extraout_x1,&local_120,

                         auStack_d8,0x10);

    if (lVar3 != 0) {

      lVar5 = *local_110;

      do {

        lVar6 = 0;

        do {

          if (*local_110 != lVar5) {

            _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdf60);

          }

          FUN_002984e0(*(undefined8 *)(lStack_118 + lVar6 * 8));

          auVar7 = _objc_retainAutoreleasedReturnValue();

          uVar1 = auVar7._0_8_;

          auVar7 = FUN_00297820(lVar2,auVar7._8_8_,uVar1);

          if (((auVar7._0_8_ & 1) != 0) ||

             (uVar4 = FUN_00293580(lVar2,auVar7._8_8_,uVar1), (uVar4 & 1) != 0)) {

            _objc_release(uVar1);

            uVar1 = 1;

            goto LAB_000c9b64;

          }

          _objc_release(uVar1);

          lVar6 = lVar6 + 1;

        } while (lVar3 != lVar6);

        lVar3 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdf60,extraout_x1_00,&local_120,

                             auStack_d8,0x10);

      } while (lVar3 != 0);

    }

  }

  uVar1 = 0;

LAB_000c9b64:

  _objc_release(lVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return uVar1;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




