// mgr_showImageScalePopup @0x13feb8


/* Function Stack Size: 0x10 bytes */



void CadisCardImageManagerViewController::mgr_showImageScalePopup(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  ID local_b0;

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined8 local_88;

  ID IStack_80;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  

  uVar3 = FUN_0013f6d4();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_S_MR_);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar4._8_8_,&cf_VGr_Y_,auVar4._0_8_,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc0000000;

  local_68 = FUN_00140110;

  puStack_60 = &DAT_00389000;

  local_58 = uVar3;

  FUN_00291400(uVar2,extraout_x1_00,&local_78);

  local_a8 = puVar1;

  local_a0 = 0xc2000000;

  local_98 = FUN_001401e0;

  puStack_90 = &DAT_00388d20;

  _objc_retain(uVar2);

  local_88 = uVar2;

  IStack_80 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_a8);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  local_d0 = puVar1;

  local_c8 = 0xc2000000;

  local_c0 = FUN_0014031c;

  puStack_b8 = &DAT_00388cf0;

  local_b0 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_b_Y,2,&local_d0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_04,uVar2,1,0);

  _objc_release(local_88);

  _objc_release(uVar2);

  return;

}




