// saveBorderWidth: @0xf7830


/* Function Stack Size: 0x18 bytes */



void BannerNotifyBeautifyViewController::saveBorderWidth_(ID param_1,SEL param_2,double param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  FUN_0029e500((float)param_3,uVar1,auVar3._8_8_,&cf_SHTM_BORDER_WIDTH);

  FUN_002a4a40(uVar1);

  FUN_002a4dc0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_Fh___n__N);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar3._8_8_,&cf_Fh___OX_,auVar3._0_8_,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar3._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_nx_,0,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  FUN_0029a500(param_1,extraout_x1_01,uVar2,1,0);

  _objc_release(auVar3._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




