// FUN_001c487c @0x1c487c


void FUN_001c487c(void)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  cfstringStruct *pcVar7;

  long lVar8;

  cfstringStruct *pcVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 uVar13;

  double dVar14;

  undefined1 auVar15 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar15._0_8_;

  DAT_003ea920 = FUN_002924c0(uVar3,auVar15._8_8_,&cf_xzyDesktopLyricsEnabled);

  FUN_00299520(uVar3,extraout_x1,&cf_xzyDesktopLyricsPosition);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar13 = auVar15._8_8_;

  lVar4 = auVar15._0_8_;

  if (lVar4 == 0) {

    DAT_003ea928 = 0;

  }

  else {

    auVar15 = FUN_002974a0(lVar4);

    uVar13 = auVar15._8_8_;

    DAT_003ea928 = 0;

    if (auVar15._0_8_ < 3) {

      DAT_003ea928 = auVar15._0_8_;

    }

  }

  FUN_00299520(uVar3,uVar13,&cf_xzyDesktopLyricsYOffset);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar13 = auVar15._8_8_;

  lVar5 = auVar15._0_8_;

  if (lVar5 == 0) {

    DAT_003ea930 = 0;

  }

  else {

    DAT_003ea930 = FUN_00294860(lVar5);

    uVar13 = extraout_x1_00;

  }

  FUN_00299520(uVar3,uVar13,&cf_xzyDesktopLyricsFontSize);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar13 = auVar15._8_8_;

  lVar6 = auVar15._0_8_;

  if (lVar6 == 0) {

    DAT_003e70c8 = 15.0;

  }

  else {

    dVar14 = (double)FUN_00294860(lVar6);

    DAT_003e70c8 = 28.0;

    if (dVar14 <= 28.0) {

      DAT_003e70c8 = dVar14;

    }

    uVar13 = extraout_x1_01;

    if (DAT_003e70c8 <= 10.0) {

      DAT_003e70c8 = 10.0;

    }

  }

  FUN_002a45e0(uVar3,uVar13,&cf_xzyDesktopLyricsColorLight);

  pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  lVar8 = FUN_00297fa0();

  pcVar1 = &cf__1A1A1A;

  if (lVar8 != 0) {

    pcVar1 = pcVar7;

  }

  _objc_retain(pcVar1);

  puVar2 = PTR_cf__1A1A1A_003e70b8;

  PTR_cf__1A1A1A_003e70b8 = (undefined *)pcVar1;

  _objc_release(puVar2);

  FUN_002a45e0(uVar3,extraout_x1_02,&cf_xzyDesktopLyricsColorDark);

  pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  lVar8 = FUN_00297fa0();

  pcVar1 = &cf__F5F5F5;

  if (lVar8 != 0) {

    pcVar1 = pcVar9;

  }

  _objc_retain(pcVar1);

  puVar2 = PTR_cf__F5F5F5_003e70c0;

  PTR_cf__F5F5F5_003e70c0 = (undefined *)pcVar1;

  _objc_release(puVar2);

  FUN_00299520(uVar3,extraout_x1_03,&cf_xzyDesktopLyricsBGOpacity);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar13 = auVar15._8_8_;

  lVar8 = auVar15._0_8_;

  if (lVar8 == 0) {

    DAT_003e70d0 = 0.55;

  }

  else {

    dVar14 = (double)FUN_00294860(lVar8);

    DAT_003e70d0 = 1.0;

    if (dVar14 <= 1.0) {

      DAT_003e70d0 = dVar14;

    }

    uVar13 = extraout_x1_04;

    if (DAT_003e70d0 <= 0.0) {

      DAT_003e70d0 = 0.0;

    }

  }

  FUN_00299520(uVar3,uVar13,&cf_xzyDesktopLyricsBold);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar13 = auVar15._8_8_;

  lVar10 = auVar15._0_8_;

  if (lVar10 == 0) {

    DAT_003e70e0 = 1;

  }

  else {

    DAT_003e70e0 = FUN_002924e0(lVar10);

    uVar13 = extraout_x1_05;

  }

  FUN_00299520(uVar3,uVar13,&cf_xzyDesktopLyricsShadow);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar13 = auVar15._8_8_;

  lVar11 = auVar15._0_8_;

  if (lVar11 == 0) {

    DAT_003e70e1 = 1;

  }

  else {

    DAT_003e70e1 = FUN_002924e0(lVar11);

    uVar13 = extraout_x1_06;

  }

  FUN_00299520(uVar3,uVar13,&cf_xzyDesktopLyricsMaxWidth);

  lVar12 = _objc_retainAutoreleasedReturnValue();

  if (lVar12 == 0) {

    DAT_003e70d8 = 0.78;

  }

  else {

    dVar14 = (double)FUN_00294860(lVar12);

    DAT_003e70d8 = 1.0;

    if (dVar14 <= 1.0) {

      DAT_003e70d8 = dVar14;

    }

    if (DAT_003e70d8 <= 0.4) {

      DAT_003e70d8 = 0.4;

    }

  }

  uVar13 = DAT_003ea918;

  DAT_003ea918 = 0;

  _objc_release(uVar13);

  _objc_release(lVar12);

  _objc_release(lVar11);

  _objc_release(lVar10);

  _objc_release(lVar8);

  _objc_release(pcVar9);

  _objc_release(pcVar7);

  _objc_release(lVar6);

  _objc_release(lVar5);

  _objc_release(lVar4);

  _objc_release(uVar3);

  return;

}




