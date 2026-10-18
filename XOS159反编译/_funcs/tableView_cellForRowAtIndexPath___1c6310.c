// tableView:cellForRowAtIndexPath: @0x1c6310


/* Function Stack Size: 0x20 bytes */



ID XZYDesktopLyricsSettingsViewController::tableView_cellForRowAtIndexPath_

             (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  uint uVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ID IVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

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

  cfstringStruct *pcVar12;

  undefined1 auVar13 [16];

  cfstringStruct *local_80 [3];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_4);

  lVar2 = FUN_0029c020(param_4);

  lVar3 = FUN_0029c020(param_4);

  auVar13 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

  auVar13 = FUN_00296ec0(auVar13._0_8_,auVar13._8_8_,lVar3 != 3 && lVar2 != 0,&cf_DLCell);

  uVar4 = auVar13._0_8_;

  FUN_002a12c0(uVar4,auVar13._8_8_,3);

  lVar2 = FUN_0029c020(param_4);

  if (lVar2 == 0) {

    FUN_002a50e0(uVar4);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,&cf__T_uLhbLk);

    _objc_release(auVar13._0_8_);

    FUN_001c6e48(DAT_003ea920,param_1,"onMasterSwitchChanged:");

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar13._0_8_;

    FUN_0029c820(uVar4,auVar13._8_8_,uVar5);

  }

  else {

    lVar2 = FUN_0029c020(param_4);

    if (lVar2 == 1) {

      lVar2 = FUN_0029bae0(param_4);

      if (lVar2 == 0) {

        FUN_002a50e0(uVar4);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,&cf_>f_yMOn_);

        _objc_release(auVar13._0_8_);

        local_80[1] = &cf_E__N;

        local_80[0] = &cf_v;

        local_80[2] = &cf__;

        uVar1 = (uint)DAT_003ea928 & ((int)(uint)DAT_003ea928 >> 0x1f ^ 0xffffffffU);

        if (1 < (int)uVar1) {

          uVar1 = 2;

        }

        pcVar12 = local_80[uVar1];

        FUN_002944a0(uVar4);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,pcVar12);

        _objc_release(auVar13._0_8_);

        FUN_0029c800(uVar4,extraout_x1_01,1);

        lVar2 = 0x10;

        do {

          _objc_release(*(undefined8 *)((long)local_80 + lVar2));

          lVar2 = lVar2 + -8;

        } while (lVar2 != -8);

        goto LAB_001c64d0;

      }

      FUN_002a50e0(uVar4);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,&cf_Y);

      _objc_release(auVar13._0_8_);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf___0f);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002944a0(uVar4);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,uVar5);

      _objc_release(auVar13._0_8_);

      _objc_release(uVar5);

      FUN_002989c0(param_1);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      uVar5 = auVar13._0_8_;

      FUN_0029c820(uVar4,auVar13._8_8_,uVar5);

    }

    else {

      lVar2 = FUN_0029c020(param_4);

      if (lVar2 != 2) {

        lVar2 = FUN_0029c020(param_4);

        if (lVar2 != 3) goto LAB_001c64d0;

        FUN_002a50e0(uVar4);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,&cf_S);

        _objc_release(auVar13._0_8_);

        FUN_002a6220(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002a5320();

        uVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_002a50e0(uVar4);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1da0(auVar13._0_8_,auVar13._8_8_,uVar8);

        _objc_release(auVar13._0_8_);

        _objc_release(uVar8);

        _objc_release(uVar5);

        FUN_002a50e0(uVar4);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        lVar2 = auVar13._0_8_;

        FUN_002a1d80(lVar2,auVar13._8_8_,1);

LAB_001c6ca8:

        _objc_release(lVar2);

        goto LAB_001c64d0;

      }

      lVar2 = FUN_0029bae0(param_4);

      if (lVar2 < 3) {

        if (lVar2 == 0) {

          FUN_002a50e0(uVar4);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,&cf_W_S);

          _objc_release(auVar13._0_8_);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf___0f);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_002944a0(uVar4);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,uVar5);

          _objc_release(auVar13._0_8_);

          _objc_release(uVar5);

          FUN_00298980(param_1);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          uVar5 = auVar13._0_8_;

          FUN_0029c820(uVar4,auVar13._8_8_,uVar5);

        }

        else {

          if (lVar2 == 1) {

            FUN_002a50e0(uVar4);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,&cf_eW_r);

            _objc_release(auVar13._0_8_);

            FUN_001c6ed8(PTR_cf__1A1A1A_003e70b8);

            lVar3 = _objc_retainAutoreleasedReturnValue();

            if (lVar3 == 0) {

              FUN_00292400(&_OBJC_CLASS___UIColor);

              lVar2 = _objc_retainAutoreleasedReturnValue();

            }

            else {

              _objc_retain(lVar3);

              lVar2 = lVar3;

            }

            _objc_release(lVar3);

            FUN_001c6ed8(PTR_cf__F5F5F5_003e70c0);

            lVar3 = _objc_retainAutoreleasedReturnValue();

            if (lVar3 == 0) {

              FUN_002a64a0(&_OBJC_CLASS___UIColor);

              lVar7 = _objc_retainAutoreleasedReturnValue();

            }

            else {

              _objc_retain(lVar3);

              lVar7 = lVar3;

            }

            _objc_release(lVar3);

            _objc_alloc(&_OBJC_CLASS___UIView);

            uVar5 = FUN_00296b80(0,0,0x404e000000000000,0x403e000000000000);

            _objc_alloc(&_OBJC_CLASS___UIView);

            uVar8 = FUN_00296b80(0,0x4008000000000000,0x4038000000000000,0x4038000000000000);

            FUN_00297e40();

            uVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d820(0x4028000000000000);

            _objc_release(uVar9);

            FUN_0029cf60(uVar8,extraout_x1_05,lVar2);

            FUN_00297e40(uVar8);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d0e0(0x3ff0000000000000);

            _objc_release(uVar9);

            FUN_002a4b00(&_OBJC_CLASS___UIColor);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            _objc_retainAutorelease();

            uVar10 = FUN_00290a20();

            FUN_00297e40(uVar8);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d0a0(auVar13._0_8_,auVar13._8_8_,uVar10);

            _objc_release(auVar13._0_8_);

            _objc_release(uVar9);

            FUN_00291380(uVar5,extraout_x1_06,uVar8);

            _objc_alloc(&_OBJC_CLASS___UIView);

            uVar9 = FUN_00296b80(0x4040000000000000,0x4008000000000000,0x4038000000000000,

                                 0x4038000000000000);

            FUN_00297e40();

            uVar10 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d820(0x4028000000000000);

            _objc_release(uVar10);

            FUN_0029cf60(uVar9,extraout_x1_07,lVar7);

            FUN_00297e40(uVar9);

            uVar10 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d0e0(0x3ff0000000000000);

            _objc_release(uVar10);

            FUN_002a4b00(&_OBJC_CLASS___UIColor);

            uVar10 = _objc_retainAutoreleasedReturnValue();

            _objc_retainAutorelease();

            uVar11 = FUN_00290a20();

            FUN_00297e40(uVar9);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d0a0(auVar13._0_8_,auVar13._8_8_,uVar11);

            _objc_release(auVar13._0_8_);

            _objc_release(uVar10);

            FUN_00291380(uVar5,extraout_x1_08,uVar9);

            FUN_0029c820(uVar4,extraout_x1_09,uVar5);

            FUN_0029c800(uVar4,extraout_x1_10,1);

            _objc_release(uVar9);

            _objc_release(uVar8);

            _objc_release(uVar5);

            goto LAB_001c6ca0;

          }

          if (lVar2 != 2) goto LAB_001c64d0;

          FUN_002a50e0(uVar4);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,&cf_off_);

          _objc_release(auVar13._0_8_);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_02,&cf___0f__);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_002944a0(uVar4);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,uVar5);

          _objc_release(auVar13._0_8_);

          _objc_release(uVar5);

          FUN_00298960(param_1);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          uVar5 = auVar13._0_8_;

          FUN_0029c820(uVar4,auVar13._8_8_,uVar5);

        }

      }

      else if (lVar2 < 5) {

        if (lVar2 == 3) {

          FUN_002a50e0(uVar4);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,&::cf___);

          _objc_release(auVar13._0_8_);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_04,&cf___0f__);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_002944a0(uVar4);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,uVar5);

          _objc_release(auVar13._0_8_);

          _objc_release(uVar5);

          FUN_002989a0(param_1);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          uVar5 = auVar13._0_8_;

          FUN_0029c820(uVar4,auVar13._8_8_,uVar5);

        }

        else {

          if (lVar2 != 4) goto LAB_001c64d0;

          FUN_002a50e0(uVar4);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,&cf_R_);

          _objc_release(auVar13._0_8_);

          FUN_001c6e48(DAT_003e70e0,param_1,"onBoldChanged:");

          auVar13 = _objc_retainAutoreleasedReturnValue();

          uVar5 = auVar13._0_8_;

          FUN_0029c820(uVar4,auVar13._8_8_,uVar5);

        }

      }

      else {

        if (lVar2 != 5) {

          if (lVar2 != 6) goto LAB_001c64d0;

          FUN_002a50e0(uVar4);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,&cf_b_Yn_);

          _objc_release(auVar13._0_8_);

          FUN_002a4cc0(&_OBJC_CLASS___UIColor);

          lVar2 = _objc_retainAutoreleasedReturnValue();

          FUN_002a50e0(uVar4);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          lVar7 = auVar13._0_8_;

          FUN_002a1da0(lVar7,auVar13._8_8_,lVar2);

LAB_001c6ca0:

          _objc_release(lVar7);

          goto LAB_001c6ca8;

        }

        FUN_002a50e0(uVar4);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,&cf_eW_4q_);

        _objc_release(auVar13._0_8_);

        FUN_001c6e48(DAT_003e70e1,param_1,"onShadowChanged:");

        auVar13 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar13._0_8_;

        FUN_0029c820(uVar4,auVar13._8_8_,uVar5);

      }

    }

  }

  _objc_release(uVar5);

  FUN_002a12c0(uVar4,extraout_x1_00,0);

LAB_001c64d0:

  _objc_release(param_4);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    IVar6 = _objc_autoreleaseReturnValue(uVar4);

    return IVar6;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




