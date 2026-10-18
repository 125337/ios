// FUN_0027c064 @0x27c064


undefined8 FUN_0027c064(void)



{

  long lVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00299520(auVar3._0_8_,auVar3._8_8_,&cf_xzy_dock_player_coverSpin);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar3._0_8_);

  if (lVar1 == 0) {

    uVar2 = 1;

  }

  else {

    uVar2 = FUN_002924e0(lVar1);

  }

  _objc_release(lVar1);

  return uVar2;

}




