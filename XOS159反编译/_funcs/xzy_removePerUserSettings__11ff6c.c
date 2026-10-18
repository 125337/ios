// xzy_removePerUserSettings @0x11ff6c


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_removePerUserSettings(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4f80(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_xzyHomeNP____Position);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_002a4f80(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_xzyHomeNP____Height);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_002a4f80(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_xzyHomeNP____OffsetX);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_002a4f80(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_xzyHomeNP____OffsetY);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_002a4a40(uVar1);

  FUN_0029b240(DAT_003e8348);

  FUN_00292f00(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




