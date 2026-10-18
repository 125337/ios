// FUN_00255fa0 @0x255fa0


void FUN_00255fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  cfstringStruct *pcVar1;

  int iVar2;

  uint uVar3;

  uint uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  cfstringStruct *pcVar12;

  ulong uVar13;

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

  undefined8 extraout_x1_26;

  undefined8 extraout_x1_27;

  undefined8 extraout_x1_28;

  undefined8 extraout_x1_29;

  undefined8 extraout_x1_30;

  undefined8 extraout_x1_31;

  undefined8 extraout_x1_32;

  undefined8 extraout_x1_33;

  undefined8 extraout_x1_34;

  undefined8 extraout_x1_35;

  undefined8 extraout_x1_36;

  undefined8 extraout_x1_37;

  undefined8 extraout_x1_38;

  undefined8 extraout_x1_39;

  undefined8 extraout_x1_40;

  undefined8 extraout_x1_41;

  undefined8 extraout_x1_42;

  undefined8 extraout_x1_43;

  undefined8 extraout_x1_44;

  undefined8 extraout_x1_45;

  undefined8 extraout_x1_46;

  undefined8 extraout_x1_47;

  undefined8 extraout_x1_48;

  undefined8 extraout_x1_49;

  undefined8 extraout_x1_50;

  undefined8 extraout_x1_51;

  undefined8 extraout_x1_52;

  undefined8 extraout_x1_53;

  undefined8 extraout_x1_54;

  undefined8 extraout_x1_55;

  undefined8 extraout_x1_56;

  undefined8 extraout_x1_57;

  undefined8 extraout_x1_58;

  undefined8 extraout_x1_59;

  undefined8 extraout_x1_60;

  undefined8 extraout_x1_61;

  undefined8 extraout_x1_62;

  undefined8 extraout_x1_63;

  undefined8 extraout_x1_64;

  undefined8 extraout_x1_65;

  undefined8 extraout_x1_66;

  undefined8 extraout_x1_67;

  undefined8 extraout_x1_68;

  undefined8 extraout_x1_69;

  undefined8 extraout_x1_70;

  undefined8 extraout_x1_71;

  undefined8 extraout_x1_72;

  undefined8 extraout_x1_73;

  undefined8 extraout_x1_74;

  undefined8 extraout_x1_75;

  undefined8 extraout_x1_76;

  undefined8 extraout_x1_77;

  undefined8 extraout_x1_78;

  undefined8 extraout_x1_79;

  undefined8 extraout_x1_80;

  undefined8 extraout_x1_81;

  undefined8 extraout_x1_82;

  undefined8 extraout_x1_83;

  undefined8 extraout_x1_84;

  undefined8 extraout_x1_85;

  undefined8 extraout_x1_86;

  undefined8 extraout_x1_87;

  undefined8 extraout_x1_88;

  undefined8 *puVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  double dVar19;

  double dVar20;

  double dVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  undefined1 auVar24 [16];

  undefined1 auVar25 [16];

  undefined8 local_180;

  long lStack_178;

  long *local_170;

  undefined8 uStack_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 local_138;

  undefined8 local_130;

  undefined8 local_128;

  undefined1 auStack_120 [128];

  long local_a0;

  

  local_a0 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_4);

  FUN_00299540(param_3,extraout_x1,&cf_type);

  auVar24 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar24._0_8_;

  FUN_00299540(param_3,auVar24._8_8_,&cf_x);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  uVar15 = FUN_00294860();

  _objc_release(uVar6);

  FUN_00299540(param_3,extraout_x1_00,&cf_y);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  uVar16 = FUN_00294860();

  _objc_release(uVar6);

  FUN_00299540(param_3,extraout_x1_01,&cf_w);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  uVar17 = FUN_00294860();

  _objc_release(uVar6);

  FUN_00299540(param_3,extraout_x1_02,&cf_h);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  uVar18 = FUN_00294860();

  _objc_release(uVar6);

  iVar2 = FUN_00297820(uVar5,extraout_x1_03,&cf_rect);

  if (iVar2 != 0) {

    _objc_alloc(&_OBJC_CLASS___UIView);

    auVar24 = FUN_00296b80(uVar15,uVar16,uVar17,uVar18);

    uVar6 = auVar24._0_8_;

    FUN_00299540(param_3,auVar24._8_8_,&cf_color);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0024db20();

    auVar24 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar6,auVar24._8_8_,auVar24._0_8_);

    _objc_release(auVar24._0_8_);

    _objc_release(uVar15);

    FUN_00299540(param_3,extraout_x1_05,&cf_cr);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    uVar17 = FUN_00294860();

    FUN_00297e40(uVar6);

    uVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(uVar17);

    _objc_release(uVar16);

    _objc_release(uVar15);

    FUN_002a23c0(uVar6,extraout_x1_06,0);

    goto LAB_002565d8;

  }

  iVar2 = FUN_00297820(uVar5,extraout_x1_04,&cf_shadowRect);

  if (iVar2 == 0) {

    iVar2 = FUN_00297820(uVar5,extraout_x1_07,&cf_concaveRect);

    if (iVar2 != 0) {

      _objc_alloc(&_OBJC_CLASS___UIView);

      auVar24 = FUN_00296b80(uVar15,uVar16,uVar17,uVar18);

      uVar6 = auVar24._0_8_;

      FUN_002a23c0(uVar6,auVar24._8_8_,0);

      FUN_00297e40(&_OBJC_CLASS___CAShapeLayer);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0(uVar6);

      FUN_0029e5e0(lVar7);

      FUN_00299540(param_3,extraout_x1_14,&cf_color);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_0024db20();

      uVar16 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease();

      auVar24 = FUN_00290a20();

      FUN_0029e3a0(lVar7,auVar24._8_8_,auVar24._0_8_);

      _objc_release(uVar16);

      _objc_release(uVar15);

      FUN_002a1aa0(lVar7,extraout_x1_15,0);

      FUN_0029f560(0,lVar7);

      FUN_00292400(&_OBJC_CLASS___UIColor);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease();

      auVar24 = FUN_00290a20();

      FUN_002a1460(lVar7,auVar24._8_8_,auVar24._0_8_);

      _objc_release(uVar15);

      FUN_002a14a0(0x3e0f5c29,lVar7);

      FUN_002a14e0(0x4032000000000000,lVar7);

      FUN_002a1480(0,0x4020000000000000,lVar7);

      FUN_00299540(param_3,extraout_x1_16,&cf_notchCX);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_00294860();

      _objc_release(uVar15);

      FUN_002925a0(uVar6);

      FUN_0023b1c8();

      lVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease();

      auVar24 = FUN_00290a60();

      FUN_002a05c0(lVar7,auVar24._8_8_,auVar24._0_8_);

      FUN_00297e40(uVar6);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      lVar10 = auVar24._0_8_;

      FUN_00291360(lVar10,auVar24._8_8_,lVar7);

      goto LAB_002565c4;

    }

    iVar2 = FUN_00297820(uVar5,extraout_x1_13,&cf_blurRect);

    if (iVar2 != 0) {

      auVar24 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

      FUN_00294b00(&_OBJC_CLASS___UIBlurEffect,auVar24._8_8_,6);

      auVar25 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_00296b00(auVar24._0_8_,auVar25._8_8_,auVar25._0_8_);

      _objc_release(auVar25._0_8_);

      FUN_0029e5e0(uVar15,uVar16,uVar17,uVar18,uVar6);

      FUN_002a23c0(uVar6,extraout_x1_18,0);

      FUN_00299540(param_3,extraout_x1_19,&cf_cr);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      uVar17 = FUN_00294860();

      FUN_00297e40(uVar6);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(uVar17);

      _objc_release(uVar16);

      _objc_release(uVar15);

      FUN_00297e40(uVar6);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      FUN_0029f960(auVar24._0_8_,auVar24._8_8_,1);

      _objc_release(auVar24._0_8_);

      FUN_00292dc0(&_OBJC_CLASS___UIColor);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00293640(uVar6);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      lVar8 = auVar24._0_8_;

      FUN_0029cf60(lVar8,auVar24._8_8_,lVar7);

      goto LAB_002565cc;

    }

    iVar2 = FUN_00297820(uVar5,extraout_x1_17,&cf_label);

    if (iVar2 != 0) {

      _objc_alloc(&_OBJC_CLASS___UILabel);

      auVar24 = FUN_00296b80(uVar15,uVar16,uVar17,uVar18);

      uVar6 = auVar24._0_8_;

      FUN_00299540(param_3,auVar24._8_8_,&cf_text);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(uVar6,auVar24._8_8_,auVar24._0_8_);

      _objc_release(auVar24._0_8_);

      FUN_00299540(param_3,extraout_x1_21,&cf_fontWeight);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      uVar15 = auVar24._0_8_;

      FUN_00299540(param_3,auVar24._8_8_,&cf_fontSize);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      uVar17 = FUN_00294860();

      _objc_retain(uVar15);

      iVar2 = FUN_00297820(uVar15,extraout_x1_22,&cf_bold);

      if (iVar2 == 0) {

        iVar2 = FUN_00297820(uVar15,extraout_x1_23,&cf_semibold);

        puVar14 = (undefined8 *)PTR__UIFontWeightSemibold_00388430;

        if ((((iVar2 == 0) &&

             (iVar2 = FUN_00297820(uVar15,extraout_x1_37,&cf_medium),

             puVar14 = (undefined8 *)PTR__UIFontWeightMedium_00388420, iVar2 == 0)) &&

            (iVar2 = FUN_00297820(uVar15,extraout_x1_39,&cf_light),

            puVar14 = (undefined8 *)PTR__UIFontWeightLight_00388418, iVar2 == 0)) &&

           ((iVar2 = FUN_00297820(uVar15,extraout_x1_41,&cf_heavy),

            puVar14 = (undefined8 *)PTR__UIFontWeightHeavy_00388410, iVar2 == 0 &&

            (iVar2 = FUN_00297820(uVar15,extraout_x1_53,&cf_black),

            puVar14 = (undefined8 *)PTR__UIFontWeightBlack_00388400, iVar2 == 0)))) {

          FUN_002a4aa0(uVar17,&_OBJC_CLASS___UIFont);

          uVar17 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          FUN_002a4ac0(uVar17,*puVar14,&_OBJC_CLASS___UIFont);

          uVar17 = _objc_retainAutoreleasedReturnValue();

        }

      }

      else {

        FUN_002924a0(uVar17,&_OBJC_CLASS___UIFont);

        uVar17 = _objc_retainAutoreleasedReturnValue();

      }

      _objc_release(uVar15);

      FUN_0029e520(uVar6,extraout_x1_60,uVar17);

      _objc_release(uVar17);

      _objc_release(uVar16);

      _objc_release(uVar15);

      FUN_00299540(param_3,extraout_x1_61,&cf_color);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_0024db20();

      auVar24 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1da0(uVar6,auVar24._8_8_,auVar24._0_8_);

      _objc_release(auVar24._0_8_);

      _objc_release(uVar15);

      FUN_00299540(param_3,extraout_x1_62,&cf_align);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      _objc_retain();

      auVar24 = FUN_00297820(uVar15,extraout_x1_63,&cf_center);

      if ((auVar24._0_8_ & 1) == 0) {

        iVar2 = FUN_00297820(uVar15,auVar24._8_8_,&cf_right);

        uVar16 = 2;

        if (iVar2 == 0) {

          uVar16 = 0;

        }

      }

      else {

        uVar16 = 1;

      }

      _objc_release(uVar15);

      FUN_002a1d80(uVar6,extraout_x1_64,uVar16);

      _objc_release(uVar15);

      FUN_00292dc0(&_OBJC_CLASS___UIColor);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(uVar6,auVar24._8_8_,auVar24._0_8_);

      _objc_release(auVar24._0_8_);

      FUN_0029c960(uVar6,extraout_x1_65,1);

      FUN_0029fd00(0x3fe0000000000000,uVar6);

      goto LAB_002565d8;

    }

    iVar2 = FUN_00297820(uVar5,extraout_x1_20,&cf_circle);

    if (iVar2 != 0) {

      FUN_00299540(param_3,extraout_x1_24,&cf_r);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      dVar19 = (double)FUN_00294860();

      _objc_release(uVar6);

      auVar24 = _objc_alloc(&_OBJC_CLASS___UIView);

      FUN_00299540(param_3,auVar24._8_8_,&cf_cx);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      dVar20 = (double)FUN_00294860();

      FUN_00299540(param_3,extraout_x1_25,&cf_cy);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      dVar21 = (double)FUN_00294860();

      uVar6 = FUN_00296b80(dVar20 - dVar19,dVar21 - dVar19,dVar19 + dVar19,auVar24._0_8_);

      _objc_release(uVar16);

      _objc_release(uVar15);

      FUN_00299540(param_3,extraout_x1_26,&cf_color);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_0024db20();

      auVar24 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(uVar6,auVar24._8_8_,auVar24._0_8_);

      _objc_release(auVar24._0_8_);

      _objc_release(uVar15);

      FUN_00297e40(uVar6);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(dVar19);

      _objc_release(uVar15);

      FUN_002a23c0(uVar6,extraout_x1_27,0);

      goto LAB_002565d8;

    }

    iVar2 = FUN_00297820(uVar5,extraout_x1_24,&cf_line);

    if (iVar2 != 0) {

      _objc_alloc(&_OBJC_CLASS___UIView);

      auVar24 = FUN_00296b80(0,0,param_1,param_2);

      uVar6 = auVar24._0_8_;

      FUN_002a23c0(uVar6,auVar24._8_8_,0);

      FUN_00299540(param_3,extraout_x1_29,&cf_x1);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      uVar16 = FUN_00294860();

      _objc_release(uVar15);

      FUN_00299540(param_3,extraout_x1_30,&cf_y1);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      uVar17 = FUN_00294860();

      _objc_release(uVar15);

      FUN_00299540(param_3,extraout_x1_31,&cf_x2);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      uVar18 = FUN_00294860();

      _objc_release(uVar15);

      FUN_00299540(param_3,extraout_x1_32,&cf_y2);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      uVar22 = FUN_00294860();

      _objc_release(uVar15);

      FUN_002922c0(&_OBJC_CLASS___UIBezierPath);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00298fc0(uVar16,uVar17);

      FUN_002911c0(uVar18,uVar22,lVar7);

      FUN_00297e40(&_OBJC_CLASS___CAShapeLayer);

      lVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease(lVar7);

      auVar24 = FUN_00290a60();

      FUN_002a05c0(lVar8,auVar24._8_8_,auVar24._0_8_);

      FUN_00299540(param_3,extraout_x1_33,&cf_color);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_0024db20();

      uVar16 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease();

      auVar24 = FUN_00290a20();

      FUN_002a1aa0(lVar8,auVar24._8_8_,auVar24._0_8_);

      _objc_release(uVar16);

      _objc_release(uVar15);

      FUN_00299540(param_3,extraout_x1_34,&cf_lineWidth);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_00294860();

      FUN_0029f560(lVar8);

      _objc_release(uVar15);

      FUN_00299540(param_3,extraout_x1_35,&cf_dash);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      iVar2 = FUN_002924e0();

      _objc_release(uVar15);

      if (iVar2 != 0) {

        FUN_0029f4c0(lVar8,extraout_x1_36,&PTR__OBJC_CLASS___NSConstantArray_003bf070);

      }

      FUN_00297e40(uVar6);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      lVar10 = auVar24._0_8_;

      FUN_00291360(lVar10,auVar24._8_8_,lVar8);

LAB_002565c4:

      _objc_release(lVar10);

      goto LAB_002565cc;

    }

    iVar2 = FUN_00297820(uVar5,extraout_x1_28,&cf_tabButton);

    if (iVar2 != 0) {

      FUN_00299540(param_3,extraout_x1_38,&cf_tabIndex);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      lVar9 = FUN_002974a0();

      _objc_release(uVar6);

      FUN_00238874(param_4,lVar9);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e5e0(uVar15,uVar16,uVar17,uVar18);

      FUN_00297be0(param_4);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      lVar10 = FUN_00293860();

      _objc_release(uVar15);

      if (3 < lVar10) {

        lVar10 = 4;

      }

      FUN_002318f4(param_4);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      if (lVar7 == 0) {

        lVar11 = 0;

      }

      else {

        lVar11 = FUN_0029c2c0(lVar7);

      }

      FUN_0023c2cc(uVar6,param_4,lVar9,lVar11,lVar10);

      FUN_00299540(param_3,extraout_x1_54,&cf_bgColor);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      uVar15 = auVar24._8_8_;

      lVar8 = auVar24._0_8_;

      if (lVar8 != 0) {

        FUN_0024db20(lVar8);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(uVar6,auVar24._8_8_,auVar24._0_8_);

        _objc_release(auVar24._0_8_);

        uVar15 = extraout_x1_55;

      }

      if (lVar9 == lVar11) {

        FUN_00299540(param_3,uVar15,&cf_selectedColor);

        auVar24 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_00299540(param_3,uVar15,&cf_color);

        auVar24 = _objc_retainAutoreleasedReturnValue();

      }

      lVar10 = auVar24._0_8_;

      if (lVar10 != 0) {

        auVar24 = FUN_00297820(lVar10,auVar24._8_8_,&cf_accent);

        if (((auVar24._0_8_ & 1) == 0) &&

           (uVar13 = FUN_00297820(lVar10,auVar24._8_8_,&cf_selected), (uVar13 & 1) == 0)) {

          FUN_0024db20(lVar10);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1f40(uVar6,auVar24._8_8_,auVar24._0_8_);

          _objc_release(auVar24._0_8_);

        }

      }

      goto LAB_002565c4;

    }

    iVar2 = FUN_00297820(uVar5,extraout_x1_38,&cf_sideButton);

    if (iVar2 == 0) {

      iVar2 = FUN_00297820(uVar5,extraout_x1_40,&cf_centerButton);

      if (iVar2 != 0) {

        FUN_00238874(param_4,0xfffffffffffffffe);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e5e0(uVar15,uVar16,uVar17,uVar18);

        FUN_00299540(param_3,extraout_x1_43,&cf_color);

        pcVar12 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        pcVar1 = &cf_accent;

        if (pcVar12 != (cfstringStruct *)0x0) {

          pcVar1 = pcVar12;

        }

        _objc_retain(pcVar1);

        _objc_release(pcVar12);

        uVar3 = FUN_00297820(pcVar1,extraout_x1_44,&cf_clear);

        uVar4 = FUN_00295f60(pcVar1,extraout_x1_45,&cf__);

        FUN_00299540(param_3,extraout_x1_46,&cf_cr);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        uVar16 = FUN_00294860();

        _objc_release(uVar15);

        FUN_00297e40(uVar6);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(uVar16);

        _objc_release(uVar15);

        FUN_002a27e0(uVar6,extraout_x1_47,param_4);

        FUN_002a2800(uVar6,extraout_x1_48,0xfffffffffffffffe);

        FUN_0029d660(uVar6,extraout_x1_49,0);

        FUN_0029d740(uVar6,extraout_x1_50,0);

        FUN_00296540(uVar6);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d6c0(auVar24._0_8_,auVar24._8_8_,1);

        _objc_release(auVar24._0_8_);

        FUN_002a1f80(uVar6,extraout_x1_51,0,0);

        if (((uVar3 | uVar4) & 1) == 0) {

          FUN_0024db20(pcVar1);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_0029cf60(uVar6,auVar24._8_8_,auVar24._0_8_);

          _objc_release(auVar24._0_8_);

          FUN_00292400(&_OBJC_CLASS___UIColor);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_002a64a0(&_OBJC_CLASS___UIColor);

          uVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_00231604(uVar15,uVar16);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1f40(uVar6,auVar24._8_8_,auVar24._0_8_);

          _objc_release(auVar24._0_8_);

          _objc_release(uVar16);

          _objc_release(uVar15);

          FUN_00297e40(uVar6);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_002a14a0(0);

          _objc_release(uVar15);

          FUN_00297e40(uVar6);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0e0(0);

          _objc_release(uVar15);

          FUN_00297be0(param_4);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          lVar10 = FUN_00293860();

          _objc_release(uVar15);

          if (3 < lVar10) {

            lVar10 = 4;

          }

          FUN_002318f4(param_4);

          lVar8 = _objc_retainAutoreleasedReturnValue();

          if (lVar8 == 0) {

            uVar13 = 0;

          }

          else {

            uVar13 = FUN_0029c2c0(lVar8);

          }

          if (lVar10 <= (long)uVar13 || 0x7fffffffffffffff < uVar13) {

            uVar13 = 0;

          }

          FUN_0023b444(uVar13,lVar10,1);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_0029ec20(uVar6,auVar24._8_8_,auVar24._0_8_,0);

          iVar2 = FUN_002365a4();

          if (iVar2 == 0) {

            uVar15 = 0;

          }

          else {

            FUN_0023aa8c(param_4);

            uVar15 = _objc_retainAutoreleasedReturnValue();

          }

          FUN_0023966c(uVar6,uVar15,1);

          _objc_release(uVar15);

          _objc_release(auVar24._0_8_);

          _objc_release(lVar8);

        }

        else {

          FUN_002a1c80(uVar6,extraout_x1_52,&DAT_00002455);

          FUN_00292dc0(&_OBJC_CLASS___UIColor);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_0029cf60(uVar6,auVar24._8_8_,auVar24._0_8_);

          _objc_release(auVar24._0_8_);

          FUN_002a64a0(&_OBJC_CLASS___UIColor);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1f40(uVar6,auVar24._8_8_,auVar24._0_8_);

          _objc_release(auVar24._0_8_);

          FUN_00292400(&_OBJC_CLASS___UIColor);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          _objc_retainAutorelease();

          uVar17 = FUN_00290a20();

          FUN_00297e40(uVar6);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1460(auVar24._0_8_,auVar24._8_8_,uVar17);

          _objc_release(auVar24._0_8_);

          _objc_release(uVar15);

          FUN_00297e40(uVar6);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_002a14a0(0x3e3851ec);

          _objc_release(uVar15);

          FUN_00297e40(uVar6);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_002a14e0(0x402a000000000000);

          _objc_release(uVar15);

          FUN_00297e40(uVar6);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1480(0,0x401c000000000000);

          _objc_release(uVar15);

          FUN_00297e40(uVar6);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_0029f960(auVar24._0_8_,auVar24._8_8_,0);

          _objc_release(auVar24._0_8_);

          uStack_158 = 0;

          local_160 = 0;

          uStack_148 = 0;

          uStack_150 = 0;

          lStack_178 = 0;

          local_180 = 0;

          uStack_168 = 0;

          local_170 = (long *)0x0;

          FUN_002a4840(uVar6);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          uVar15 = auVar24._0_8_;

          lVar10 = FUN_00293880(uVar15,auVar24._8_8_,&local_180,auStack_120,0x10);

          if (lVar10 != 0) {

            lVar8 = *local_170;

            do {

              lVar7 = 0;

              do {

                if (*local_170 != lVar8) {

                  _objc_enumerationMutation(uVar15);

                }

                lVar9 = *(long *)(lStack_178 + lVar7 * 8);

                uVar17 = _objc_opt_class(&_OBJC_CLASS___UIVisualEffectView);

                auVar24 = _objc_opt_isKindOfClass(lVar9,uVar17);

                if ((auVar24._0_8_ & 1) != 0) {

                  _objc_retain(lVar9);

                  _objc_release(uVar15);

                  if (lVar9 == 0) goto LAB_00257ab8;

                  goto LAB_00257b28;

                }

                lVar7 = lVar7 + 1;

              } while (lVar10 != lVar7);

              lVar10 = FUN_00293880(uVar15,auVar24._8_8_,&local_180,auStack_120,0x10);

            } while (lVar10 != 0);

          }

          _objc_release(uVar15);

LAB_00257ab8:

          auVar24 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

          FUN_00294b00(&_OBJC_CLASS___UIBlurEffect,auVar24._8_8_,6);

          auVar25 = _objc_retainAutoreleasedReturnValue();

          lVar9 = FUN_00296b00(auVar24._0_8_,auVar25._8_8_,auVar25._0_8_);

          _objc_release(auVar25._0_8_);

          FUN_002a23c0(lVar9,extraout_x1_72,0);

          FUN_0029ce00(lVar9,extraout_x1_73,0x12);

          FUN_00297100(uVar6,extraout_x1_74,lVar9,0);

LAB_00257b28:

          FUN_002925a0(uVar6);

          FUN_0029e5e0(lVar9);

          FUN_00297e40(lVar9);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d820(uVar16);

          _objc_release(uVar15);

          FUN_00297e40(lVar9);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_0029f960(auVar24._0_8_,auVar24._8_8_,1);

          _objc_release(auVar24._0_8_);

          if (uVar4 == 0) {

            FUN_00293060(0x3ff0000000000000,0x3fb47ae147ae147b,&_OBJC_CLASS___UIColor);

            uVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_00293060(0x3fb47ae147ae147b,0x3fb999999999999a,&_OBJC_CLASS___UIColor);

            uVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_00231604(uVar15,uVar16);

            uVar17 = _objc_retainAutoreleasedReturnValue();

            FUN_00293640(lVar9);

            auVar24 = _objc_retainAutoreleasedReturnValue();

            FUN_0029cf60(auVar24._0_8_,auVar24._8_8_,uVar17);

            _objc_release(auVar24._0_8_);

            _objc_release(uVar17);

          }

          else {

            FUN_0024db20(pcVar1);

            uVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_00293640(lVar9);

            auVar24 = _objc_retainAutoreleasedReturnValue();

            uVar16 = auVar24._0_8_;

            FUN_0029cf60(uVar16,auVar24._8_8_,uVar15);

          }

          _objc_release(uVar16);

          _objc_release(uVar15);

          FUN_0023c784();

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_0029ec20(uVar6,auVar24._8_8_,auVar24._0_8_,0);

          _objc_release(auVar24._0_8_);

          FUN_0023966c(uVar6,0,1);

          _objc_release(lVar9);

        }

        _objc_release(pcVar1);

        goto LAB_002565d8;

      }

      iVar2 = FUN_00297820(uVar5,extraout_x1_42,&cf_searchButton);

      if (iVar2 != 0) {

        FUN_00238874(param_4,0xffffffffffffffff);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e5e0(uVar15,uVar16,uVar17,uVar18);

        FUN_00293060(0x3ff0000000000000,0x3fed70a3d70a3d71,&_OBJC_CLASS___UIColor);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_00293060(0x3fb999999999999a,0x3fed70a3d70a3d71,&_OBJC_CLASS___UIColor);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_00231604(uVar15,uVar16);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(uVar6,auVar24._8_8_,auVar24._0_8_);

        _objc_release(auVar24._0_8_);

        _objc_release(uVar16);

        _objc_release(uVar15);

        FUN_00292400(&_OBJC_CLASS___UIColor);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a64a0(&_OBJC_CLASS___UIColor);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_00231604(uVar15,uVar16);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1f40(uVar6,auVar24._8_8_,auVar24._0_8_);

        _objc_release(auVar24._0_8_);

        _objc_release(uVar16);

        _objc_release(uVar15);

        FUN_00299540(param_3,extraout_x1_57,&cf_cr);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        uVar17 = FUN_00294860();

        FUN_00297e40(uVar6);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(uVar17);

        _objc_release(uVar16);

        _objc_release(uVar15);

        FUN_00297e40(uVar6);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d0e0(0);

        _objc_release(uVar15);

        FUN_00237604();

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar24._8_8_,&cf___);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar24._0_8_);

        FUN_002a1f80(uVar6,extraout_x1_58,lVar7,0);

        FUN_002a4ac0(0x402e000000000000,*(undefined8 *)PTR__UIFontWeightMedium_00388420,

                     &_OBJC_CLASS___UIFont);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a53a0(uVar6);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e520(auVar24._0_8_,auVar24._8_8_,uVar15);

        _objc_release(auVar24._0_8_);

        _objc_release(uVar15);

        FUN_0029d660(uVar6,extraout_x1_59,1);

        FUN_0029d640(0,0x4034000000000000,0,0x4030000000000000,uVar6);

        FUN_0029ec40(0,0,0,0x4010000000000000,uVar6);

        FUN_00293060(0x3fc70a3d70a3d70a,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_00293060(0x3fed70a3d70a3d71,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_00231604(uVar15,uVar16);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1fc0(uVar6,auVar24._8_8_,auVar24._0_8_,0);

        _objc_release(auVar24._0_8_);

        _objc_release(uVar16);

        _objc_release(uVar15);

        FUN_0023b794();

        auVar24 = _objc_retainAutoreleasedReturnValue();

        lVar8 = auVar24._0_8_;

        FUN_0029ec20(uVar6,auVar24._8_8_,lVar8,0);

        goto LAB_002565cc;

      }

      iVar2 = FUN_00297820(uVar5,extraout_x1_56,&cf_gradientRect);

      if (iVar2 != 0) {

        _objc_alloc(&_OBJC_CLASS___UIView);

        auVar24 = FUN_00296b80(uVar15,uVar16,uVar17,uVar18);

        uVar6 = auVar24._0_8_;

        FUN_002a23c0(uVar6,auVar24._8_8_,0);

        FUN_00299540(param_3,extraout_x1_67,&cf_angle);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        dVar19 = (double)FUN_00294860();

        _objc_release(uVar15);

        FUN_00299540(param_3,extraout_x1_68,&cf_color1);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_0024db20();

        uVar16 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar15);

        FUN_00299540(param_3,extraout_x1_69,&cf_color2);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_0024db20();

        uVar17 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar15);

        FUN_00297e40(&_OBJC_CLASS___CAGradientLayer);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0(uVar6);

        FUN_0029e5e0(uVar15);

        _objc_retainAutorelease(uVar16);

        local_130 = FUN_00290a20();

        _objc_retainAutorelease(uVar17);

        auVar24 = FUN_00290a20();

        local_128 = auVar24._0_8_;

        FUN_00291e00(&_OBJC_CLASS___NSArray,auVar24._8_8_,&local_130,2);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d560(uVar15,auVar24._8_8_,auVar24._0_8_);

        _objc_release(auVar24._0_8_);

        dVar20 = 180.0;

        dVar19 = (double)___sincos_stret((dVar19 * 3.141592653589793) / 180.0);

        FUN_002a1980(0.5 - dVar20 * 0.5,dVar19 * 0.5 + 0.5,uVar15);

        FUN_0029e0e0(dVar20 * 0.5 + 0.5,0.5 - dVar19 * 0.5,uVar15);

        FUN_00299540(param_3,extraout_x1_70,&cf_cr);

        uVar18 = _objc_retainAutoreleasedReturnValue();

        FUN_00294860();

        FUN_0029d820(uVar15);

        _objc_release(uVar18);

        FUN_00297e40(uVar6);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_00291360(auVar24._0_8_,auVar24._8_8_,uVar15);

        _objc_release(auVar24._0_8_);

        FUN_00299540(param_3,extraout_x1_71,&cf_cr);

        uVar18 = _objc_retainAutoreleasedReturnValue();

        uVar23 = FUN_00294860();

        FUN_00297e40(uVar6);

        uVar22 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(uVar23);

        _objc_release(uVar22);

        _objc_release(uVar18);

        FUN_00297e40(uVar6);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_0029f960(auVar24._0_8_,auVar24._8_8_,1);

        _objc_release(auVar24._0_8_);

        _objc_release(uVar15);

        _objc_release(uVar17);

        _objc_release(uVar16);

        goto LAB_002565d8;

      }

      iVar2 = FUN_00297820(uVar5,extraout_x1_66,&cf_slideIndicator);

      if (iVar2 == 0) {

        uVar6 = 0;

        goto LAB_002565d8;

      }

      _objc_alloc(&_OBJC_CLASS___UIView);

      auVar24 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                             *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

      uVar6 = auVar24._0_8_;

      FUN_002a1c80(uVar6,auVar24._8_8_,0x18574);

      FUN_002a23c0(uVar6,extraout_x1_75,0);

      FUN_00299540(param_3,extraout_x1_76,&cf_cr);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      uVar16 = FUN_00294860();

      _objc_release(uVar15);

      FUN_00299540(param_3,extraout_x1_77,&cf_color1);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      uVar15 = auVar24._8_8_;

      if (auVar24._0_8_ == 0) {

LAB_00257fd4:

        FUN_00299540(param_3,uVar15,&cf_color);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_0024db20();

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(uVar6,auVar24._8_8_,auVar24._0_8_);

        _objc_release(auVar24._0_8_);

        _objc_release(uVar15);

        FUN_00297e40(uVar6);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(uVar16);

        _objc_release(uVar15);

        uVar15 = extraout_x1_82;

      }

      else {

        FUN_00299540(param_3,uVar15,&cf_color2);

        lVar10 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        _objc_release(auVar24._0_8_);

        uVar15 = extraout_x1_78;

        if (lVar10 == 0) goto LAB_00257fd4;

        FUN_00299540(param_3,extraout_x1_78,&cf_color1);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_0024db20();

        uVar17 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar15);

        FUN_00299540(param_3,extraout_x1_79,&cf_color2);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_0024db20();

        uVar18 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar15);

        FUN_00297e40(&_OBJC_CLASS___CAGradientLayer);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease(uVar17);

        local_140 = FUN_00290a20();

        _objc_retainAutorelease(uVar18);

        auVar24 = FUN_00290a20();

        local_138 = auVar24._0_8_;

        FUN_00291e00(&_OBJC_CLASS___NSArray,auVar24._8_8_,&local_140,2);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d560(uVar15,auVar24._8_8_,auVar24._0_8_);

        _objc_release(auVar24._0_8_);

        FUN_00299540(param_3,extraout_x1_80,&cf_angle);

        uVar22 = _objc_retainAutoreleasedReturnValue();

        dVar19 = (double)FUN_00294860();

        _objc_release(uVar22);

        dVar20 = 180.0;

        dVar19 = (double)___sincos_stret((dVar19 * 3.141592653589793) / 180.0);

        FUN_002a1980(0.5 - dVar20 * 0.5,dVar19 * 0.5 + 0.5,uVar15);

        FUN_0029e0e0(dVar20 * 0.5 + 0.5,0.5 - dVar19 * 0.5,uVar15);

        FUN_0029d820(uVar16,uVar15);

        FUN_00297e40(uVar6);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_0029f960(auVar24._0_8_,auVar24._8_8_,1);

        _objc_release(auVar24._0_8_);

        _objc_setAssociatedObject(uVar6,"xzyDockGradientLayer",uVar15,1);

        FUN_00297e40(uVar6);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_00291360(auVar24._0_8_,auVar24._8_8_,uVar15);

        _objc_release(auVar24._0_8_);

        _objc_release(uVar15);

        _objc_release(uVar18);

        _objc_release(uVar17);

        uVar15 = extraout_x1_81;

      }

      FUN_00299540(param_3,uVar15,&cf_shape);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      uVar15 = auVar24._8_8_;

      lVar10 = auVar24._0_8_;

      if ((lVar10 != 0) &&

         (iVar2 = FUN_00297820(lVar10,uVar15,&cf_pill), uVar15 = extraout_x1_83, iVar2 != 0)) {

        _objc_setAssociatedObject(uVar6,"xzyDockPillShape",PTR____kCFBooleanTrue_00388320,1);

        uVar15 = extraout_x1_84;

      }

      FUN_00299540(param_3,uVar15,&cf_borderColor);

      auVar24 = _objc_retainAutoreleasedReturnValue();

      uVar15 = auVar24._8_8_;

      lVar8 = auVar24._0_8_;

      if (lVar8 != 0) {

        FUN_0024db20(lVar8);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease();

        uVar16 = FUN_00290a20(uVar15);

        FUN_00297e40(uVar6);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d0a0(auVar24._0_8_,auVar24._8_8_,uVar16);

        _objc_release(auVar24._0_8_);

        _objc_release(uVar15);

        FUN_00299540(param_3,extraout_x1_85,&cf_borderWidth);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        uVar17 = FUN_00294860();

        FUN_00297e40(uVar6);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d0e0(uVar17);

        _objc_release(uVar16);

        _objc_release(uVar15);

        uVar15 = extraout_x1_86;

      }

      FUN_00299540(param_3,uVar15,&cf_shadowColor);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      if (lVar7 != 0) {

        FUN_0024db20(lVar7);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease();

        uVar16 = FUN_00290a20(uVar15);

        FUN_00297e40(uVar6);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1460(auVar24._0_8_,auVar24._8_8_,uVar16);

        _objc_release(auVar24._0_8_);

        _objc_release(uVar15);

        FUN_00299540(param_3,extraout_x1_87,&cf_shadowRadius);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        uVar17 = FUN_00294860();

        FUN_00297e40(uVar6);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_002a14e0(uVar17);

        _objc_release(uVar16);

        _objc_release(uVar15);

        FUN_00299540(param_3,extraout_x1_88,&cf_shadowOpacity);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        dVar19 = (double)FUN_00294860();

        FUN_00297e40(uVar6);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_002a14a0((float)dVar19);

        _objc_release(uVar16);

        _objc_release(uVar15);

        FUN_00297e40(uVar6);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1480(0,0);

        _objc_release(uVar15);

        FUN_00297e40(uVar6);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        FUN_0029f960(auVar24._0_8_,auVar24._8_8_,0);

        _objc_release(auVar24._0_8_);

      }

      _objc_release(lVar7);

      _objc_release(lVar8);

      _objc_release(lVar10);

      goto LAB_002565d8;

    }

    FUN_00299540(param_3,extraout_x1_40,&cf_tabIndex);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uVar22 = FUN_002974a0();

    _objc_release(uVar6);

    FUN_00238874(param_4,uVar22);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e5e0(uVar15,uVar16,uVar17,uVar18);

    FUN_00297be0(param_4);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    lVar10 = FUN_00293860();

    _objc_release(uVar15);

    if (3 < lVar10) {

      lVar10 = 4;

    }

    FUN_002318f4(param_4);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    if (lVar7 == 0) {

      uVar15 = 0;

    }

    else {

      uVar15 = FUN_0029c2c0(lVar7);

    }

    FUN_0023ca14(uVar6,param_4,uVar22,uVar15,lVar10);

  }

  else {

    _objc_alloc(&_OBJC_CLASS___UIView);

    auVar24 = FUN_00296b80(uVar15,uVar16,uVar17,uVar18);

    uVar6 = auVar24._0_8_;

    FUN_00299540(param_3,auVar24._8_8_,&cf_color);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0024db20();

    auVar24 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar6,auVar24._8_8_,auVar24._0_8_);

    _objc_release(auVar24._0_8_);

    _objc_release(uVar15);

    FUN_00299540(param_3,extraout_x1_08,&cf_cr);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    uVar16 = FUN_00294860();

    _objc_release(uVar15);

    FUN_00297e40(uVar6);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(uVar16);

    _objc_release(uVar15);

    FUN_002a23c0(uVar6,extraout_x1_09,0);

    FUN_00292400(&_OBJC_CLASS___UIColor);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar16 = FUN_00290a20();

    FUN_00297e40(uVar6);

    auVar24 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1460(auVar24._0_8_,auVar24._8_8_,uVar16);

    _objc_release(auVar24._0_8_);

    _objc_release(uVar15);

    FUN_00299540(param_3,extraout_x1_10,&cf_shadowOpacity);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    dVar19 = (double)FUN_00294860();

    FUN_00297e40(uVar6);

    uVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a14a0((float)dVar19);

    _objc_release(uVar16);

    _objc_release(uVar15);

    FUN_00299540(param_3,extraout_x1_11,&cf_shadowRadius);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    uVar17 = FUN_00294860();

    FUN_00297e40(uVar6);

    uVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a14e0(uVar17);

    _objc_release(uVar16);

    _objc_release(uVar15);

    FUN_00299540(param_3,extraout_x1_12,&cf_shadowY);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    uVar17 = FUN_00294860();

    FUN_00297e40(uVar6);

    uVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1480(0,uVar17);

    _objc_release(uVar16);

    _objc_release(uVar15);

    FUN_002925a0(uVar6);

    FUN_00292380(&_OBJC_CLASS___UIBezierPath);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar15 = FUN_00290a60();

    FUN_00297e40(uVar6);

    auVar24 = _objc_retainAutoreleasedReturnValue();

    lVar8 = auVar24._0_8_;

    FUN_002a14c0(lVar8,auVar24._8_8_,uVar15);

LAB_002565cc:

    _objc_release(lVar8);

  }

  _objc_release(lVar7);

LAB_002565d8:

  _objc_release(uVar5);

  _objc_release(param_4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_a0) {

    _objc_autoreleaseReturnValue(uVar6);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




