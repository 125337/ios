// FUN_0002c3f4 @0x2c3f4


void FUN_0002c3f4(long param_1)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined1 auVar2 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(auVar2._0_8_,auVar2._8_8_,&cf_xzyHomeBottomBarIconSize);

  _objc_release(auVar2._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar1,auVar2._8_8_,auVar2._0_8_,100);

  _objc_release(auVar2._0_8_);

  FUN_00240480();

  return;

}




