// FUN_001f2f70 @0x1f2f70


void FUN_001f2f70(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  

  _objc_retain(param_2);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_00295de0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_001f2334(uVar2,param_2);

  _objc_release(uVar2);

  _objc_release(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a4dc0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_001c9388();

  _objc_release(param_2);

  return;

}




