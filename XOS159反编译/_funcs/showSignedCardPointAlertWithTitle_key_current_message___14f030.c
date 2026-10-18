// showSignedCardPointAlertWithTitle:key:current:message: @0x14f030


/* Function Stack Size: 0x30 bytes */



void CadisSettingsViewController::showSignedCardPointAlertWithTitle_key_current_message_

               (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5,ID param_6)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar3 [16];

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  undefined8 local_a0;

  ID local_98;

  ID IStack_90;

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  double local_68;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_6);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,param_3,param_6,1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar2 = auVar3._0_8_;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc0000000;

  local_78 = FUN_0014f25c;

  puStack_70 = &DAT_00389000;

  local_68 = param_5;

  FUN_00291400(uVar2,auVar3._8_8_,&local_88);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  local_c0 = puVar1;

  local_b8 = 0xc2000000;

  local_b0 = FUN_0014f320;

  puStack_a8 = &DAT_00388c90;

  _objc_retain(uVar2);

  local_a0 = uVar2;

  _objc_retain(param_4);

  local_98 = param_4;

  IStack_90 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_c0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar2,1,0);

  _objc_release(local_98);

  _objc_release(local_a0);

  _objc_release(uVar2);

  _objc_release(param_6);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




