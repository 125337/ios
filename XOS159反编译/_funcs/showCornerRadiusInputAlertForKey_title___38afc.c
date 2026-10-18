// showCornerRadiusInputAlertForKey:title: @0x38afc


/* Function Stack Size: 0x20 bytes */



void _0x2f19de29::showCornerRadiusInputAlertForKey_title_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



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

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined8 local_a8;

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

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar5._0_8_;

  fVar4 = (float)FUN_00295460(uVar2,auVar5._8_8_,param_3);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,param_4,&cf_eQW_vRk0,1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar3 = auVar5._0_8_;

  local_68 = (double)fVar4;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc0000000;

  local_78 = FUN_00038d6c;

  puStack_70 = &DAT_00389000;

  FUN_00291400(uVar3,auVar5._8_8_,&local_88);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  local_c8 = puVar1;

  local_c0 = 0xc2000000;

  local_b8 = FUN_00038e24;

  puStack_b0 = &DAT_00388cc0;

  _objc_retain(uVar3);

  local_a8 = uVar3;

  _objc_retain(uVar2);

  local_a0 = uVar2;

  _objc_retain(param_3);

  local_98 = param_3;

  IStack_90 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_c8);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar3,1,0);

  _objc_release(local_98);

  _objc_release(local_a0);

  _objc_release(local_a8);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




