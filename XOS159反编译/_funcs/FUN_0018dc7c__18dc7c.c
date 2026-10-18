// FUN_0018dc7c @0x18dc7c


void FUN_0018dc7c(void)



{

  cfstringStruct *pcVar1;

  ulong uVar2;

  ulong uVar3;

  ulong uVar4;

  ulong uVar5;

  ulong uVar6;

  cfstringStruct *pcVar7;

  ulong uVar8;

  long lVar9;

  long lVar10;

  bool bVar11;

  bool bVar12;

  bool bVar13;

  bool bVar14;

  bool bVar15;

  int iVar16;

  uint uVar17;

  uint uVar18;

  undefined8 uVar19;

  cfstringStruct *pcVar20;

  cfstringStruct *pcVar21;

  long lVar22;

  long lVar23;

  long lVar24;

  cfstringStruct *pcVar25;

  cfstringStruct *pcVar26;

  long lVar27;

  long lVar28;

  long lVar29;

  long lVar30;

  ulong uVar31;

  long lVar32;

  long lVar33;

  long lVar34;

  long lVar35;

  long lVar36;

  long lVar37;

  long lVar38;

  cfstringStruct *pcVar39;

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

  undefined8 uVar40;

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  long lVar41;

  cfstringStruct *pcVar42;

  uint uVar43;

  float fVar44;

  float fVar45;

  float fVar46;

  double dVar47;

  double dVar48;

  double dVar49;

  double dVar50;

  double dVar51;

  double dVar52;

  double dVar53;

  undefined1 auVar54 [16];

  undefined1 auVar55 [16];

  undefined1 auVar56 [16];

  undefined1 auVar57 [16];

  undefined1 auVar58 [16];

  undefined1 auVar59 [16];

  long local_1b8;

  undefined *local_d8;

  undefined8 local_d0;

  code *local_c8;

  undefined *puStack_c0;

  long local_b8;

  long local_b0;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar54 = _objc_retainAutoreleasedReturnValue();

  uVar19 = auVar54._0_8_;

  FUN_002a45e0(uVar19,auVar54._8_8_,&cf_aabDateTimeColorLight);

  pcVar20 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar20 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar20;

  }

  _objc_retain();

  _objc_release(pcVar20);

  FUN_002a45e0(uVar19,extraout_x1,&cf_aabDateTimeColorDark);

  pcVar21 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar20 = &cf___;

  if (pcVar21 != (cfstringStruct *)0x0) {

    pcVar20 = pcVar21;

  }

  _objc_retain();

  _objc_release(pcVar21);

  lVar22 = FUN_0018e9f8(uVar19,2);

  lVar23 = FUN_0018e9f8(uVar19,3);

  lVar24 = FUN_0018e9f8(uVar19,0);

  auVar54 = FUN_0018e9f8(uVar19,1);

  auVar55 = FUN_00297480(uVar19,auVar54._8_8_,&cf_aabDateTimeFormatStyle);

  auVar56 = FUN_00297480(uVar19,auVar55._8_8_,&cf_aabDateTimeLocaleStyle);

  auVar57 = FUN_00297480(uVar19,auVar56._8_8_,&cf_aabDateTimeDisplayMode);

  auVar58 = FUN_00297480(uVar19,auVar57._8_8_,&cf_aabDateTimeDisplayDirection);

  FUN_002a45e0(uVar19,auVar58._8_8_,&cf_aabDateTimeCustomLine1);

  pcVar25 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar21 = &cf___;

  if (pcVar25 != (cfstringStruct *)0x0) {

    pcVar21 = pcVar25;

  }

  _objc_retain();

  _objc_release(pcVar25);

  FUN_002a45e0(uVar19,extraout_x1_00,&cf_aabDateTimeCustomLine2);

  pcVar26 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar25 = &cf___;

  if (pcVar26 != (cfstringStruct *)0x0) {

    pcVar25 = pcVar26;

  }

  _objc_retain();

  _objc_release(pcVar26);

  FUN_002a45e0(uVar19,extraout_x1_01,&cf_aabDateTimeCustomLine1Other);

  auVar59 = _objc_retainAutoreleasedReturnValue();

  pcVar26 = auVar59._0_8_;

  FUN_002a45e0(uVar19,auVar59._8_8_,&cf_aabDateTimeCustomLine2Other);

  auVar59 = _objc_retainAutoreleasedReturnValue();

  uVar40 = auVar59._8_8_;

  if (pcVar26 == (cfstringStruct *)0x0) {

    _objc_retain(pcVar21);

    pcVar26 = pcVar21;

    uVar40 = extraout_x1_02;

  }

  pcVar42 = auVar59._0_8_;

  if (auVar59._0_8_ == (cfstringStruct *)0x0) {

    _objc_retain(pcVar25);

    uVar40 = extraout_x1_03;

    pcVar42 = pcVar25;

  }

  auVar59 = FUN_00297480(uVar19,uVar40,&cf_aabDashLineExtendPt);

  lVar27 = auVar59._0_8_;

  auVar59 = FUN_00297480(uVar19,auVar59._8_8_,&cf_aabBelowExtraShiftPt);

  lVar28 = auVar59._0_8_;

  if (lVar28 < -9) {

    lVar28 = -10;

  }

  if (9 < lVar28) {

    lVar28 = 10;

  }

  auVar59 = FUN_00297480(uVar19,auVar59._8_8_,&cf_aabAboveExtraShiftPt);

  lVar29 = auVar59._0_8_;

  if (lVar29 < -9) {

    lVar29 = -10;

  }

  if (9 < lVar29) {

    lVar29 = 10;

  }

  FUN_00299520(uVar19,auVar59._8_8_,&cf_aabTextSizeOffset);

  auVar59 = _objc_retainAutoreleasedReturnValue();

  if (auVar59._0_8_ == 0) {

    dVar50 = 0.0;

  }

  else {

    fVar44 = (float)FUN_00295460(uVar19,auVar59._8_8_,&cf_aabTextSizeOffset);

    dVar50 = (double)fVar44;

  }

  _objc_release(auVar59._0_8_);

  dVar47 = -3.0;

  if (-3.0 <= dVar50) {

    dVar47 = dVar50;

  }

  dVar50 = 3.0;

  if (dVar47 <= 3.0) {

    dVar50 = dVar47;

  }

  fVar45 = (float)FUN_00295460(uVar19,extraout_x1_04,&cf_aabTextYShiftSelf);

  fVar46 = (float)FUN_00295460(uVar19,extraout_x1_05,&cf_aabTextYShiftOther);

  fVar44 = -10.0;

  if (-10.0 < fVar45) {

    fVar44 = fVar45;

  }

  dVar47 = 10.0;

  if ((double)fVar44 <= 10.0) {

    dVar47 = (double)fVar44;

  }

  fVar44 = -10.0;

  if (-10.0 < fVar46) {

    fVar44 = fVar46;

  }

  dVar51 = 10.0;

  if ((double)fVar44 <= 10.0) {

    dVar51 = (double)fVar44;

  }

  auVar59 = FUN_00297480(uVar19,extraout_x1_06,&cf_aabPositionMode);

  uVar31 = 0;

  if (auVar59._0_8_ < 2) {

    uVar31 = auVar59._0_8_;

  }

  FUN_00299520(uVar19,auVar59._8_8_,&cf_aabPositionModeSelf);

  lVar30 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  auVar59._8_8_ = extraout_x1_07;

  auVar59._0_8_ = uVar31;

  if (lVar30 != 0) {

    auVar59 = FUN_00297480(uVar19,extraout_x1_07,&cf_aabPositionModeSelf);

  }

  FUN_00299520(uVar19,auVar59._8_8_,&cf_aabPositionModeOther);

  lVar30 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar30 != 0) {

    uVar31 = FUN_00297480(uVar19,extraout_x1_08,&cf_aabPositionModeOther);

  }

  uVar2 = 0;

  if (auVar59._0_8_ < 3) {

    uVar2 = auVar59._0_8_;

  }

  uVar3 = 0;

  if (uVar31 < 3) {

    uVar3 = uVar31;

  }

  uVar31 = 0;

  if (auVar55._0_8_ < 4) {

    uVar31 = auVar55._0_8_;

  }

  uVar4 = 0;

  if (auVar56._0_8_ < 3) {

    uVar4 = auVar56._0_8_;

  }

  uVar5 = 0;

  if (auVar57._0_8_ < 9) {

    uVar5 = auVar57._0_8_;

  }

  uVar6 = 0;

  if (auVar58._0_8_ < 2) {

    uVar6 = auVar58._0_8_;

  }

  if (lVar27 < -0x13) {

    lVar27 = -0x14;

  }

  if (0x13 < lVar27) {

    lVar27 = 0x14;

  }

  lVar30 = FUN_0018eb20(uVar19,2);

  lVar32 = FUN_0018eb20(uVar19,3);

  lVar33 = FUN_0018eb20(uVar19,0);

  auVar55 = FUN_0018eb20(uVar19,1);

  FUN_00299520(uVar19,auVar55._8_8_,&cf_aabGuideLinePosSelf);

  auVar56 = _objc_retainAutoreleasedReturnValue();

  if (auVar56._0_8_ == 0) {

    lVar41 = 2;

  }

  else {

    lVar34 = FUN_00297480(uVar19,auVar56._8_8_,&cf_aabGuideLinePosSelf);

    lVar41 = 0;

    if (lVar34 != 0) {

      lVar41 = 2;

    }

  }

  _objc_release(auVar56._0_8_);

  FUN_00299520(uVar19,extraout_x1_09,&cf_aabGuideLinePosOther);

  auVar56 = _objc_retainAutoreleasedReturnValue();

  if (auVar56._0_8_ == 0) {

    lVar34 = 2;

  }

  else {

    lVar35 = FUN_00297480(uVar19,auVar56._8_8_,&cf_aabGuideLinePosOther);

    lVar34 = 0;

    if (lVar35 != 0) {

      lVar34 = 2;

    }

  }

  _objc_release(auVar56._0_8_);

  FUN_00299520(uVar19,extraout_x1_10,&cf_aabGuideLineXPadSelf);

  auVar56 = _objc_retainAutoreleasedReturnValue();

  if (auVar56._0_8_ == 0) {

    dVar52 = 8.0;

  }

  else {

    fVar44 = (float)FUN_00295460(uVar19,auVar56._8_8_,&cf_aabGuideLineXPadSelf);

    dVar52 = (double)fVar44;

  }

  _objc_release(auVar56._0_8_);

  FUN_00299520(uVar19,extraout_x1_11,&cf_aabGuideLineXPadOther);

  auVar56 = _objc_retainAutoreleasedReturnValue();

  if (auVar56._0_8_ == 0) {

    dVar53 = 8.0;

  }

  else {

    fVar44 = (float)FUN_00295460(uVar19,auVar56._8_8_,&cf_aabGuideLineXPadOther);

    dVar53 = (double)fVar44;

  }

  _objc_release(auVar56._0_8_);

  dVar48 = -40.0;

  if (-40.0 <= dVar52) {

    dVar48 = dVar52;

  }

  dVar52 = 40.0;

  if (dVar48 <= 40.0) {

    dVar52 = dVar48;

  }

  dVar48 = -40.0;

  if (-40.0 <= dVar53) {

    dVar48 = dVar53;

  }

  dVar53 = 40.0;

  if (dVar48 <= 40.0) {

    dVar53 = dVar48;

  }

  uVar40 = extraout_x1_12;

  if (DAT_003e9538 == 0) {

LAB_0018e26c:

    uVar17 = 1;

  }

  else {

    pcVar7 = &cf___;

    if (DAT_003e9528 != (cfstringStruct *)0x0) {

      pcVar7 = DAT_003e9528;

    }

    iVar16 = FUN_00297820(pcVar1,extraout_x1_12,pcVar7);

    uVar40 = extraout_x1_13;

    if (iVar16 == 0) goto LAB_0018e26c;

    pcVar7 = &cf___;

    if (DAT_003e9530 != (cfstringStruct *)0x0) {

      pcVar7 = DAT_003e9530;

    }

    uVar17 = FUN_00297820(pcVar20,extraout_x1_13,pcVar7);

    uVar17 = uVar17 ^ 1;

    uVar40 = extraout_x1_14;

  }

  uVar8 = DAT_003e9570;

  uVar43 = 1;

  if (((lVar22 == DAT_003e9548) && (lVar23 == DAT_003e9550)) && (lVar24 == DAT_003e9558)) {

    uVar43 = (uint)(auVar54._0_8_ != DAT_003e9560);

  }

  bVar12 = uVar31 != DAT_003e9568;

  bVar13 = uVar4 != DAT_003e9570;

  uVar18 = 1;

  if ((uVar5 == DAT_003e9578) && (uVar6 == DAT_003e9580)) {

    pcVar7 = &cf___;

    if (DAT_003e9508 != (cfstringStruct *)0x0) {

      pcVar7 = DAT_003e9508;

    }

    iVar16 = FUN_00297820(pcVar21,uVar40,pcVar7);

    if (iVar16 != 0) {

      pcVar7 = &cf___;

      if (DAT_003e9510 != (cfstringStruct *)0x0) {

        pcVar7 = DAT_003e9510;

      }

      iVar16 = FUN_00297820(pcVar25,extraout_x1_15,pcVar7);

      if (iVar16 != 0) {

        pcVar7 = &cf___;

        if (DAT_003e9518 != (cfstringStruct *)0x0) {

          pcVar7 = DAT_003e9518;

        }

        iVar16 = FUN_00297820(pcVar26,extraout_x1_16,pcVar7);

        if (iVar16 != 0) {

          pcVar7 = &cf___;

          if (DAT_003e9520 != (cfstringStruct *)0x0) {

            pcVar7 = DAT_003e9520;

          }

          uVar18 = FUN_00297820(pcVar42,extraout_x1_17,pcVar7);

          uVar18 = uVar18 ^ 1;

          goto LAB_0018e3b4;

        }

      }

    }

    uVar18 = 1;

  }

