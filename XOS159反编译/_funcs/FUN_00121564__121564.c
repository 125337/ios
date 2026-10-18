// FUN_00121564 @0x121564


void FUN_00121564(undefined8 param_1,undefined8 param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar3;

  long lVar4;

  bool bVar5;

  undefined8 uVar6;

  long lVar7;

  bool bVar8;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

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

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar9._0_8_,auVar9._8_8_,&cf_keys);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  _objc_retain(uVar2);

  auVar9 = FUN_00293880(uVar2,extraout_x1,&local_130,auStack_f0,0x10);

  if (auVar9._0_8_ == 0) {

    _objc_release(uVar2);

  }

  else {

    bVar8 = false;

    bVar5 = false;

    lVar4 = *local_120;

    do {

      uVar3 = auVar9._8_8_;

      lVar7 = 0;

      do {

        if (*local_120 != lVar4) {

          _objc_enumerationMutation(uVar2);

          uVar3 = extraout_x1_00;

        }

        uVar6 = *(undefined8 *)(lStack_128 + lVar7 * 8);

        auVar10 = FUN_00297820(uVar6,uVar3,&cf_coversEnabled);

        uVar3 = auVar10._8_8_;

        if ((auVar10._0_8_ & 1) == 0) {

          auVar10 = FUN_00295f60(uVar6,uVar3,&cf_xzyNameplate);

          uVar3 = auVar10._8_8_;

          if ((auVar10._0_8_ & 1) != 0) goto LAB_001216b4;

          auVar10 = FUN_00297820(uVar6,uVar3,&cf_mesMsgMergeMessageOffsetOther);

          uVar3 = auVar10._8_8_;

          if ((auVar10._0_8_ & 1) != 0) goto LAB_001216b4;

          auVar10 = FUN_00297820(uVar6,uVar3,&cf_mesMsgMergeAvatarOffset);

          uVar3 = auVar10._8_8_;

          if ((auVar10._0_8_ & 1) != 0) goto LAB_001216b4;

          auVar10 = FUN_00297820(uVar6,uVar3,&cf_mesMsgMergeWholeOffset);

          uVar3 = auVar10._8_8_;

          if (((auVar10._0_8_ & 1) != 0) ||

             (iVar1 = FUN_00297820(uVar6,uVar3,&cf_mesMsgMergeHidePrivateOtherAvatar),

             uVar3 = extraout_x1_01, iVar1 != 0)) goto LAB_001216b4;

        }

        else {

LAB_001216b4:

          bVar8 = true;

        }

        auVar10 = FUN_00297820(uVar6,uVar3,&cf_coversEnabled);

        uVar3 = auVar10._8_8_;

        if ((auVar10._0_8_ & 1) == 0) {

          auVar10 = FUN_00295f60(uVar6,uVar3,&cf_xzyHomeNameplate);

          uVar3 = auVar10._8_8_;

          if ((auVar10._0_8_ & 1) != 0) goto LAB_00121714;

          auVar10 = FUN_00295f60(uVar6,uVar3,&cf_xzyHomeNP_);

          uVar3 = auVar10._8_8_;

          if ((auVar10._0_8_ & 1) != 0) goto LAB_00121714;

          auVar10 = FUN_00295f60(uVar6,uVar3,&cf_AmpLify);

          uVar3 = auVar10._8_8_;

          if (((auVar10._0_8_ & 1) != 0) ||

             (iVar1 = FUN_00295f60(uVar6,uVar3,&cf_Corner), uVar3 = extraout_x1_02, iVar1 != 0))

          goto LAB_00121714;

        }

        else {

LAB_00121714:

          bVar5 = true;

        }

        lVar7 = lVar7 + 1;

      } while (auVar9._0_8_ != lVar7);

      auVar9 = FUN_00293880(uVar2,uVar3,&local_130,auStack_f0,0x10);

    } while (auVar9._0_8_ != 0);

    _objc_release(uVar2);

    uVar3 = DAT_003e82f0;

    if (bVar8) {

      DAT_003e8320 = 0;

      DAT_003e8430 = 0;

      DAT_003e82f0 = 0;

      _objc_release(uVar3);

      uVar3 = DAT_003e82f8;

      DAT_003e82f8 = 0;

      _objc_release(uVar3);

    }

    if (bVar5) {

      DAT_003e8338 = 0;

      DAT_003e8339 = 0;

      FUN_0029b240(DAT_003e8340);

      FUN_0029b240(DAT_003e8348);

      FUN_0011efd4();

      if ((DAT_003e83d0 == '\x01') && (DAT_003e84d0 != -1)) {

        FUN_0028f3a4();

      }

    }

  }

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




