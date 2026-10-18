// FUN_00189574 @0x189574


void FUN_00189574(void)



{

  undefined1 uVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar5;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  float fVar6;

  undefined1 auVar7 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar7._0_8_;

  iVar2 = FUN_002924c0(uVar3,auVar7._8_8_,&cf_coversEnabled);

  uVar5 = extraout_x1;

  uVar1 = 0;

  if (iVar2 != 0) {

    uVar1 = FUN_002924c0(uVar3,extraout_x1,&cf_xzyBubbleShadowEnabled);

    uVar5 = extraout_x1_00;

  }

  DAT_003e8db8 = uVar1;

  DAT_003e8db9 = FUN_002924c0(uVar3,uVar5,&cf_xzyBubbleShadowBreathEnabled);

  FUN_00299520(uVar3,extraout_x1_01,&cf_xzyBubbleShadowRadius);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  if (auVar7._0_8_ == 0) {

    DAT_003e6e30 = 8.0;

  }

  else {

    fVar6 = (float)FUN_00295460(uVar3,auVar7._8_8_,&cf_xzyBubbleShadowRadius);

    DAT_003e6e30 = (double)fVar6;

  }

  _objc_release(auVar7._0_8_);

  FUN_00299520(uVar3,extraout_x1_02,&cf_xzyBubbleShadowOpacity);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  if (auVar7._0_8_ == 0) {

    DAT_003e6e38 = 0.5;

  }

  else {

    fVar6 = (float)FUN_00295460(uVar3,auVar7._8_8_,&cf_xzyBubbleShadowOpacity);

    DAT_003e6e38 = (double)fVar6;

  }

  _objc_release(auVar7._0_8_);

  FUN_00299520(uVar3,extraout_x1_03,&cf_xzyBubbleShadowGap);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  if (auVar7._0_8_ == 0) {

    DAT_003e6e40 = 0.1;

  }

  else {

    fVar6 = (float)FUN_00295460(uVar3,auVar7._8_8_,&cf_xzyBubbleShadowGap);

    DAT_003e6e40 = (double)fVar6;

  }

  _objc_release(auVar7._0_8_);

  FUN_002a45e0(uVar3,extraout_x1_04,&cf_xzyBubbleShadowColorLight);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d70;

  DAT_003e8d70 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_05,&cf_xzyBubbleShadowColorDark);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d78;

  DAT_003e8d78 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_06,&cf_xzyBubbleShadowBreathFromLight);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d80;

  DAT_003e8d80 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_07,&cf_xzyBubbleShadowBreathFromDark);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d88;

  DAT_003e8d88 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_08,&cf_xzyBubbleShadowBreathToLight);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d90;

  DAT_003e8d90 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_09,&cf_xzyBubbleShadowBreathToDark);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8d98;

  DAT_003e8d98 = uVar4;

  _objc_release(uVar5);

  DAT_003e8dba = 0;

  _objc_release(uVar3);

  return;

}




