// clearVideoSelection @0xf2648


/* Function Stack Size: 0x10 bytes */



void BannerNotifyBeautifyViewController::clearVideoSelection(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  FUN_0029b4a0(uVar1,auVar3._8_8_,&cf_SHTM_SELECTED_VIDEO_NAME);

  FUN_002a4a40(uVar1);

  FUN_002a4dc0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf__nd,&cf_of_nd,1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar3._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar3._8_8_,&cf_nx_,0,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  FUN_0029a500(param_1,extraout_x1_00,uVar2,1,0);

  _objc_release(auVar3._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




