// FUN_000e2a94 @0xe2a94


void FUN_000e2a94(void)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined1 auVar2 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  DAT_003e7d99 = FUN_002924c0(uVar1,auVar2._8_8_,&cf_SHTM_QUICK_REPLY_BEAUTIFY_ENABLED);

  DAT_003e7d9a = FUN_002924c0(uVar1,extraout_x1,&cf_SHTM_SNOW_ANIMATION_ENABLED);

  DAT_003e7d9b = FUN_002924c0(uVar1,extraout_x1_00,&cf_SHTM_VIDEO_BACKGROUND_ENABLED);

  DAT_003e7d9c = FUN_002924c0(uVar1,extraout_x1_01,&cf_SHTM_IMAGE_BACKGROUND_ENABLED);

  DAT_003e7d9d = FUN_002924c0(uVar1,extraout_x1_02,&cf_SHTM_AVATAR_ROTATION_ENABLED);

  DAT_003e7d9e = FUN_002924c0(uVar1,extraout_x1_03,&cf_SHTM_NICKNAME_COLOR_ENABLED);

  DAT_003e7d9f = FUN_002924c0(uVar1,extraout_x1_04,&cf_SHTM_CONTENT_COLOR_ENABLED);

  DAT_003e7da0 = FUN_002924c0(uVar1,extraout_x1_05,&cf_SHTM_GLOW_COLOR_ENABLED);

  _objc_release(uVar1);

  return;

}




