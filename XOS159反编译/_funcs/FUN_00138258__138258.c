// FUN_00138258 @0x138258


long FUN_00138258(void)



{

  undefined1 auVar1 [16];

  

  if (DAT_003e6b08 == -999) {

    FUN_00136588();

    auVar1 = _objc_retainAutoreleasedReturnValue();

    DAT_003e6b08 = FUN_00297480(auVar1._0_8_,auVar1._8_8_,&cf_CadisCalendarStyle);

    _objc_release(auVar1._0_8_);

  }

  return DAT_003e6b08;

}




