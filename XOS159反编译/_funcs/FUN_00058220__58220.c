// FUN_00058220 @0x58220


void FUN_00058220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  long lVar12;

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

  float fVar13;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_002943e0(param_3,extraout_x1,&cf_FontCell);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    auVar14 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

    lVar2 = FUN_00296ec0(auVar14._0_8_,auVar14._8_8_,1,&cf_FontCell);

  }

  FUN_002a50e0(lVar2);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,0);

  _objc_release(auVar14._0_8_);

  FUN_002944a0(lVar2);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,0);

  _objc_release(auVar14._0_8_);

  FUN_0029c800(lVar2,extraout_x1_00,0);

  FUN_0029c820(lVar2,extraout_x1_01,0);

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a50e0(lVar2);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar14._0_8_,auVar14._8_8_,uVar3);

  _objc_release(auVar14._0_8_);

  _objc_release(uVar3);

  FUN_002a50e0(lVar2);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d80(auVar14._0_8_,auVar14._8_8_,4);

  _objc_release(auVar14._0_8_);

  FUN_002a4aa0(0x4031000000000000,&_OBJC_CLASS___UIFont);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a50e0(lVar2);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar14._0_8_,auVar14._8_8_,uVar3);

  _objc_release(auVar14._0_8_);

  _objc_release(uVar3);

  FUN_0029cf60(lVar2,extraout_x1_02,0);

  FUN_002a12c0(lVar2,extraout_x1_03,3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar4 = FUN_0029c020(param_4);

  if (lVar4 == 0) {

    lVar4 = FUN_0029bae0(param_4);

    if (lVar4 == 0) {

      FUN_002a50e0(lVar2);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,&cf__T_u_INW_SO);

      _objc_release(auVar14._0_8_);

      FUN_002a12c0(lVar2,extraout_x1_16,0);

      auVar14 = _objc_alloc_init(&_OBJC_CLASS___UISwitch);

      uVar6 = auVar14._0_8_;

      auVar14 = FUN_002924c0(uVar3,auVar14._8_8_,&cf_xzy_customFontEnabled);

      FUN_002a0120(uVar6,auVar14._8_8_,auVar14._0_8_);

      FUN_00293040(0x3fc47ae147ae147b,0x3fd6666666666666,0x3fe8a3d70a3d70a4,0x3ff0000000000000,

                   &_OBJC_CLASS___UIColor);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0380(uVar6,auVar14._8_8_,auVar14._0_8_);

      _objc_release(auVar14._0_8_);

      FUN_002a1c80(uVar6,extraout_x1_17,&DAT_00001c20);

      auVar14 = _NSSelectorFromString(&cf_fontSwitchChanged_);

      FUN_002913c0(uVar6,auVar14._8_8_,param_2,auVar14._0_8_,0x1000);

      FUN_0029c820(lVar2,extraout_x1_18,uVar6);

    }

    else {

      FUN_002a50e0(lVar2);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,&cf_Q_u_N_O_u_INW_SO);

      _objc_release(auVar14._0_8_);

      FUN_002a12c0(lVar2,extraout_x1_06,0);

      auVar14 = _objc_alloc_init(&_OBJC_CLASS___UISwitch);

      uVar6 = auVar14._0_8_;

      auVar14 = FUN_002924c0(uVar3,auVar14._8_8_,&cf_xzy_webFontInjectEnabled);

      FUN_002a0120(uVar6,auVar14._8_8_,auVar14._0_8_);

      FUN_00293040(0x3fc47ae147ae147b,0x3fd6666666666666,0x3fe8a3d70a3d70a4,0x3ff0000000000000,

                   &_OBJC_CLASS___UIColor);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0380(uVar6,auVar14._8_8_,auVar14._0_8_);

      _objc_release(auVar14._0_8_);

      FUN_002a1c80(uVar6,extraout_x1_07,&DAT_00001c21);

      auVar14 = _NSSelectorFromString(&cf_webFontSwitchChanged_);

      FUN_002913c0(uVar6,auVar14._8_8_,param_2,auVar14._0_8_,0x1000);

      FUN_0029c820(lVar2,extraout_x1_08,uVar6);

    }

