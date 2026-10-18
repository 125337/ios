// FUN_000985a4 @0x985a4


void FUN_000985a4(undefined8 param_1)



{

  undefined8 uVar1;

  long lVar2;

  

  (*DAT_003e7810)();

  FUN_002a6220(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6520();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(uVar1);

  if (lVar2 != 0) {

    FUN_000a8cc4(param_1);

    FUN_000b4f10(param_1);

    return;

  }

  return;

}




