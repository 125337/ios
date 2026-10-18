// FUN_00028aec @0x28aec


void FUN_00028aec(long param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  FUN_0029efa0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30),

               &cf_xzyTimeLabelFormatStyle);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  uVar1 = *(undefined8 *)(param_1 + 0x28);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,10);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar1,auVar2._8_8_,auVar2._0_8_,5);

  _objc_release(auVar2._0_8_);

  return;

}




