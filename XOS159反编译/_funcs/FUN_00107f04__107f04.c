// FUN_00107f04 @0x107f04


void FUN_00107f04(undefined8 param_1,undefined8 param_2)



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

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

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

  auVar7 = FUN_00293880(uVar2,extraout_x1,&local_130,auStack_e8,0x10);

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

        auVar8 = FUN_00295f60(uVar4,uVar3,&cf_xzyTimeLabel);

        if ((auVar8._0_8_ & 1) != 0) {

LAB_00108050:

          DAT_003e8118 = 0;

          FUN_001079e0();

          if ((DAT_003e8119 == '\x01') && (DAT_003e8170 != -1)) {

            FUN_0028f1fc();

          }

          goto LAB_0010807c;

        }

        auVar8 = FUN_00297820(uVar4,auVar8._8_8_,&cf_coversEnabled);

        if ((auVar8._0_8_ & 1) != 0) goto LAB_00108050;

        auVar8 = FUN_00297820(uVar4,auVar8._8_8_,&cf_mesMsgMergeEnabled);

        if (((auVar8._0_8_ & 1) != 0) ||

           (iVar1 = FUN_00297820(uVar4,auVar8._8_8_,&cf_mesMsgMergeBubbleEnabled), iVar1 != 0))

        goto LAB_00108050;

        lVar6 = lVar6 + 1;

        uVar3 = extraout_x1_01;

      } while (auVar7._0_8_ != lVar6);

      auVar7 = FUN_00293880(uVar2,extraout_x1_01,&local_130,auStack_e8,0x10);

    } while (auVar7._0_8_ != 0);

  }

LAB_0010807c:

  _objc_release(uVar2);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_68) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




