// FUN_00187694 @0x187694


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */



void FUN_00187694(void)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar4;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  float fVar5;

  undefined1 auVar6 [16];

  

  if ((DAT_003e8d30 & 1) != 0) {

    return;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar6._0_8_;

  iVar1 = FUN_002924c0(uVar2,auVar6._8_8_,&cf_coversEnabled);

  if (iVar1 == 0) {

    DAT_003e8d31 = 0;

    DAT_003e8d32 = 0;

    DAT_003e8d33 = 0;

    uVar4 = extraout_x1;

  }

  else {

    DAT_003e8d31 = FUN_002924c0(uVar2,extraout_x1,&cf_grayTestImageStackEnabled);

    DAT_003e8d32 = FUN_002924c0(uVar2,extraout_x1_00,&cf_grayTestStackCheckEnabled);

    DAT_003e8d33 = FUN_002924c0(uVar2,extraout_x1_01,&cf_grayTestOriginalImageEnabled);

    uVar4 = extraout_x1_02;

  }

  auVar6 = FUN_00297480(uVar2,uVar4,&cf_grayTestStackMinCount);

  _DAT_003e6e10 = 3;

  if (0xfffffffffffffff7 < auVar6._0_8_ - 10U) {

    _DAT_003e6e10 = auVar6._0_8_;

  }

  DAT_003e8d34 = FUN_002924c0(uVar2,auVar6._8_8_,&cf_grayTestImageBlurEnabled);

  DAT_003e8d35 = FUN_002924c0(uVar2,extraout_x1_03,&cf_grayTestCardBorderEnabled);

  FUN_002a45e0(uVar2,extraout_x1_04,&cf_grayTestBorderSelectedLight);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8ca0;

  DAT_003e8ca0 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_05,&cf_grayTestBorderSelectedDark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8ca8;

  DAT_003e8ca8 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_06,&cf_grayTestBorderUnselectedLight);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8cb0;

  DAT_003e8cb0 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_07,&cf_grayTestBorderUnselectedDark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8cb8;

  DAT_003e8cb8 = uVar3;

  _objc_release(uVar4);

  fVar5 = (float)FUN_00295460(uVar2,extraout_x1_08,&cf_grayTestBorderCornerRadius);

  DAT_003e6e18 = (double)fVar5;

  if (fVar5 <= 0.0) {

    DAT_003e6e18 = 8.0;

  }

  DAT_003e8d30 = 1;

  _objc_release(uVar2);

  return;

}




