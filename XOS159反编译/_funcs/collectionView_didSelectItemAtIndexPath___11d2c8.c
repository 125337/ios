// collectionView:didSelectItemAtIndexPath: @0x11d2c8


/* Function Stack Size: 0x20 bytes */



void XZYHomeNPPickerVC::collectionView_didSelectItemAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  uint uVar1;

  int iVar2;

  undefined8 uVar3;

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

  undefined *local_1b8;

  undefined8 local_1b0;

  code *local_1a8;

  undefined *puStack_1a0;

  undefined8 local_198;

  undefined8 local_190;

  undefined8 local_188;

  undefined8 local_180;

  undefined1 auStack_178 [8];

  undefined *local_170;

  undefined8 local_168;

  code *local_160;

  undefined *puStack_158;

  undefined8 local_150;

  undefined8 local_148;

  undefined8 local_140;

  undefined1 auStack_138 [8];

  undefined *local_130;

  undefined8 local_128;

  code *local_120;

  undefined *puStack_118;

  undefined8 local_110;

  undefined8 local_108;

  undefined1 auStack_100 [8];

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  undefined1 auStack_c0 [8];

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined1 auStack_88 [8];

  undefined1 auStack_80 [16];

  

  _objc_retain(param_4);

  FUN_002964e0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  auVar9 = FUN_00297ba0(param_4);

  FUN_00299500(uVar3,auVar9._8_8_,auVar9._0_8_);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  FUN_002a4f80(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar9._8_8_,&cf_xzyHomeNP____Light);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  FUN_002a4f80(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar9._8_8_,&cf_xzyHomeNP____Dark);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar6 = auVar9._0_8_;

  FUN_002a45e0(uVar6,auVar9._8_8_,uVar3);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar1 = FUN_00297820(uVar4,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_002a45e0(uVar6,extraout_x1,uVar5);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_00297820(uVar4,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,uVar4,0,0);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_initWeak(auStack_80,param_1);

  if (uVar1 == 0) {

    local_f8 = PTR___NSConcreteStackBlock_003886f0;

    local_f0 = 0xc2000000;

    local_e8 = FUN_0011db00;

    puStack_e0 = &DAT_0038cac8;

    _objc_retain(uVar6);

    local_d8 = uVar6;

    _objc_retain(uVar4);

    local_d0 = uVar4;

    _objc_retain(uVar3);

    local_c8 = uVar3;

    _objc_copyWeak(auStack_c0,auStack_80);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf__NEmr_j_VGr,0,&local_f8);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_destroyWeak(auStack_c0);

    _objc_release(local_c8);

    _objc_release(local_d0);

    uVar8 = local_d8;

  }

  else {

    local_b8 = PTR___NSConcreteStackBlock_003886f0;

    local_b0 = 0xc2000000;

    local_a8 = FUN_0011da50;

    puStack_a0 = &DAT_0038ca98;

    _objc_retain(uVar6);

    local_98 = uVar6;

    _objc_retain(uVar3);

    local_90 = uVar3;

    _objc_copyWeak(auStack_88,auStack_80);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_SmEmr_j_b,0,&local_b8);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_destroyWeak(auStack_88);

    _objc_release(local_90);

    uVar8 = local_98;

  }

  _objc_release(uVar8);

  if (iVar2 == 0) {

    local_170 = PTR___NSConcreteStackBlock_003886f0;

    local_168 = 0xc2000000;

    local_160 = FUN_0011dc60;

    puStack_158 = &DAT_0038cac8;

    _objc_retain(uVar6);

    local_150 = uVar6;

    _objc_retain(uVar4);

    local_148 = uVar4;

    _objc_retain(uVar5);

    local_140 = uVar5;

    _objc_copyWeak(auStack_138,auStack_80);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf__Nmr_j_VGr,0,&local_170);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_destroyWeak(auStack_138);

    _objc_release(local_140);

    _objc_release(local_148);

    _objc_release(local_150);

    uVar8 = extraout_x1_05;

    if ((uVar1 & 1) != 0) goto LAB_0011d7f4;

    local_1b8 = PTR___NSConcreteStackBlock_003886f0;

    local_1b0 = 0xc2000000;

    local_1a8 = FUN_0011dd10;

    puStack_1a0 = &DAT_0038caf8;

    _objc_retain(uVar6);

    local_198 = uVar6;

    _objc_retain(uVar4);

    local_190 = uVar4;

    _objc_retain(uVar3);

    local_188 = uVar3;

    _objc_retain(uVar5);

    local_180 = uVar5;

    _objc_copyWeak(auStack_178,auStack_80);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf_Te_N_Ny_j_,0,&local_1b8);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_destroyWeak(auStack_178);

    _objc_release(local_180);

    _objc_release(local_188);

    _objc_release(local_190);

    uVar8 = local_198;

  }

  else {

    local_130 = PTR___NSConcreteStackBlock_003886f0;

    local_128 = 0xc2000000;

    local_120 = FUN_0011dbb0;

    puStack_118 = &DAT_0038ca98;

    _objc_retain(uVar6);

    local_110 = uVar6;

    _objc_retain(uVar5);

    local_108 = uVar5;

    _objc_copyWeak(auStack_100,auStack_80);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Smmr_j_b,0,&local_130);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_destroyWeak(auStack_100);

    _objc_release(local_108);

    uVar8 = local_110;

  }

  _objc_release(uVar8);

  uVar8 = extraout_x1_07;

LAB_0011d7f4:

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar8,&cf_Sm,1,0);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_0029a500(param_1,extraout_x1_08,uVar7,1,0);

  _objc_destroyWeak(auStack_80);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar3);

  _objc_release(uVar4);

  _objc_release(param_4);

  return;

}




