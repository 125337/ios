// FUN_002115b0 @0x2115b0


void FUN_002115b0(undefined8 param_1)



{

  long lVar1;

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,&DAT_003ead87);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 == 0) {

    FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,&DAT_003ead87,lVar1,1);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar1);

  return;

}




