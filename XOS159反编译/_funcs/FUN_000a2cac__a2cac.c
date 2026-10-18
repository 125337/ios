// FUN_000a2cac @0xa2cac


void FUN_000a2cac(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00297c00();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029bac0();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  while( true ) {

    uVar2 = uVar3;

    _objc_release(uVar1);

    FUN_0029a560(uVar2);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 == 0) break;

    FUN_0029a560(uVar2);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar1 = uVar2;

  }

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




