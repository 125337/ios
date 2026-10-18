// FUN_00224068 @0x224068


void FUN_00224068(void)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  cfstringStruct *pcVar5;

  long lVar6;

  cfstringStruct *pcVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar15;

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

  double dVar16;

  undefined1 auVar17 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar17._0_8_;

  DAT_003eaf98 = FUN_002924c0(uVar2,auVar17._8_8_,&cf_xzyMesReferRoundedEnabled);

  FUN_00299520(uVar2,extraout_x1,&cf_xzyMesReferRoundedRadius);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  uVar15 = auVar17._8_8_;

  lVar3 = auVar17._0_8_;

  if (lVar3 == 0) {

    DAT_003e7178 = 15.0;

  }

  else {

    dVar16 = (double)FUN_00294860(lVar3);

    DAT_003e7178 = 40.0;

    if (dVar16 <= 40.0) {

      DAT_003e7178 = dVar16;

    }

    uVar15 = extraout_x1_00;

    if (DAT_003e7178 <= 0.0) {

      DAT_003e7178 = 0.0;

    }

  }

  FUN_00299520(uVar2,uVar15,&cf_xzyMesReferRoundedBorderWidth);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  uVar15 = auVar17._8_8_;

  lVar4 = auVar17._0_8_;

  if (lVar4 == 0) {

    DAT_003eafc8 = 0.0;

  }

  else {

    dVar16 = (double)FUN_00294860(lVar4);

    DAT_003eafc8 = 10.0;

    if (dVar16 <= 10.0) {

      DAT_003eafc8 = dVar16;

    }

    uVar15 = extraout_x1_01;

    if (DAT_003eafc8 <= 0.0) {

      DAT_003eafc8 = 0.0;

    }

  }

  FUN_002a45e0(uVar2,uVar15,&cf_xzyMesReferRoundedBorderColorLight);

  pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00297fa0();

  pcVar1 = &cf__C8C8C8;

  if (lVar6 != 0) {

    pcVar1 = pcVar5;

  }

  _objc_retain(pcVar1);

  uVar15 = DAT_003eaf18;

  DAT_003eaf18 = pcVar1;

  _objc_release(uVar15);

  FUN_002a45e0(uVar2,extraout_x1_02,&cf_xzyMesReferRoundedBorderColorDark);

  pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00297fa0();

  pcVar1 = &cf__3A3A3C;

  if (lVar6 != 0) {

    pcVar1 = pcVar7;

  }

  _objc_retain(pcVar1);

  uVar15 = DAT_003eaf20;

  DAT_003eaf20 = pcVar1;

  _objc_release(uVar15);

  DAT_003eafd0 = FUN_002924c0(uVar2,extraout_x1_03,&cf_xzyMesReferColorEnabled);

  FUN_002a45e0(uVar2,extraout_x1_04,&cf_xzyMesReferColorLight);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00297fa0();

  uVar15 = 0;

  if (lVar6 != 0) {

    uVar15 = uVar8;

  }

  _objc_retain(uVar15);

  uVar9 = DAT_003eaf28;

  DAT_003eaf28 = uVar15;

  _objc_release(uVar9);

  FUN_002a45e0(uVar2,extraout_x1_05,&cf_xzyMesReferColorDark);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00297fa0();

  uVar15 = 0;

  if (lVar6 != 0) {

    uVar15 = uVar9;

  }

  _objc_retain(uVar15);

  uVar10 = DAT_003eaf30;

  DAT_003eaf30 = uVar15;

  _objc_release(uVar10);

  DAT_003eafd1 = FUN_002924c0(uVar2,extraout_x1_06,&cf_xzyMesReferTextColorEnabled);

  FUN_002a45e0(uVar2,extraout_x1_07,&cf_xzyMesReferTextColorSelfLight);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00297fa0();

  uVar15 = 0;

  if (lVar6 != 0) {

    uVar15 = uVar10;

  }

  _objc_retain(uVar15);

  uVar11 = DAT_003eaf38;

  DAT_003eaf38 = uVar15;

  _objc_release(uVar11);

  FUN_002a45e0(uVar2,extraout_x1_08,&cf_xzyMesReferTextColorSelfDark);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00297fa0();

  uVar15 = 0;

  if (lVar6 != 0) {

    uVar15 = uVar11;

  }

  _objc_retain(uVar15);

  uVar12 = DAT_003eaf40;

  DAT_003eaf40 = uVar15;

  _objc_release(uVar12);

  FUN_002a45e0(uVar2,extraout_x1_09,&cf_xzyMesReferTextColorOtherLight);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00297fa0();

  uVar15 = 0;

  if (lVar6 != 0) {

    uVar15 = uVar12;

  }

  _objc_retain(uVar15);

  uVar13 = DAT_003eaf48;

  DAT_003eaf48 = uVar15;

  _objc_release(uVar13);

  FUN_002a45e0(uVar2,extraout_x1_10,&cf_xzyMesReferTextColorOtherDark);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00297fa0();

  uVar15 = 0;

  if (lVar6 != 0) {

    uVar15 = uVar13;

  }

  _objc_retain(uVar15);

  uVar14 = DAT_003eaf50;

  DAT_003eaf50 = uVar15;

  _objc_release(uVar14);

  DAT_003eafb0 = FUN_002924c0(uVar2,extraout_x1_11,&cf_xzyMesReferRoundedFlipOrder);

  FUN_00227ebc(DAT_003eaf18);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  uVar15 = DAT_003eaf58;

  DAT_003eaf58 = uVar14;

  _objc_release(uVar15);

  FUN_00227ebc(DAT_003eaf20);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  uVar15 = DAT_003eaf60;

  DAT_003eaf60 = uVar14;

  _objc_release(uVar15);

  FUN_00227ebc(DAT_003eaf28);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  uVar15 = DAT_003eaf68;

  DAT_003eaf68 = uVar14;

  _objc_release(uVar15);

  FUN_00227ebc(DAT_003eaf30);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  uVar15 = DAT_003eaf70;

  DAT_003eaf70 = uVar14;

  _objc_release(uVar15);

  FUN_00227ebc(DAT_003eaf38);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  uVar15 = DAT_003eaf78;

  DAT_003eaf78 = uVar14;

  _objc_release(uVar15);

  FUN_00227ebc(DAT_003eaf40);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  uVar15 = DAT_003eaf80;

  DAT_003eaf80 = uVar14;

  _objc_release(uVar15);

  FUN_00227ebc(DAT_003eaf48);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  uVar15 = DAT_003eaf88;

  DAT_003eaf88 = uVar14;

  _objc_release(uVar15);

  FUN_00227ebc(DAT_003eaf50);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  uVar15 = DAT_003eaf90;

  DAT_003eaf90 = uVar14;

  _objc_release(uVar15);

  DAT_003eb040 = DAT_003eb040 + 1;

  _objc_release(uVar13);

  _objc_release(uVar12);

  _objc_release(uVar11);

  _objc_release(uVar10);

  _objc_release(uVar9);

  _objc_release(uVar8);

  _objc_release(pcVar7);

  _objc_release(pcVar5);

  _objc_release(lVar4);

  _objc_release(lVar3);

  _objc_release(uVar2);

  return;

}




