// FUN_0024d944 @0x24d944


void FUN_0024d944(undefined8 param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  undefined *puVar3;

  undefined1 auVar4 [16];

  

  _objc_retain();

  uVar1 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar2 = _objc_opt_isKindOfClass(param_1,uVar1);

  puVar3 = PTR____NSArray0__struct_00388308;

  if ((uVar2 & 1) != 0) {

    puVar3 = (undefined *)FUN_002937a0(param_1);

  }

  _objc_retain(puVar3);

  uVar1 = DAT_003eb300;

  DAT_003eb300 = puVar3;

  _objc_release(uVar1);

  FUN_0029b240(DAT_003eb308);

  FUN_0029b240(DAT_003eb310);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar4._0_8_,auVar4._8_8_,puVar3,&cf_xzyHomeDockCustomStyles);

  _objc_release(auVar4._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  _objc_release(puVar3);

  _objc_release(param_1);

  return;

}




