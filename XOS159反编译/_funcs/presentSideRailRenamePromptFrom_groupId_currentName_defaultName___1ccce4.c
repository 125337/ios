// presentSideRailRenamePromptFrom:groupId:currentName:defaultName: @0x1ccce4


/* Function Stack Size: 0x30 bytes */



void XZYCLGDividerGestureTarget::presentSideRailRenamePromptFrom_groupId_currentName_defaultName_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar3 [16];

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  undefined8 local_a0;

  ID local_98;

  undefined *local_90;

  undefined8 local_88;

  code *local_80;

  undefined *puStack_78;

  ID local_70;

  ID local_68;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  _objc_retain(param_6);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_nzzeQTOhN>f_yTy0T_N0_);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar3._8_8_,&cf__TTOhR_,auVar3._0_8_,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar3._0_8_);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_90 = PTR___NSConcreteStackBlock_003886f0;

  local_88 = 0xc2000000;

  local_80 = FUN_001ccfa4;

  puStack_78 = &DAT_00389080;

  _objc_retain(param_5);

  local_70 = param_5;

  _objc_retain(param_6);

  local_68 = param_6;

  FUN_00291400(uVar2,extraout_x1_00,&local_90);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  local_c0 = puVar1;

  local_b8 = 0xc2000000;

  local_b0 = FUN_001cd030;

  puStack_a8 = &DAT_00388d20;

  _objc_retain(uVar2);

  local_a0 = uVar2;

  _objc_retain(param_4);

  local_98 = param_4;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_OX_,0,&local_c0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_0029a500(param_3,extraout_x1_03,uVar2,1,0);

  _objc_release(local_98);

  _objc_release(local_a0);

  _objc_release(local_68);

  _objc_release(local_70);

  _objc_release(uVar2);

  _objc_release(param_6);

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




