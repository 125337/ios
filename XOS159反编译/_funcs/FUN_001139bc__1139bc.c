// FUN_001139bc @0x1139bc


undefined1 FUN_001139bc(void)



{

  undefined1 auVar1 [16];

  

  if ((DAT_003e82a9 & 1) == 0) {

    DAT_003e82a9 = 1;

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar1 = _objc_retainAutoreleasedReturnValue();

    DAT_003e82ac = FUN_002924c0(auVar1._0_8_,auVar1._8_8_,&cf_xzyBubblePetAutoAnimEnabled);

    _objc_release(auVar1._0_8_);

  }

  return DAT_003e82ac;

}




