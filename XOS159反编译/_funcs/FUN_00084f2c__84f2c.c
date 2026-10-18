// FUN_00084f2c @0x84f2c


void FUN_00084f2c(void)



{

  int iVar1;

  undefined1 auVar2 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924c0(auVar2._0_8_,auVar2._8_8_,&cf_coversEnabled);

  _objc_release(auVar2._0_8_);

  if ((iVar1 != 0) && (DAT_003e7bc8 != -1)) {

    FUN_0028eeb0();

  }

  return;

}




