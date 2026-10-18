// FUN_001328d8 @0x1328d8


void FUN_001328d8(undefined8 param_1,undefined8 param_2,long param_3,int param_4)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined1 auVar7 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  if (param_4 != 7) {

    if (DAT_003e86f0 != -1) {

      FUN_0028f564();

    }

    if (DAT_003e86e8 != 0) {

      uStack_108 = 0;

      local_110 = 0;

      uStack_f8 = 0;

      uStack_100 = 0;

      lStack_128 = 0;

      local_130 = 0;

      uStack_118 = 0;

      local_120 = (long *)0x0;

      FUN_002a4840(param_1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      uVar1 = auVar7._0_8_;

      lVar2 = FUN_00293880(uVar1,auVar7._8_8_,&local_130,auStack_f0,0x10);

      if (lVar2 != 0) {

        lVar6 = *local_120;

        do {

          lVar4 = 0;

          do {

            if (*local_120 != lVar6) {

              _objc_enumerationMutation(uVar1);

            }

            uVar5 = *(undefined8 *)(lStack_128 + lVar4 * 8);

            if ((DAT_003e8700 & 1) == 0) {

              DAT_003e8700 = 1;

              DAT_003e86f8 = _objc_getClass("MMInputMsgReferView");

              uVar3 = 0;

              if (DAT_003e86f8 != 0) goto LAB_001329f0;

LAB_001329fc:

              if ((param_3 == 0) ||

                 (auVar7 = FUN_00293560(param_3,uVar3,uVar5), uVar3 = auVar7._8_8_,

                 (auVar7._0_8_ & 1) == 0)) {

                auVar7 = _objc_opt_isKindOfClass(uVar5,DAT_003e86e8);

                if ((auVar7._0_8_ & 1) != 0) {

                  FUN_00291240(param_2,auVar7._8_8_,uVar5);

                }

                FUN_001328d8(uVar5,param_2,param_3,param_4 + 1);

                uVar3 = extraout_x1;

              }

            }

            else {

              if (DAT_003e86f8 == 0) {

                uVar3 = 0;

                goto LAB_001329fc;

              }

LAB_001329f0:

              auVar7 = _objc_opt_isKindOfClass(uVar5);

              uVar3 = auVar7._8_8_;

              if ((auVar7._0_8_ & 1) == 0) goto LAB_001329fc;

            }

            lVar4 = lVar4 + 1;

          } while (lVar2 != lVar4);

          lVar2 = FUN_00293880(uVar1,uVar3,&local_130,auStack_f0,0x10);

        } while (lVar2 != 0);

      }

      _objc_release(uVar1);

    }

  }

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




