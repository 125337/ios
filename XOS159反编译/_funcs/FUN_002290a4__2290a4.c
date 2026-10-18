// FUN_002290a4 @0x2290a4


void FUN_002290a4(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar3._0_8_,auVar3._8_8_,param_2,&cf_xzyMesReferColorLight);

  _objc_release(auVar3._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar3._0_8_,auVar3._8_8_,param_3,&cf_xzyMesReferColorDark);

  _objc_release(auVar3._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  FUN_00223b38();

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a4dc0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




