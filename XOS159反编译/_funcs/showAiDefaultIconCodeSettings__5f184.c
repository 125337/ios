// showAiDefaultIconCodeSettings @0x5f184


/* Function Stack Size: 0x10 bytes */



void OBF_AIChatSettingViewController::showAiDefaultIconCodeSettings(ID param_1,SEL param_2)



{

  undefined *puVar1;

  cfstringStruct *pcVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

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

  cfstringStruct *local_58;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar4._0_8_,auVar4._8_8_,&cf_aiChatDefaultIconCode);

  pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  if ((pcVar2 == (cfstringStruct *)0x0) ||

     (auVar4 = FUN_00297fa0(pcVar2), uVar3 = auVar4._8_8_, auVar4._0_8_ == 0)) {

    _objc_release(pcVar2);

    pcVar2 = &cf_icons_outlined_emoji_animal;

    uVar3 = extraout_x1;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,uVar3,&cf_VhNx,&cf_eQ_OVhDnTy,1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc2000000;

  local_68 = FUN_0005f42c;

  puStack_60 = &DAT_00388f20;

  _objc_retain(pcVar2);

  local_58 = pcVar2;

  FUN_00291400(uVar3,extraout_x1_00,&local_78);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  local_a8 = puVar1;

  local_a0 = 0xc2000000;

  local_98 = FUN_0005f494;

  puStack_90 = &DAT_00388d20;

  _objc_retain(uVar3);

  local_88 = uVar3;

  IStack_80 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nx_,0,&local_a8);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  local_d0 = puVar1;

  local_c8 = 0xc2000000;

  local_c0 = FUN_0005f5c8;

  puStack_b8 = &DAT_00388cf0;

  local_b0 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_b_Y,2,&local_d0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_04,uVar3,1,0);

  _objc_release(local_88);

  _objc_release(local_58);

  _objc_release(uVar3);

  _objc_release(pcVar2);

  return;

}




