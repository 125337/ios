// FUN_000c7d74 @0xc7d74


void FUN_000c7d74(void)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 extraout_x1;

  long lVar3;

  long lVar4;

  undefined1 auVar5 [16];

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

  FUN_000c6fa8();

  uStack_e8 = 0;

  local_f0 = 0;

  uStack_d8 = 0;

  uStack_e0 = 0;

  lStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  local_100 = (long *)0x0;

  FUN_00291620(DAT_003e7c78);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar5._0_8_;

  lVar2 = FUN_00293880(uVar1,auVar5._8_8_,&local_110,auStack_c8,0x10);

  if (lVar2 != 0) {

    lVar3 = *local_100;

    do {

      lVar4 = 0;

      do {

        if (*local_100 != lVar3) {

          _objc_enumerationMutation(uVar1);

        }

        FUN_000c7ee4(*(undefined8 *)(lStack_108 + lVar4 * 8));

        lVar4 = lVar4 + 1;

      } while (lVar2 != lVar4);

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




