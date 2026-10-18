// FUN_000b0dd4 @0xb0dd4


void FUN_000b0dd4(long param_1)



{

  long lVar1;

  long lVar2;

  

  _objc_retain();

  if (param_1 != 0) {

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e6400,0,1);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e6408,0,1);

    FUN_000822c8(param_1);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6340);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 == 0) {

        _objc_setAssociatedObject(lVar1,PTR_LOOP_003e6310,0,1);

      }

    }

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  return;

}




