// FUN_000ca05c @0xca05c


void FUN_000ca05c(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  undefined8 extraout_x1;

  long lVar5;

  long lVar6;

  undefined1 auVar7 [16];

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

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIButton);

    uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

    if ((uVar3 & 1) != 0) {

      _objc_retain(param_1);

      iVar1 = FUN_000c849c(param_1);

      if (iVar1 != 0) {

        if ((DAT_003e7d19 & 1) == 0) {

          FUN_000c6fa8();

        }

        FUN_000c89a8(param_1,DAT_003e7d10 & DAT_003e7d17 & 1);

      }

      _objc_release(param_1);

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

    auVar7 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar7._0_8_;

    lVar4 = FUN_00293880(uVar2,auVar7._8_8_,&local_110,auStack_c8,0x10);

    if (lVar4 != 0) {

      lVar5 = *local_100;

      do {

        lVar6 = 0;

        do {

          if (*local_100 != lVar5) {

            _objc_enumerationMutation(uVar2);

          }

          FUN_000ca05c(*(undefined8 *)(lStack_108 + lVar6 * 8));

          lVar6 = lVar6 + 1;

        } while (lVar4 != lVar6);

        lVar4 = FUN_00293880(uVar2,extraout_x1,&local_110,auStack_c8,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




