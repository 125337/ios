// showMessageOffsetInputAlertForSelf: @0x3a564


/* Function Stack Size: 0x14 bytes */



void _0x2f19de29::showMessageOffsetInputAlertForSelf_(ID param_1,SEL param_2,bool param_3)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  undefined *puVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar6 [16];

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

  undefined8 local_68;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf_mesMsgMergeMessageOffsetSelf;

  if (param_3 == 0) {

    pcVar1 = &cf_mesMsgMergeMessageOffsetOther;

  }

  _objc_retain(pcVar1);

  local_68 = FUN_0001cc90(uVar4,pcVar1);

  pcVar2 = &cf_be;

  if (param_3 == 0) {

    pcVar2 = &cf__e;

  }

  _objc_retain(pcVar2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_n__);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar6._8_8_,auVar6._0_8_,&cf_eQpe<P_,1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  puVar3 = PTR___NSConcreteStackBlock_003886f0;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc0000000;

  local_78 = FUN_0003a83c;

  puStack_70 = &DAT_00389000;

  FUN_00291400(uVar5,extraout_x1_00,&local_88);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  local_c8 = puVar3;

  local_c0 = 0xc2000000;

  local_b8 = FUN_0003a8f4;

  puStack_b0 = &DAT_00388cc0;

  _objc_retain(uVar5);

  local_a8 = uVar5;

  _objc_retain(uVar4);

  local_a0 = uVar4;

  _objc_retain(pcVar1);

  local_98 = pcVar1;

  IStack_90 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nx_,0,&local_c8);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_0029a500(param_1,extraout_x1_03,uVar5,1,0);

  _objc_release(local_98);

  _objc_release(local_a0);

  _objc_release(local_a8);

  _objc_release(uVar5);

  _objc_release(pcVar2);

  _objc_release(pcVar1);

  _objc_release(uVar4);

  return;

}




