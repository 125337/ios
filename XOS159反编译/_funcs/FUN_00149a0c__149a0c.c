// FUN_00149a0c @0x149a0c


void FUN_00149a0c(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined1 auVar3 [16];

  

  _objc_retain(param_2);

  FUN_00136588();

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar2._0_8_,auVar2._8_8_,param_2,*(undefined8 *)(param_1 + 0x20));

  _objc_release(param_2);

  _objc_release(auVar2._0_8_);

  FUN_00136588();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  FUN_0013fe6c();

  FUN_00136604();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar2._8_8_,1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar2._0_8_,auVar3._8_8_,auVar3._0_8_,5);

  _objc_release(auVar3._0_8_);

  _objc_release(auVar2._0_8_);

  return;

}




