// FUN_0010f6a8 @0x10f6a8


void FUN_0010f6a8(void)



{

  undefined8 uVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

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

  iVar2 = FUN_0010f81c();

  uVar1 = DAT_003e8290;

  if (iVar2 != 0) {

    DAT_003e8298 = 1;

    lStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    local_110 = (long *)0x0;

    uStack_f8 = 0;

    local_100 = 0;

    uStack_e8 = 0;

    uStack_f0 = 0;

    _objc_retain(DAT_003e8290);

    lVar3 = FUN_00293880(uVar1,extraout_x1,&local_120,auStack_d8,0x10);

    if (lVar3 != 0) {

      lVar6 = *local_110;

      do {

        lVar7 = 0;

        do {

          if (*local_110 != lVar6) {

            _objc_enumerationMutation(uVar1);

          }

          uVar5 = *(undefined8 *)(lStack_118 + lVar7 * 8);

          FUN_00297e40(uVar5);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          FUN_0010f8f8();

          _objc_release(uVar4);

          iVar2 = FUN_002975e0(uVar5);

          uVar4 = extraout_x1_00;

          if (iVar2 != 0) {

            FUN_002a42e0(uVar5);

            uVar4 = extraout_x1_01;

          }

          lVar7 = lVar7 + 1;

        } while (lVar3 != lVar7);

        lVar3 = FUN_00293880(uVar1,uVar4,&local_120,auStack_d8,0x10);

      } while (lVar3 != 0);

    }

    _objc_release(uVar1);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




