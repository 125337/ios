// FUN_00141150 @0x141150


void FUN_00141150(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),

               &cf_CadisSelectedCardLight);

  FUN_0013fe6c();

  FUN_00136604();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  return;

}




