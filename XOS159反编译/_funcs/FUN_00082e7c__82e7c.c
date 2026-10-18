// FUN_00082e7c @0x82e7c


void FUN_00082e7c(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 uVar5;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  float fVar6;

  undefined1 auVar7 [16];

  

  if ((DAT_003e7672 & 1) != 0) {

    return;

  }

  DAT_003e7672 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar7._0_8_;

  FUN_00299520(uVar1,auVar7._8_8_,&cf_coversEnabled);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  if (auVar7._0_8_ == 0) {

    DAT_003e74b9 = 0;

  }

  else {

    DAT_003e74b9 = FUN_002924c0(uVar1,auVar7._8_8_,&cf_coversEnabled);

  }

  _objc_release(auVar7._0_8_);

  DAT_003e74d8 = FUN_002924c0(uVar1,extraout_x1,&cf_coverFunctionEnabled);

  DAT_003e74d9 = FUN_002924c0(uVar1,extraout_x1_00,&cf_coverDisableOnMainPage);

  DAT_003e74da = FUN_002924c0(uVar1,extraout_x1_01,&cf_coverDisableHomeCardContactMask);

  FUN_000904f4();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_002937a0();

  uVar5 = DAT_003e7550;

  DAT_003e7550 = uVar3;

  _objc_release(uVar5);

  _objc_release(uVar2);

  FUN_00299520(uVar1,extraout_x1_02,&cf_coverImageSize);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar7._8_8_;

  if (auVar7._0_8_ != 0) {

    FUN_00299520(uVar1,uVar5,&cf_coverImageSizeSelf);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(auVar7._0_8_);

    uVar5 = extraout_x1_03;

    if (lVar4 == 0) {

      fVar6 = (float)FUN_00295460(uVar1,extraout_x1_03,&cf_coverImageSize);

      if (fVar6 <= 0.0) {

        fVar6 = 100.0;

      }

      FUN_0029e500(fVar6,uVar1,extraout_x1_04,&cf_coverImageSizeSelf);

      FUN_0029e500(fVar6,uVar1,extraout_x1_05,&cf_coverImageSizeOther);

      FUN_002a4a40(uVar1);

      uVar5 = extraout_x1_06;

    }

  }

  fVar6 = (float)FUN_00295460(uVar1,uVar5,&cf_coverImageSizeSelf);

  DAT_003e63b0 = (double)fVar6;

  fVar6 = (float)FUN_00295460(uVar1,extraout_x1_07,&cf_coverImageSizeOther);

  DAT_003e63b8 = (double)fVar6;

  fVar6 = (float)FUN_00295460(uVar1,extraout_x1_08,&cf_coverImageSizeGlobal);

  DAT_003e79b0 = (double)fVar6;

  DAT_003e63c0 = DAT_003e79b0;

  if (fVar6 <= 0.0) {

    DAT_003e63c0 = 100.0;

  }

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  uVar5 = DAT_003e7558;

  DAT_003e7558 = uVar2;

  _objc_release(uVar5);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  uVar5 = DAT_003e7560;

  DAT_003e7560 = uVar2;

  _objc_release(uVar5);

  DAT_003e7753 = FUN_001331c4();

  _objc_release(uVar1);

  return;

}




