// showAvatarSpacingAlert @0x14e168


/* Function Stack Size: 0x10 bytes */



void CadisSettingsViewController::showAvatarSpacingAlert(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar2 [16];

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined8 local_40;

  ID IStack_38;

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_4YP,&cf_eQ4YP0,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_00291400(uVar1,auVar2._8_8_,&PTR___NSConcreteGlobalBlock_0038d378);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_Sm,1,0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  local_60 = PTR___NSConcreteStackBlock_003886f0;

  local_58 = 0xc2000000;

  local_50 = FUN_0014e43c;

  puStack_48 = &DAT_00388d20;

  _objc_retain(uVar1);

  local_40 = uVar1;

  IStack_38 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_nx_,0,&local_60);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_0029a500(param_1,extraout_x1_01,uVar1,1,0);

  _objc_release(local_40);

  _objc_release(uVar1);

  return;

}




