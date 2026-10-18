// FUN_001d52f8 @0x1d52f8


bool FUN_001d52f8(long param_1)



{

  long lVar1;

  long lVar2;

  

  _objc_retain();

  if (param_1 == 0) {

    FUN_00293e40(&_OBJC_CLASS___UITraitCollection);

    lVar1 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_retain(param_1);

    lVar1 = param_1;

  }

  lVar2 = FUN_002a5fc0(lVar1);

  _objc_release(lVar1);

  _objc_release(param_1);

  return lVar2 == 2;

}




