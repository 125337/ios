// FUN_00193f84 @0x193f84


void FUN_00193f84(undefined8 param_1,undefined8 param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 uVar3;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

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

  FUN_002a5f80(param_2);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar7._0_8_,auVar7._8_8_,&cf_keys);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  _objc_retain(uVar2);

  auVar7 = FUN_00293880(uVar2,extraout_x1,&local_130,auStack_f0,0x10);

  if (auVar7._0_8_ != 0) {

    lVar5 = *local_120;

    do {

      uVar3 = auVar7._8_8_;

      lVar4 = 0;

      do {

        if (*local_120 != lVar5) {

          _objc_enumerationMutation(uVar2);

          uVar3 = extraout_x1_00;

        }

        uVar6 = *(undefined8 *)(lStack_128 + lVar4 * 8);

        auVar8 = FUN_00297820(uVar6,uVar3,&cf_coversEnabled);

        if ((auVar8._0_8_ & 1) != 0) {

LAB_00194124:

          DAT_003e9628 = 0;

          FUN_0018da3c();

          goto LAB_00194130;

        }

        auVar8 = FUN_00297820(uVar6,auVar8._8_8_,&cf_mesMsgMergeEnabled);

        if ((auVar8._0_8_ & 1) != 0) goto LAB_00194124;

        auVar8 = FUN_00297820(uVar6,auVar8._8_8_,&cf_mesMsgMergeAvatarAboveAnyChat);

        if ((auVar8._0_8_ & 1) != 0) goto LAB_00194124;

        auVar8 = FUN_00297820(uVar6,auVar8._8_8_,&cf_mesMsgMergeAvatarAboveBubble);

        if ((auVar8._0_8_ & 1) != 0) goto LAB_00194124;

        auVar8 = FUN_00297820(uVar6,auVar8._8_8_,&cf_mesMsgMergeMessageOffsetOther);

        if ((auVar8._0_8_ & 1) != 0) goto LAB_00194124;

        auVar8 = FUN_00297820(uVar6,auVar8._8_8_,&cf_mesMsgMergeMessageOffsetSelf);

        if ((auVar8._0_8_ & 1) != 0) goto LAB_00194124;

        auVar8 = FUN_00297820(uVar6,auVar8._8_8_,&cf_mesMsgMergeAvatarOffset);

        if (((auVar8._0_8_ & 1) != 0) ||

           (iVar1 = FUN_00297820(uVar6,auVar8._8_8_,&cf_mesMsgMergeWholeOffset), iVar1 != 0))

        goto LAB_00194124;

        lVar4 = lVar4 + 1;

        uVar3 = extraout_x1_01;

      } while (auVar7._0_8_ != lVar4);

      auVar7 = FUN_00293880(uVar2,extraout_x1_01,&local_130,auStack_f0,0x10);

    } while (auVar7._0_8_ != 0);

  }

LAB_00194130:

  _objc_release(uVar2);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




