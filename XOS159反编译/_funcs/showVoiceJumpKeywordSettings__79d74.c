// showVoiceJumpKeywordSettings @0x79d74


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::showVoiceJumpKeywordSettings(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar5 [16];

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  undefined8 local_a0;

  undefined8 local_98;

  ID IStack_90;

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  cfstringStruct *local_68;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar5._0_8_;

  FUN_002a45e0(uVar2,auVar5._8_8_,&cf_xzy_voice_jump_keyword);

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  if ((pcVar3 == (cfstringStruct *)0x0) ||

     (auVar5 = FUN_00297fa0(pcVar3), uVar4 = auVar5._8_8_, auVar5._0_8_ == 0)) {

    _objc_release(pcVar3);

    pcVar3 = &cf_r;

    uVar4 = extraout_x1;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,uVar4,&cf_n_rlsQ_,&cf__WJ_YeQFheQdksQ_sSS_l0RrbLub0,

               1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc2000000;

  local_78 = FUN_00079fe4;

  puStack_70 = &DAT_00388f20;

  _objc_retain(pcVar3);

  local_68 = pcVar3;

  FUN_00291400(uVar4,extraout_x1_00,&local_88);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  local_c0 = puVar1;

  local_b8 = 0xc2000000;

  local_b0 = FUN_0007a04c;

  puStack_a8 = &DAT_00388c90;

  _objc_retain(uVar4);

  local_a0 = uVar4;

  _objc_retain(uVar2);

  local_98 = uVar2;

  IStack_90 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nx_,0,&local_c0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0029a500(param_1,extraout_x1_03,uVar4,1,0);

  _objc_release(local_98);

  _objc_release(local_a0);

  _objc_release(local_68);

  _objc_release(uVar4);

  _objc_release(pcVar3);

  _objc_release(uVar2);

  return;

}




