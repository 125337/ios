// FUN_000fadc0 @0xfadc0


void FUN_000fadc0(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_00295480();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e500(uVar4,auVar5._0_8_,auVar5._8_8_,&cf_SHTM_BORDER_IMAGE_WIDTH_OFFSET);

  _objc_release(auVar5._0_8_);

  uVar1 = *(undefined8 *)(param_1 + 0x28);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf___0f);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f80(uVar1,auVar5._8_8_,auVar5._0_8_,0);

  _objc_release(auVar5._0_8_);

  return;

}




