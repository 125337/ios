// showSpacingAlertWithTitle:key:current:reloadSection: @0x14cbb8


/* Function Stack Size: 0x30 bytes */



void CadisSettingsViewController::showSpacingAlertWithTitle_key_current_reloadSection_

               (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5,long_long param_6)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar3 [16];

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined8 local_a8;

  ID local_a0;

  ID IStack_98;

  long_long local_90;

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  double local_68;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,param_3,&cf_eQp,1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar2 = auVar3._0_8_;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc0000000;

  local_78 = FUN_0014cdd4;

  puStack_70 = &DAT_00389000;

  local_68 = param_5;

  FUN_00291400(uVar2,auVar3._8_8_,&local_88);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  local_c8 = puVar1;

  local_c0 = 0xc2000000;

  local_b8 = FUN_0014ce7c;

  puStack_b0 = &DAT_003891e0;

  _objc_retain(uVar2);

  local_a8 = uVar2;

  _objc_retain(param_4);

  local_a0 = param_4;

  IStack_98 = param_1;

  local_90 = param_6;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_c8);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar2,1,0);

  _objc_release(local_a0);

  _objc_release(local_a8);

  _objc_release(uVar2);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




