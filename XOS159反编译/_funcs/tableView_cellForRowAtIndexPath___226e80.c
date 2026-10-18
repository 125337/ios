// tableView:cellForRowAtIndexPath: @0x226e80


/* Function Stack Size: 0x20 bytes */



ID XZYMesReferRoundedSettingsViewController::tableView_cellForRowAtIndexPath_

             (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  ID IVar8;

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

  undefined1 auVar9 [16];

  

  _objc_retain(param_4);

  auVar9 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

  auVar9 = FUN_00296ec0(auVar9._0_8_,auVar9._8_8_,1,&cf_MRRCell);

  uVar1 = auVar9._0_8_;

  FUN_002a12c0(uVar1,auVar9._8_8_,3);

  lVar2 = FUN_0029c020(param_4);

  if (lVar2 == 0) {

    FUN_002a50e0(uVar1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,&::cf___);

    _objc_release(auVar9._0_8_);

    auVar9 = _objc_alloc_init(&_OBJC_CLASS___UISwitch);

    uVar3 = auVar9._0_8_;

    FUN_002a0120(uVar3,auVar9._8_8_,DAT_003eaf98);

    FUN_002913c0(uVar3,extraout_x1_02,param_1,"onMasterSwitchChanged:",0x1000);

    FUN_0029c820(uVar1,extraout_x1_03,uVar3);

    FUN_002a12c0(uVar1,extraout_x1_04,0);

  }

  else {

    lVar2 = FUN_0029c020(param_4);

    if (lVar2 != 2) {

      auVar9 = FUN_0029bae0(param_4);

      lVar2 = FUN_002984a0(param_1,auVar9._8_8_,auVar9._0_8_);

      if (lVar2 < 4) {

        if (1 < lVar2) {

          if (lVar2 == 2) {

            FUN_002a50e0(uVar1);

            auVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,&cf_cr);

            _objc_release(auVar9._0_8_);

            _objc_alloc(&_OBJC_CLASS___UIView);

            uVar3 = FUN_00296b80(0,0,0x404e000000000000,0x403e000000000000);

            _objc_alloc(&_OBJC_CLASS___UIView);

            uVar4 = FUN_00296b80(0,0x4008000000000000,0x4038000000000000,0x4038000000000000);

            FUN_00297e40();

            uVar5 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d820(0x4028000000000000);

            _objc_release(uVar5);

            FUN_002a4b00(&_OBJC_CLASS___UIColor);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            _objc_retainAutorelease();

            uVar6 = FUN_00290a20();

            FUN_00297e40(uVar4);

            auVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d0a0(auVar9._0_8_,auVar9._8_8_,uVar6);

            _objc_release(auVar9._0_8_);

            _objc_release(uVar5);

            FUN_00297e40(uVar4);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d0e0(0x3fe0000000000000);

            _objc_release(uVar5);

            FUN_00227ebc(DAT_003eaf18);

            auVar9 = _objc_retainAutoreleasedReturnValue();

            lVar2 = auVar9._0_8_;

            if (lVar2 == 0) {

              FUN_00298000(&_OBJC_CLASS___UIColor);

              auVar9 = _objc_retainAutoreleasedReturnValue();

            }

            FUN_0029cf60(uVar4,auVar9._8_8_,auVar9._0_8_);

            if (lVar2 == 0) {

              _objc_release(auVar9._0_8_);

            }

            _objc_release(lVar2);

            _objc_alloc(&_OBJC_CLASS___UIView);

            uVar5 = FUN_00296b80(0x403e000000000000,0x4008000000000000,0x4038000000000000,

                                 0x4038000000000000);

            FUN_00297e40();

            uVar6 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d820(0x4028000000000000);

            _objc_release(uVar6);

            FUN_002a4b00(&_OBJC_CLASS___UIColor);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            _objc_retainAutorelease();

            uVar7 = FUN_00290a20();

            FUN_00297e40(uVar5);

            auVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d0a0(auVar9._0_8_,auVar9._8_8_,uVar7);

            _objc_release(auVar9._0_8_);

            _objc_release(uVar6);

            FUN_00297e40(uVar5);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d0e0(0x3fe0000000000000);

            _objc_release(uVar6);

            FUN_00227ebc(DAT_003eaf20);

            auVar9 = _objc_retainAutoreleasedReturnValue();

            lVar2 = auVar9._0_8_;

            if (lVar2 == 0) {

              FUN_00293f00(&_OBJC_CLASS___UIColor);

              auVar9 = _objc_retainAutoreleasedReturnValue();

            }

            FUN_0029cf60(uVar5,auVar9._8_8_,auVar9._0_8_);

            if (lVar2 == 0) {

              _objc_release(auVar9._0_8_);

            }

            _objc_release(lVar2);

            FUN_00291380(uVar3,extraout_x1_22,uVar4);

            FUN_00291380(uVar3,extraout_x1_23,uVar5);

            FUN_0029c820(uVar1,extraout_x1_24,uVar3);

            FUN_0029c800(uVar1,extraout_x1_25,1);

            goto LAB_00227c8c;

          }

          if (lVar2 != 3) goto LAB_00227ca4;

          FUN_002a50e0(uVar1);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,&cf_O9eofr);

          _objc_release(auVar9._0_8_);

          auVar9 = _objc_alloc_init(&_OBJC_CLASS___UISwitch);

          uVar3 = auVar9._0_8_;

          FUN_002a0120(uVar3,auVar9._8_8_,DAT_003eafd0);

          FUN_002913c0(uVar3,extraout_x1_09,param_1,"onColorEnableChanged:",0x1000);

          FUN_0029c820(uVar1,extraout_x1_10,uVar3);

          FUN_002a12c0(uVar1,extraout_x1_11,0);

          goto LAB_00227c9c;

        }

        if (lVar2 == 0) {

          FUN_002a50e0(uVar1);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,&cf_W_Y_);

          _objc_release(auVar9._0_8_);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_16,&cf___0f);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          FUN_002944a0(uVar1);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          uVar4 = auVar9._0_8_;

          FUN_002a1d60(uVar4,auVar9._8_8_,uVar3);

        }

        else {

          if (lVar2 != 1) goto LAB_00227ca4;

          FUN_002a50e0(uVar1);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,&cf_c_Y_);

          _objc_release(auVar9._0_8_);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_05,&cf___1f);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          FUN_002944a0(uVar1);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          uVar4 = auVar9._0_8_;

          FUN_002a1d60(uVar4,auVar9._8_8_,uVar3);

        }

        _objc_release(uVar4);

        _objc_release(uVar3);

        FUN_0029c800(uVar1,extraout_x1_17,1);

      }

      else {

        if (lVar2 < 6) {

          if (lVar2 != 4) {

            if (lVar2 == 5) {

              FUN_002a50e0(uVar1);

              auVar9 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,&cf_O9eeW_r);

              _objc_release(auVar9._0_8_);

              auVar9 = _objc_alloc_init(&_OBJC_CLASS___UISwitch);

              uVar3 = auVar9._0_8_;

              FUN_002a0120(uVar3,auVar9._8_8_,DAT_003eafd1);

              FUN_002913c0(uVar3,extraout_x1_06,param_1,"onTextColorEnableChanged:",0x1000);

              FUN_0029c820(uVar1,extraout_x1_07,uVar3);

              FUN_002a12c0(uVar1,extraout_x1_08,0);

              goto LAB_00227c9c;

            }

            goto LAB_00227ca4;

          }

          FUN_002a50e0(uVar1);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,&cf_ofr);

          _objc_release(auVar9._0_8_);

          _objc_alloc(&_OBJC_CLASS___UIView);

          uVar3 = FUN_00296b80(0,0,0x404e000000000000,0x403e000000000000);

          _objc_alloc(&_OBJC_CLASS___UIView);

          uVar4 = FUN_00296b80(0,0x4008000000000000,0x4038000000000000,0x4038000000000000);

          FUN_00297e40();

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d820(0x4028000000000000);

          _objc_release(uVar5);

          FUN_002a4b00(&_OBJC_CLASS___UIColor);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          _objc_retainAutorelease();

          uVar6 = FUN_00290a20();

          FUN_00297e40(uVar4);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0a0(auVar9._0_8_,auVar9._8_8_,uVar6);

          _objc_release(auVar9._0_8_);

          _objc_release(uVar5);

          FUN_00297e40(uVar4);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0e0(0x3fe0000000000000);

          _objc_release(uVar5);

          FUN_00227ebc(DAT_003eaf28);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          lVar2 = auVar9._0_8_;

          if (lVar2 == 0) {

            FUN_002a64a0(&_OBJC_CLASS___UIColor);

            auVar9 = _objc_retainAutoreleasedReturnValue();

          }

          FUN_0029cf60(uVar4,auVar9._8_8_,auVar9._0_8_);

          if (lVar2 == 0) {

            _objc_release(auVar9._0_8_);

          }

          _objc_release(lVar2);

          _objc_alloc(&_OBJC_CLASS___UIView);

          uVar5 = FUN_00296b80(0x403e000000000000,0x4008000000000000,0x4038000000000000,

                               0x4038000000000000);

          FUN_00297e40();

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d820(0x4028000000000000);

          _objc_release(uVar6);

          FUN_002a4b00(&_OBJC_CLASS___UIColor);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_retainAutorelease();

          uVar7 = FUN_00290a20();

          FUN_00297e40(uVar5);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0a0(auVar9._0_8_,auVar9._8_8_,uVar7);

          _objc_release(auVar9._0_8_);

          _objc_release(uVar6);

          FUN_00297e40(uVar5);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0e0(0x3fe0000000000000);

          _objc_release(uVar6);

          FUN_00227ebc(DAT_003eaf30);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          lVar2 = auVar9._0_8_;

          if (lVar2 == 0) {

            FUN_00293f00(&_OBJC_CLASS___UIColor);

            auVar9 = _objc_retainAutoreleasedReturnValue();

          }

          FUN_0029cf60(uVar5,auVar9._8_8_,auVar9._0_8_);

          if (lVar2 == 0) {

            _objc_release(auVar9._0_8_);

          }

          _objc_release(lVar2);

          FUN_00291380(uVar3,extraout_x1_18,uVar4);

          FUN_00291380(uVar3,extraout_x1_19,uVar5);

          FUN_0029c820(uVar1,extraout_x1_20,uVar3);

          FUN_0029c800(uVar1,extraout_x1_21,1);

        }

        else if (lVar2 == 6) {

          FUN_002a50e0(uVar1);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,&cf__e__ueW_);

          _objc_release(auVar9._0_8_);

          _objc_alloc(&_OBJC_CLASS___UIView);

          uVar3 = FUN_00296b80(0,0,0x404e000000000000,0x403e000000000000);

          _objc_alloc(&_OBJC_CLASS___UIView);

          uVar4 = FUN_00296b80(0,0x4008000000000000,0x4038000000000000,0x4038000000000000);

          FUN_00297e40();

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d820(0x4028000000000000);

          _objc_release(uVar5);

          FUN_002a4b00(&_OBJC_CLASS___UIColor);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          _objc_retainAutorelease();

          uVar6 = FUN_00290a20();

          FUN_00297e40(uVar4);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0a0(auVar9._0_8_,auVar9._8_8_,uVar6);

          _objc_release(auVar9._0_8_);

          _objc_release(uVar5);

          FUN_00297e40(uVar4);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0e0(0x3fe0000000000000);

          _objc_release(uVar5);

          FUN_00227ebc(DAT_003eaf48);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          lVar2 = auVar9._0_8_;

          if (lVar2 == 0) {

            FUN_002a4ae0(&_OBJC_CLASS___UIColor);

            auVar9 = _objc_retainAutoreleasedReturnValue();

          }

          FUN_0029cf60(uVar4,auVar9._8_8_,auVar9._0_8_);

          if (lVar2 == 0) {

            _objc_release(auVar9._0_8_);

          }

          _objc_release(lVar2);

          _objc_alloc(&_OBJC_CLASS___UIView);

          uVar5 = FUN_00296b80(0x403e000000000000,0x4008000000000000,0x4038000000000000,

                               0x4038000000000000);

          FUN_00297e40();

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d820(0x4028000000000000);

          _objc_release(uVar6);

          FUN_002a4b00(&_OBJC_CLASS___UIColor);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_retainAutorelease();

          uVar7 = FUN_00290a20();

          FUN_00297e40(uVar5);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0a0(auVar9._0_8_,auVar9._8_8_,uVar7);

          _objc_release(auVar9._0_8_);

          _objc_release(uVar6);

          FUN_00297e40(uVar5);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0e0(0x3fe0000000000000);

          _objc_release(uVar6);

          FUN_00227ebc(DAT_003eaf50);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          lVar2 = auVar9._0_8_;

          if (lVar2 == 0) {

            FUN_002a4ae0(&_OBJC_CLASS___UIColor);

            auVar9 = _objc_retainAutoreleasedReturnValue();

          }

          FUN_0029cf60(uVar5,auVar9._8_8_,auVar9._0_8_);

          if (lVar2 == 0) {

            _objc_release(auVar9._0_8_);

          }

          _objc_release(lVar2);

          FUN_00291380(uVar3,extraout_x1_26,uVar4);

          FUN_00291380(uVar3,extraout_x1_27,uVar5);

          FUN_0029c820(uVar1,extraout_x1_28,uVar3);

          FUN_0029c800(uVar1,extraout_x1_29,1);

        }

        else {

          if (lVar2 != 7) goto LAB_00227ca4;

          FUN_002a50e0(uVar1);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,&cf_be__ueW_);

          _objc_release(auVar9._0_8_);

          _objc_alloc(&_OBJC_CLASS___UIView);

          uVar3 = FUN_00296b80(0,0,0x404e000000000000,0x403e000000000000);

          _objc_alloc(&_OBJC_CLASS___UIView);

          uVar4 = FUN_00296b80(0,0x4008000000000000,0x4038000000000000,0x4038000000000000);

          FUN_00297e40();

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d820(0x4028000000000000);

          _objc_release(uVar5);

          FUN_002a4b00(&_OBJC_CLASS___UIColor);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          _objc_retainAutorelease();

          uVar6 = FUN_00290a20();

          FUN_00297e40(uVar4);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0a0(auVar9._0_8_,auVar9._8_8_,uVar6);

          _objc_release(auVar9._0_8_);

          _objc_release(uVar5);

          FUN_00297e40(uVar4);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0e0(0x3fe0000000000000);

          _objc_release(uVar5);

          FUN_00227ebc(DAT_003eaf38);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          lVar2 = auVar9._0_8_;

          if (lVar2 == 0) {

            FUN_002a4ae0(&_OBJC_CLASS___UIColor);

            auVar9 = _objc_retainAutoreleasedReturnValue();

          }

          FUN_0029cf60(uVar4,auVar9._8_8_,auVar9._0_8_);

          if (lVar2 == 0) {

            _objc_release(auVar9._0_8_);

          }

          _objc_release(lVar2);

          _objc_alloc(&_OBJC_CLASS___UIView);

          uVar5 = FUN_00296b80(0x403e000000000000,0x4008000000000000,0x4038000000000000,

                               0x4038000000000000);

          FUN_00297e40();

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d820(0x4028000000000000);

          _objc_release(uVar6);

          FUN_002a4b00(&_OBJC_CLASS___UIColor);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_retainAutorelease();

          uVar7 = FUN_00290a20();

          FUN_00297e40(uVar5);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0a0(auVar9._0_8_,auVar9._8_8_,uVar7);

          _objc_release(auVar9._0_8_);

          _objc_release(uVar6);

          FUN_00297e40(uVar5);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_0029d0e0(0x3fe0000000000000);

          _objc_release(uVar6);

          FUN_00227ebc(DAT_003eaf40);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          lVar2 = auVar9._0_8_;

          if (lVar2 == 0) {

            FUN_002a4ae0(&_OBJC_CLASS___UIColor);

            auVar9 = _objc_retainAutoreleasedReturnValue();

          }

          FUN_0029cf60(uVar5,auVar9._8_8_,auVar9._0_8_);

          if (lVar2 == 0) {

            _objc_release(auVar9._0_8_);

          }

          _objc_release(lVar2);

          FUN_00291380(uVar3,extraout_x1_12,uVar4);

          FUN_00291380(uVar3,extraout_x1_13,uVar5);

          FUN_0029c820(uVar1,extraout_x1_14,uVar3);

          FUN_0029c800(uVar1,extraout_x1_15,1);

        }

LAB_00227c8c:

        _objc_release(uVar5);

        _objc_release(uVar4);

LAB_00227c9c:

        _objc_release(uVar3);

      }

LAB_00227ca4:

      _objc_retain(uVar1);

      goto LAB_00227cac;

    }

    FUN_002a50e0(uVar1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,&cf___umo__WN);

    _objc_release(auVar9._0_8_);

    auVar9 = _objc_alloc_init(&_OBJC_CLASS___UISwitch);

    uVar3 = auVar9._0_8_;

    FUN_002a0120(uVar3,auVar9._8_8_,DAT_003eafb0);

    FUN_002913c0(uVar3,extraout_x1,param_1,"onFlipOrderSwitchChanged:",0x1000);

    FUN_0029c820(uVar1,extraout_x1_00,uVar3);

    FUN_002a12c0(uVar1,extraout_x1_01,0);

  }

  _objc_retain(uVar1);

  _objc_release(uVar3);

LAB_00227cac:

  _objc_release(uVar1);

  _objc_release(param_4);

  IVar8 = _objc_autoreleaseReturnValue(uVar1);

  return IVar8;

}




