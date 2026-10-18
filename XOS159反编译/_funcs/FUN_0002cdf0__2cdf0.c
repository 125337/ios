// FUN_0002cdf0 @0x2cdf0


void FUN_0002cdf0(long param_1)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined *local_90;

  undefined8 local_88;

  code *local_80;

  undefined *puStack_78;

  undefined8 local_70;

  undefined8 local_68;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002944e0(auVar6._0_8_,auVar6._8_8_,&cf_xzyHomeBottomBarCustomNames);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__ld);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(uVar2,auVar6._8_8_,auVar6._0_8_);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,&cf__TT,&cf_eQ_INTyYuzzb_Y,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_90 = PTR___NSConcreteStackBlock_003886f0;

  local_88 = 0xc2000000;

  local_80 = FUN_0002d0c8;

  puStack_78 = &DAT_00389080;

  _objc_retain(uVar3);

  uVar5 = *(undefined8 *)(param_1 + 0x20);

  local_70 = uVar3;

  _objc_retain(uVar5);

  local_68 = uVar5;

  FUN_00291400(uVar4,extraout_x1_01,&local_90);

  local_c8 = puVar1;

  local_c0 = 0xc2000000;

  local_b8 = FUN_0002d130;

  puStack_b0 = &DAT_00389020;

  _objc_retain(uVar4);

  local_98 = *(undefined8 *)(param_1 + 0x38);

  uVar5 = *(undefined8 *)(param_1 + 0x28);

  local_a8 = uVar4;

  _objc_retain(uVar5);

  local_a0 = uVar5;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nx_,0,&local_c8);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Sm,1,0);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x30),extraout_x1_04,uVar4,1,0);

  _objc_release(local_a0);

  _objc_release(local_a8);

  _objc_release(local_68);

  _objc_release(local_70);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  return;

}




