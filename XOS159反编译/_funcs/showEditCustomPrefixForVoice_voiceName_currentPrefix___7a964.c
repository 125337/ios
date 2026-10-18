// showEditCustomPrefixForVoice:voiceName:currentPrefix: @0x7a964


/* Function Stack Size: 0x28 bytes */



void _0x016d26c7::showEditCustomPrefixForVoice_voiceName_currentPrefix_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  undefined *local_100;

  undefined8 local_f8;

  code *local_f0;

  undefined *puStack_e8;

  ID local_e0;

  ID IStack_d8;

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  undefined8 local_b0;

  ID local_a8;

  ID IStack_a0;

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  ID local_78;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__0_);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_S_MRMR);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar4._8_8_,auVar3._0_8_,auVar4._0_8_,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_98 = PTR___NSConcreteStackBlock_003886f0;

  local_90 = 0xc2000000;

  local_88 = FUN_0007aca8;

  puStack_80 = &DAT_00388f20;

  _objc_retain(param_5);

  local_78 = param_5;

  FUN_00291400(uVar2,extraout_x1_00,&local_98);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  local_d0 = puVar1;

  local_c8 = 0xc2000000;

  local_c0 = FUN_0007ad10;

  puStack_b8 = &DAT_00388c90;

  _objc_retain(uVar2);

  local_b0 = uVar2;

  _objc_retain(param_3);

  local_a8 = param_3;

  IStack_a0 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_OX_,0,&local_d0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  local_100 = puVar1;

  local_f8 = 0xc2000000;

  local_f0 = FUN_0007aff0;

  puStack_e8 = &DAT_00388d20;

  _objc_retain(param_3);

  local_e0 = param_3;

  IStack_d8 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_yd,2,&local_100);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_0029a500(param_1,extraout_x1_04,uVar2,1,0);

  _objc_release(local_e0);

  _objc_release(local_a8);

  _objc_release(local_b0);

  _objc_release(local_78);

  _objc_release(uVar2);

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




