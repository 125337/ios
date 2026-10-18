// toggleContactMode: @0x14d798


/* Function Stack Size: 0x18 bytes */



void CadisSettingsViewController::toggleContactMode_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined1 auVar3 [16];

  

  _objc_retain(param_3);

  FUN_00136588();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar2._8_8_,auVar2._0_8_,&cf_CadisContactMode);

  _objc_release(uVar1);

  FUN_00136604();

  FUN_002a4dc0(param_1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar2._8_8_,5);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar2._0_8_,auVar3._8_8_,auVar3._0_8_,100);

  _objc_release(auVar3._0_8_);

  _objc_release(auVar2._0_8_);

  _objc_release(param_3);

  return;

}




