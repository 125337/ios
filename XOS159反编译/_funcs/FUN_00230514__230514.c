// FUN_00230514 @0x230514


void FUN_00230514(undefined8 param_1,undefined8 param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 uVar3;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined1 auVar7 [16];

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

  FUN_002a5f80(param_2);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar7._0_8_,auVar7._8_8_,&cf_keys);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  uStack_f8 = 0;

  local_100 = 0;

  uStack_e8 = 0;

  uStack_f0 = 0;

  lStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  local_110 = (long *)0x0;

  _objc_retain(uVar2);

  auVar7 = FUN_00293880(uVar2,extraout_x1,&local_120,auStack_d8,0x10);

  if (auVar7._0_8_ != 0) {

    lVar5 = *local_110;

    do {

      uVar3 = auVar7._8_8_;

      lVar6 = 0;

      do {

        if (*local_110 != lVar5) {

          _objc_enumerationMutation(uVar2);

          uVar3 = extraout_x1_00;

        }

        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);

        auVar8 = FUN_00297820(uVar4,uVar3,&cf_coversEnabled);

        if (((auVar8._0_8_ & 1) != 0) ||

           (iVar1 = FUN_00295f60(uVar4,auVar8._8_8_,&cf_xzyHighRefresh), iVar1 != 0)) {

          FUN_00230258();

          goto LAB_00230630;

        }

        lVar6 = lVar6 + 1;

        uVar3 = extraout_x1_01;

      } while (auVar7._0_8_ != lVar6);

      auVar7 = FUN_00293880(uVar2,extraout_x1_01,&local_120,auStack_d8,0x10);

    } while (auVar7._0_8_ != 0);

  }

LAB_00230630:

  _objc_release(uVar2);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_58) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




