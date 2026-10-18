// mgr_showOffsetPopupWithTitle:key: @0x140394


/* Function Stack Size: 0x20 bytes */



void CadisCardImageManagerViewController::mgr_showOffsetPopupWithTitle_key_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  float fVar3;

  undefined1 auVar4 [16];

  undefined *local_f0;

  undefined8 local_e8;

  code *local_e0;

  undefined *puStack_d8;

  ID local_d0;

  ID IStack_c8;

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

  FUN_00136588();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  fVar3 = (float)FUN_00295460(auVar4._0_8_,auVar4._8_8_,param_4);

  _objc_release(auVar4._0_8_);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_S_MR_);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar4._8_8_,param_3,auVar4._0_8_,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc0000000;

  local_78 = FUN_00140688;

  puStack_70 = &DAT_00389000;

  local_68 = (double)fVar3;

  FUN_00291400(uVar2,extraout_x1_00,&local_88);

  local_c0 = puVar1;

  local_b8 = 0xc2000000;

  local_b0 = FUN_0014074c;

  puStack_a8 = &DAT_00388c90;

  _objc_retain(uVar2);

  local_a0 = uVar2;

  _objc_retain(param_4);

  local_98 = param_4;

  IStack_90 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_c0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  local_f0 = puVar1;

  local_e8 = 0xc2000000;

  local_e0 = FUN_00140870;

  puStack_d8 = &DAT_00388d20;

  _objc_retain(param_4);

  local_d0 = param_4;

  IStack_c8 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_b_Y,2,&local_f0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_04,uVar2,1,0);

  _objc_release(local_d0);

  _objc_release(local_98);

  _objc_release(local_a0);

  _objc_release(uVar2);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




