// FUN_0015073c @0x15073c


void FUN_0015073c(undefined8 param_1)



{

  long lVar1;

  undefined1 auVar2 [16];

  

  (*DAT_003e8928)();

  FUN_002a68a0(param_1);

  if (DAT_003e89e1 == '\x01') {

    DAT_003e89e1 = 0;

    FUN_00136604();

    FUN_00298700(param_1);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    lVar1 = auVar2._0_8_;

    if (lVar1 != 0) {

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar2._8_8_,0);

      auVar2 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b1c0(lVar1,auVar2._8_8_,auVar2._0_8_,5);

      _objc_release(auVar2._0_8_);

    }

    _objc_release(lVar1);

    return;

  }

  return;

}




