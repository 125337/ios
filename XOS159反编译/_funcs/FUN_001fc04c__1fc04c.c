// FUN_001fc04c @0x1fc04c


void FUN_001fc04c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  

  FUN_0029b240(DAT_003eaa20);

  FUN_001fbe40();

  DAT_003eaab4 = DAT_003eaab4 + 1;

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_0029c060();

  _objc_release(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a4dc0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_001c9388();

  return;

}




