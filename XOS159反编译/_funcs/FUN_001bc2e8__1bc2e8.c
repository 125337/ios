// FUN_001bc2e8 @0x1bc2e8


void FUN_001bc2e8(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar4;

  long lVar5;

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

  FUN_001bc4e0();

  if ((DAT_003e9789 & 1) == 0) {

    FUN_001bc4e0();

  }

  if (DAT_003e9788 == '\x01') {

    if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

      FUN_001bc5b8();

      return;

    }

  }

  else {

    FUN_001bbd7c();

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_00291620();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar1);

    uStack_f8 = 0;

    local_100 = 0;

    uStack_e8 = 0;

    uStack_f0 = 0;

    lStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    local_110 = (long *)0x0;

    _objc_retain(uVar2);

    lVar3 = FUN_00293880(uVar2,extraout_x1,&local_120,auStack_d8,0x10);

    if (lVar3 != 0) {

      lVar4 = *local_110;

      do {

        lVar5 = 0;

        do {

          if (*local_110 != lVar4) {

            _objc_enumerationMutation(uVar2);

          }

          uVar1 = *(undefined8 *)(lStack_118 + lVar5 * 8);

          _objc_setAssociatedObject(uVar1,PTR_LOOP_003e7090,0,1);

          _objc_setAssociatedObject(uVar1,PTR_LOOP_003e7030,0,1);

          FUN_002939c0(uVar1);

          lVar5 = lVar5 + 1;

        } while (lVar3 != lVar5);

        lVar3 = FUN_00293880(uVar2,extraout_x1_00,&local_120,auStack_d8,0x10);

      } while (lVar3 != 0);

    }

    _objc_release(uVar2);

    FUN_001bc658();

    _objc_release(uVar2);

    if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

      return;

    }

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




