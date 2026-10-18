// FUN_000e2584 @0xe2584


uint FUN_000e2584(void)



{

  uint uVar1;

  uint uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar4._0_8_;

  uVar1 = FUN_002924c0(uVar3,auVar4._8_8_,&cf_coversEnabled);

  uVar2 = FUN_002924c0(uVar3,extraout_x1,&cf_imageDropEnabled);

  _objc_release(uVar3);

  return uVar1 & uVar2;

}




