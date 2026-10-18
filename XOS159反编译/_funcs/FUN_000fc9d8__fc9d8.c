// FUN_000fc9d8 @0xfc9d8


void FUN_000fc9d8(void)



{

  undefined1 uVar1;

  int iVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar9;

  undefined8 extraout_x1_04;

  undefined1 auVar10 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar10._0_8_;

  FUN_002a45e0(uVar3,auVar10._8_8_,&cf_mesMsgMergeSelectedBubble);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar9 = auVar10._8_8_;

  lVar4 = auVar10._0_8_;

  if ((lVar4 != 0) && (auVar10 = FUN_00297fa0(lVar4), uVar9 = auVar10._8_8_, auVar10._0_8_ != 0)) {

    _objc_retain(lVar4);

    lVar5 = DAT_003eb3a8;

    DAT_003eb3a8 = lVar4;

    _objc_release(lVar5);

    uVar9 = extraout_x1;

  }

  FUN_002a45e0(uVar3,uVar9,&cf_mesMsgMergeSelectedSubPackage);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar9 = auVar10._8_8_;

  lVar5 = auVar10._0_8_;

  if ((lVar5 != 0) && (auVar10 = FUN_00297fa0(lVar5), uVar9 = auVar10._8_8_, auVar10._0_8_ != 0)) {

    _objc_retain(lVar5);

    lVar6 = DAT_003e7ed0;

    DAT_003e7ed0 = lVar5;

    _objc_release(lVar6);

    uVar9 = extraout_x1_00;

  }

  DAT_003e7ed8 = FUN_002924c0(uVar3,uVar9,&cf_mesMsgMergePayBubbleEnabled);

  iVar2 = FUN_002924c0(uVar3,extraout_x1_01,&cf_coversEnabled);

  uVar9 = extraout_x1_02;

  uVar1 = 0;

  if (iVar2 != 0) {

    uVar1 = FUN_002924c0(uVar3,extraout_x1_02,&cf_mesMsgMergeBubbleEnabled);

    uVar9 = extraout_x1_03;

  }

  DAT_003eb410 = uVar1;

  auVar10 = FUN_00297480(uVar3,uVar9,&cf_mesMsgMergeDefaultBubblePosition);

  DAT_003e6868 = auVar10._0_8_;

  if (3 < DAT_003e6868 - 1U) {

    DAT_003e6868 = 1;

  }

  DAT_003e7ed9 = FUN_002924c0(uVar3,auVar10._8_8_,&cf_bubbleCropEnabled);

  auVar10 = FUN_00297480(uVar3,extraout_x1_04,&cf_bubbleCropTop);

  lVar6 = auVar10._0_8_;

  auVar10 = FUN_00297480(uVar3,auVar10._8_8_,&cf_bubbleCropLeft);

  lVar7 = auVar10._0_8_;

  auVar10 = FUN_00297480(uVar3,auVar10._8_8_,&cf_bubbleCropBottom);

  lVar8 = auVar10._0_8_;

  DAT_003e6888 = FUN_00297480(uVar3,auVar10._8_8_,&cf_bubbleCropRight);

  if (lVar6 < 1) {

    lVar6 = 0x14;

  }

  if (lVar7 < 1) {

    lVar7 = 0x14;

  }

  if (lVar8 < 1) {

    lVar8 = 0x14;

  }

  if (DAT_003e6888 < 1) {

    DAT_003e6888 = 0x14;

  }

  DAT_003e6870 = lVar6;

  DAT_003e6878 = lVar7;

  DAT_003e6880 = lVar8;

  _objc_release(lVar5);

  _objc_release(lVar4);

  _objc_release(uVar3);

  return;

}




