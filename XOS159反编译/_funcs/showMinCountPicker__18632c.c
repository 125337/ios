// showMinCountPicker @0x18632c


/* Function Stack Size: 0x10 bytes */



void GrayTestSettingViewController::showMinCountPicker(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar6;

  long lVar7;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  undefined8 local_98;

  ID local_90;

  long lStack_88;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar8._0_8_;

  auVar8 = FUN_00297480(uVar1,auVar8._8_8_,&cf_grayTestStackMinCount);

  lVar4 = 3;

  if (0xfffffffffffffff7 < auVar8._0_8_ - 10U) {

    lVar4 = auVar8._0_8_;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar8._8_8_,&cf_S>ewYpe,&cf_bY__VGrw,0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar8._8_8_;

  uVar2 = auVar8._0_8_;

  lVar7 = 2;

  do {

    FUN_002a4680(&_OBJC_CLASS___NSString,uVar5,&::cf__);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar8._0_8_;

    if (lVar4 == lVar7) {

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar8._8_8_,&::cf__);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar5);

      uVar6 = 2;

      uVar5 = uVar3;

    }

    else {

      uVar6 = 0;

    }

    local_b8 = PTR___NSConcreteStackBlock_003886f0;

    local_b0 = 0xc2000000;

    local_a8 = FUN_001866d8;

    puStack_a0 = &DAT_00389020;

    _objc_retain(uVar1);

    local_98 = uVar1;

    local_90 = param_1;

    lStack_88 = lVar7;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,uVar5,uVar6,&local_b8);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar8._8_8_,auVar8._0_8_);

    _objc_release(auVar8._0_8_);

    _objc_release(local_98);

    _objc_release(uVar5);

    lVar7 = lVar7 + 1;

    uVar5 = extraout_x1_00;

  } while (lVar7 != 10);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  FUN_0029a0a0(uVar2);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar5 = extraout_x1_01;

  if (lVar4 != 0) {

    FUN_002a4dc0(param_1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar8._8_8_,2,1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00292aa0(auVar8._0_8_,auVar9._8_8_,auVar9._0_8_);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar9._0_8_);

    _objc_release(auVar8._0_8_);

    FUN_0029a0a0(uVar2);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar8._0_8_,auVar8._8_8_,uVar5);

    _objc_release(auVar8._0_8_);

    uVar3 = FUN_002925a0(uVar5);

    FUN_0029a0a0(uVar2);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(uVar3,in_d1,in_d2,in_d3);

    _objc_release(uVar6);

    _objc_release(uVar5);

    uVar5 = extraout_x1_02;

  }

  FUN_0029a500(param_1,uVar5,uVar2,1,0);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




