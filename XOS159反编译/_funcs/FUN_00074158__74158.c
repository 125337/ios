// FUN_00074158 @0x74158


void FUN_00074158(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_2);

  auVar3 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a1200(auVar3._0_8_,auVar3._8_8_,param_2);

  _objc_release(param_2);

  _objc_release(auVar3._0_8_);

  auVar3 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a1220(auVar3._0_8_,auVar3._8_8_,param_3);

  _objc_release(auVar3._0_8_);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a4dc0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




