// FUN_001866d8 @0x1866d8


void FUN_001866d8(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined1 auVar2 [16];

  

  FUN_0029efa0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30),

               &cf_grayTestStackMinCount);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  uVar1 = *(undefined8 *)(param_1 + 0x28);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_S>ewYpe__N);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a3940(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  return;

}




