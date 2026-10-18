// onHorizontalScaleChanged: @0x1f9ffc


/* Function Stack Size: 0x18 bytes */



void XZYCLGSideRailAppearanceViewController::onHorizontalScaleChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  dispatch_time_t dVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  float fVar4;

  double dVar5;

  double dVar6;

  undefined1 auVar7 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  int local_48;

  

  _objc_retain(param_3);

  fVar4 = (float)FUN_002a6060(param_3);

  dVar6 = (double)(long)(fVar4 * 100.0) / 100.0;

  if (0.005 <= ABS(dVar6 - DAT_003e7160)) {

    dVar5 = 0.8;

    if (0.8 <= dVar6) {

      dVar5 = dVar6;

    }

    dVar6 = (double)NEON_fminnm(dVar5,0x3ff6666666666666);

    uVar2 = extraout_x1;

    if (0.005 <= ABS(dVar6 - DAT_003e7160)) {

      DAT_003e7160 = dVar6;

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_0029de20(dVar6,auVar7._0_8_,auVar7._8_8_,&cf_xzyChatListGroupingHorizontalScale);

      _objc_release(auVar7._0_8_);

      FUN_001e77e8(&cf_xzyChatListGroupingHorizontalScale);

      uVar2 = extraout_x1_00;

    }

    FUN_002a4680(&_OBJC_CLASS___NSString,uVar2,&cf___0f__);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00296280(param_1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar7._0_8_,auVar7._8_8_,uVar2);

    _objc_release(auVar7._0_8_);

    _objc_release(uVar2);

    if (DAT_003eaac8 != 6) {

      FUN_001cf7f4();

    }

    iVar1 = DAT_003eae68 + 1;

    DAT_003eae68 = iVar1;

    dVar3 = _dispatch_time(0,250000000);

    local_68 = PTR___NSConcreteStackBlock_003886f0;

    local_60 = 0xc0000000;

    local_58 = FUN_00215128;

    puStack_50 = &DAT_0038b570;

    local_48 = iVar1;

    _dispatch_after(dVar3,PTR___dispatch_main_q_00388740,&local_68);

  }

  _objc_release(param_3);

  return;

}




