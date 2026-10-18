// FUN_000828e0 @0x828e0


void FUN_000828e0(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

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

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  float fVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  undefined1 auVar9 [16];

  

  if ((DAT_003e7670 & 1) != 0) {

    return;

  }

  DAT_003e7670 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar9._0_8_;

  fVar5 = (float)FUN_00295460(uVar1,auVar9._8_8_,&cf_mesMsgMergeHeightReduce);

  DAT_003e7b48 = (double)fVar5;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  DAT_003e7b30 = FUN_0001cc90(uVar2,&cf_mesMsgMergeMessageOffsetOther);

  DAT_003e7b28 = FUN_0001cc90(uVar2,&cf_mesMsgMergeMessageOffsetSelf);

  _objc_release(uVar2);

  DAT_003e7b38 = FUN_00297480(uVar1,extraout_x1,&cf_mesMsgMergeReverseAvatarDownOffset);

  if (DAT_003e7b38 < -99) {

    DAT_003e7b38 = -100;

  }

  if (99 < DAT_003e7b38) {

    DAT_003e7b38 = 100;

  }

  DAT_003e7b50 = _objc_getClass("ImageMessageViewModel");

  auVar9 = _objc_getClass("VideoMessageViewModel");

  DAT_003e7b58 = auVar9._0_8_;

  FUN_00299520(uVar1,auVar9._8_8_,&cf_mesMsgMergeGroupGapReduce);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 == 0) {

    DAT_003e6488 = 10.0;

    uVar2 = extraout_x1_00;

  }

  else {

    fVar5 = (float)FUN_00295460(uVar1,extraout_x1_00,&cf_mesMsgMergeGroupGapReduce);

    DAT_003e6488 = (double)fVar5;

    uVar2 = extraout_x1_01;

  }

  FUN_00299520(uVar1,uVar2,&cf_mesMsgMergePrivateGapReduce);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 == 0) {

    DAT_003e6490 = -10.0;

    uVar2 = extraout_x1_02;

  }

  else {

    fVar5 = (float)FUN_00295460(uVar1,extraout_x1_02,&cf_mesMsgMergePrivateGapReduce);

    DAT_003e6490 = (double)fVar5;

    uVar2 = extraout_x1_03;

  }

  DAT_003e74db = FUN_002924c0(uVar1,uVar2,&cf_mesMsgMergeSmoothScrollEnabled);

  DAT_003e74dc = FUN_002924c0(uVar1,extraout_x1_04,&cf_mesMsgMergeBubbleWrapRefer);

  DAT_003e74dd = FUN_002924c0(uVar1,extraout_x1_05,&cf_mesMsgMergeWrapReferDivider);

  uVar4 = FUN_00297480(uVar1,extraout_x1_06,&cf_mesMsgMergeWrapReferAlignment);

  DAT_003e7508 = 0;

  if (uVar4 < 4) {

    DAT_003e7508 = uVar4;

  }

  DAT_003e74e8 = FUN_0001ce48(uVar1,2);

  DAT_003e74f0 = FUN_0001ce48(uVar1,3);

  DAT_003e74f8 = FUN_0001ce48(uVar1,0);

  auVar9 = FUN_0001ce48(uVar1,1);

  DAT_003e7500 = auVar9._0_8_;

  auVar9 = FUN_00297480(uVar1,auVar9._8_8_,&cf_mesMsgMergeWrapReferDividerLength);

  DAT_003e7510 = auVar9._0_8_;

  auVar9 = FUN_00297480(uVar1,auVar9._8_8_,&cf_mesMsgMergeWrapReferDividerLeftExtendPt);

  lVar3 = auVar9._0_8_;

  auVar9 = FUN_00297480(uVar1,auVar9._8_8_,&cf_mesMsgMergeWrapReferDividerRightExtendPt);

  DAT_003e7520 = auVar9._0_8_;

  if (lVar3 < -0x13) {

    lVar3 = -0x14;

  }

  if (0x13 < lVar3) {

    lVar3 = 0x14;

  }

  if (DAT_003e7520 < -0x13) {

    DAT_003e7520 = -0x14;

  }

  if (0x13 < DAT_003e7520) {

    DAT_003e7520 = 0x14;

  }

  DAT_003e7518 = lVar3;

  dVar6 = (double)FUN_00294840(uVar1,auVar9._8_8_,&cf_mesMsgMergeWrapReferOffsetOtherX);

  dVar7 = (double)FUN_00294840(uVar1,extraout_x1_07,&cf_mesMsgMergeWrapReferOffsetSelfX);

  dVar8 = -10.0;

  if (-10.0 <= dVar6) {

    dVar8 = dVar6;

  }

  DAT_003e74c0 = 10.0;

  if (dVar8 <= 10.0) {

    DAT_003e74c0 = dVar8;

  }

  dVar8 = -10.0;

  if (-10.0 <= dVar7) {

    dVar8 = dVar7;

  }

  DAT_003e74c8 = 10.0;

  if (dVar8 <= 10.0) {

    DAT_003e74c8 = dVar8;

  }

  DAT_003e7bc0 = FUN_002924c0(uVar1,extraout_x1_08,&cf_mesMsgMergeReverse);

  DAT_003e7a2a = FUN_002924c0(uVar1,extraout_x1_09,&cf_mesMsgMergeHideGroupOtherAvatar);

  DAT_003e7a2b = FUN_002924c0(uVar1,extraout_x1_10,&cf_mesMsgMergeHidePrivateOtherAvatar);

  DAT_003e7a28 = FUN_002924c0(uVar1,extraout_x1_11,&cf_mesMsgMergeHideGroupSelfAvatar);

  DAT_003e7a29 = FUN_002924c0(uVar1,extraout_x1_12,&cf_mesMsgMergeHidePrivateSelfAvatar);

  DAT_003e7bc1 = FUN_002924c0(uVar1,extraout_x1_13,&cf_mesMsgMergeAvatarAboveBubble);

  _objc_release(uVar1);

  return;

}




