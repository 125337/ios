// FUN_000ba548 @0xba548


void FUN_000ba548(undefined8 param_1,int param_2)



{

  long lVar1;

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6630);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if ((param_2 != 0) && (lVar1 == 0)) {

    FUN_002a6400(&_OBJC_CLASS___NSHashTable);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e6630,lVar1,1);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar1);

  return;

}