LAB_00058b58:

    _objc_release(uVar6);

  }

  else {

    lVar4 = FUN_0029c020(param_4);

    if (lVar4 == 1) {

      FUN_002a50e0(lVar2);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,&cf_W_S_Y_);

      _objc_release(auVar14._0_8_);

      fVar13 = (float)FUN_00295460(uVar3,extraout_x1_04,&cf_xzy_fontSizeOffset);

      if (fVar13 == 0.0) {

        pcVar5 = &cf__;

      }

      else {

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_05,&cf____0fpt);

        pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      }

      FUN_002944a0(lVar2);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,pcVar5);

      _objc_release(auVar14._0_8_);

      uVar6 = extraout_x1_19;

      if (fVar13 != 0.0) {

        _objc_release(pcVar5);

        uVar6 = extraout_x1_20;

      }

      FUN_0029c800(lVar2,uVar6,1);

    }

    else {

      auVar14 = FUN_0029c020(param_4);

      if (auVar14._0_8_ == 2) {

        FUN_002943e0(param_3,auVar14._8_8_,&cf_FontPreviewCell);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        if (lVar4 == 0) {

          auVar14 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

          lVar4 = FUN_00296ec0(auVar14._0_8_,auVar14._8_8_,3,&cf_FontPreviewCell);

        }

        FUN_002a50e0(lVar4);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,0);

        _objc_release(auVar14._0_8_);

        FUN_002944a0(lVar4);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,0);

        _objc_release(auVar14._0_8_);

        FUN_0029c800(lVar4,extraout_x1_09,0);

        FUN_0029c820(lVar4,extraout_x1_10,0);

        FUN_00297c40(&_OBJC_CLASS___UIColor);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002a50e0(lVar4);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1da0(auVar14._0_8_,auVar14._8_8_,uVar6);

        _objc_release(auVar14._0_8_);

        _objc_release(uVar6);

        FUN_002a4aa0(0x4030000000000000,&_OBJC_CLASS___UIFont);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002a50e0(lVar4);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e520(auVar14._0_8_,auVar14._8_8_,uVar6);

        _objc_release(auVar14._0_8_);

        _objc_release(uVar6);

        FUN_0029bfa0(&_OBJC_CLASS___UIColor);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002944a0(lVar4);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1da0(auVar14._0_8_,auVar14._8_8_,uVar6);

        _objc_release(auVar14._0_8_);

        _objc_release(uVar6);

        FUN_002a4aa0(0x402a000000000000,&_OBJC_CLASS___UIFont);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002944a0(lVar4);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e520(auVar14._0_8_,auVar14._8_8_,uVar6);

        _objc_release(auVar14._0_8_);

        _objc_release(uVar6);

        FUN_002944a0(lVar4);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_0029ffc0(auVar14._0_8_,auVar14._8_8_,1);

        _objc_release(auVar14._0_8_);

        FUN_0029cf60(lVar4,extraout_x1_11,0);

        FUN_002a12c0(lVar4,extraout_x1_12,3);

        _objc_getAssociatedObject(param_2,"fontFiles");

        auVar14 = _objc_retainAutoreleasedReturnValue();

        uVar6 = auVar14._0_8_;

        FUN_002a45e0(uVar3,auVar14._8_8_,&cf_xzy_customFontFile);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        lVar8 = FUN_0029bae0(param_4);

        lVar9 = FUN_00293860(uVar6);

        if (lVar8 < lVar9) {

          auVar14 = FUN_0029bae0(param_4);

          FUN_00299500(uVar6,auVar14._8_8_,auVar14._0_8_);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          FUN_002a44e0();

          uVar11 = _objc_retainAutoreleasedReturnValue();

          FUN_002a50e0(lVar4);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,uVar11);

          _objc_release(auVar14._0_8_);

          _objc_release(uVar11);

          FUN_002944a0(lVar4);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,&cf_A);

          _objc_release(auVar14._0_8_);

          _objc_getAssociatedObject(param_2,"fontPSNames");

          auVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(auVar14._0_8_,auVar14._8_8_,uVar10);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          uVar11 = auVar15._8_8_;

          lVar8 = auVar15._0_8_;

          if (lVar8 != 0) {

            FUN_002955a0(0x4030000000000000,&_OBJC_CLASS___UIFont,uVar11,lVar8);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            uVar11 = auVar15._8_8_;

            lVar9 = auVar15._0_8_;

            if (lVar9 != 0) {

              FUN_002a50e0(lVar4);

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_0029e520(auVar15._0_8_,auVar15._8_8_,lVar9);

              _objc_release(auVar15._0_8_);

              uVar11 = extraout_x1_13;

            }

            FUN_002955a0(0x402a000000000000,&_OBJC_CLASS___UIFont,uVar11,lVar8);

            lVar12 = _objc_retainAutoreleasedReturnValue();

            if (lVar12 != 0) {

              FUN_002944a0(lVar4);

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_0029e520(auVar15._0_8_,auVar15._8_8_,lVar12);

              _objc_release(auVar15._0_8_);

            }

            _objc_release(lVar12);

            _objc_release(lVar9);

            uVar11 = extraout_x1_14;

          }

          iVar1 = FUN_00297820(uVar10,uVar11,uVar7);

          if (iVar1 != 0) {

            FUN_0029c800(lVar4,extraout_x1_15,3);

          }

          _objc_release(lVar8);

          _objc_release(auVar14._0_8_);

          _objc_release(uVar10);

        }

        _objc_release(uVar7);

        _objc_release(uVar6);

        goto LAB_00058bb8;

      }

      lVar4 = FUN_0029c020(param_4);

      if (lVar4 == 3) {

        FUN_002a50e0(lVar2);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,&cf__T_ONuHe);

        _objc_release(auVar14._0_8_);

        FUN_002a64a0(&_OBJC_CLASS___UIColor);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002a50e0(lVar2);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1da0(auVar14._0_8_,auVar14._8_8_,uVar6);

        _objc_release(auVar14._0_8_);

        _objc_release(uVar6);

        FUN_002a50e0(lVar2);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d80(auVar14._0_8_,auVar14._8_8_,1);

        _objc_release(auVar14._0_8_);

        FUN_002a4ac0(0x4030000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_00388430,

                     &_OBJC_CLASS___UIFont);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002a50e0(lVar2);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e520(auVar14._0_8_,auVar14._8_8_,uVar6);

        _objc_release(auVar14._0_8_);

        _objc_release(uVar6);

        FUN_00293040(0x3fc47ae147ae147b,0x3fd6666666666666,0x3fe8a3d70a3d70a4,0x3ff0000000000000,

                     &_OBJC_CLASS___UIColor);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        uVar6 = auVar14._0_8_;

        FUN_0029cf60(lVar2,auVar14._8_8_,uVar6);

        goto LAB_00058b58;

      }

    }

  }

  _objc_retain(lVar2);

  lVar4 = lVar2;

LAB_00058bb8:

  _objc_release(uVar3);

  _objc_release(lVar2);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_autoreleaseReturnValue(lVar4);

  return;

}




