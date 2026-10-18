// FUN_001f3268 @0x1f3268


void FUN_001f3268(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_00295de0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  FUN_001cbdf4(uVar2);

  FUN_001c9388();

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002990e0();

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a080(auVar3._0_8_,auVar3._8_8_,1);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar3._0_8_);

  _objc_release(uVar1);

  _objc_release(uVar2);

  return;

}




