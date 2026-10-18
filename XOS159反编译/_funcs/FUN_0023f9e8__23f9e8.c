// FUN_0023f9e8 @0x23f9e8


void FUN_0023f9e8(long param_1)



{

  long lVar1;

  long lVar2;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    _objc_getAssociatedObject(lVar1,PTR_LOOP_003e7260);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 == 0) {

      FUN_00234210(lVar1);

    }

  }

  _objc_release(lVar1);

  return;

}




