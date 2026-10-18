// resetAllSettings @0x1c8b7c


/* Function Stack Size: 0x10 bytes */



void XZYDesktopLyricsSettingsViewController::resetAllSettings(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  ID local_38;

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_b_Y_,&cf_nzz_bgLhbLkY_,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_Sm,1,0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  local_58 = PTR___NSConcreteStackBlock_003886f0;

  local_50 = 0xc2000000;

  local_48 = FUN_001c8cc4;

  puStack_40 = &DAT_00388cf0;

  local_38 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_b_Y,2,&local_58);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_0029a500(param_1,extraout_x1_00,uVar1,1,0);

  _objc_release(uVar1);

  return;

}




