// FUN_00209fcc @0x209fcc


void FUN_00209fcc(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar3;

  long lVar4;

  undefined8 local_110;

  long lStack_108;

  long *local_100;

  undefined8 uStack_f8;

  undefined8 local_f0;

  undefined8 uStack_e8;

  undefined8 uStack_e0;

  undefined8 uStack_d8;

  undefined1 auStack_c8 [128];

  long local_48;

  

  local_48 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  DAT_003ead51 = 0;

  if (DAT_003eaa30 == '\x01') {

    if (DAT_003eaf08 != -1) {

      thunk_FUN_00223ad4();

    }

    _os_unfair_lock_lock(&DAT_003ead54);

    FUN_00291620(DAT_003eaa70);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _os_unfair_lock_unlock(&DAT_003ead54);

    uStack_e8 = 0;

    local_f0 = 0;

    uStack_d8 = 0;

    uStack_e0 = 0;

    lStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    local_100 = (long *)0x0;

    _objc_retain(uVar1);

    lVar2 = FUN_00293880(uVar1,extraout_x1,&local_110,auStack_c8,0x10);

    if (lVar2 != 0) {

      lVar3 = *local_100;

      do {

        lVar4 = 0;

        do {

          if (*local_100 != lVar3) {

            _objc_enumerationMutation(uVar1);

          }

          FUN_0020a174(*(undefined8 *)(lStack_108 + lVar4 * 8),0);

          lVar4 = lVar4 + 1;

        } while (lVar2 != lVar4);

        lVar2 = FUN_00293880(uVar1,extraout_x1_00,&local_110,auStack_c8,0x10);

      } while (lVar2 != 0);

    }

    _objc_release(uVar1);

    _objc_release(uVar1);

  }

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




