// FUN_0006ea90 @0x6ea90


void FUN_0006ea90(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a4dc0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_0029c3a0();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(uVar1);

  if (lVar3 != 0) {

    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

    FUN_0029c3a0();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar3 + 0x10))();

    _objc_release(lVar3);

    _objc_release(uVar1);

    return;

  }

  return;

}




