// FUN_00261440 @0x261440


void FUN_00261440(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  FUN_0024d85c();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_00299020();

  _objc_release(uVar1);

  auVar4 = FUN_00299020(*(undefined8 *)(param_1 + 0x20));

  uVar1 = auVar4._0_8_;

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar4._8_8_,&cf__);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a00a0(uVar1,auVar4._8_8_,auVar4._0_8_,&cf_name);

  _objc_release(auVar4._0_8_);

  FUN_00291240(uVar2,extraout_x1,uVar1);

  FUN_0024d944(uVar2);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  _objc_release(uVar1);

  _objc_release(uVar2);

  return;

}




