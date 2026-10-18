// FUN_000ff404 @0xff404


void FUN_000ff404(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  

  _objc_retain();

  if (param_1 == 0) {

    DAT_003e7fa1 = 0;

    uVar1 = FUN_001017a8();

    FUN_00101684(uVar1,1);

  }

  else {

    FUN_002a5680(param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    lVar2 = FUN_002a5fc0();

    _objc_release(uVar1);

    FUN_00101684(lVar2 == 2,0);

  }

  _objc_release(param_1);

  return;

}




