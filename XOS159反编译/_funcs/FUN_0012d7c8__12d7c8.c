// FUN_0012d7c8 @0x12d7c8


void FUN_0012d7c8(undefined8 param_1,undefined8 param_2)



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

      lVar6 = 0;

      do {

        if (*local_120 != lVar5) {

          _objc_enumerationMutation(uVar2);

          uVar3 = extraout_x1_00;

        }

        uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);

        auVar8 = FUN_00295f60(uVar4,uVar3,&cf_xzyColorScheme);

        if ((auVar8._0_8_ & 1) != 0) {

LAB_0012d92c:

          DAT_003e8560 = 0;

          goto LAB_0012d934;

        }

        auVar8 = FUN_00297820(uVar4,auVar8._8_8_,&cf_coversEnabled);

        if ((auVar8._0_8_ & 1) != 0) goto LAB_0012d92c;

        auVar8 = FUN_00297820(uVar4,auVar8._8_8_,&cf_mesMsgMergeBubbleEnabled);

        if ((auVar8._0_8_ & 1) != 0) goto LAB_0012d92c;

        auVar8 = FUN_00297820(uVar4,auVar8._8_8_,&cf_mesMsgMergeSelectedBubble);

        if (((auVar8._0_8_ & 1) != 0) ||

           (iVar1 = FUN_00297820(uVar4,auVar8._8_8_,&cf_mesMsgMergeSelectedSubPackage), iVar1 != 0))

        goto LAB_0012d92c;

        lVar6 = lVar6 + 1;

        uVar3 = extraout_x1_01;

      } while (auVar7._0_8_ != lVar6);

      auVar7 = FUN_00293880(uVar2,extraout_x1_01,&local_130,auStack_f0,0x10);

    } while (auVar7._0_8_ != 0);

  }

LAB_0012d934:

  _objc_release(uVar2);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




