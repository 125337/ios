// donePicking @0x13d940


/* Function Stack Size: 0x10 bytes */



void CadisContactPickerViewController::donePicking(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  FUN_0029c2e0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_002937a0();

  _objc_retain();

  FUN_00136588();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar4._0_8_,auVar4._8_8_,uVar3,&cf_CadisSavedContacts);

  _objc_release(uVar3);

  _objc_release(auVar4._0_8_);

  uVar1 = DAT_003e8860;

  DAT_003e89b0 = 0;

  DAT_003e8860 = 0;

  _objc_release(uVar1);

  FUN_00158e08();

  FUN_00136604();

  _objc_release(uVar3);

  _objc_release(uVar2);

  FUN_002990e0(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a080(auVar4._0_8_,auVar4._8_8_,1);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  return;

}




