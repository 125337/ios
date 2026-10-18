// FUN_00180c0c @0x180c0c


void FUN_00180c0c(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 != 0) {

    FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

    lVar2 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar2 + 0x10))();

    _objc_release(lVar2);

    return;

  }

  return;

}




