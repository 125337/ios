// updateTabs:shortcuts:profile:selectedIndex:labelsHidden:dark: @0x273c4c


/* Function Stack Size: 0x38 bytes */



void XZYHomeDockLiquidContainer::updateTabs_shortcuts_profile_selectedIndex_labelsHidden_dark_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6,

               bool param_7,bool param_8)



{

  uint uVar1;

  ulong uVar2;

  bool bVar3;

  bool bVar4;

  bool bVar5;

  int iVar6;

  uint uVar7;

  bool bVar8;

  ulong uVar9;

  long lVar10;

  undefined8 uVar11;

  ulong uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  long lVar16;

  long lVar17;

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

  ulong uVar18;

  ulong uVar19;

  ulong uVar20;

  double dVar21;

  double in_d1;

  double in_d2;

  double in_d3;

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  ulong local_a8;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined1 auStack_80 [8];

  undefined1 auStack_78 [8];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  iVar6 = FUN_0029c460(param_1);

  local_a8 = param_6;

  if (iVar6 != 0) {

    local_a8 = FUN_0029c2c0(param_1);

  }

  uVar9 = FUN_0029c2c0(param_1);

  uVar7 = FUN_00295f00(param_1);

  uVar11 = extraout_x1;

  if (uVar7 == 0) {

LAB_00273ce4:

    bVar3 = true;

  }

  else {

    auVar22 = FUN_002991a0(param_1);

    uVar11 = auVar22._8_8_;

    if ((auVar22._0_8_ & 1) != 0) goto LAB_00273ce4;

    FUN_002a4e40(param_1);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    lVar16 = FUN_00293860();

    lVar10 = FUN_00293860(param_3);

    if (lVar16 == lVar10) {

      bVar8 = FUN_00297c80(param_1);

      bVar3 = true;

      if ((param_7 == bVar8) && (uVar9 == local_a8)) {

        dVar21 = (double)FUN_00297e20(param_1);

        FUN_002925a0(param_1);

        bVar3 = in_d1 != in_d3 || dVar21 != in_d2;

      }

    }

    else {

      bVar3 = true;

    }

    _objc_release(uVar11);

    uVar11 = extraout_x1_00;

  }

  FUN_0029e840(param_1,uVar11,1);

  FUN_002a1c60(param_1,extraout_x1_01,param_3);

  FUN_002a1500(param_1,extraout_x1_02,param_4);

  FUN_002a0b40(param_1,extraout_x1_03,param_5);

  FUN_002a1180(param_1,extraout_x1_04,local_a8);

  FUN_0029f200(param_1,extraout_x1_05,param_7);

  FUN_0029db00(param_1,extraout_x1_06,param_8);

  auVar22 = FUN_00293860(param_3);

  lVar10 = auVar22._0_8_;

  lVar16 = lVar10;

  if (lVar10 < 2) {

    lVar16 = 1;

  }

  uVar20 = lVar16 - 1;

  if ((long)local_a8 < (long)uVar20) {

    FUN_002a0b20(param_1,auVar22._8_8_,local_a8 & ((long)local_a8 >> 0x3f ^ 0xffffffffffffffffU));

  }

  auVar22 = FUN_0029a900(param_1);

  lVar16 = lVar10;

  if (lVar10 < 3) {

    lVar16 = 2;

  }

  lVar17 = auVar22._0_8_;

  if (lVar16 + -2 <= auVar22._0_8_) {

    lVar17 = lVar16 + -2;

  }

  FUN_002a0b20(param_1,auVar22._8_8_,lVar17);

  while( true ) {

    FUN_002a4d60(param_1);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    uVar12 = FUN_00293860();

    _objc_release(uVar11);

    if (uVar12 <= uVar20) break;

    FUN_002a4d60(param_1);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_00297d80();

    uVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b340();

    _objc_release(uVar13);

    _objc_release(uVar11);

    FUN_002a4d60(param_1);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b3e0();

    _objc_release(uVar11);

  }

  FUN_002a4d60(param_1);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  uVar12 = FUN_00293860();

  _objc_release(uVar11);

  while (uVar12 < uVar20) {

    FUN_00299120(param_1);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_00298860(param_1,auVar22._8_8_,"selectTabButton:event:",auVar22._0_8_);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar22._0_8_);

    _objc_initWeak(auStack_78,param_1);

    local_a0 = PTR___NSConcreteStackBlock_003886f0;

    local_98 = 0xc2000000;

    local_90 = FUN_00274560;

    puStack_88 = &DAT_00390698;

    _objc_copyWeak(auStack_80,auStack_78);

    FUN_002a0300(uVar11,extraout_x1_07,&local_a0);

    FUN_002913c0(uVar11,extraout_x1_08,param_1,"beginTabButtonTouch:",1);

    FUN_002913c0(uVar11,extraout_x1_09,param_1,"cancelTabButtonTouch:",0x180);

    FUN_002a1940(uVar11,extraout_x1_10,1);

    FUN_00299100(param_1);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e360(uVar11,auVar22._8_8_,auVar22._0_8_);

    _objc_release(auVar22._0_8_);

    FUN_002a4d60(param_1);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_00291240(auVar22._0_8_,auVar22._8_8_,uVar11);

    _objc_release(auVar22._0_8_);

    _objc_destroyWeak(auStack_80);

    _objc_destroyWeak(auStack_78);

    _objc_release(uVar11);

    FUN_002a4d60(param_1);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    uVar12 = FUN_00293860();

    _objc_release(uVar11);

  }

  if (1 < lVar10) {

    uVar12 = 0;

    uVar18 = *(ulong *)PTR__UIAccessibilityTraitButton_003883a0;

    uVar19 = *(ulong *)PTR__UIAccessibilityTraitSelected_003883a8;

    do {

      FUN_002a4d60(param_1);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_00299500(auVar22._0_8_,auVar22._8_8_,uVar12);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar22._0_8_);

      FUN_002a1c80(uVar11,extraout_x1_11,uVar12);

      if ((param_7 & 1) == 0) {

        auVar22 = FUN_0029a520(param_1);

        uVar13 = auVar22._8_8_;

        bVar4 = auVar22._0_8_ != 0;

      }

      else {

        bVar4 = true;

        uVar13 = extraout_x1_12;

      }

      FUN_0029f200(uVar11,uVar13,bVar4);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_13,&cf_xzy_liquid_tab__ld);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c740(uVar11,auVar22._8_8_,auVar22._0_8_);

      _objc_release(auVar22._0_8_);

      FUN_00299500(param_3,extraout_x1_14,uVar12);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_00291b20(param_1,auVar22._8_8_,auVar22._0_8_,uVar11);

      _objc_release(auVar22._0_8_);

      uVar2 = uVar19;

      if (local_a8 != uVar12) {

        uVar2 = 0;

      }

      FUN_0029c780(uVar11,extraout_x1_15,uVar2 | uVar18);

      _objc_release(uVar11);

      uVar12 = uVar12 + 1;

    } while (uVar20 != uVar12);

  }

  FUN_0029af60(param_1);

  FUN_002a49e0(param_1);

  FUN_0029a960(param_1);

  auVar22 = _objc_retainAutoreleasedReturnValue();

  FUN_00291b20(param_1,auVar22._8_8_,param_5,auVar22._0_8_);

  _objc_release(auVar22._0_8_);

  FUN_0029a960(param_1);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  dVar21 = (double)FUN_00296360();

  FUN_0029a960(param_1);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00291e40();

  uVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  uVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d820(dVar21 * 0.5);

  _objc_release(uVar15);

  _objc_release(uVar14);

  _objc_release(uVar13);

  _objc_release(uVar11);

  FUN_0029a960(param_1);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00291e40();

  auVar22 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d4a0(auVar22._0_8_,auVar22._8_8_,1);

  _objc_release(auVar22._0_8_);

  _objc_release(uVar11);

  if ((param_8 & 1) == 0) {

    FUN_00293f00(&_OBJC_CLASS___UIColor);

    uVar11 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_002a64a0();

    uVar11 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_00290e40(param_1);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00291e40();

  auVar22 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f40(auVar22._0_8_,auVar22._8_8_,uVar11);

  _objc_release(auVar22._0_8_);

  _objc_release(uVar13);

  _objc_release(uVar11);

  FUN_0023c784();

  lVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00290e40(param_1);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00291e40();

  uVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00296480();

  auVar22 = _objc_retainAutoreleasedReturnValue();

  lVar17 = auVar22._0_8_;

  if (lVar17 == lVar16) {

    _objc_release(lVar17);

  }

  else {

    uVar12 = FUN_002977c0(lVar17,auVar22._8_8_,lVar16);

    _objc_release(lVar17);

    _objc_release(uVar13);

    _objc_release(uVar11);

    if ((uVar12 & 1) != 0) goto LAB_002743ac;

    FUN_00290e40(param_1);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_00291e40();

    auVar22 = _objc_retainAutoreleasedReturnValue();

    uVar13 = auVar22._0_8_;

    FUN_0029ec00(uVar13,auVar22._8_8_,lVar16);

  }

  _objc_release(uVar13);

  _objc_release(uVar11);

LAB_002743ac:

  FUN_00291ae0(param_1);

  auVar22 = FUN_002a5580(param_1);

  uVar1 = 0;

  if (uVar9 == local_a8) {

    uVar1 = uVar7;

  }

  if (((auVar22._0_8_ & 1) == 0) && ((uVar1 & 1) == 0)) {

    FUN_002946e0(param_1,auVar22._8_8_,uVar7);

    auVar22 = FUN_0029a520(param_1);

    if (auVar22._0_8_ != 1) {

      uVar11 = 2;

      if (local_a8 != uVar20) {

        uVar11 = 0;

      }

      FUN_002a0840(param_1,auVar22._8_8_,uVar11);

    }

  }

  lVar17 = FUN_0029a520(param_1);

  if ((lVar17 == 0) && (lVar17 = FUN_0029a900(param_1), -1 < lVar17)) {

    lVar17 = FUN_0029a900(param_1);

    bVar4 = lVar17 < (long)uVar20;

  }

  else {

    bVar4 = false;

  }

  if (1 < lVar10) {

    uVar12 = 0;

    do {

      if (bVar4) {

        uVar18 = FUN_0029a900(param_1);

        bVar5 = uVar12 == uVar18;

      }

      else {

        bVar5 = false;

      }

      FUN_002a4d60(param_1);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_00299500(auVar22._0_8_,auVar22._8_8_,uVar12);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      FUN_002a2420(auVar23._0_8_,auVar23._8_8_,bVar5);

      _objc_release(auVar23._0_8_);

      _objc_release(auVar22._0_8_);

      uVar12 = uVar12 + 1;

    } while (uVar20 != uVar12);

  }

  uVar20 = FUN_00298c60(param_1);

  if ((uVar20 & 1) != 0) {

    FUN_0029ad40(param_1);

  }

  if (bVar3) {

    auVar22 = FUN_002a5580(param_1);

    if ((auVar22._0_8_ & 1) == 0) {

      uVar1 = 0;

      if (uVar9 != local_a8) {

        uVar1 = uVar7;

      }

      FUN_00297ea0(param_1,auVar22._8_8_,uVar1);

    }

  }

  _objc_release(lVar16);

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




