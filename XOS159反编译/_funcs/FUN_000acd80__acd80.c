// FUN_000acd80 @0xacd80


void FUN_000acd80(long param_1,undefined8 param_2)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar3;

  long lVar4;

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

  if ((param_1 != 0) &&

     (auVar6 = _objc_opt_respondsToSelector(param_1,"subViewModels"), (auVar6._0_8_ & 1) != 0)) {

    FUN_002a6080(param_1,auVar6._8_8_,&cf_subViewModels);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if ((lVar1 != 0) && (lVar2 = FUN_00293860(lVar1), lVar2 != 0)) {

      uStack_f8 = 0;

      local_100 = 0;

      uStack_e8 = 0;

      uStack_f0 = 0;

      lStack_118 = 0;

      local_120 = 0;

      uStack_108 = 0;

      local_110 = (long *)0x0;

      _objc_retain(lVar1);

      lVar2 = FUN_00293880(lVar1,extraout_x1,&local_120,auStack_d8,0x10);

      if (lVar2 != 0) {

        lVar4 = *local_110;

        do {

          lVar5 = 0;

          do {

            if (*local_110 != lVar4) {

              _objc_enumerationMutation(lVar1);

            }

            uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);

            FUN_000acbc0(uVar3);

            FUN_000acd04(uVar3,param_2);

            lVar5 = lVar5 + 1;

          } while (lVar2 != lVar5);

          lVar2 = FUN_00293880(lVar1,extraout_x1_00,&local_120,auStack_d8,0x10);

        } while (lVar2 != 0);

      }

      _objc_release(lVar1);

    }

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




