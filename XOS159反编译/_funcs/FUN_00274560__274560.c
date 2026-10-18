// FUN_00274560 @0x274560


void FUN_00274560(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined1 auVar1 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_2);

  auVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_0029b640(auVar1._0_8_,auVar1._8_8_,param_2,param_3);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(auVar1._0_8_);

  return;

}




