// FUN_0019f65c @0x19f65c


void FUN_0019f65c(long param_1,ulong param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

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

  _objc_retain();

  lVar4 = 0;

  if ((param_1 != 0) && (param_2 < 6)) {

    uVar1 = _objc_opt_respondsToSelector(param_1,"viewModel");

    if (((uVar1 & 1) == 0) ||

       (uVar1 = _objc_opt_respondsToSelector(param_1,"getHeadImageView"), (uVar1 & 1) == 0)) {

      uStack_f8 = 0;

      local_100 = 0;

      uStack_e8 = 0;

      uStack_f0 = 0;

      lStack_118 = 0;

      local_120 = 0;

      uStack_108 = 0;

      local_110 = (long *)0x0;

      FUN_002a4840(param_1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      uVar2 = auVar7._0_8_;

      lVar3 = FUN_00293880(uVar2,auVar7._8_8_,&local_120,auStack_d8,0x10);

      if (lVar3 != 0) {

        lVar5 = *local_110;

        do {

          lVar6 = 0;

          do {

            if (*local_110 != lVar5) {

              _objc_enumerationMutation(uVar2);

            }

            FUN_0019f65c(*(undefined8 *)(lStack_118 + lVar6 * 8),param_2 + 1);

            auVar7 = _objc_retainAutoreleasedReturnValue();

            lVar4 = auVar7._0_8_;

            if (lVar4 != 0) {

              _objc_release(uVar2);

              goto LAB_0019f798;

            }

            lVar6 = lVar6 + 1;

          } while (lVar3 != lVar6);

          lVar3 = FUN_00293880(uVar2,auVar7._8_8_,&local_120,auStack_d8,0x10);

        } while (lVar3 != 0);

      }

      _objc_release(uVar2);

      lVar4 = 0;

    }

    else {

      _objc_retain(param_1);

      lVar4 = param_1;

    }

  }

LAB_0019f798:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    _objc_autoreleaseReturnValue(lVar4);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




