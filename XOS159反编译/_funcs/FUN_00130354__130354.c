// FUN_00130354 @0x130354


void FUN_00130354(long param_1,int param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

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

  _objc_retain();

  if ((param_1 != 0) && (param_2 != 7)) {

    if (param_2 == 0) {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e6ab8,0,1);

    }

    _objc_getAssociatedObject(param_1,&DAT_0030e548);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar1 != 0) {

      _objc_setAssociatedObject(param_1,&DAT_0030e548,0,1);

    }

    _objc_getAssociatedObject(param_1,&DAT_0030e549);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar1 != 0) {

      _objc_setAssociatedObject(param_1,&DAT_0030e549,0,1);

      auVar5 = _objc_opt_respondsToSelector(param_1,"setOTextColor:");

      if ((auVar5._0_8_ & 1) != 0) {

        FUN_002a0020(param_1,auVar5._8_8_,0);

      }

      FUN_0029ff20(param_1);

    }

    uStack_f8 = 0;

    local_100 = 0;

    uStack_e8 = 0;

    uStack_f0 = 0;

    lStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    local_110 = (long *)0x0;

    FUN_002a4840(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar5._0_8_;

    lVar1 = FUN_00293880(uVar2,auVar5._8_8_,&local_120,auStack_d8,0x10);

    if (lVar1 != 0) {

      lVar3 = *local_110;

      do {

        lVar4 = 0;

        do {

          if (*local_110 != lVar3) {

            _objc_enumerationMutation(uVar2);

          }

          FUN_00130354(*(undefined8 *)(lStack_118 + lVar4 * 8),param_2 + 1);

          lVar4 = lVar4 + 1;

        } while (lVar1 != lVar4);

        lVar1 = FUN_00293880(uVar2,extraout_x1,&local_120,auStack_d8,0x10);

      } while (lVar1 != 0);

    }

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




