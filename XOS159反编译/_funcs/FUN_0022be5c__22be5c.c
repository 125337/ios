// FUN_0022be5c @0x22be5c


void FUN_0022be5c(long param_1,undefined8 param_2)



{

  ulong uVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

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

  if (param_1 != 0) {

    uVar1 = _objc_opt_isKindOfClass(param_1,param_2);

    if ((uVar1 & 1) == 0) {

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

      uVar4 = auVar6._0_8_;

      lVar2 = FUN_00293880(uVar4,auVar6._8_8_,&local_120,auStack_d8,0x10);

      if (lVar2 != 0) {

        lVar3 = *local_110;

        do {

          lVar5 = 0;

          do {

            if (*local_110 != lVar3) {

              _objc_enumerationMutation(uVar4);

            }

            FUN_0022be5c(*(undefined8 *)(lStack_118 + lVar5 * 8),param_2);

            lVar5 = lVar5 + 1;

          } while (lVar2 != lVar5);

          lVar2 = FUN_00293880(uVar4,extraout_x1,&local_120,auStack_d8,0x10);

        } while (lVar2 != 0);

      }

      _objc_release(uVar4);

    }

    else {

      FUN_0022c054(param_1);

      FUN_0022da28(param_1);

      FUN_002a4880(param_1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      while (lVar2 != 0) {

        uVar1 = _objc_opt_respondsToSelector(lVar2,"viewModel");

        if ((uVar1 & 1) != 0) {

          FUN_0029ff40(lVar2);

          break;

        }

        FUN_002a4880(lVar2);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar2);

        lVar2 = lVar3;

      }

      _objc_release(lVar2);

    }

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




