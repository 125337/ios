// showCustomSizeInputForKey:labelName: @0x35cec


/* Function Stack Size: 0x20 bytes */



void _0x2f19de29::showCustomSizeInputForKey_labelName_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  float fVar4;

  undefined1 auVar5 [16];

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  ID local_a0;

  ID IStack_98;

  ID local_90;

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  double local_68;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar5._0_8_;

  fVar4 = (float)FUN_00295460(uVar2,auVar5._8_8_,param_3);

  local_68 = (double)fVar4;

  if (fVar4 <= 0.0) {

    local_68 = 100.0;

  }

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__IN_);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar5._8_8_,auVar5._0_8_,&cf_eQni_v_N4YPv>f_ykO,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc0000000;

  local_78 = FUN_00035fbc;

  puStack_70 = &DAT_00389000;

  FUN_00291400(uVar3,extraout_x1_00,&local_88);

  local_d0 = puVar1;

  local_c8 = 0xc2000000;

  local_c0 = FUN_00036074;

  puStack_b8 = &DAT_00389340;

  _objc_retain(uVar3);

  local_b0 = uVar3;

  _objc_retain(uVar2);

  local_a8 = uVar2;

  _objc_retain(param_3);

  local_a0 = param_3;

  IStack_98 = param_1;

  _objc_retain(param_4);

  local_90 = param_4;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_d0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_Sm,1,0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0029a500(param_1,extraout_x1_03,uVar3,1,0);

  _objc_release(local_90);

  _objc_release(local_a0);

  _objc_release(local_a8);

  _objc_release(local_b0);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




