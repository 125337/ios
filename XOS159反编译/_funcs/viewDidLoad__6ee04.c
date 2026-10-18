// viewDidLoad @0x6ee04


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::viewDidLoad(ID param_1,SEL param_2)



{

  int iVar1;

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

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  float fVar5;

  double dVar6;

  undefined1 auVar7 [16];

  ID local_50;

  class_t *pcStack_48;

  

  pcStack_48 = &objc::class_t::_0x016d26c7;

  local_50 = param_1;

  _objc_msgSendSuper2(&local_50,"viewDidLoad");

  FUN_002a1f60(param_1,extraout_x1,&cf_eW_ln_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar7._0_8_,auVar7._8_8_,uVar2);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar2);

  auVar7 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar2 = FUN_00296f40(auVar7._0_8_,auVar7._8_8_,&::cf___,0,0,0);

  FUN_00299140(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cea0(auVar7._0_8_,auVar7._8_8_,uVar2);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar2);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar7._0_8_;

  FUN_002a45e0(uVar3,auVar7._8_8_,&cf_ttsSelectedVoice);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1200(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_002a45e0(uVar3,extraout_x1_00,&cf_ttsSelectedVoiceName);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1220(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_002a45e0(uVar3,extraout_x1_01,&cf_ttsSelectedBgSound);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1140(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  fVar5 = (float)FUN_00295460(uVar3,extraout_x1_02,&cf_ttsSpeechRate);

  FUN_002a18a0((double)fVar5,param_1);

  dVar6 = (double)FUN_002a4080(param_1);

  uVar2 = extraout_x1_03;

  if (dVar6 <= 0.0) {

    FUN_002a18a0(0x3ff0000000000000,param_1);

    dVar6 = (double)FUN_002a4080(param_1);

    FUN_0029e500((float)dVar6,uVar3,extraout_x1_04,&cf_ttsSpeechRate);

    uVar2 = extraout_x1_05;

  }

  fVar5 = (float)FUN_00295460(uVar3,uVar2,&cf_ttsVolume);

  FUN_002a2640((double)fVar5,param_1);

  dVar6 = (double)FUN_002a63e0(param_1);

  uVar2 = extraout_x1_06;

  if (dVar6 <= 0.0) {

    FUN_002a2640(0x3ff0000000000000,param_1);

    dVar6 = (double)FUN_002a63e0(param_1);

    FUN_0029e500((float)dVar6,uVar3,extraout_x1_07,&cf_ttsVolume);

    uVar2 = extraout_x1_08;

  }

  fVar5 = (float)FUN_00295460(uVar3,uVar2,&cf_ttsBgVolume);

  FUN_0029d040((double)fVar5,param_1);

  dVar6 = (double)FUN_002923e0(param_1);

  uVar2 = extraout_x1_09;

  if (dVar6 <= 0.0) {

    FUN_0029d040(0x3fb999999999999a,param_1);

    dVar6 = (double)FUN_002923e0(param_1);

    FUN_0029e500((float)dVar6,uVar3,extraout_x1_10,&cf_ttsBgVolume);

    uVar2 = extraout_x1_11;

  }

  FUN_002a45e0(uVar3,uVar2,&cf_ttsTriggerPrefix);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a2220(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_002a5780(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar7._8_8_;

  if (auVar7._0_8_ != 0) {

    FUN_002a5780(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar4 = FUN_00297fa0();

    _objc_release(uVar2);

    _objc_release(auVar7._0_8_);

    uVar2 = extraout_x1_12;

    if (lVar4 != 0) goto LAB_0006f140;

  }

  FUN_002a2220(param_1,uVar2,&cf_zz);

  FUN_002a5780(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(uVar3,auVar7._8_8_,auVar7._0_8_,&cf_ttsTriggerPrefix);

  _objc_release(auVar7._0_8_);

LAB_0006f140:

  FUN_002a4a40(uVar3);

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a2620(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d020(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a2600(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d2e0(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_0029f0a0(param_1,extraout_x1_13,0);

  FUN_002a2d80(param_1);

  FUN_002982a0(param_1);

  iVar1 = FUN_002924c0(uVar3,extraout_x1_14,&cf_ttsLocalMode);

  if (iVar1 == 0) {

    FUN_002980c0(param_1);

  }

  else {

    FUN_002981e0(param_1);

  }

  FUN_0006f2c4(0x3ff0000000000000);

  _objc_release(uVar3);

  return;

}




