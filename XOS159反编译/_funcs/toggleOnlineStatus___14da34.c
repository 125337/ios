// toggleOnlineStatus: @0x14da34


/* Function Stack Size: 0x18 bytes */



void CadisSettingsViewController::toggleOnlineStatus_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  

  _objc_retain(param_3);

  FUN_00136588();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar3 = FUN_002979c0(param_3);

  FUN_0029d080(uVar2,auVar3._8_8_,auVar3._0_8_,&cf_CadisContactOnlineStatus);

  _objc_release(uVar2);

  iVar1 = FUN_002979c0(param_3);

  if (iVar1 == 0) {

    FUN_00134a38();

  }

  else {

    FUN_00134010();

  }

  FUN_00136604();

  FUN_002a4dc0(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar3._8_8_,5);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar3._0_8_,auVar4._8_8_,auVar4._0_8_,5);

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  _objc_release(param_3);

  return;

}




