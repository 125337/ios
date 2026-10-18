// FUN_000ba464 @0xba464


void FUN_000ba464(long param_1)



{

  undefined *puVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  

  _objc_retain();

  if (param_1 != 0) {

    FUN_000839f4(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) {

      lVar3 = FUN_000b921c(param_1);

      puVar1 = PTR_LOOP_003e6618;

      if (lVar3 == 0) {

        _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6618,0,1);

      }

      else {

        FUN_00299480(&_OBJC_CLASS___NSNumber);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(lVar2,puVar1,uVar4,1);

        _objc_release(uVar4);

      }

    }

    _objc_release(lVar2);

  }

  _objc_release(param_1);

  return;

}




