// FUN_002404c8 @0x2404c8


void FUN_002404c8(void)



{

  bool bVar1;

  undefined1 uVar2;

  int iVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  cfstringStruct *pcVar10;

  undefined **ppuVar11;

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

  double dVar12;

  undefined1 auVar13 [16];

  

  FUN_0024d828();

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar13._0_8_;

  iVar3 = FUN_002924c0(uVar4,auVar13._8_8_,&cf_coversEnabled);

  uVar7 = extraout_x1;

  uVar2 = 0;

  if (iVar3 != 0) {

    uVar2 = FUN_002924c0(uVar4,extraout_x1,&cf_xzyHomeBottomBarStyleEnabled);

    uVar7 = extraout_x1_00;

  }

  DAT_003eb1ca = uVar2;

  auVar13 = FUN_00297480(uVar4,uVar7,&cf_xzyHomeBottomBarStyleMode);

  uVar7 = auVar13._8_8_;

  lVar6 = auVar13._0_8_;

  if (99 < lVar6) {

    auVar13 = FUN_0024daec(lVar6);

    uVar7 = auVar13._8_8_;

    if ((auVar13._0_8_ & 1) != 0) goto LAB_00240554;

  }

  if (2 < lVar6 - 2U) {

    lVar6 = 1;

  }

LAB_00240554:

  DAT_003e7298 = lVar6;

  DAT_003eb269 = FUN_002924c0(uVar4,uVar7,&cf_xzyHomeBottomBarFollowThemeIcon);

  FUN_00299520(uVar4,extraout_x1_01,&cf_xzyHomeBottomBarBadgeEnabled);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  if (auVar13._0_8_ == 0) {

    DAT_003e7268 = 1;

  }

  else {

    DAT_003e7268 = FUN_002924c0(uVar4,auVar13._8_8_,&cf_xzyHomeBottomBarBadgeEnabled);

  }

  _objc_release(auVar13._0_8_);

  DAT_003eb290 = FUN_002924c0(uVar4,extraout_x1_02,&cf_xzyHomeBottomBarWiderDock);

  FUN_00299520(uVar4,extraout_x1_03,&cf_xzyHomeBottomBarFloatingMenuSpread);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  if (auVar13._0_8_ == 0) {

    DAT_003eb268 = 1;

  }

  else {

    DAT_003eb268 = FUN_002924c0(uVar4,auVar13._8_8_,&cf_xzyHomeBottomBarFloatingMenuSpread);

  }

  _objc_release(auVar13._0_8_);

  DAT_003eb428 = FUN_002924c0(uVar4,extraout_x1_04,&cf_xzyHomeBottomBarTabLabelHidden);

  FUN_002944e0(uVar4,extraout_x1_05,&cf_xzyHomeBottomBarCustomIconCodes);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00293860();

  uVar7 = 0;

  if (lVar6 != 0) {

    uVar7 = FUN_002937a0(uVar5);

  }

  uVar8 = DAT_003eb160;

  DAT_003eb160 = uVar7;

  _objc_release(uVar8);

  FUN_002a45e0(uVar4,extraout_x1_06,&cf_xzyHomeBottomBarIconColorLight);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  uVar9 = FUN_002937a0();

  uVar7 = DAT_003eb168;

  DAT_003eb168 = uVar9;

  _objc_release(uVar7);

  _objc_release(uVar8);

  FUN_002a45e0(uVar4,extraout_x1_07,&cf_xzyHomeBottomBarIconColorDark);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  uVar9 = FUN_002937a0();

  uVar7 = DAT_003eb170;

  DAT_003eb170 = uVar9;

  _objc_release(uVar7);

  _objc_release(uVar8);

  dVar12 = (double)FUN_00294840(uVar4,extraout_x1_08,&cf_xzyHomeBottomBarIconSize);

  bVar1 = true;

  if ((dVar12 <= 80.0) && (bVar1 = false, !NAN(dVar12))) {

    bVar1 = dVar12 < 30.0;

  }

  DAT_003e7250 = 50.0;

  if (!bVar1) {

    DAT_003e7250 = dVar12;

  }

  FUN_002a45e0(uVar4,extraout_x1_09,&cf_xzyHomeBottomBarSearchText);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00297fa0();

  if (lVar6 == 0) {

    pcVar10 = &cf_d__;

  }

  else {

    pcVar10 = (cfstringStruct *)FUN_002937a0(uVar7);

  }

  uVar8 = DAT_003eb178;

  DAT_003eb178 = pcVar10;

  _objc_release(uVar8);

  FUN_00291d40(uVar4,extraout_x1_10,&cf_xzyHomeBottomBarPopupItems);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00293860();

  if (lVar6 == 0) {

    ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_003bf028;

  }

  else {

    ppuVar11 = (undefined **)FUN_002937a0(uVar8);

  }

  uVar9 = DAT_003eb180;

  DAT_003eb180 = ppuVar11;

  _objc_release(uVar9);

  FUN_0029b240(DAT_003eb188);

  FUN_00241444();

  FUN_0029b240(DAT_003eb198);

  FUN_0029b240(DAT_003eb190);

  DAT_003eb288 = 0;

  FUN_0029b240(DAT_003eb1c0);

  uVar9 = DAT_003eb1a0;

  DAT_003eb280 = 0;

  DAT_003eb1a0 = 0;

  _objc_release(uVar9);

  uVar9 = DAT_003eb1a8;

  DAT_003eb1a8 = 0;

  _objc_release(uVar9);

  DAT_003eb1cc = 0;

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar5);

  _objc_release(uVar4);

  return;

}




