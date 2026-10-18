// FUN_0011db00 @0x11db00


void FUN_0011db00(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),

               *(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_0029b240(DAT_003e8340);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x38);

  FUN_00292f00();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x38);

  FUN_002a6880();

  _objc_release(uVar1);

  return;

}




