// FUN_00083564 @0x83564


void FUN_00083564(long param_1,undefined8 param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

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

  if ((param_1 == 0) || (uVar1 = FUN_002978a0(param_1), (uVar1 & 1) != 0)) {

    lVar5 = 0;

  }

  else {

    uStack_f8 = 0;

    local_100 = 0;

    uStack_e8 = 0;

    uStack_f0 = 0;

    lStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    local_110 = (long *)0x0;

    FUN_002a4840(param_1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar8._0_8_;

    lVar3 = FUN_00293880(uVar2,auVar8._8_8_,&local_120,auStack_d8,0x10);

    if (lVar3 != 0) {

      lVar6 = *local_110;

      do {

        lVar7 = 0;

        do {

          if (*local_110 != lVar6) {

            _objc_enumerationMutation(uVar2);

          }

          lVar5 = *(long *)(lStack_118 + lVar7 * 8);

          uVar1 = _objc_opt_isKindOfClass(lVar5,param_2);

          if ((uVar1 & 1) == 0) {

            FUN_00083564(lVar5,param_2);

            auVar8 = _objc_retainAutoreleasedReturnValue();

            uVar4 = auVar8._8_8_;

            lVar5 = auVar8._0_8_;

            if (lVar5 != 0) goto LAB_0008368c;

          }

          else {

            auVar8 = FUN_002978a0(lVar5);

            uVar4 = auVar8._8_8_;

            if ((auVar8._0_8_ & 1) == 0) {

              _objc_retain(lVar5);

              goto LAB_0008368c;

            }

          }

          lVar7 = lVar7 + 1;

        } while (lVar3 != lVar7);

        lVar3 = FUN_00293880(uVar2,uVar4,&local_120,auStack_d8,0x10);

      } while (lVar3 != 0);

    }

    lVar5 = 0;

LAB_0008368c:

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_58) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(lVar5);

  return;

}




