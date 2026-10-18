// xzy_showHeightInput @0x11f60c


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_showHeightInput(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  float fVar4;

  undefined1 auVar5 [16];

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined1 auStack_88 [8];

  undefined1 auStack_80 [8];

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  double local_58;

  

  FUN_002a6760();

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Height);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  fVar4 = (float)FUN_00295460(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_Lr_Y_,&cf_eQ_0,1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar3 = auVar5._0_8_;

  local_58 = (double)fVar4;

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc0000000;

  local_68 = FUN_0011f8c0;

  puStack_60 = &DAT_00389000;

  FUN_00291400(uVar3,auVar5._8_8_,&local_78);

  _objc_initWeak(auStack_80,param_1);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  local_b8 = puVar1;

  local_b0 = 0xc2000000;

  local_a8 = FUN_0011f968;

  puStack_a0 = &DAT_0038ca98;

  _objc_retain(uVar3);

  local_98 = uVar3;

  _objc_retain(uVar2);

  local_90 = uVar2;

  _objc_copyWeak(auStack_88,auStack_80);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_b8);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar3,1,0);

  _objc_destroyWeak(auStack_88);

  _objc_release(local_90);

  _objc_release(local_98);

  _objc_destroyWeak(auStack_80);

  _objc_release(uVar3);

  _objc_release(uVar2);

  return;

}




