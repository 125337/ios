// FUN_0012da64 @0x12da64


void FUN_0012da64(void)



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

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined1 auVar5 [16];

  

  if ((DAT_003e8560 & 1) != 0) {

    return;

  }

  DAT_003e8560 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar5._0_8_;

  iVar1 = FUN_002924c0(uVar2,auVar5._8_8_,&cf_coversEnabled);

  if (iVar1 == 0) {

    DAT_003e8561 = 0;

    DAT_003e85d8 = 0;

    DAT_003e85d9 = 0;

    uVar4 = extraout_x1;

  }

  else {

    DAT_003e8561 = FUN_002924c0(uVar2,extraout_x1,&cf_xzyColorSchemeNicknameEnabled);

    DAT_003e85d8 = FUN_002924c0(uVar2,extraout_x1_00,&cf_xzyColorSchemeMessageEnabled);

    DAT_003e85d9 = FUN_002924c0(uVar2,extraout_x1_01,&cf_xzyColorSchemeRedPacketEnabled);

    uVar4 = extraout_x1_02;

  }

  DAT_003e85da = FUN_002924c0(uVar2,uVar4,&cf_xzyColorSchemeDisableConfigJson);

  FUN_002a45e0(uVar2,extraout_x1_03,&cf_xzyColorSchemeNicknameLightHex);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8510;

  DAT_003e8510 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_04,&cf_xzyColorSchemeNicknameDarkHex);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8518;

  DAT_003e8518 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_05,&cf_xzyColorSchemeSenderTextLight);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8520;

  DAT_003e8520 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_06,&cf_xzyColorSchemeSenderTextDark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8528;

  DAT_003e8528 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_07,&cf_xzyColorSchemeReceiverTextLight);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8530;

  DAT_003e8530 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_08,&cf_xzyColorSchemeReceiverTextDark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8538;

  DAT_003e8538 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_09,&cf_xzyColorSchemeRedPacketSenderLight);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8540;

  DAT_003e8540 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_10,&cf_xzyColorSchemeRedPacketSenderDark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8548;

  DAT_003e8548 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_11,&cf_xzyColorSchemeRedPacketReceiverLight);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8550;

  DAT_003e8550 = uVar3;

  _objc_release(uVar4);

  FUN_002a45e0(uVar2,extraout_x1_12,&cf_xzyColorSchemeRedPacketReceiverDark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = DAT_003e8558;

  DAT_003e8558 = uVar3;

  _objc_release(uVar4);

  _objc_release(uVar2);

  return;

}




