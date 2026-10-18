// FUN_000b6b34 @0xb6b34


void FUN_000b6b34(long param_1)



{

  long lVar1;

  

  _objc_retain();

  if (param_1 != 0) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6610);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 != 0) {

      _objc_setAssociatedObject(lVar1,PTR_LOOP_003e6618,0,1);

    }

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  return;

}




