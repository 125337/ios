// showCornerRadiusInput @0x186c08


/* Function Stack Size: 0x10 bytes */



void GrayTestSettingViewController::showCornerRadiusInput(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  float fVar3;

  undefined1 auVar4 [16];

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  undefined8 local_88;

  ID IStack_80;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  double local_58;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar4._0_8_;

  fVar3 = (float)FUN_00295460(uVar1,auVar4._8_8_,&cf_grayTestBorderCornerRadius);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_W_Y_,&cf_eQW<P,1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  local_b0 = PTR___NSConcreteStackBlock_003886f0;

  uVar2 = auVar4._0_8_;

  local_58 = (double)fVar3;

  if (fVar3 <= 0.0) {

    local_58 = 8.0;

  }

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc0000000;

  local_68 = FUN_00186e28;

  puStack_60 = &DAT_00389000;

  FUN_00291400(uVar2,auVar4._8_8_,&local_78);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  local_a8 = 0xc2000000;

  local_a0 = FUN_00186ed0;

  puStack_98 = &DAT_00388c90;

  _objc_retain(uVar2);

  local_90 = uVar2;

  _objc_retain(uVar1);

  local_88 = uVar1;

  IStack_80 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_b0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar2,1,0);

  _objc_release(local_88);

  _objc_release(local_90);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




