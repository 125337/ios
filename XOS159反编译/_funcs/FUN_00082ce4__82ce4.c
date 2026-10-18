// FUN_00082ce4 @0x82ce4


void FUN_00082ce4(void)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  float fVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  if ((DAT_003e7671 & 1) != 0) {

    return;

  }

  DAT_003e7671 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar5._0_8_;

  DAT_003e7951 = FUN_002924c0(uVar1,auVar5._8_8_,&cf_coverAvatarCornerEnabled);

  FUN_00299520(uVar1,extraout_x1,&cf_coverAvatarCornerRadius);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar5._8_8_;

  if (auVar5._0_8_ != 0) {

    FUN_00299520(uVar1,uVar4,&cf_coverAvatarCornerRadiusSelf);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(auVar5._0_8_);

    uVar4 = extraout_x1_00;

    if (lVar2 == 0) {

      uVar4 = FUN_00295460(uVar1,extraout_x1_00,&cf_coverAvatarCornerRadius);

      FUN_0029e500(uVar1,extraout_x1_01,&cf_coverAvatarCornerRadiusSelf);

      FUN_0029e500(uVar4,uVar1,extraout_x1_02,&cf_coverAvatarCornerRadiusOther);

      FUN_0029b4a0(uVar1,extraout_x1_03,&cf_coverAvatarCornerRadius);

      FUN_002a4a40(uVar1);

      uVar4 = extraout_x1_04;

    }

  }

  fVar3 = (float)FUN_00295460(uVar1,uVar4,&cf_coverAvatarCornerRadiusSelf);

  DAT_003e7970 = (double)fVar3;

  fVar3 = (float)FUN_00295460(uVar1,extraout_x1_05,&cf_coverAvatarCornerRadiusOther);

  DAT_003e7978 = (double)fVar3;

  fVar3 = (float)FUN_00295460(uVar1,extraout_x1_06,&cf_coverAvatarCornerRadiusGlobal);

  DAT_003e7980 = (double)fVar3;

  _objc_release(uVar1);

  return;

}




