// FUN_00084fa4 @0x84fa4


void FUN_00084fa4(void)



{

  int iVar1;

  undefined1 auVar2 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924c0(auVar2._0_8_,auVar2._8_8_,&cf_coversEnabled);

  _objc_release(auVar2._0_8_);

  if ((iVar1 != 0) && (DAT_003e7c50 != -1)) {

    FUN_0028eec4();

  }

  return;

}




