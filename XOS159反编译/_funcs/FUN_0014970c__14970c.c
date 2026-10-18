// FUN_0014970c @0x14970c


void FUN_0014970c(long param_1)



{

  undefined1 auVar1 [16];

  undefined1 auVar2 [16];

  

  FUN_00136604();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar1._8_8_,4);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar1._0_8_,auVar2._8_8_,auVar2._0_8_,5);

  _objc_release(auVar2._0_8_);

  _objc_release(auVar1._0_8_);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a120(auVar1._0_8_,auVar1._8_8_,&cf_CadisHeaderNeedsRebuild,0);

  _objc_release(auVar1._0_8_);

  return;

}




