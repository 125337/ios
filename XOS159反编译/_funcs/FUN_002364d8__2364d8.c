// FUN_002364d8 @0x2364d8


bool FUN_002364d8(long param_1,undefined8 param_2)



{

  bool bVar1;

  long lVar2;

  long lVar3;

  

  _objc_retain();

  _objc_retain(param_2);

  _objc_getAssociatedObject(param_2,PTR_LOOP_003e7258);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (param_1 == lVar2) {

    bVar1 = true;

  }

  else {

    _objc_getAssociatedObject(param_2,PTR_LOOP_003e7260);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    bVar1 = param_1 == lVar3;

    _objc_release();

  }

  _objc_release(lVar2);

  _objc_release(param_2);

  _objc_release(param_1);

  return bVar1;

}




