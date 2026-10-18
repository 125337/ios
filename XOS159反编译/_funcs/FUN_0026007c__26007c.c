// FUN_0026007c @0x26007c


void FUN_0026007c(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  

  FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

    lVar1 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar1 + 0x10))();

    _objc_release(lVar1);

  }

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  return;

}




