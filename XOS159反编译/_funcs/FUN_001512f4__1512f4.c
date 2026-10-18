// FUN_001512f4 @0x1512f4


void FUN_001512f4(undefined8 param_1)



{

  long lVar1;

  undefined1 auVar2 [16];

  

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




