// FUN_001079e0 @0x1079e0


void FUN_001079e0(void)



{

  undefined1 uVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

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

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  undefined8 extraout_x1_19;

  undefined8 extraout_x1_20;

  undefined8 extraout_x1_21;

  undefined8 extraout_x1_22;

  undefined8 extraout_x1_23;

  undefined8 extraout_x1_24;

  undefined8 extraout_x1_25;

  undefined8 uVar5;

  undefined8 extraout_x1_26;

  float fVar6;

  undefined1 auVar7 [16];

  

  if ((DAT_003e8118 & 1) != 0) {

    return;

  }

  DAT_003e8118 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar7._0_8_;

  iVar2 = FUN_002924c0(uVar3,auVar7._8_8_,&cf_coversEnabled);

  uVar5 = extraout_x1;

  uVar1 = 0;

  if (iVar2 != 0) {

    uVar1 = FUN_002924c0(uVar3,extraout_x1,&cf_xzyTimeLabelEnabled);

    uVar5 = extraout_x1_00;

  }

  DAT_003e8119 = uVar1;

  fVar6 = (float)FUN_00295460(uVar3,uVar5,&cf_xzyTimeLabelFontSize);

  DAT_003e68f0 = (double)fVar6;

  if (fVar6 <= 0.0) {

    DAT_003e68f0 = 9.0;

  }

  DAT_003e811a = FUN_002924c0(uVar3,extraout_x1_01,&cf_xzyTimeLabelShowCheckmark);

  auVar7 = FUN_00297480(uVar3,extraout_x1_02,&cf_xzyTimeLabelColorStyle);

  DAT_003e8120 = auVar7._0_8_;

  auVar7 = FUN_00297480(uVar3,auVar7._8_8_,&cf_xzyTimeLabelPosition);

  DAT_003e8128 = auVar7._0_8_;

  FUN_002a45e0(uVar3,auVar7._8_8_,&cf_xzyTimeLabelCustomColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e80c0;

  DAT_003e80c0 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_03,&cf_xzyTimeLabelSenderColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e80c8;

  DAT_003e80c8 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_04,&cf_xzyTimeLabelReceiverColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e80d0;

  DAT_003e80d0 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_05,&cf_xzyTimeLabelSenderSymbol);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e80d8;

  DAT_003e80d8 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_06,&cf_xzyTimeLabelReceiverSymbol);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e80e0;

  DAT_003e80e0 = uVar4;

  _objc_release(uVar5);

  fVar6 = (float)FUN_00295460(uVar3,extraout_x1_07,&cf_xzyTimeLabelOffsetX);

  DAT_003e8130 = (double)fVar6;

  fVar6 = (float)FUN_00295460(uVar3,extraout_x1_08,&cf_xzyTimeLabelOffsetY);

  DAT_003e8138 = (double)fVar6;

  fVar6 = (float)FUN_00295460(uVar3,extraout_x1_09,&cf_xzyTimeLabelSenderBubbleExtend);

  DAT_003e8140 = (double)fVar6;

  fVar6 = (float)FUN_00295460(uVar3,extraout_x1_10,&cf_xzyTimeLabelReceiverBubbleExtend);

  DAT_003e8148 = (double)fVar6;

  DAT_003e8150 = FUN_002924c0(uVar3,extraout_x1_11,&cf_xzyTimeLabelBubbleExtendAuto);

  DAT_003e8151 = FUN_002924c0(uVar3,extraout_x1_12,&cf_xzyTimeLabelSuffixEnabled);

  FUN_002a45e0(uVar3,extraout_x1_13,&cf_xzyTimeLabelSenderSuffixText);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e80e8;

  DAT_003e80e8 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_14,&cf_xzyTimeLabelReceiverSuffixText);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e80f0;

  DAT_003e80f0 = uVar4;

  _objc_release(uVar5);

  DAT_003e8152 = FUN_002924c0(uVar3,extraout_x1_15,&cf_xzyTimeLabelSenderLeft);

  DAT_003e8153 = FUN_002924c0(uVar3,extraout_x1_16,&cf_xzyTimeLabelNoMerge);

  auVar7 = FUN_00297480(uVar3,extraout_x1_17,&cf_xzyTimeLabelFormatStyle);

  DAT_003e8158 = auVar7._0_8_;

  auVar7 = FUN_00297480(uVar3,auVar7._8_8_,&cf_xzyTimeLabelLocaleStyle);

  DAT_003e8160 = auVar7._0_8_;

  FUN_00297480(uVar3,auVar7._8_8_,&cf_xzyTimeLabelSenderPlaceholderCount);

  FUN_00297480(uVar3,extraout_x1_18,&cf_xzyTimeLabelReceiverPlaceholderCount);

  FUN_002a45e0(uVar3,extraout_x1_19,&cf_xzyTimeLabelSenderColorLight);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e80f8;

  DAT_003e80f8 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_20,&cf_xzyTimeLabelSenderColorDark);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8100;

  DAT_003e8100 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_21,&cf_xzyTimeLabelReceiverColorLight);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8108;

  DAT_003e8108 = uVar4;

  _objc_release(uVar5);

  FUN_002a45e0(uVar3,extraout_x1_22,&cf_xzyTimeLabelReceiverColorDark);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = DAT_003e8110;

  DAT_003e8110 = uVar4;

  _objc_release(uVar5);

  iVar2 = FUN_002924c0(uVar3,extraout_x1_23,&cf_coversEnabled);

  uVar5 = extraout_x1_24;

  uVar1 = 0;

  if (iVar2 != 0) {

    uVar1 = FUN_002924c0(uVar3,extraout_x1_24,&cf_mesMsgMergeBubbleEnabled);

    uVar5 = extraout_x1_25;

  }

  DAT_003e8168 = uVar1;

  iVar2 = FUN_002924c0(uVar3,uVar5,&cf_coversEnabled);

  uVar1 = 0;

  if (iVar2 != 0) {

    uVar1 = FUN_002924c0(uVar3,extraout_x1_26,&cf_mesMsgMergeEnabled);

  }

  DAT_003e8169 = uVar1;

  _objc_release(uVar3);

  return;

}




