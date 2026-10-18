// FUN_0005f0ac @0x5f0ac


void FUN_0005f0ac(long param_1)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b3c0(auVar2._0_8_,auVar2._8_8_,*(undefined8 *)(param_1 + 0x20),0);

  _objc_release(auVar2._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(auVar2._0_8_,auVar2._8_8_,&cf_aiChatCustomIconPath);

  _objc_release(auVar2._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  return;

}




