// FUN_00232600 @0x232600


void FUN_00232600(undefined8 param_1,undefined8 param_2)



{

  bool bVar1;

  long lVar2;

  cfstringStruct *pcVar3;

  cfstringStruct *pcVar4;

  long lVar5;

  undefined *puVar6;

  bool bVar7;

  uint uVar8;

  int iVar11;

  undefined8 uVar12;

  long lVar13;

  uint uVar9;

  uint uVar10;

  undefined8 uVar14;

  long lVar15;

  cfstringStruct *pcVar16;

  ulong uVar17;

  cfstringStruct *pcVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  long lVar22;

  undefined8 uVar23;

  ulong uVar24;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  ulong extraout_x1_05;

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

  long lVar25;

  float fVar26;

  float fVar27;

  double dVar28;

  double dVar29;

  undefined1 auVar30 [16];

  undefined1 auVar31 [16];

  undefined1 auVar32 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_00297be0(param_1);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  lVar13 = FUN_00293860();

  _objc_release(uVar12);

  lVar2 = lVar13;

  if (3 < lVar13) {

    lVar2 = 4;

  }

  if (lVar13 < 1) goto LAB_002330f0;

  FUN_002925a0(param_2);

  dVar28 = (double)_CGRectGetWidth();

  FUN_002925a0(param_2);

  dVar29 = (double)_CGRectGetHeight();

  _objc_getAssociatedObject(param_2,PTR_LOOP_003e72a8);

  lVar13 = _objc_retainAutoreleasedReturnValue();

  if (lVar13 == 0) {

LAB_002329cc:

    FUN_002318f4(param_1);

    lVar15 = _objc_retainAutoreleasedReturnValue();

    uVar17 = 0;

    if (lVar15 != 0) {

LAB_002329e8:

      uVar17 = FUN_0029c2c0(lVar15);

    }

    if (lVar2 <= (long)uVar17 || 0x7fffffffffffffff < uVar17) {

      uVar17 = 0;

    }

    FUN_002365b0();

    FUN_00291da0(&_OBJC_CLASS___NSMutableArray,extraout_x1_04,lVar2);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    uVar24 = auVar30._8_8_;

    uVar12 = auVar30._0_8_;

    lVar25 = 0;

    lVar5 = lVar2;

    if (lVar2 < 2) {

      lVar5 = 1;

    }

    do {

      if (DAT_003e7268 == '\x01') {

        FUN_00239d20(lVar25,param_1);

        auVar31 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        auVar31._8_8_ = 0;

        auVar31._0_8_ = uVar24;

        auVar31 = auVar31 << 0x40;

      }

      pcVar16 = auVar31._0_8_;

      pcVar3 = &cf__;

      if (pcVar16 != (cfstringStruct *)0x0) {

        pcVar3 = pcVar16;

      }

      FUN_00291240(uVar12,auVar31._8_8_,pcVar3);

      _objc_release(pcVar16);

      lVar25 = lVar25 + 1;

      uVar24 = extraout_x1_05;

    } while (lVar5 != lVar25);

    FUN_00293240(uVar12,extraout_x1_05,&cf__);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar30._8_8_,

                 &cf_style2__ld__ld__d__d__d__d___1f___1f___1f___);

    uVar19 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar30._0_8_);

    _objc_getAssociatedObject(param_2,PTR_LOOP_003e72b0);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    uVar14 = auVar30._8_8_;

    if (auVar30._0_8_ == 0) {

LAB_00232b58:

      bVar7 = false;

    }

    else {

      auVar32 = FUN_002974a0();

      uVar14 = auVar32._8_8_;

      if (auVar32._0_8_ == uVar17) goto LAB_00232b58;

      FUN_002a6520(param_2);

      lVar25 = _objc_retainAutoreleasedReturnValue();

      bVar7 = lVar25 != 0;

      _objc_release();

      uVar14 = extraout_x1_06;

    }

    puVar6 = PTR_LOOP_003e72b0;

    FUN_00299400(&_OBJC_CLASS___NSNumber,uVar14,uVar17);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_2,puVar6,uVar14,1);

    _objc_release(uVar14);

    _objc_getAssociatedObject(param_2,PTR_LOOP_003e72b8);

    auVar32 = _objc_retainAutoreleasedReturnValue();

    iVar11 = FUN_00297820(auVar32._0_8_,auVar32._8_8_,uVar19);

    if (iVar11 == 0) {

      _objc_setAssociatedObject(param_2,PTR_LOOP_003e72b8,uVar19,3);

      _objc_retain(param_2);

      _objc_getAssociatedObject(param_2,PTR_LOOP_003e72c0);

      lVar25 = _objc_retainAutoreleasedReturnValue();

      if (lVar25 == 0) {

        FUN_00297e40(&_OBJC_CLASS___CAShapeLayer);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        lVar25 = auVar31._0_8_;

        FUN_0029fe60(lVar25,auVar31._8_8_,&cf_xzy_home_dock_style2_bg);

        FUN_00292400(&_OBJC_CLASS___UIColor);

        uVar14 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease();

        auVar31 = FUN_00290a20();

        FUN_002a1460(lVar25,auVar31._8_8_,auVar31._0_8_);

        _objc_release(uVar14);

        FUN_002a14a0(0x3e0f5c29,lVar25);

        FUN_002a14e0(0x4032000000000000,lVar25);

        FUN_002a1480(0,0x4020000000000000,lVar25);

        FUN_00297e40(param_2);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_002970a0(auVar31._0_8_,auVar31._8_8_,lVar25,0);

        _objc_release(auVar31._0_8_);

        _objc_setAssociatedObject(param_2,PTR_LOOP_003e72c0,lVar25,1);

      }

      _objc_release(param_2);

      FUN_002925a0(param_2);

      FUN_0029e5e0(lVar25);

      FUN_00293060(0x3ff0000000000000,0x3feeb851eb851eb8,&_OBJC_CLASS___UIColor);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_00293060(0x3fbc28f5c28f5c29,0x3feeb851eb851eb8,&_OBJC_CLASS___UIColor);

      uVar20 = _objc_retainAutoreleasedReturnValue();

      FUN_00231604(uVar14,uVar20);

      uVar21 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease();

      auVar31 = FUN_00290a20();

      FUN_0029e3a0(lVar25,auVar31._8_8_,auVar31._0_8_);

      _objc_release(uVar21);

      _objc_release(uVar20);

      _objc_release(uVar14);

      FUN_002a1aa0(lVar25,extraout_x1_09,0);

      FUN_0029f560(0,lVar25);

      FUN_002925a0(param_2);

      FUN_0023b1c8();

      uVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_0029a540(lVar25);

      uVar20 = _objc_retainAutoreleasedReturnValue();

      lVar22 = FUN_00299b00();

      if (lVar22 == 0) {

        lVar22 = FUN_00299b00(lVar25);

      }

      _objc_retainAutorelease(uVar14);

      auVar31 = FUN_00290a60();

      FUN_002a05c0(lVar25,auVar31._8_8_,auVar31._0_8_);

      bVar1 = false;

      if (lVar22 != 0) {

        bVar1 = bVar7;

      }

      uVar21 = extraout_x1_10;

      if (bVar1 == true) {

        FUN_002918e0(&_OBJC_CLASS___CABasicAnimation,extraout_x1_10,&cf_path);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        uVar21 = auVar31._0_8_;

        FUN_0029e600(uVar21,auVar31._8_8_,lVar22);

        _objc_retainAutorelease(uVar14);

        auVar31 = FUN_00290a60();

        FUN_002a20a0(uVar21,auVar31._8_8_,auVar31._0_8_);

        FUN_0029de80(0x3fd5c28f5c28f5c3,uVar21);

        FUN_00295680(&_OBJC_CLASS___CAMediaTimingFunction,extraout_x1_11,

                     *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_00388650);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1f00(uVar21,auVar31._8_8_,auVar31._0_8_);

        _objc_release(auVar31._0_8_);

        FUN_00291020(lVar25,extraout_x1_12,uVar21,&cf_xzy_home_dock_concave_path);

        _objc_release(uVar21);

        uVar21 = extraout_x1_13;

      }

      lVar22 = 0;

      do {

        FUN_002a62a0(param_2,uVar21,&DAT_000023f0 + lVar22);

        uVar21 = _objc_retainAutoreleasedReturnValue();

        uVar23 = _objc_opt_class(&objc::class_t::XZYHomeDockButton);

        uVar24 = _objc_opt_isKindOfClass(uVar21,uVar23);

        if ((uVar24 & 1) != 0) {

          FUN_0023c2cc(uVar21,param_1,lVar22,uVar17,lVar2);

        }

        _objc_release(uVar21);

        lVar22 = lVar22 + 1;

        uVar21 = extraout_x1_14;

      } while (lVar5 != lVar22);

      FUN_002444e4(param_2,lVar2,DAT_003eb428);

      FUN_00244280(param_2,lVar2,uVar17,bVar7);

      FUN_002925e0(param_1,extraout_x1_15,param_2);

      puVar6 = PTR_LOOP_003e72a8;

      FUN_00293240(uVar12,extraout_x1_16,&cf__);

      auVar31 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar31._8_8_,&cf__ld___1f___1f__ld__d__d___);

      uVar21 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_2,puVar6,uVar21,3);

      _objc_release(uVar21);

      _objc_release(auVar31._0_8_);

      _objc_release(uVar20);

    }

    else {

      FUN_00244280(param_2,lVar2,uVar17,0);

      FUN_002925e0(param_1,extraout_x1_07,param_2);

      puVar6 = PTR_LOOP_003e72a8;

      FUN_00293240(uVar12,extraout_x1_08,&cf__);

      auVar31 = _objc_retainAutoreleasedReturnValue();

      lVar25 = auVar31._0_8_;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar31._8_8_,&cf__ld___1f___1f__ld__d___);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_2,puVar6,uVar14,3);

    }

    _objc_release(uVar14);

    _objc_release(lVar25);

    _objc_release(auVar32._0_8_);

    _objc_release(auVar30._0_8_);

    _objc_release(uVar19);

    _objc_release(uVar12);

  }

  else {

    uVar12 = _objc_opt_class(&_OBJC_CLASS___NSString);

    auVar30 = _objc_opt_isKindOfClass(lVar13,uVar12);

    if ((auVar30._0_8_ & 1) == 0) goto LAB_002329cc;

    FUN_00293280(lVar13,auVar30._8_8_,&cf__);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    auVar30 = FUN_00293860();

    if (auVar30._0_8_ < 6) {

LAB_002329c0:

      _objc_release(uVar12);

      goto LAB_002329cc;

    }

    FUN_00299500(uVar12,auVar30._8_8_,1);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    fVar26 = (float)FUN_00295480();

    _objc_release(uVar14);

    FUN_00299500(uVar12,extraout_x1,2);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    fVar27 = (float)FUN_00295480();

    _objc_release(uVar14);

    FUN_00299500(uVar12,extraout_x1_00,3);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    lVar15 = FUN_002974a0();

    _objc_release(uVar14);

    FUN_00299500(uVar12,extraout_x1_01,4);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    uVar8 = FUN_002924e0();

    _objc_release(uVar14);

    FUN_00299500(uVar12,extraout_x1_02,5);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    uVar9 = FUN_002924e0();

    _objc_release(uVar14);

    uVar10 = FUN_002365b0();

    if ((((0.5 <= ABS((double)fVar26 - dVar28)) || (0.5 <= ABS((double)fVar27 - dVar29))) ||

        (lVar15 != lVar2)) || ((((uVar8 ^ uVar10) & 1) != 0 || (DAT_003eb428 != uVar9))))

    goto LAB_002329c0;

    if (DAT_003e7268 == '\x01') {

      FUN_00297be0(param_1);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      lVar15 = FUN_00293860();

      _objc_release(uVar14);

      if (lVar2 <= lVar15) {

        lVar15 = 0;

        do {

          FUN_00297be0(param_1);

          auVar30 = _objc_retainAutoreleasedReturnValue();

          FUN_00299500(auVar30._0_8_,auVar30._8_8_,lVar15);

          uVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_002920c0();

          pcVar16 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          pcVar3 = &cf___;

          if (pcVar16 != (cfstringStruct *)0x0) {

            pcVar3 = pcVar16;

          }

          _objc_retain(pcVar3);

          _objc_release(pcVar16);

          _objc_release(uVar14);

          _objc_release(auVar30._0_8_);

          auVar30 = FUN_00293860(uVar12);

          pcVar16 = &cf__;

          if (lVar15 < auVar30._0_8_ + -6) {

            FUN_00299500(uVar12,auVar30._8_8_,lVar15 + 6);

            pcVar16 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          }

          auVar30 = FUN_00297fa0(pcVar3);

          if (auVar30._0_8_ == 0) {

            auVar30._8_8_ = auVar30._8_8_;

            auVar30._0_8_ = &cf___;

          }

          else {

            FUN_0023898c(pcVar3);

            auVar30 = _objc_retainAutoreleasedReturnValue();

          }

          uVar17 = FUN_00297820(auVar30._0_8_,auVar30._8_8_,pcVar16);

          if ((uVar17 & 1) == 0) {

            FUN_00239d20(lVar15,param_1);

            pcVar18 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            pcVar4 = &cf__;

            if (pcVar18 != (cfstringStruct *)0x0) {

              pcVar4 = pcVar18;

            }

            _objc_retain(pcVar4);

            _objc_release(pcVar18);

            uVar8 = FUN_00297820(pcVar4,extraout_x1_03,pcVar16);

            uVar8 = uVar8 ^ 1;

            _objc_release(pcVar4);

          }

          else {

            uVar8 = 0;

          }

          _objc_release(auVar30._0_8_);

          _objc_release(pcVar16);

          _objc_release(pcVar3);

          lVar15 = lVar15 + 1;

        } while ((lVar15 < lVar2) && ((uVar8 & 1) == 0));

        if ((uVar8 & 1) != 0) goto LAB_002329c0;

      }

    }

    FUN_002318f4(param_1);

    auVar30 = _objc_retainAutoreleasedReturnValue();

    lVar15 = auVar30._0_8_;

    if (lVar15 == 0) {

      auVar32._8_8_ = 0;

      auVar32._0_8_ = auVar30._8_8_;

      auVar32 = auVar32 << 0x40;

    }

    else {

      auVar32 = FUN_0029c2c0(lVar15);

    }

    uVar17 = auVar32._0_8_;

    if (lVar2 <= (long)uVar17 || 0x7fffffffffffffff < uVar17) {

      uVar17 = 0;

    }

    FUN_00299500(uVar12,auVar32._8_8_,0);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    uVar24 = FUN_002974a0();

    _objc_release(uVar14);

    _objc_release(uVar12);

    if (uVar24 != uVar17) {

      if (lVar15 == 0) goto LAB_002329cc;

      goto LAB_002329e8;

    }

    FUN_00244280(param_2,lVar2,uVar17,0);

    FUN_002925e0(param_1,extraout_x1_17,param_2);

  }

  _objc_release(lVar15);

  _objc_release(lVar13);

LAB_002330f0:

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




