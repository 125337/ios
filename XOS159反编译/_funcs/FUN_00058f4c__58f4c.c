// FUN_00058f4c @0x58f4c


void FUN_00058f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 uVar7;

  float fVar8;

  undefined1 auVar9 [16];

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  undefined8 local_d8;

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  double local_78;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00294460(param_3,extraout_x1,param_4,1);

  _objc_getAssociatedObject(param_2,"fontFiles");

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  auVar9 = FUN_0029c020(param_4);

  if (auVar9._0_8_ == 1) {

    fVar8 = (float)FUN_00295460(uVar3,auVar9._8_8_,&cf_xzy_fontSizeOffset);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,&cf_W_S_Y_,&cf_eQW_Ste<PY,1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    puVar1 = PTR___NSConcreteStackBlock_003886f0;

    uVar7 = auVar9._0_8_;

    local_78 = (double)fVar8;

    local_98 = PTR___NSConcreteStackBlock_003886f0;

    local_90 = 0xc0000000;

    local_88 = FUN_0005942c;

    puStack_80 = &DAT_00389000;

    FUN_00291400(uVar7,auVar9._8_8_,&local_98);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    local_d0 = puVar1;

    local_c8 = 0xc2000000;

    local_c0 = FUN_000594e0;

    puStack_b8 = &DAT_00388c90;

    _objc_retain(uVar7);

    local_b0 = uVar7;

    _objc_retain(uVar3);

    local_a8 = uVar3;

    _objc_retain(param_3);

    local_a0 = param_3;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nx_,0,&local_d0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_0029a500(param_2,extraout_x1_03,uVar7,1,0);

    _objc_release(local_a0);

    _objc_release(local_a8);

    uVar4 = local_b0;

  }

  else {

    lVar5 = FUN_0029c020(param_4);

    if (lVar5 == 2) {

      lVar5 = FUN_0029bae0(param_4);

      lVar6 = FUN_00293860(uVar2);

      if (lVar6 <= lVar5) goto LAB_00059158;

      auVar9 = FUN_0029bae0(param_4);

      FUN_00299500(uVar2,auVar9._8_8_,auVar9._0_8_);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar7 = auVar9._0_8_;

      FUN_002a0060(uVar3,auVar9._8_8_,uVar7,&cf_xzy_customFontFile);

      FUN_002a4a40(uVar3);

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1_04,2);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar9._0_8_;

      FUN_0029b1c0(param_3,auVar9._8_8_,uVar4,5);

    }

    else {

      auVar9 = FUN_0029c020(param_4);

      if (auVar9._0_8_ != 3) goto LAB_00059158;

      FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar9._8_8_,&cf_nx_T,&cf__zsSsQ_ON__uW_SOn_,1);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar7 = auVar9._0_8_;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar9._8_8_,&cf_Sm,1,0);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

      _objc_release(auVar9._0_8_);

      local_f8 = PTR___NSConcreteStackBlock_003886f0;

      local_f0 = 0xc2000000;

      local_e8 = FUN_000595fc;

      puStack_e0 = &DAT_00388cf0;

      _objc_retain(uVar3);

      local_d8 = uVar3;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf__T,2,&local_f8);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar7,auVar9._8_8_,auVar9._0_8_);

      _objc_release(auVar9._0_8_);

      FUN_0029a500(param_2,extraout_x1_06,uVar7,1,0);

      uVar4 = local_d8;

    }

  }

  _objc_release(uVar4);

  _objc_release(uVar7);

LAB_00059158:

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




