// FUN_00008ffc @0x8ffc


void FUN_00008ffc(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),

               *(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_00007f9c();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x38));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  return;

}




