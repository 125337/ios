// FUN_00036e4c @0x36e4c


void FUN_00036e4c(long param_1)



{

  long lVar1;

  undefined1 auVar2 [16];

  

  FUN_00298800(*(undefined8 *)(param_1 + 0x20));

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    FUN_00298800(*(undefined8 *)(param_1 + 0x20));

    auVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0120(auVar2._0_8_,auVar2._8_8_,0);

    _objc_release(auVar2._0_8_);

    return;

  }

  return;

}




