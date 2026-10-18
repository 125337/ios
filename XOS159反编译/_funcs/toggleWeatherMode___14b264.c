// toggleWeatherMode: @0x14b264


/* Function Stack Size: 0x18 bytes */



void CadisSettingsViewController::toggleWeatherMode_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain(param_3);

  FUN_00136588();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar3 = FUN_002979c0(param_3);

  FUN_0029d080(uVar2,auVar3._8_8_,auVar3._0_8_,&cf_CadisWeatherMode);

  _objc_release(uVar2);

  FUN_00136604();

  iVar1 = FUN_002979c0(param_3);

  if (iVar1 != 0) {

    FUN_00136efc();

  }

  _objc_release(param_3);

  return;

}




