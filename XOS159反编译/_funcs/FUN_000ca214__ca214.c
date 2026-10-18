// FUN_000ca214 @0xca214


void FUN_000ca214(long param_1)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  long lVar4;

  long lVar5;

  undefined1 auVar6 [16];

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

  _objc_retain();

  if (param_1 != 0) {

    lVar1 = _objc_getClass("MMUILabel");

    if ((lVar1 != 0) && (uVar2 = _objc_opt_isKindOfClass(param_1), (uVar2 & 1) != 0)) {

      FUN_000c7ee4(param_1);

    }

    uStack_e8 = 0;

    local_f0 = 0;

    uStack_d8 = 0;

    uStack_e0 = 0;

    lStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    local_100 = (long *)0x0;

    FUN_002a4840(param_1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar6._0_8_;

    lVar1 = FUN_00293880(uVar3,auVar6._8_8_,&local_110,auStack_c8,0x10);

    if (lVar1 != 0) {

      lVar4 = *local_100;

      do {

        lVar5 = 0;

        do {

          if (*local_100 != lVar4) {

            _objc_enumerationMutation(uVar3);

          }

          FUN_000ca214(*(undefined8 *)(lStack_108 + lVar5 * 8));

          lVar5 = lVar5 + 1;

        } while (lVar1 != lVar5);

        lVar1 = FUN_00293880(uVar3,extraout_x1,&local_110,auStack_c8,0x10);

      } while (lVar1 != 0);

    }

    _objc_release(uVar3);

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




