// toggleContactHideNick: @0x14d89c


/* Function Stack Size: 0x18 bytes */



void CadisSettingsViewController::toggleContactHideNick_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_3);

  FUN_00136588();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar2._8_8_,auVar2._0_8_,&cf_CadisContactHideNick);

  _objc_release(uVar1);

  FUN_00136604();

  _objc_release(param_3);

  return;

}




