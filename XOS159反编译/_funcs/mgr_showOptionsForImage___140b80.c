// mgr_showOptionsForImage: @0x140b80


/* Function Stack Size: 0x18 bytes */



void CadisCardImageManagerViewController::mgr_showOptionsForImage_

               (ID param_1,SEL param_2,ID param_3)



{

  undefined *puVar1;

  int iVar2;

  int iVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

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

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined *local_1b0;

  undefined8 local_1a8;

  code *local_1a0;

  undefined *puStack_198;

  ID local_190;

  undefined8 local_188;

  ID IStack_180;

  undefined *local_178;

  undefined8 local_170;

  code *local_168;

  undefined *puStack_160;

  ID local_158;

  ID IStack_150;

  undefined *local_148;

  undefined8 local_140;

  code *local_138;

  undefined *puStack_130;

  undefined8 local_128;

  ID local_120;

  ID IStack_118;

  undefined *local_110;

  undefined8 local_108;

  code *local_100;

  undefined *puStack_f8;

  undefined8 local_f0;

  ID IStack_e8;

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  undefined8 local_c0;

  ID local_b8;

  ID IStack_b0;

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined8 local_88;

  ID IStack_80;

  

  _objc_retain(param_3);

  FUN_00136588();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar7._0_8_;

  FUN_002a45e0(uVar4,auVar7._8_8_,&cf_CadisSelectedCardLight);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(uVar4,auVar7._8_8_,&cf_CadisSelectedCardDark);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_00297820(param_3,auVar8._8_8_,auVar7._0_8_);

  iVar3 = FUN_00297820(param_3,extraout_x1,auVar8._0_8_);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,param_3,0,0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  if (iVar2 == 0) {

    local_e0 = PTR___NSConcreteStackBlock_003886f0;

    local_d8 = 0xc2000000;

    local_d0 = FUN_00141150;

    puStack_c8 = &DAT_00388c90;

    _objc_retain(uVar4);

    local_c0 = uVar4;

    _objc_retain(param_3);

    local_b8 = param_3;

    IStack_b0 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf__NEmr_j_VGr,0,&local_e0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(local_b8);

    uVar6 = local_c0;

  }

  else {

    local_a8 = PTR___NSConcreteStackBlock_003886f0;

    local_a0 = 0xc2000000;

    local_98 = FUN_001410ec;

    puStack_90 = &DAT_00388d20;

    _objc_retain(uVar4);

    local_88 = uVar4;

    IStack_80 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_SmEmr_j_b,0,&local_a8);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    uVar6 = local_88;

  }

  _objc_release(uVar6);

  if (iVar3 == 0) {

    local_148 = puVar1;

    local_140 = 0xc2000000;

    local_138 = FUN_0014121c;

    puStack_130 = &DAT_00388c90;

    _objc_retain(uVar4);

    local_128 = uVar4;

    _objc_retain(param_3);

    local_120 = param_3;

    IStack_118 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf__Nmr_j_VGr,0,&local_148);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(local_120);

    uVar6 = local_128;

  }

  else {

    local_110 = puVar1;

    local_108 = 0xc2000000;

    local_100 = FUN_001411b8;

    puStack_f8 = &DAT_00388d20;

    _objc_retain(uVar4);

    local_f0 = uVar4;

    IStack_e8 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Smmr_j_b,0,&local_110);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    uVar6 = local_f0;

  }

  _objc_release(uVar6);

  local_178 = puVar1;

  local_170 = 0xc2000000;

  local_168 = FUN_00141284;

  puStack_160 = &DAT_00388d20;

  _objc_retain(param_3);

  local_158 = param_3;

  IStack_150 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf_VGr,0,&local_178);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  local_1b0 = puVar1;

  local_1a8 = 0xc2000000;

  local_1a0 = FUN_00141668;

  puStack_198 = &DAT_00388c90;

  _objc_retain(param_3);

  local_190 = param_3;

  _objc_retain(uVar4);

  local_188 = uVar4;

  IStack_180 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf_RdVGr,2,&local_1b0);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_07,&cf_Sm,1,0);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_0029a500(param_1,extraout_x1_08,uVar5,1,0);

  _objc_release(local_188);

  _objc_release(local_190);

  _objc_release(local_158);

  _objc_release(uVar5);

  _objc_release(auVar8._0_8_);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar4);

  _objc_release(param_3);

  return;

}




