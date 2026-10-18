// showTTSModeSettings @0x72f10


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::showTTSModeSettings(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined1 auVar10 [16];

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  undefined8 local_b0;

  ID IStack_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  ID IStack_78;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar10._0_8_;

  iVar2 = FUN_002924c0(uVar3,auVar10._8_8_,&cf_ttsLocalMode);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_eW_l_j_,

               &cf__W__j_OcSg_NAmz_g0W_j_vc_g0WlbcS0,0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_d0 = PTR___NSConcreteStackBlock_003886f0;

  pcVar1 = &cf__W__j_;

  if (iVar2 == 0) {

    pcVar1 = &cf__;

  }

  local_a0 = PTR___NSConcreteStackBlock_003886f0;

  local_98 = 0xc2000000;

  local_90 = FUN_00073260;

  puStack_88 = &DAT_00388d20;

  _objc_retain(uVar3);

  local_80 = uVar3;

  IStack_78 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,pcVar1,0,&local_a0);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  pcVar1 = &cf__;

  if (iVar2 == 0) {

    pcVar1 = &cf__g0W_j_;

  }

  local_c8 = 0xc2000000;

  local_c0 = FUN_000732d0;

  puStack_b8 = &DAT_00388d20;

  _objc_retain(uVar3);

  local_b0 = uVar3;

  IStack_a8 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,pcVar1,0,&local_d0);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_Sm,1,0);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_0029a0a0(uVar4);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar6 = auVar10._8_8_;

  lVar5 = auVar10._0_8_;

  if (lVar5 != 0) {

    FUN_002a6220(param_1);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(lVar5,auVar10._8_8_,auVar10._0_8_);

    _objc_release(auVar10._0_8_);

    FUN_002a6220(param_1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    uVar8 = _CGRectGetMidX();

    FUN_002a6220(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    uVar9 = _CGRectGetMidY();

    FUN_002a1700(uVar8,uVar9,0x3ff0000000000000,0x3ff0000000000000,lVar5);

    _objc_release(uVar7);

    _objc_release(uVar6);

    FUN_002a0640(lVar5,extraout_x1_03,0);

    uVar6 = extraout_x1_04;

  }

  FUN_0029a500(param_1,uVar6,uVar4,1,0);

  _objc_release(lVar5);

  _objc_release(local_b0);

  _objc_release(local_80);

  _objc_release(uVar4);

  _objc_release(uVar3);

  return;

}