LAB_0018e3b4:

  lVar10 = DAT_003e9598;

  lVar9 = DAT_003e9590;

  lVar35 = DAT_003e9588;

  bVar11 = true;

  if (((lVar30 == DAT_003e6e68) && (lVar32 == DAT_003e6e70)) &&

     ((lVar33 == DAT_003e6e78 &&

      ((((auVar55._0_8_ == DAT_003e6e80 && (lVar41 == DAT_003e6e88)) && (lVar34 == DAT_003e6e90)) &&

       (dVar52 == DAT_003e6e98)))))) {

    bVar11 = dVar53 != DAT_003e6ea0;

  }

  dVar48 = dVar50 - DAT_003e94f8;

  dVar49 = ABS(dVar47 - DAT_003e95a0);

  if (ABS(dVar47 - DAT_003e95a0) <= ABS(dVar51 - DAT_003e95a8)) {

    dVar49 = ABS(dVar51 - DAT_003e95a8);

  }

  bVar14 = uVar2 != DAT_003e95b0;

  bVar15 = uVar3 != DAT_003e95b8;

  if ((((((uVar17 | uVar43 | uVar18) & 1) != 0 || (bVar12 || bVar13)) || (lVar27 != DAT_003e9588))

      || (((bVar11 || ((lVar28 != DAT_003e9590 || (lVar29 != DAT_003e9598)))) ||

          (0.01 < ABS(dVar48))))) || ((0.01 < dVar49 || (bVar14 || bVar15)))) {

    if (uVar17 != 0) {

      _objc_retain(pcVar1);

      pcVar7 = DAT_003e9528;

      DAT_003e9528 = pcVar1;

      _objc_release(pcVar7);

      _objc_retain(pcVar20);

      pcVar7 = DAT_003e9530;

      DAT_003e9530 = pcVar20;

      _objc_release(pcVar7);

      FUN_0018ec28(pcVar1);

      lVar36 = _objc_retainAutoreleasedReturnValue();

      if (lVar36 == 0) {

        FUN_00295d00(&_OBJC_CLASS___UIColor);

        local_1b8 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        _objc_retain(lVar36);

        local_1b8 = lVar36;

      }

      _objc_release(lVar36);

      FUN_0018ec28(pcVar20);

      lVar36 = _objc_retainAutoreleasedReturnValue();

      if (lVar36 == 0) {

        FUN_00295d00(&_OBJC_CLASS___UIColor);

        lVar37 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        _objc_retain(lVar36);

        lVar37 = lVar36;

      }

      _objc_release(lVar36);

      local_d8 = PTR___NSConcreteStackBlock_003886f0;

      local_d0 = 0xc2000000;

      local_c8 = FUN_0018edcc;

      puStack_c0 = &DAT_0038df90;

      local_b8 = lVar37;

      _objc_retain(local_1b8);

      local_b0 = local_1b8;

      _objc_retain(lVar37);

      FUN_00293000(&_OBJC_CLASS___UIColor,extraout_x1_18,&local_d8);

      lVar38 = _objc_retainAutoreleasedReturnValue();

      lVar36 = DAT_003e9538;

      DAT_003e9538 = lVar38;

      _objc_release(lVar36);

      _objc_release(local_b0);

      _objc_release(local_b8);

      _objc_release(lVar37);

      _objc_release(local_1b8);

    }

    if (uVar43 != 0) {

      DAT_003e9548 = lVar22;

      DAT_003e9550 = lVar23;

      DAT_003e9558 = lVar24;

      DAT_003e9560 = auVar54._0_8_;

    }

    if ((bVar12 || bVar13) && (DAT_003e9568 = uVar31, DAT_003e9570 = uVar4, uVar4 != uVar8)) {

      FUN_0029b240(DAT_003e95c0);

    }

    if (uVar18 != 0) {

      DAT_003e9578 = uVar5;

      DAT_003e9580 = uVar6;

      pcVar39 = (cfstringStruct *)FUN_002937a0(pcVar21);

      pcVar7 = DAT_003e9508;

      DAT_003e9508 = pcVar39;

      _objc_release(pcVar7);

      pcVar39 = (cfstringStruct *)FUN_002937a0(pcVar25);

      pcVar7 = DAT_003e9510;

      DAT_003e9510 = pcVar39;

      _objc_release(pcVar7);

      pcVar39 = (cfstringStruct *)FUN_002937a0(pcVar26);

      pcVar7 = DAT_003e9518;

      DAT_003e9518 = pcVar39;

      _objc_release(pcVar7);

      pcVar39 = (cfstringStruct *)FUN_002937a0(pcVar42);

      pcVar7 = DAT_003e9520;

      DAT_003e9520 = pcVar39;

      _objc_release(pcVar7);

    }

    if (lVar27 != lVar35) {

      DAT_003e9588 = lVar27;

    }

    if (bVar11) {

      DAT_003e6e68 = lVar30;

      DAT_003e6e70 = lVar32;

      DAT_003e6e78 = lVar33;

      DAT_003e6e80 = auVar55._0_8_;

      DAT_003e6e88 = lVar41;

      DAT_003e6e90 = lVar34;

      DAT_003e6e98 = dVar52;

      DAT_003e6ea0 = dVar53;

    }

    if (lVar28 != lVar9) {

      DAT_003e9590 = lVar28;

    }

    if (lVar29 != lVar10) {

      DAT_003e9598 = lVar29;

    }

    if (0.01 < ABS(dVar48)) {

      DAT_003e94f8 = dVar50;

    }

    if (0.01 < dVar49) {

      DAT_003e95a0 = dVar47;

      DAT_003e95a8 = dVar51;

    }

    if (bVar14 || bVar15) {

      DAT_003e95b0 = uVar2;

      DAT_003e95b8 = uVar3;

      FUN_0003dca8();

    }

    DAT_003e9540 = DAT_003e9540 + 1;

  }

  _objc_release(pcVar42);

  _objc_release(pcVar26);

  _objc_release(pcVar25);

  _objc_release(pcVar21);

  _objc_release(pcVar20);

  _objc_release(pcVar1);

  _objc_release(uVar19);

  return;

}




