// FUN_0011a5d0 @0x11a5d0


void FUN_0011a5d0(void)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 uVar5;

  undefined8 extraout_x1_11;

  float fVar6;

  double dVar7;

  double dVar8;

  double dVar9;

  undefined1 auVar10 [16];

  

  if ((DAT_003e8320 & 1) != 0) {

    return;

  }

  DAT_003e8320 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar10._0_8_;

  iVar1 = FUN_002924c0(uVar2,auVar10._8_8_,&cf_coversEnabled);

  if (iVar1 == 0) {

    DAT_003e8321 = 0;

    uVar5 = extraout_x1;

  }

  else {

    FUN_00299520(uVar2,extraout_x1,&cf_xzyNameplateEnabled);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    if (auVar10._0_8_ == 0) {

      DAT_003e8321 = 0;

    }

    else {

      DAT_003e8321 = FUN_002924c0(uVar2,auVar10._8_8_,&cf_xzyNameplateEnabled);

    }

    _objc_release(auVar10._0_8_);

    uVar5 = extraout_x1_00;

  }

  DAT_003e8322 = FUN_002924c0(uVar2,uVar5,&cf_xzyNameplatePMEnabled);

  DAT_003e83d1 = FUN_002924c0(uVar2,extraout_x1_01,&cf_xzyNameplatePerUserEnabled);

  fVar6 = (float)FUN_00295460(uVar2,extraout_x1_02,&cf_xzyNameplateHeight);

  DAT_003e83d8 = (double)fVar6;

  fVar6 = (float)FUN_00295460(uVar2,extraout_x1_03,&cf_xzyNameplateOffsetX);

  DAT_003e83e0 = (double)fVar6;

  fVar6 = (float)FUN_00295460(uVar2,extraout_x1_04,&cf_xzyNameplateOffsetY);

  DAT_003e83e8 = (double)fVar6;

  DAT_003e83f0 = FUN_00297480(uVar2,extraout_x1_05,&cf_xzyNameplatePosition);

  _objc_retain(uVar2);

  FUN_00299520(uVar2,extraout_x1_06,&cf_mesMsgMergeMessageOffsetOther);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 == 0) {

    FUN_00299520(uVar2,extraout_x1_07,&cf_mesMsgMergeAvatarOffset);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    FUN_00299520(uVar2,extraout_x1_08,&cf_mesMsgMergeWholeOffset);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar3 == 0 && lVar4 == 0) {

      dVar8 = 46.0;

    }

    else {

      if (lVar3 == 0) {

        dVar7 = 46.0;

        uVar5 = extraout_x1_09;

      }

      else {

        fVar6 = (float)FUN_00295460(uVar2,extraout_x1_09,&cf_mesMsgMergeAvatarOffset);

        dVar7 = (double)fVar6;

        uVar5 = extraout_x1_10;

      }

      if (ABS(dVar7) <= 0.001) {

        dVar7 = 46.0;

      }

      if (lVar4 == 0) {

        dVar8 = 0.0;

      }

      else {

        fVar6 = (float)FUN_00295460(uVar2,uVar5,&cf_mesMsgMergeWholeOffset);

        dVar8 = (double)fVar6;

      }

      dVar7 = dVar7 + dVar8;

      dVar9 = 60.0;

      if (dVar7 <= 60.0) {

        dVar9 = dVar7;

      }

      dVar8 = -60.0;

      if (-60.0 <= dVar7) {

        dVar8 = dVar9;

      }

    }

  }

  else {

    fVar6 = (float)FUN_00295460(uVar2,extraout_x1_07,&cf_mesMsgMergeMessageOffsetOther);

    dVar7 = 60.0;

    if ((double)fVar6 <= 60.0) {

      dVar7 = (double)fVar6;

    }

    dVar8 = -60.0;

    if (-60.0 <= fVar6) {

      dVar8 = dVar7;

    }

  }

  _objc_release(uVar2);

  DAT_003e83f8 = dVar8;

  DAT_003e8400 = FUN_002924c0(uVar2,extraout_x1_11,&cf_mesMsgMergeHidePrivateOtherAvatar);

  _objc_release(uVar2);

  return;

}




