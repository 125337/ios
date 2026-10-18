// FUN_0019f4f0 @0x19f4f0


void FUN_0019f4f0(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

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

  lStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  local_100 = (long *)0x0;

  uStack_e8 = 0;

  local_f0 = 0;

  uStack_d8 = 0;

  uStack_e0 = 0;

  FUN_002a62e0(*(undefined8 *)(param_1 + 0x20));

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar7._0_8_;

  lVar2 = FUN_00293880(uVar1,auVar7._8_8_,&local_110,auStack_c8,0x10);

  if (lVar2 != 0) {

    lVar5 = *local_100;

    do {

      lVar6 = 0;

      do {

        if (*local_100 != lVar5) {

          _objc_enumerationMutation(uVar1);

        }

        FUN_0019f65c(*(undefined8 *)(lStack_108 + lVar6 * 8),0);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if (lVar3 != 0) {

          FUN_0029ff40(lVar3);

          FUN_00297ee0(lVar3);

          uVar4 = FUN_0019f818(lVar3);

          if ((uVar4 & 1) == 0) {

            FUN_0019fbfc(lVar3);

          }

        }

        _objc_release(lVar3);

        lVar6 = lVar6 + 1;

      } while (lVar2 != lVar6);

      lVar2 = FUN_00293880(uVar1,extraout_x1,&local_110,auStack_c8,0x10);

    } while (lVar2 != 0);

  }

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




