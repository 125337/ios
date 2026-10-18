// onTextColorEnableChanged: @0x2291f0


/* Function Stack Size: 0x18 bytes */



void XZYMesReferRoundedSettingsViewController::onTextColorEnableChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar2._8_8_,auVar2._0_8_,&cf_xzyMesReferTextColorEnabled);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  FUN_00223b38();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar2._0_8_,auVar2._8_8_,uVar1,0);

  _objc_release(auVar2._0_8_);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




