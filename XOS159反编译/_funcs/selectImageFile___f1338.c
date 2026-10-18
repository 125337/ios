// selectImageFile: @0xf1338


/* Function Stack Size: 0x18 bytes */



void BannerNotifyBeautifyViewController::selectImageFile_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar4 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar4._0_8_;

  FUN_002a0060(uVar1,auVar4._8_8_,param_3,&cf_SHTM_SELECTED_IMAGE_NAME);

  FUN_002a4a40(uVar1);

  FUN_002a4dc0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__bVGr_);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(param_3);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,&cf_VGr_b,uVar2,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar4._8_8_,auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar3,1,0);

  _objc_release(auVar4._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar1);

  return;

}




