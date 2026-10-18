// showCardMarginAlert @0x14ec5c


/* Function Stack Size: 0x10 bytes */



void CadisSettingsViewController::showCardMarginAlert(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined8 local_88;

  ID IStack_80;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  

  uVar3 = FUN_001478d0();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_S_MR_);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar4._8_8_,&cf_aSGr,auVar4._0_8_,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc0000000;

  local_68 = FUN_0014ee50;

  puStack_60 = &DAT_00389000;

  local_58 = uVar3;

  FUN_00291400(uVar2,extraout_x1_00,&local_78);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  local_a8 = puVar1;

  local_a0 = 0xc2000000;

  local_98 = FUN_0014ef14;

  puStack_90 = &DAT_00388d20;

  _objc_retain(uVar2);

  local_88 = uVar2;

  IStack_80 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nx_,0,&local_a8);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_03,uVar2,1,0);

  _objc_release(local_88);

  _objc_release(uVar2);

  return;

}




