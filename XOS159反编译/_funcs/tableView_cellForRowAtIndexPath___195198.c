// tableView:cellForRowAtIndexPath: @0x195198


/* Function Stack Size: 0x20 bytes */



ID XZYAvatarAboveBubbleSettingsViewController::tableView_cellForRowAtIndexPath_

             (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  ulong uVar1;

  bool bVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  cfstringStruct *pcVar6;

  cfstringStruct *pcVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  ID IVar14;

  ulong uVar15;

  cfstringStruct *pcVar16;

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

  float fVar18;

  float fVar19;

  double dVar20;

  double dVar21;

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  undefined1 auVar24 [16];

  undefined1 auVar25 [16];

  undefined1 auVar26 [16];

  

  _objc_retain(param_4);

  auVar22 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

  uVar3 = FUN_00296ec0(auVar22._0_8_,auVar22._8_8_,1,0);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  lVar5 = FUN_0029c020(param_4);

  if (lVar5 == 0) {

    lVar5 = FUN_0029bae0(param_4);

    if (lVar5 == 0) {

      FUN_002a50e0(uVar3);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,&cf__T_u);

      _objc_release(auVar22._0_8_);

      FUN_002a12c0(uVar3,extraout_x1_07,0);

      auVar22 = _objc_alloc_init(&_OBJC_CLASS___UISwitch);

      pcVar16 = auVar22._0_8_;

      auVar22 = FUN_002924c0(uVar4,auVar22._8_8_,&cf_mesMsgMergeAvatarAboveBubble);

      FUN_002a0120(pcVar16,auVar22._8_8_,auVar22._0_8_);

      FUN_002913c0(pcVar16,extraout_x1_08,param_1,"onToggleEnable:",0x1000);

      FUN_0029c820(uVar3,extraout_x1_09,pcVar16);

    }

    else {

      lVar5 = FUN_0029bae0(param_4);

      if ((lVar5 == 1) || (lVar5 = FUN_0029bae0(param_4), lVar5 == 2)) {

        lVar5 = FUN_0029bae0(param_4);

        pcVar16 = &cf_aabPositionModeSelf;

        if (lVar5 != 2) {

          pcVar16 = &cf_aabPositionModeOther;

        }

        _objc_retain(pcVar16);

        uVar15 = FUN_00297480(uVar4,extraout_x1_03,pcVar16);

        uVar1 = 0;

        if (uVar15 < 3) {

          uVar1 = uVar15;

        }

        pcVar6 = &cf_beMOn_;

        if (lVar5 != 2) {

          pcVar6 = &cf__eMOn_;

        }

        _objc_retain(pcVar6);

        FUN_002a50e0(uVar3);

        auVar22 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,pcVar6);

        _objc_release(auVar22._0_8_);

        _objc_release(pcVar6);

        pcVar6 = &cf_Ne;

        if (uVar1 != 1) {

          pcVar6 = &cf_Ne;

        }

        pcVar7 = &cf_N_T_u;

        if (uVar1 != 2) {

          pcVar7 = pcVar6;

        }

        _objc_retain(pcVar7);

        FUN_002944a0(uVar3);

        auVar22 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,pcVar7);

        _objc_release(auVar22._0_8_);

        _objc_release(pcVar7);

        FUN_0029c800(uVar3,extraout_x1_04,1);

        FUN_002a12c0(uVar3,extraout_x1_05,3);

      }

      else {

        auVar22 = FUN_0029bae0(param_4);

        if (auVar22._0_8_ == 3) {

          lVar5 = FUN_00297480(uVar4,auVar22._8_8_,&cf_aabAboveExtraShiftPt);

          if (lVar5 < -9) {

            lVar5 = -10;

          }

          if (9 < lVar5) {

            lVar5 = 10;

          }

          FUN_002a50e0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,&cf_Ne_j_OPy);

          _objc_release(auVar22._0_8_);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_13,&cf____ldpt);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          FUN_002944a0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,uVar8);

          _objc_release(auVar22._0_8_);

          _objc_release(uVar8);

          FUN_0029c800(uVar3,extraout_x1_14,0);

          FUN_002a12c0(uVar3,extraout_x1_15,0);

          pcVar16 = (cfstringStruct *)_objc_alloc_init(&_OBJC_CLASS___UIStepper);

          FUN_0029fd40(0xc024000000000000);

          FUN_0029fa40(0x4024000000000000,pcVar16);

          FUN_002a19c0(0x3ff0000000000000,pcVar16);

          FUN_002a2440((double)lVar5,pcVar16);

          FUN_0029cde0(pcVar16,extraout_x1_16,1);

          FUN_002913c0(pcVar16,extraout_x1_17,param_1,"onAboveExtraShiftPtChanged:",0x1000);

          FUN_0029c820(uVar3,extraout_x1_18,pcVar16);

        }

        else {

          lVar5 = FUN_00297480(uVar4,auVar22._8_8_,&cf_aabBelowExtraShiftPt);

          if (lVar5 < -9) {

            lVar5 = -10;

          }

          if (9 < lVar5) {

            lVar5 = 10;

          }

          FUN_002a50e0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,&cf_Ne_j_OPy);

          _objc_release(auVar22._0_8_);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_32,&cf____ldpt);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          FUN_002944a0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,uVar8);

          _objc_release(auVar22._0_8_);

          _objc_release(uVar8);

          FUN_0029c800(uVar3,extraout_x1_33,0);

          FUN_002a12c0(uVar3,extraout_x1_34,0);

          pcVar16 = (cfstringStruct *)_objc_alloc_init(&_OBJC_CLASS___UIStepper);

          FUN_0029fd40(0xc024000000000000);

          FUN_0029fa40(0x4024000000000000,pcVar16);

          FUN_002a19c0(0x3ff0000000000000,pcVar16);

          FUN_002a2440((double)lVar5,pcVar16);

          FUN_0029cde0(pcVar16,extraout_x1_35,1);

          FUN_002913c0(pcVar16,extraout_x1_36,param_1,"onBelowExtraShiftPtChanged:",0x1000);

          FUN_0029c820(uVar3,extraout_x1_37,pcVar16);

        }

      }

    }

  }

  else {

    lVar5 = FUN_0029c020(param_4);

    if (lVar5 == 2) {

      FUN_002a50e0(uVar3);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,&cf_eW_r);

      _objc_release(auVar22._0_8_);

      FUN_0029c800(uVar3,extraout_x1,1);

      FUN_002a12c0(uVar3,extraout_x1_00,3);

      FUN_002a45e0(uVar4,extraout_x1_01,&cf_aabDateTimeColorLight);

      pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar16 = &::cf___;

      if (pcVar6 != (cfstringStruct *)0x0) {

        pcVar16 = pcVar6;

      }

      _objc_retain(pcVar16);

      _objc_release(pcVar6);

      FUN_002a45e0(uVar4,extraout_x1_02,&cf_aabDateTimeColorDark);

      pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar6 = &::cf___;

      if (pcVar7 != (cfstringStruct *)0x0) {

        pcVar6 = pcVar7;

      }

      _objc_retain(pcVar6);

      _objc_release(pcVar7);

      FUN_00295d00(&_OBJC_CLASS___UIColor);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_alloc(&_OBJC_CLASS___UIView);

      uVar9 = FUN_00296b80(0,0,0x404e000000000000,0x403e000000000000);

      _objc_alloc(&_OBJC_CLASS___UIView);

      uVar10 = FUN_00296b80(0,0x4008000000000000,0x4038000000000000,0x4038000000000000);

      FUN_00297e40();

      uVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(0x4028000000000000);

      _objc_release(uVar11);

      auVar22 = FUN_00297fa0(pcVar16);

      if (auVar22._0_8_ == 0) {

        auVar23._8_8_ = 0;

        auVar23._0_8_ = auVar22._8_8_;

        auVar23 = auVar23 << 0x40;

LAB_001956ec:

        auVar24._8_8_ = auVar23._8_8_;

        auVar24._0_8_ = uVar8;

        lVar5 = auVar23._0_8_;

        bVar2 = false;

      }

      else {

        FUN_0018ec28(pcVar16);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        lVar5 = auVar23._0_8_;

        if (lVar5 == 0) goto LAB_001956ec;

        FUN_0018ec28(pcVar16);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        bVar2 = true;

      }

      FUN_0029cf60(uVar10,auVar24._8_8_,auVar24._0_8_);

      if (bVar2) {

        _objc_release(auVar24._0_8_);

      }

      if (auVar22._0_8_ != 0) {

        _objc_release(lVar5);

      }

      FUN_00297e40(uVar10);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d0e0(0x3ff0000000000000);

      _objc_release(uVar11);

      FUN_002a4b00(&_OBJC_CLASS___UIColor);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease();

      uVar12 = FUN_00290a20();

      FUN_00297e40(uVar10);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d0a0(auVar22._0_8_,auVar22._8_8_,uVar12);

      _objc_release(auVar22._0_8_);

      _objc_release(uVar11);

      FUN_00291380(uVar9,extraout_x1_10,uVar10);

      _objc_alloc(&_OBJC_CLASS___UIView);

      uVar11 = FUN_00296b80(0x4040000000000000,0x4008000000000000,0x4038000000000000,

                            0x4038000000000000);

      FUN_00297e40();

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(0x4028000000000000);

      _objc_release(uVar12);

      auVar22 = FUN_00297fa0(pcVar6);

      if (auVar22._0_8_ == 0) {

        auVar25._8_8_ = 0;

        auVar25._0_8_ = auVar22._8_8_;

        auVar25 = auVar25 << 0x40;

LAB_0019582c:

        auVar26._8_8_ = auVar25._8_8_;

        auVar26._0_8_ = uVar8;

        lVar5 = auVar25._0_8_;

        bVar2 = false;

      }

      else {

        FUN_0018ec28(pcVar6);

        auVar25 = _objc_retainAutoreleasedReturnValue();

        lVar5 = auVar25._0_8_;

        if (lVar5 == 0) goto LAB_0019582c;

        FUN_0018ec28(pcVar6);

        auVar26 = _objc_retainAutoreleasedReturnValue();

        bVar2 = true;

      }

      FUN_0029cf60(uVar11,auVar26._8_8_,auVar26._0_8_);

      if (bVar2) {

        _objc_release(auVar26._0_8_);

      }

      if (auVar22._0_8_ != 0) {

        _objc_release(lVar5);

      }

      FUN_00297e40(uVar11);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d0e0(0x3ff0000000000000);

      _objc_release(uVar12);

      FUN_002a4b00(&_OBJC_CLASS___UIColor);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease();

      uVar13 = FUN_00290a20();

      FUN_00297e40(uVar11);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d0a0(auVar22._0_8_,auVar22._8_8_,uVar13);

      _objc_release(auVar22._0_8_);

      _objc_release(uVar12);

      FUN_00291380(uVar9,extraout_x1_11,uVar11);

      FUN_0029c820(uVar3,extraout_x1_12,uVar9);

      _objc_release(uVar11);

      _objc_release(uVar10);

      _objc_release(uVar9);

      _objc_release(uVar8);

    }

    else {

      auVar22 = FUN_0029c020(param_4);

      if (auVar22._0_8_ != 3) {

        lVar5 = FUN_0029c020(param_4);

        if (lVar5 == 4) {

          auVar22 = FUN_0029bae0(param_4);

          uVar8 = auVar22._8_8_;

          if (-1 < auVar22._0_8_) {

            auVar22 = FUN_0029bae0(param_4);

            uVar8 = auVar22._8_8_;

            if (auVar22._0_8_ < 4) {

              uVar8 = FUN_0029bae0(param_4);

              auVar22 = FUN_0018e9f8(uVar4,uVar8);

              FUN_002a4680(&_OBJC_CLASS___NSString,auVar22._8_8_,&cf_7h_);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              FUN_002a50e0(uVar3);

              auVar23 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1d60(auVar23._0_8_,auVar23._8_8_,uVar8);

              _objc_release(auVar23._0_8_);

              _objc_release(uVar8);

              FUN_001941b8(auVar22._0_8_);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              FUN_002944a0(uVar3);

              auVar22 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,uVar8);

              _objc_release(auVar22._0_8_);

              _objc_release(uVar8);

              FUN_0029c800(uVar3,extraout_x1_41,1);

              FUN_002a12c0(uVar3,extraout_x1_42,3);

              goto LAB_00195910;

            }

          }

          lVar5 = FUN_00297480(uVar4,uVar8,&cf_aabDashLineExtendPt);

          if (lVar5 < -0x13) {

            lVar5 = -0x14;

          }

          if (0x13 < lVar5) {

            lVar5 = 0x14;

          }

          FUN_002a50e0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,&cf__Nz__);

          _objc_release(auVar22._0_8_);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_19,&cf____ldpt);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          FUN_002944a0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,uVar8);

          _objc_release(auVar22._0_8_);

          _objc_release(uVar8);

          FUN_0029c800(uVar3,extraout_x1_20,0);

          FUN_002a12c0(uVar3,extraout_x1_21,0);

          pcVar16 = (cfstringStruct *)_objc_alloc_init(&_OBJC_CLASS___UIStepper);

          FUN_0029fd40(0xc034000000000000);

          FUN_0029fa40(0x4034000000000000,pcVar16);

          FUN_002a19c0(0x3ff0000000000000,pcVar16);

          FUN_002a2440((double)lVar5,pcVar16);

          FUN_0029cde0(pcVar16,extraout_x1_22,1);

          FUN_002913c0(pcVar16,extraout_x1_23,param_1,"onDashExtendPtChanged:",0x1000);

          FUN_0029c820(uVar3,extraout_x1_24,pcVar16);

        }

        else {

          lVar5 = FUN_0029c020(param_4);

          if (lVar5 != 5) {

            lVar5 = FUN_0029c020(param_4);

            if (lVar5 == 1) {

              auVar22 = FUN_0029bae0(param_4);

              if (auVar22._0_8_ == 0) {

                FUN_00299520(uVar4,auVar22._8_8_,&cf_aabTextSizeOffset);

                auVar22 = _objc_retainAutoreleasedReturnValue();

                if (auVar22._0_8_ == 0) {

                  dVar21 = 0.0;

                }

                else {

                  fVar19 = (float)FUN_00295460(uVar4,auVar22._8_8_,&cf_aabTextSizeOffset);

                  dVar21 = (double)fVar19;

                }

                _objc_release(auVar22._0_8_);

                dVar20 = -3.0;

                if (-3.0 <= dVar21) {

                  dVar20 = dVar21;

                }

                dVar21 = 3.0;

                if (dVar20 <= 3.0) {

                  dVar21 = dVar20;

                }

                FUN_002a50e0(uVar3);

                auVar22 = _objc_retainAutoreleasedReturnValue();

                FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,&cf_eW_N5fyW_S);

                _objc_release(auVar22._0_8_);

                FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_46,&cf_____0fpt);

                uVar8 = _objc_retainAutoreleasedReturnValue();

                FUN_002944a0(uVar3);

                auVar22 = _objc_retainAutoreleasedReturnValue();

                FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,uVar8);

                _objc_release(auVar22._0_8_);

                _objc_release(uVar8);

                FUN_0029c820(uVar3,extraout_x1_47,0);

                pcVar16 = (cfstringStruct *)_objc_alloc_init(&_OBJC_CLASS___UIStepper);

                FUN_0029fd40(0xc008000000000000);

                FUN_0029fa40(0x4008000000000000,pcVar16);

                FUN_002a19c0(0x3ff0000000000000,pcVar16);

                FUN_002a2440(dVar21,pcVar16);

                FUN_0029cde0(pcVar16,extraout_x1_48,1);

                FUN_002913c0(pcVar16,extraout_x1_49,param_1,"onTextSizeOffsetChanged:",0x1000);

                FUN_0029c820(uVar3,extraout_x1_50,pcVar16);

              }

              else {

                lVar5 = FUN_0029bae0(param_4);

                pcVar16 = &cf_aabTextYShiftSelf;

                if (lVar5 != 2) {

                  pcVar16 = &cf_aabTextYShiftOther;

                }

                _objc_retain(pcVar16);

                fVar18 = (float)FUN_00295460(uVar4,extraout_x1_25,pcVar16);

                fVar19 = -10.0;

                if (-10.0 < fVar18) {

                  fVar19 = fVar18;

                }

                dVar21 = 10.0;

                if ((double)fVar19 <= 10.0) {

                  dVar21 = (double)fVar19;

                }

                FUN_002a50e0(uVar3);

                auVar22 = _objc_retainAutoreleasedReturnValue();

                pcVar6 = &cf_be;

                if (lVar5 != 2) {

                  pcVar6 = &cf__e;

                }

                FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,pcVar6);

                _objc_release(auVar22._0_8_);

                FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_26,&cf_____0fpt);

                uVar8 = _objc_retainAutoreleasedReturnValue();

                FUN_002944a0(uVar3);

                auVar22 = _objc_retainAutoreleasedReturnValue();

                FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,uVar8);

                _objc_release(auVar22._0_8_);

                _objc_release(uVar8);

                FUN_0029c820(uVar3,extraout_x1_27,0);

                uVar8 = _objc_alloc_init(&_OBJC_CLASS___UIStepper);

                FUN_0029fd40(0xc024000000000000);

                FUN_0029fa40(0x4024000000000000,uVar8);

                FUN_002a19c0(0x3ff0000000000000,uVar8);

                FUN_002a2440(dVar21,uVar8);

                FUN_0029cde0(uVar8,extraout_x1_28,1);

                FUN_002a1c80(uVar8,extraout_x1_29,lVar5 == 2);

                FUN_002913c0(uVar8,extraout_x1_30,param_1,"onTextYShiftChanged:",0x1000);

                FUN_0029c820(uVar3,extraout_x1_31,uVar8);

                _objc_release(uVar8);

              }

              _objc_release(pcVar16);

              FUN_002a12c0(uVar3,extraout_x1_51,0);

            }

            goto LAB_00195910;

          }

          lVar5 = FUN_0029bae0(param_4);

          if ((-1 < lVar5) && (lVar5 = FUN_0029bae0(param_4), lVar5 < 4)) {

            uVar8 = FUN_0029bae0(param_4);

            auVar22 = FUN_0018eb20(uVar4,uVar8);

            FUN_002a4680(&_OBJC_CLASS___NSString,auVar22._8_8_,&cf____);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            FUN_002a50e0(uVar3);

            auVar23 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar23._0_8_,auVar23._8_8_,uVar8);

            _objc_release(auVar23._0_8_);

            _objc_release(uVar8);

            FUN_001aed18(auVar22._0_8_,2);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            FUN_002944a0(uVar3);

            auVar22 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,uVar8);

            _objc_release(auVar22._0_8_);

            _objc_release(uVar8);

            FUN_0029c800(uVar3,extraout_x1_44,1);

            FUN_002a12c0(uVar3,extraout_x1_45,3);

            goto LAB_00195910;

          }

          lVar5 = FUN_0029bae0(param_4);

          if ((lVar5 != 4) && (lVar5 = FUN_0029bae0(param_4), lVar5 != 5)) {

            lVar5 = FUN_0029bae0(param_4);

            if ((lVar5 != 6) && (lVar5 = FUN_0029bae0(param_4), lVar5 != 7)) goto LAB_00195910;

            lVar5 = FUN_0029bae0(param_4);

            pcVar16 = &cf_aabGuideLineXPadSelf;

            if (lVar5 != 7) {

              pcVar16 = &cf_aabGuideLineXPadOther;

            }

            _objc_retain(pcVar16);

            FUN_00299520(uVar4,extraout_x1_43,pcVar16);

            auVar22 = _objc_retainAutoreleasedReturnValue();

            if (auVar22._0_8_ == 0) {

              dVar21 = 8.0;

            }

            else {

              fVar19 = (float)FUN_00295460(uVar4,auVar22._8_8_,pcVar16);

              dVar21 = (double)fVar19;

            }

            _objc_release(auVar22._0_8_);

            dVar20 = -40.0;

            if (-40.0 <= dVar21) {

              dVar20 = dVar21;

            }

            dVar21 = 40.0;

            if (dVar20 <= 40.0) {

              dVar21 = dVar20;

            }

            FUN_002a50e0(uVar3);

            auVar22 = _objc_retainAutoreleasedReturnValue();

            pcVar6 = &cf_be;

            if (lVar5 != 7) {

              pcVar6 = &cf__e;

            }

            FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,pcVar6);

            _objc_release(auVar22._0_8_);

            FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_52,&cf___0fpt);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            FUN_002944a0(uVar3);

            auVar22 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,uVar8);

            _objc_release(auVar22._0_8_);

            _objc_release(uVar8);

            FUN_0029c800(uVar3,extraout_x1_53,0);

            FUN_002a12c0(uVar3,extraout_x1_54,0);

            pcVar6 = (cfstringStruct *)_objc_alloc_init(&_OBJC_CLASS___UIStepper);

            FUN_0029fd40(0xc044000000000000);

            FUN_0029fa40(0x4044000000000000,pcVar6);

            FUN_002a19c0(0x3ff0000000000000,pcVar6);

            FUN_002a2440(dVar21,pcVar6);

            FUN_0029cde0(pcVar6,extraout_x1_55,1);

            FUN_002a1c80(pcVar6,extraout_x1_56,lVar5 == 7);

            FUN_002913c0(pcVar6,extraout_x1_57,param_1,"onGuideLineXPadChanged:",0x1000);

            FUN_0029c820(uVar3,extraout_x1_58,pcVar6);

            goto LAB_00195900;

          }

          lVar5 = FUN_0029bae0(param_4);

          pcVar16 = &cf_aabGuideLinePosSelf;

          if (lVar5 != 5) {

            pcVar16 = &cf_aabGuideLinePosOther;

          }

          _objc_retain(pcVar16);

          FUN_00299520(uVar4,extraout_x1_38,pcVar16);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          pcVar6 = &cf__gag;

          if (auVar22._0_8_ != 0) {

            lVar17 = FUN_00297480(uVar4,auVar22._8_8_,pcVar16);

            pcVar6 = &cf_ag;

            if (lVar17 != 0) {

              pcVar6 = &cf__gag;

            }

          }

          _objc_release(auVar22._0_8_);

          FUN_002a50e0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          pcVar7 = &cf_be;

          if (lVar5 != 5) {

            pcVar7 = &cf__e;

          }

          FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,pcVar7);

          _objc_release(auVar22._0_8_);

          _objc_retain(pcVar6);

          FUN_002944a0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,pcVar6);

          _objc_release(auVar22._0_8_);

          _objc_release(pcVar6);

          FUN_0029c800(uVar3,extraout_x1_39,1);

          FUN_002a12c0(uVar3,extraout_x1_40,3);

        }

        goto LAB_00195908;

      }

      FUN_0029c800(uVar3,auVar22._8_8_,1);

      FUN_002a12c0(uVar3,extraout_x1_06,3);

      auVar22 = FUN_0029bae0(param_4);

      if (auVar22._0_8_ == 0) {

        uVar15 = FUN_00297480(uVar4,auVar22._8_8_,&cf_aabDateTimeDisplayMode);

        uVar1 = 0;

        if (uVar15 < 9) {

          uVar1 = uVar15;

        }

        FUN_002a50e0(uVar3);

        auVar22 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,&cf_>f_y7h_);

        _objc_release(auVar22._0_8_);

        FUN_001968f4(uVar1);

        pcVar16 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        FUN_002944a0(uVar3);

        auVar22 = _objc_retainAutoreleasedReturnValue();

        pcVar6 = auVar22._0_8_;

        FUN_002a1d60(pcVar6,auVar22._8_8_,pcVar16);

      }

      else {

        auVar22 = FUN_0029bae0(param_4);

        if (auVar22._0_8_ == 1) {

          lVar5 = FUN_00297480(uVar4,auVar22._8_8_,&cf_aabDateTimeDisplayDirection);

          FUN_002a50e0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,&cf_>f_ye_);

          _objc_release(auVar22._0_8_);

          pcVar16 = &cf_zT;

          if (lVar5 != 1) {

            pcVar16 = &cf__jT;

          }

          _objc_retain(pcVar16);

          FUN_002944a0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          pcVar6 = auVar22._0_8_;

          FUN_002a1d60(pcVar6,auVar22._8_8_,pcVar16);

        }

        else {

          auVar22 = FUN_0029bae0(param_4);

          if (auVar22._0_8_ == 2) {

            lVar5 = FUN_00297480(uVar4,auVar22._8_8_,&cf_aabDateTimeFormatStyle);

            FUN_002a50e0(uVar3);

            auVar22 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,&cf_e<h_);

            _objc_release(auVar22._0_8_);

            if (lVar5 - 1U < 3) {

              pcVar6 = (cfstringStruct *)(&PTR_cf_2_0038e3e0)[lVar5 - 1U];

            }

            else {

              pcVar6 = &cf_2;

            }

            FUN_002944a0(uVar3);

            auVar22 = _objc_retainAutoreleasedReturnValue();

            pcVar16 = auVar22._0_8_;

            FUN_002a1d60(pcVar16,auVar22._8_8_,pcVar6);

            goto LAB_00195908;

          }

          lVar5 = FUN_00297480(uVar4,auVar22._8_8_,&cf_aabDateTimeLocaleStyle);

          FUN_002a50e0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar22._0_8_,auVar22._8_8_,&cf_e);

          _objc_release(auVar22._0_8_);

          pcVar6 = &cf_e;

          if (lVar5 != 2) {

            pcVar6 = &cf___;

          }

          pcVar16 = &cf__Ne;

          if (lVar5 != 1) {

            pcVar16 = pcVar6;

          }

          _objc_retain(pcVar16);

          FUN_002944a0(uVar3);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          pcVar6 = auVar22._0_8_;

          FUN_002a1d60(pcVar6,auVar22._8_8_,pcVar16);

        }

      }

    }

LAB_00195900:

    _objc_release(pcVar6);

  }

LAB_00195908:

  _objc_release(pcVar16);

LAB_00195910:

  _objc_release(uVar4);

  _objc_release(param_4);

  IVar14 = _objc_autoreleaseReturnValue(uVar3);

  return IVar14;

}




