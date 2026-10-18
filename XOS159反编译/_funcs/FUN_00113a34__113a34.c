// FUN_00113a34 @0x113a34


void FUN_00113a34(int param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf_right;

  if (param_1 == 0) {

    pcVar1 = &cf_left;

  }

  _objc_retain(pcVar1);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_xzyBubblePet______);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002944e0(uVar2,auVar4._8_8_,auVar4._0_8_);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  _objc_release(pcVar1);

  _objc_release(uVar2);

  _objc_autoreleaseReturnValue(uVar3);

  return;

}




