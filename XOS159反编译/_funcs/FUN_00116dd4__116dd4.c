// FUN_00116dd4 @0x116dd4


void FUN_00116dd4(undefined8 param_1,undefined8 param_2,int param_3,long param_4,undefined8 param_5)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  cfstringStruct *pcVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined *puVar7;

  cfstringStruct *pcVar8;

  undefined8 uVar9;

  cfstringStruct *pcVar10;

  cfstringStruct *pcVar11;

  undefined8 uVar12;

  long lVar13;

  long lVar14;

  long lVar15;

  undefined8 uVar16;

  undefined8 uVar17;

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

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  undefined8 extraout_x1_19;

  undefined8 extraout_x1_20;

  float fVar18;

  double dVar19;

  double dVar20;

  double dVar21;

  double dVar22;

  undefined1 auVar23 [16];

  undefined *local_260;

  undefined8 local_258;

  code *local_250;

  undefined *puStack_248;

  undefined8 local_240;

  undefined8 local_238;

  undefined8 local_230;

  undefined *local_228;

  undefined8 local_220;

  code *local_218;

  undefined *puStack_210;

  undefined8 local_208;

  undefined8 local_200;

  undefined8 local_1f8;

  undefined *local_1f0;

  undefined8 local_1e8;

  code *local_1e0;

  undefined *puStack_1d8;

  undefined8 local_1d0;

  cfstringStruct *local_1c8;

  undefined8 local_1c0;

  undefined8 local_1b8;

  undefined8 local_1b0;

  undefined *local_1a8;

  undefined8 local_1a0;

  code *local_198;

  undefined *puStack_190;

  double local_188;

  undefined *local_180;

  undefined8 local_178;

  code *local_170;

  undefined *puStack_168;

  double local_160;

  undefined *local_158;

  undefined8 local_150;

  code *local_148;

  undefined *puStack_140;

  double local_138;

  undefined *local_130;

  undefined8 local_128;

  code *local_120;

  undefined *puStack_118;

  double local_110;

  undefined *local_108;

  undefined8 local_100;

  code *local_f8;

  undefined *puStack_f0;

  cfstringStruct *local_e8;

  undefined8 local_e0;

  cfstringStruct *local_d8;

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  cfstringStruct *local_b0;

  undefined8 local_a8;

  cfstringStruct *local_a0;

  

  _objc_retain(param_5);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf_right;

  if (param_3 == 0) {

    pcVar1 = &cf_left;

  }

  _objc_retain(pcVar1);

  FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003be1d0,extraout_x1,param_4 + -1);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar23._0_8_;

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar23._8_8_,&cf_xzyBubblePet______);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  uVar6 = auVar23._0_8_;

  FUN_002944e0(uVar4,auVar23._8_8_,uVar6);

  puVar7 = (undefined *)_objc_retainAutoreleasedReturnValue();

  puVar2 = PTR____NSDictionary0__struct_00388310;

  if (puVar7 != (undefined *)0x0) {

    puVar2 = puVar7;

  }

  _objc_retain(puVar2);

  _objc_release(puVar7);

  FUN_00299540(puVar2,extraout_x1_00,&cf_name);

  pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar3 = &cf___;

  if (pcVar8 != (cfstringStruct *)0x0) {

    pcVar3 = pcVar8;

  }

  _objc_retain();

  _objc_release(pcVar8);

  FUN_00299540(puVar2,extraout_x1_01,&cf_size);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  if (auVar23._0_8_ == 0) {

    dVar19 = 16.0;

  }

  else {

    FUN_00299540(puVar2,auVar23._8_8_,&cf_size);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    fVar18 = (float)FUN_00295480();

    dVar19 = (double)fVar18;

    _objc_release(uVar9);

  }

  _objc_release(auVar23._0_8_);

  FUN_00299540(puVar2,extraout_x1_02,&cf_speed);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  if (auVar23._0_8_ == 0) {

    dVar20 = 3.0;

  }

  else {

    FUN_00299540(puVar2,auVar23._8_8_,&cf_speed);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    fVar18 = (float)FUN_00295480();

    dVar20 = (double)fVar18;

    _objc_release(uVar9);

  }

  _objc_release(auVar23._0_8_);

  FUN_00299540(puVar2,extraout_x1_03,&cf_offsetX);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  if (auVar23._0_8_ == 0) {

    dVar21 = 0.0;

  }

  else {

    FUN_00299540(puVar2,auVar23._8_8_,&cf_offsetX);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    fVar18 = (float)FUN_00295480();

    dVar21 = (double)fVar18;

    _objc_release(uVar9);

  }

  _objc_release(auVar23._0_8_);

  FUN_00299540(puVar2,extraout_x1_04,&cf_offsetY);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  if (auVar23._0_8_ == 0) {

    dVar22 = 0.0;

  }

  else {

    FUN_00299540(puVar2,auVar23._8_8_,&cf_offsetY);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    fVar18 = (float)FUN_00295480();

    dVar22 = (double)fVar18;

    _objc_release(uVar9);

  }

  _objc_release(auVar23._0_8_);

  FUN_00299540(puVar2,extraout_x1_05,&cf_darkName);

  pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar8 = &cf___;

  if (pcVar10 != (cfstringStruct *)0x0) {

    pcVar8 = pcVar10;

  }

  _objc_retain();

  _objc_release(pcVar10);

  FUN_00299540(puVar2,extraout_x1_06,&cf_pathCode);

  pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar10 = &cf___;

  if (pcVar11 != (cfstringStruct *)0x0) {

    pcVar10 = pcVar11;

  }

  _objc_retain();

  _objc_release(pcVar11);

  FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003be1e8,extraout_x1_07,param_4 + -1);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar23._8_8_,&cf__);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar23._0_8_);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_08,uVar9,&cf_Mn_ll_SpeYuzz_O_u<P,1);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  puVar7 = PTR___NSConcreteStackBlock_003886f0;

  local_d0 = PTR___NSConcreteStackBlock_003886f0;

  local_c8 = 0xc2000000;

  local_c0 = FUN_0011955c;

  puStack_b8 = &DAT_0038ca00;

  _objc_retain(pcVar1);

  local_b0 = pcVar1;

  _objc_retain(uVar5);

  local_a8 = uVar5;

  _objc_retain(pcVar3);

  local_a0 = pcVar3;

  FUN_00291400(uVar12,extraout_x1_09,&local_d0);

  local_108 = puVar7;

  local_100 = 0xc2000000;

  local_f8 = FUN_00119610;

  puStack_f0 = &DAT_0038ca00;

  _objc_retain(pcVar1);

  local_e8 = pcVar1;

  _objc_retain(uVar5);

  local_e0 = uVar5;

  _objc_retain(pcVar8);

  local_d8 = pcVar8;

  FUN_00291400(uVar12,extraout_x1_10,&local_108);

  local_130 = puVar7;

  local_128 = 0xc0000000;

  local_120 = FUN_001196c4;

  puStack_118 = &DAT_00389000;

  local_110 = dVar19;

  FUN_00291400(uVar12,extraout_x1_11,&local_130);

  local_158 = puVar7;

  local_150 = 0xc0000000;

  local_148 = FUN_001197b4;

  puStack_140 = &DAT_00389000;

  local_138 = dVar20;

  FUN_00291400(uVar12,extraout_x1_12,&local_158);

  local_180 = puVar7;

  local_178 = 0xc0000000;

  local_170 = FUN_001198a4;

  puStack_168 = &DAT_00389000;

  local_160 = dVar21;

  FUN_00291400(uVar12,extraout_x1_13,&local_180);

  local_1a8 = puVar7;

  local_1a0 = 0xc0000000;

  local_198 = FUN_00119988;

  puStack_190 = &DAT_00389000;

  local_188 = dVar22;

  FUN_00291400(uVar12,extraout_x1_14,&local_1a8);

  local_1f0 = puVar7;

  local_1e8 = 0xc2000000;

  local_1e0 = FUN_00119a6c;

  puStack_1d8 = &DAT_00389340;

  _objc_retain(uVar12);

  local_1d0 = uVar12;

  _objc_retain(pcVar10);

  local_1c8 = pcVar10;

  _objc_retain(uVar4);

  local_1c0 = uVar4;

  _objc_retain(uVar6);

  local_1b8 = uVar6;

  _objc_retain(param_5);

  local_1b0 = param_5;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_15,&cf_OX_,0,&local_1f0);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar12,auVar23._8_8_,auVar23._0_8_);

  _objc_release(auVar23._0_8_);

  local_228 = puVar7;

  local_220 = 0xc2000000;

  local_218 = FUN_0011a088;

  puStack_210 = &DAT_0038b6a0;

  local_1f8 = param_1;

  _objc_retain(uVar6);

  local_208 = uVar6;

  _objc_retain(param_5);

  local_200 = param_5;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_16,&cf__Nx,0,&local_228);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar12,auVar23._8_8_,auVar23._0_8_);

  _objc_release(auVar23._0_8_);

  local_260 = puVar7;

  local_258 = 0xc2000000;

  local_250 = FUN_0011a150;

  puStack_248 = &DAT_00388c90;

  _objc_retain(uVar4);

  local_240 = uVar4;

  _objc_retain(uVar6);

  local_238 = uVar6;

  _objc_retain(param_5);

  local_230 = param_5;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_17,&cf_n_,2,&local_260);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar12,auVar23._8_8_,auVar23._0_8_);

  _objc_release(auVar23._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_18,&cf_Sm,1,0);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar12,auVar23._8_8_,auVar23._0_8_);

  _objc_release(auVar23._0_8_);

  _objc_retain(param_1);

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar13 = _objc_retainAutoreleasedReturnValue();

  if (lVar13 == 0) {

    lVar14 = 0;

LAB_0011750c:

    FUN_002990e0(param_1);

    auVar23 = _objc_retainAutoreleasedReturnValue();

    uVar17 = auVar23._8_8_;

    if (auVar23._0_8_ == 0) goto LAB_0011759c;

    FUN_002990e0(param_1);

    uVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5520();

    lVar15 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar17);

    _objc_release(auVar23._0_8_);

    uVar17 = extraout_x1_19;

    if (lVar15 == 0) goto LAB_0011759c;

    FUN_002990e0(param_1);

    uVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5520();

    uVar16 = _objc_retainAutoreleasedReturnValue();

    _objc_release(param_1);

  }

  else {

    FUN_00299260(lVar13);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    if (lVar14 == 0) goto LAB_0011750c;

    FUN_002a5520(lVar14);

    lVar15 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar15 == 0) goto LAB_0011750c;

    FUN_002a5520(lVar14);

    uVar16 = _objc_retainAutoreleasedReturnValue();

    uVar17 = param_1;

  }

  _objc_release(uVar17);

  uVar17 = extraout_x1_20;

  param_1 = uVar16;

LAB_0011759c:

  FUN_0029a500(param_1,uVar17,uVar12,1,0);

  _objc_release(lVar14);

  _objc_release(lVar13);

  _objc_release(param_1);

  _objc_release(local_230);

  _objc_release(local_238);

  _objc_release(local_240);

  _objc_release(local_200);

  _objc_release(local_208);

  _objc_release(local_1b0);

  _objc_release(local_1b8);

  _objc_release(local_1c0);

  _objc_release(local_1c8);

  _objc_release(local_1d0);

  _objc_release(local_d8);

  _objc_release(local_e0);

  _objc_release(local_e8);

  _objc_release(local_a0);

  _objc_release(local_a8);

  _objc_release(local_b0);

  _objc_release(uVar12);

  _objc_release(uVar9);

  _objc_release(pcVar10);

  _objc_release(pcVar8);

  _objc_release(pcVar3);

  _objc_release(puVar2);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(pcVar1);

  _objc_release(uVar4);

  _objc_release(param_5);

  return;

}




