// showImageSizeSettings @0x350d0


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::showImageSizeSettings(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  float fVar8;

  float fVar9;

  float fVar10;

  double in_d2;

  double in_d3;

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined *local_100;

  undefined8 local_f8;

  code *local_f0;

  undefined *puStack_e8;

  ID local_e0;

  undefined *local_d8;

  undefined8 local_d0;

  code *local_c8;

  undefined *puStack_c0;

  ID local_b8;

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  ID local_90;

  undefined8 uVar2;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar11._0_8_;

  fVar8 = (float)FUN_00295460(uVar2,auVar11._8_8_,&cf_coverImageSizeOther);

  fVar9 = (float)FUN_00295460(uVar2,extraout_x1,&cf_coverImageSizeSelf);

  fVar10 = (float)FUN_00295460(uVar2,extraout_x1_00,&cf_coverImageSizeGlobal);

  if (fVar8 <= 0.0) {

    auVar11._8_8_ = extraout_x1_01;

    auVar11._0_8_ = &cf__gn_;

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf___0f__);

    auVar11 = _objc_retainAutoreleasedReturnValue();

  }

  if (fVar9 <= 0.0) {

    auVar12._8_8_ = auVar11._8_8_;

    auVar12._0_8_ = &cf__gn_;

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar11._8_8_,&cf___0f__);

    auVar12 = _objc_retainAutoreleasedReturnValue();

  }

  if (fVar10 <= 0.0) {

    auVar13._8_8_ = auVar12._8_8_;

    auVar13._0_8_ = &cf__gn_;

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar12._8_8_,&cf___0f__);

    auVar13 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar13._8_8_,&cf_hQ___);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar14._8_8_,&cf_n_ni_>f_ykO,auVar14._0_8_,0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar14._0_8_);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_b0 = PTR___NSConcreteStackBlock_003886f0;

  local_a8 = 0xc2000000;

  local_a0 = FUN_000355c4;

  puStack_98 = &DAT_00388cf0;

  local_90 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_hQ__ni__Y_,0,&local_b0);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar14._8_8_,auVar14._0_8_);

  _objc_release(auVar14._0_8_);

  local_d8 = puVar1;

  local_d0 = 0xc2000000;

  local_c8 = FUN_000355dc;

  puStack_c0 = &DAT_00388cf0;

  local_b8 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf__eni__Y_,0,&local_d8);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar14._8_8_,auVar14._0_8_);

  _objc_release(auVar14._0_8_);

  local_100 = puVar1;

  local_f8 = 0xc2000000;

  local_f0 = FUN_000355f4;

  puStack_e8 = &DAT_00388cf0;

  local_e0 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_beni__Y_,0,&local_100);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar14._8_8_,auVar14._0_8_);

  _objc_release(auVar14._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf_Sm,1,0);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar14._8_8_,auVar14._0_8_);

  _objc_release(auVar14._0_8_);

  FUN_0029a0a0(uVar3);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar5 = extraout_x1_06;

  if (lVar4 != 0) {

    FUN_002a6220(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a0a0(uVar3);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar14._0_8_,auVar14._8_8_,uVar5);

    _objc_release(auVar14._0_8_);

    _objc_release(uVar5);

    FUN_002a6220(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_002a6220(param_1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_0029a0a0(uVar3);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(in_d2 * 0.5,in_d3 * 0.5,0,0);

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(uVar5);

    FUN_0029a0a0(uVar3);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0640(auVar14._0_8_,auVar14._8_8_,0);

    _objc_release(auVar14._0_8_);

    uVar5 = extraout_x1_07;

  }

  FUN_0029a500(param_1,uVar5,uVar3,1,0);

  _objc_release(uVar3);

  _objc_release(auVar13._0_8_);

  _objc_release(auVar12._0_8_);

  _objc_release(auVar11._0_8_);

  _objc_release(uVar2);

  return;

}




