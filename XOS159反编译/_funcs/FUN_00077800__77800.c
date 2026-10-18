// FUN_00077800 @0x77800


void FUN_00077800(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  cfstringStruct *pcVar6;

  undefined1 auVar7 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(uVar4,auVar7._8_8_,auVar7._0_8_);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  FUN_002984e0(uVar5);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_00295f60(auVar7._0_8_,auVar7._8_8_,&cf_bearer);

  _objc_release(auVar7._0_8_);

  uVar2 = uVar5;

  if (iVar1 != 0) {

    FUN_002a47c0(uVar5,extraout_x1,7);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar5);

  }

  auVar7 = FUN_00297fa0(uVar2);

  uVar3 = uVar2;

  if ((1 < auVar7._0_8_) &&

     (((iVar1 = FUN_00295f60(uVar2,auVar7._8_8_,&cf__), uVar4 = extraout_x1_00, iVar1 != 0 &&

       (auVar7 = FUN_00295fa0(uVar2,extraout_x1_00,&cf__), uVar4 = auVar7._8_8_,

       (auVar7._0_8_ & 1) != 0)) ||

      ((iVar1 = FUN_00295f60(uVar2,uVar4,&cf__), iVar1 != 0 &&

       (iVar1 = FUN_00295fa0(uVar2,extraout_x1_01,&cf__), iVar1 != 0)))))) {

    auVar7 = FUN_00297fa0(uVar2);

    FUN_002a4800(uVar2,auVar7._8_8_,1,auVar7._0_8_ + -2);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

  }

  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(uVar3,auVar7._8_8_,auVar7._0_8_);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  _objc_release(auVar7._0_8_);

  auVar7 = FUN_00297fa0(uVar2);

  if (auVar7._0_8_ == 0) {

    FUN_0029b4a0(*(undefined8 *)(param_1 + 0x28),auVar7._8_8_,&cf_ttsCustomFvToken);

    FUN_0029d080(*(undefined8 *)(param_1 + 0x28),extraout_x1_04,0,&cf_ttsFvAutoCheckinEnabled);

    pcVar6 = &cf_ttsFvLastAutoCheckinDateAtNine;

    uVar3 = extraout_x1_05;

  }

  else {

    FUN_002a0060(*(undefined8 *)(param_1 + 0x28),auVar7._8_8_,uVar2,&cf_ttsCustomFvToken);

    auVar7 = FUN_00297820(uVar2,extraout_x1_02,*(undefined8 *)(param_1 + 0x30));

    if ((auVar7._0_8_ & 1) != 0) goto LAB_00077a5c;

    FUN_0029b4a0(*(undefined8 *)(param_1 + 0x28),auVar7._8_8_,&cf_ttsFvLastAutoCheckinDateAtNine);

    pcVar6 = &cf_ttsFvLastCheckinMessage;

    uVar3 = extraout_x1_03;

  }

  FUN_0029b4a0(*(undefined8 *)(param_1 + 0x28),uVar3,pcVar6);

LAB_00077a5c:

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_00077430();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x38));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  auVar7 = FUN_00297fa0(uVar2);

  if (auVar7._0_8_ != 0) {

    FUN_002a3540(*(undefined8 *)(param_1 + 0x38),auVar7._8_8_,&cf_FineVoiceToken,&cf__OX_SKbR);

  }

  _objc_release(uVar2);

  return;

}




