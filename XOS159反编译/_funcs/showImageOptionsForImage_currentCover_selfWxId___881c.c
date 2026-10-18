// showImageOptionsForImage:currentCover:selfWxId: @0x881c


/* Function Stack Size: 0x28 bytes */



void PersonalOBF_CoversSettingViewController::showImageOptionsForImage_currentCover_selfWxId_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)



{

  undefined *puVar1;

  int iVar2;

  int iVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined1 auVar9 [16];

  undefined *local_1d8;

  undefined8 local_1d0;

  code *local_1c8;

  undefined *puStack_1c0;

  ID local_1b8;

  ID local_1b0;

  ID local_1a8;

  ID local_1a0;

  undefined *local_198;

  undefined8 local_190;

  code *local_188;

  undefined *puStack_180;

  ID local_178;

  ID local_170;

  undefined *local_168;

  undefined8 local_160;

  code *local_158;

  undefined *puStack_150;

  undefined8 local_148;

  ID local_140;

  undefined8 local_138;

  ID IStack_130;

  undefined *local_128;

  undefined8 local_120;

  code *local_118;

  undefined *puStack_110;

  undefined8 local_108;

  undefined8 local_100;

  ID IStack_f8;

  undefined *local_f0;

  undefined8 local_e8;

  code *local_e0;

  undefined *puStack_d8;

  undefined8 local_d0;

  ID local_c8;

  undefined8 local_c0;

  ID IStack_b8;

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  undefined8 local_88;

  ID IStack_80;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar9._0_8_;

  FUN_00299be0(param_1,auVar9._8_8_,param_5);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar9._0_8_;

  FUN_00299b80(param_1,auVar9._8_8_,param_5);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar6 = auVar9._0_8_;

  FUN_002a45e0(uVar4,auVar9._8_8_,uVar5);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_00297820(param_3,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_002a45e0(uVar4,extraout_x1,uVar6);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  iVar3 = FUN_00297820(param_3,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,param_3,0,0);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  if (iVar2 == 0) {

    local_f0 = PTR___NSConcreteStackBlock_003886f0;

    local_e8 = 0xc2000000;

    local_e0 = FUN_00008f34;

    puStack_d8 = &DAT_00388cc0;

    _objc_retain(uVar4);

    local_d0 = uVar4;

    _objc_retain(param_3);

    local_c8 = param_3;

    _objc_retain(uVar5);

    local_c0 = uVar5;

    IStack_b8 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf__NEmr_j_VGr,0,&local_f0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(local_c0);

    _objc_release(local_c8);

    uVar8 = local_d0;

  }

  else {

    local_b0 = PTR___NSConcreteStackBlock_003886f0;

    local_a8 = 0xc2000000;

    local_a0 = FUN_00008ed0;

    puStack_98 = &DAT_00388c90;

    _objc_retain(uVar4);

    local_90 = uVar4;

    _objc_retain(uVar5);

    local_88 = uVar5;

    IStack_80 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_SmEmr_j_b,0,&local_b0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(local_88);

    uVar8 = local_90;

  }

  _objc_release(uVar8);

  if (iVar3 == 0) {

    local_168 = puVar1;

    local_160 = 0xc2000000;

    local_158 = FUN_00008ffc;

    puStack_150 = &DAT_00388cc0;

    _objc_retain(uVar4);

    local_148 = uVar4;

    _objc_retain(param_3);

    local_140 = param_3;

    _objc_retain(uVar6);

    local_138 = uVar6;

    IStack_130 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf__Nmr_j_VGr,0,&local_168);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(local_138);

    _objc_release(local_140);

    uVar8 = local_148;

  }

  else {

    local_128 = puVar1;

    local_120 = 0xc2000000;

    local_118 = FUN_00008f98;

    puStack_110 = &DAT_00388c90;

    _objc_retain(uVar4);

    local_108 = uVar4;

    _objc_retain(uVar6);

    local_100 = uVar6;

    IStack_f8 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Smmr_j_b,0,&local_128);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(local_100);

    uVar8 = local_108;

  }

  _objc_release(uVar8);

  local_198 = puVar1;

  local_190 = 0xc2000000;

  local_188 = FUN_00009060;

  puStack_180 = &DAT_00388d20;

  local_178 = param_1;

  _objc_retain(param_3);

  local_170 = param_3;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf_VGr,0,&local_198);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  local_1d8 = puVar1;

  local_1d0 = 0xc2000000;

  local_1c8 = FUN_000090bc;

  puStack_1c0 = &DAT_00388cc0;

  local_1b8 = param_1;

  _objc_retain(param_3);

  local_1b0 = param_3;

  _objc_retain(param_4);

  local_1a8 = param_4;

  _objc_retain(param_5);

  local_1a0 = param_5;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf_RdVGr,2,&local_1d8);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_07,&cf_Sm,1,0);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_0029a500(param_1,extraout_x1_08,uVar7,1,0);

  _objc_release(local_1a0);

  _objc_release(local_1a8);

  _objc_release(local_1b0);

  _objc_release(local_170);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




