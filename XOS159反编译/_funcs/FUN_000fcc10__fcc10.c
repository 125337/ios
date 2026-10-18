// FUN_000fcc10 @0xfcc10


void FUN_000fcc10(void)



{

  char cVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

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

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = FUN_002937a0();

  uVar9 = DAT_003eb3a8;

  DAT_003eb3a8 = uVar5;

  _objc_release(uVar9);

  _objc_release(uVar4);

  FUN_002a45e0(uVar3,extraout_x1,&cf_mesMsgMergeSelectedSubPackage);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = FUN_002937a0();

  uVar9 = DAT_003e7ed0;

  DAT_003e7ed0 = uVar5;

  _objc_release(uVar9);

  _objc_release(uVar4);

  DAT_003e7ed8 = FUN_002924c0(uVar3,extraout_x1_00,&cf_mesMsgMergePayBubbleEnabled);

  iVar2 = FUN_002924c0(uVar3,extraout_x1_01,&cf_coversEnabled);

  uVar9 = extraout_x1_02;

  cVar1 = '\0';

  if (iVar2 != 0) {

    cVar1 = FUN_002924c0(uVar3,extraout_x1_02,&cf_mesMsgMergeBubbleEnabled);

    uVar9 = extraout_x1_03;

  }

  DAT_003eb410 = cVar1;

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

  if (DAT_003e7eb8 != 0) {

    FUN_0029b240();

  }

  if (DAT_003e7ec0 != 0) {

    FUN_0029b240();

  }

  if (DAT_003e7ec8 != 0) {

    FUN_0029b240();

  }

  uVar9 = DAT_003e7e90;

  DAT_003e7e90 = 0;

  _objc_release(uVar9);

  uVar9 = DAT_003e7ea8;

  DAT_003e7ea8 = 0;

  _objc_release(uVar9);

  DAT_003e7ee0 = 0;

  _objc_storeWeak(&DAT_003e7e98,0);

  _objc_storeWeak(&DAT_003e7ea0,0);

  DAT_003e7ee8 = 0;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_002924c0(auVar10._0_8_,auVar10._8_8_,&cf_coversEnabled);

  _objc_release(auVar10._0_8_);

  if ((iVar2 != 0) && (DAT_003e7f28 != -1)) {

    thunk_FUN_001055c0();

  }

  if (DAT_003eb410 == '\x01') {

    if (DAT_003e7f38 != -1) {

      thunk_FUN_00105598();

    }

    _objc_getClass("CommonMessageCellView");

    FUN_000fd30c();

  }

  _objc_release(uVar3);

  return;

}




