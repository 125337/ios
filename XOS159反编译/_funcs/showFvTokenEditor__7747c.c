// showFvTokenEditor @0x7747c


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::showFvTokenEditor(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar6 [16];

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  undefined8 local_d8;

  ID IStack_d0;

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  cfstringStruct *local_98;

  ID IStack_90;

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  cfstringStruct *local_68;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar6._0_8_;

  FUN_002a45e0(uVar3,auVar6._8_8_,&cf_ttsCustomFvToken);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &::cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_Mn_,&cf_OX_TSKbR,1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  puVar2 = PTR___NSConcreteStackBlock_003886f0;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc2000000;

  local_78 = FUN_00077780;

  puStack_70 = &DAT_00388f20;

  _objc_retain(pcVar1);

  local_68 = pcVar1;

  FUN_00291400(uVar5,extraout_x1_00,&local_88);

  local_c8 = puVar2;

  local_c0 = 0xc2000000;

  local_b8 = FUN_00077800;

  puStack_b0 = &DAT_00388cc0;

  _objc_retain(uVar5);

  local_a8 = uVar5;

  _objc_retain(uVar3);

  local_a0 = uVar3;

  _objc_retain(pcVar1);

  local_98 = pcVar1;

  IStack_90 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_OX_,0,&local_c8);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  local_f8 = puVar2;

  local_f0 = 0xc2000000;

  local_e8 = FUN_00077b4c;

  puStack_e0 = &DAT_00388d20;

  _objc_retain(uVar3);

  local_d8 = uVar3;

  IStack_d0 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nd,2,&local_f8);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Sm,1,0);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_0029a500(param_1,extraout_x1_04,uVar5,1,0);

  _objc_release(local_d8);

  _objc_release(local_98);

  _objc_release(local_a0);

  _objc_release(local_a8);

  _objc_release(local_68);

  _objc_release(uVar5);

  _objc_release(pcVar1);

  _objc_release(uVar3);

  return;

}




