// FUN_001410ec @0x1410ec


void FUN_001410ec(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_0029b4a0(*(undefined8 *)(param_1 + 0x20),param_2,&cf_CadisSelectedCardLight);

  FUN_0013fe6c();

  FUN_00136604();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  return;

}




