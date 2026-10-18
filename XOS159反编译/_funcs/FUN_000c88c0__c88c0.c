// FUN_000c88c0 @0xc88c0


void FUN_000c88c0(long param_1)



{

  undefined *puVar1;

  long lVar2;

  undefined8 uVar3;

  

  _objc_retain();

  if (param_1 != 0) {

    _objc_retain(param_1);

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e66b8);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    puVar1 = PTR_LOOP_003e66b8;

    if (lVar2 == 0) {

      FUN_002916a0(param_1);

      FUN_002993a0(&_OBJC_CLASS___NSNumber);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_1,puVar1,uVar3,1);

      _objc_release(uVar3);

    }

    _objc_release(param_1);

    FUN_0029cb60(0,param_1);

  }

  _objc_release(param_1);

  return;

}




