// xzy_showOffsetInput:key: @0x11fac8


/* Function Stack Size: 0x20 bytes */



void XZYHomeNPPickerVC::xzy_showOffsetInput_key_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  float fVar3;

  undefined1 auVar4 [16];

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined8 local_a8;

  ID local_a0;

  undefined1 auStack_98 [8];

  undefined1 auStack_90 [8];

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  double local_68;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_002a6760(param_1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  fVar3 = (float)FUN_00295460(auVar4._0_8_,auVar4._8_8_,param_4);

  _objc_release(auVar4._0_8_);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,param_3,&cf_eQOPy<P_ecpe,1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar2 = auVar4._0_8_;

  local_68 = (double)fVar3;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc0000000;

  local_78 = FUN_0011fd60;

  puStack_70 = &DAT_00389000;

  FUN_00291400(uVar2,auVar4._8_8_,&local_88);

  _objc_initWeak(auStack_90,param_1);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  local_c8 = puVar1;

  local_c0 = 0xc2000000;

  local_b8 = FUN_0011fe08;

  puStack_b0 = &DAT_0038ca98;

  _objc_retain(uVar2);

  local_a8 = uVar2;

  _objc_retain(param_4);

  local_a0 = param_4;

  _objc_copyWeak(auStack_98,auStack_90);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_c8);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar2,1,0);

  _objc_destroyWeak(auStack_98);

  _objc_release(local_a0);

  _objc_release(local_a8);

  _objc_destroyWeak(auStack_90);

  _objc_release(uVar2);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




