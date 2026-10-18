// FUN_000b51cc @0xb51cc


void FUN_000b51cc(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    FUN_002a6220(lVar1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6520();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar2);

    if (lVar3 == 0) {

      _objc_setAssociatedObject(lVar1,PTR_LOOP_003e6590,0,1);

    }

    else {

      _objc_setAssociatedObject(lVar1,PTR_LOOP_003e6590,0,1);

      FUN_000b4f10(lVar1);

    }

  }

  _objc_release(lVar1);

  return;

}




