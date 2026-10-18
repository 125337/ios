// FUN_0011f44c @0x11f44c


void FUN_0011f44c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a6760();

  _objc_release(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a4f80();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar4._8_8_,&cf_xzyHomeNP____Position);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029efa0(auVar4._0_8_,auVar4._8_8_,*(undefined8 *)(param_1 + 0x28),uVar2);

  _objc_release(auVar4._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  FUN_0029b240(DAT_003e8348);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_00292f00();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  _objc_release(uVar1);

  _objc_release(uVar2);

  return;

}




