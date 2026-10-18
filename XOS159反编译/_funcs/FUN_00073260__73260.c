// FUN_00073260 @0x73260


void FUN_00073260(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_0029d080(*(undefined8 *)(param_1 + 0x20),param_2,0,&cf_ttsLocalMode);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_002980c0(*(undefined8 *)(param_1 + 0x28));

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  return;

}




