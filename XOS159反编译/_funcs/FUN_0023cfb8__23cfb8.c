// FUN_0023cfb8 @0x23cfb8


bool FUN_0023cfb8(undefined8 param_1)



{

  bool bVar1;

  long lVar2;

  

  _objc_retain();

  if (DAT_003e7298 == 3) {

    bVar1 = true;

  }

  else {

    FUN_0023d02c(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    bVar1 = lVar2 != 0;

    _objc_release();

  }

  _objc_release(param_1);

  return bVar1;

}




