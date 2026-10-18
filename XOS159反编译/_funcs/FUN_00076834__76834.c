// FUN_00076834 @0x76834


void FUN_00076834(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a4dc0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




