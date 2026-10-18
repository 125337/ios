// FUN_0014a524 @0x14a524


void FUN_0014a524(long param_1,undefined8 param_2)



{

  undefined1 auVar1 [16];

  undefined1 auVar2 [16];

  

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),

               &cf_CadisSelectedCardLight);

  FUN_0013fe6c();

  FUN_00136604();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar1._8_8_,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar1._0_8_,auVar2._8_8_,auVar2._0_8_,5);

  _objc_release(auVar2._0_8_);

  _objc_release(auVar1._0_8_);

  return;

}




