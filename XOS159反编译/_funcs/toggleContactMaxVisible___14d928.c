// toggleContactMaxVisible: @0x14d928


/* Function Stack Size: 0x18 bytes */



void CadisSettingsViewController::toggleContactMaxVisible_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_3);

  lVar1 = FUN_0029c300(param_3);

  FUN_00136588();

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029efa0(auVar2._0_8_,auVar2._8_8_,lVar1 + 5,&cf_CadisContactMaxVisible);

  _objc_release(auVar2._0_8_);

  FUN_00136604();

  _objc_release(param_3);

  return;

}




