// tableView:cellForRowAtIndexPath: @0x1e4f00


/* Function Stack Size: 0x20 bytes */



ID XZYChatListGroupingSettingsViewController::tableView_cellForRowAtIndexPath_

             (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined1 uVar1;

  undefined8 uVar2;

  long lVar3;

  ID IVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

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

  long lVar10;

  ulong uVar11;

  cfstringStruct *pcVar12;

  cfstringStruct *pcVar13;

  ulong uVar14;

  undefined1 auVar15 [16];

  undefined1 local_d6 [4];

  undefined1 local_d2;

  undefined1 local_d1;

  char *local_d0 [4];

  char *local_b0;

  char *pcStack_a8;

  cfstringStruct *local_a0 [4];

  cfstringStruct *local_80;

  cfstringStruct *pcStack_78;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_4);

  auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

  auVar15 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,0,&cf_CLGCell);

  uVar2 = auVar15._0_8_;

  FUN_002a12c0(uVar2,auVar15._8_8_,0);

  lVar3 = FUN_0029c020(param_4);

  uVar5 = uVar2;

  if (lVar3 == 0) {

    FUN_002a50e0(uVar2);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf__T_u_NuRhR_);

    _objc_release(auVar15._0_8_);

    FUN_001e62d4(DAT_003eaa30,param_1,"onMasterChanged:");

    auVar15 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar15._0_8_;

    FUN_0029c820(uVar2,auVar15._8_8_,uVar9);

    goto LAB_001e5120;

  }

  lVar3 = FUN_0029c020(param_4);

  if (lVar3 == 1) {

    local_a0[1] = &cf_>f_y0n_v0_;

    local_a0[0] = &cf_>f_y0hQ0_;

    local_a0[3] = &cf_>f_y0yJ0_;

    local_a0[2] = &cf_>f_y0_g0_;

    pcStack_78 = &cf_>f_y0lQOS0_;

    local_80 = &cf_>f_y0_J0_;

    local_d6[0] = DAT_003eaac1;

    local_d6[1] = DAT_003e7158;

    local_d6[2] = DAT_003e7159;

    local_d6[3] = DAT_003e715a;

    local_d2 = DAT_003e715b;

    local_d1 = DAT_003e715c;

    local_d0[0] = "onShowAllChanged:";

    local_d0[1] = "onShowStickyChanged:";

    local_d0[2] = "onShowUnreadChanged:";

    local_d0[3] = "onShowPrivateChanged:";

    local_b0 = "onShowGroupChatChanged:";

    pcStack_a8 = "onShowOfficialChanged:";

    lVar3 = FUN_0029bae0(param_4);

    pcVar13 = local_a0[lVar3];

    FUN_002a50e0(uVar2);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,pcVar13);

    _objc_release(auVar15._0_8_);

    lVar3 = FUN_0029bae0(param_4);

    uVar1 = local_d6[lVar3];

    lVar3 = FUN_0029bae0(param_4);

    FUN_001e62d4(uVar1,param_1,local_d0[lVar3]);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029c820(uVar2,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    _objc_retain(uVar2);

    lVar3 = 0x28;

    do {

      _objc_release(*(undefined8 *)((long)local_a0 + lVar3));

      lVar3 = lVar3 + -8;

    } while (lVar3 != -8);

    goto LAB_001e5134;

  }

  lVar3 = FUN_0029c020(param_4);

  if (lVar3 == 2) {

    lVar3 = FUN_0029bae0(param_4);

    if (lVar3 == 0) {

      FUN_002a50e0(uVar2);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_nYT_N);

      _objc_release(auVar15._0_8_);

      FUN_001e62d4(DAT_003e715d,param_1,"onDeduplicateContactsChanged:");

      auVar15 = _objc_retainAutoreleasedReturnValue();

      uVar9 = auVar15._0_8_;

      FUN_0029c820(uVar2,auVar15._8_8_,uVar9);

      goto LAB_001e5120;

    }

    lVar3 = FUN_0029bae0(param_4);

    if (lVar3 == 1) {

      auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

      uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,1,&cf_CLGBehaviorValueCell);

      FUN_002a50e0();

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_R_>f_yMOn_);

      _objc_release(auVar15._0_8_);

      if (DAT_003eaac8 - 1U < 6) {

        pcVar13 = (cfstringStruct *)(&PTR_cf__O_0038f568)[DAT_003eaac8 - 1U];

      }

      else {

        pcVar13 = &cf_RhQ;

      }

      FUN_002944a0(uVar5);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,pcVar13);

      _objc_release(auVar15._0_8_);

      FUN_0029c800(uVar5,extraout_x1_05,1);

      FUN_002a12c0(uVar5,extraout_x1_06,3);

      goto LAB_001e5134;

    }

    lVar3 = FUN_0029bae0(param_4);

    if (lVar3 == 2) {

      if (1 < DAT_003eaac8 - 5U) {

        auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

        uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,1,&cf_CLGBehaviorValueCell);

        FUN_002a50e0();

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_Oh_O_uV);

        _objc_release(auVar15._0_8_);

        pcVar13 = &cf__NuaSGrNe;

        if (DAT_003eaad0 != 1) {

          pcVar13 = &cf_teu;

        }

        _objc_retain(pcVar13);

        FUN_002944a0(uVar5);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,pcVar13);

        _objc_release(auVar15._0_8_);

        _objc_release(pcVar13);

        FUN_0029c800(uVar5,extraout_x1_01,1);

        FUN_002a12c0(uVar5,extraout_x1_02,3);

        goto LAB_001e5134;

      }

    }

    else if (((DAT_003eaa30 == 1) && (DAT_003eaac8 - 1U < 4)) &&

            (lVar3 = FUN_0029bae0(param_4), lVar3 == 3)) {

      auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

      uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,1,&cf_CLGBehaviorValueCell);

      FUN_002a50e0();

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_OhteSO);

      _objc_release(auVar15._0_8_);

      FUN_001e6364();

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002944a0(uVar5);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,uVar9);

      _objc_release(auVar15._0_8_);

      _objc_release(uVar9);

      FUN_0029c800(uVar5,extraout_x1_03,1);

      FUN_002a12c0(uVar5,extraout_x1_04,3);

      goto LAB_001e5134;

    }

    lVar3 = FUN_0029bae0(param_4);

    if (DAT_003eaac8 - 5U < 2) {

      lVar10 = 2;

    }

    else {

      lVar10 = 3;

      if ((DAT_003eaac8 - 1U < 6 & DAT_003eaa30) != 0) {

        lVar10 = 4;

      }

    }

    if (lVar3 == lVar10) {

      auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

      uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,1,&cf_CLGBehaviorValueCell);

      FUN_002a50e0();

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_n_vRhNe);

      _objc_release(auVar15._0_8_);

      FUN_001e644c();

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002944a0(uVar5);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,uVar9);

      _objc_release(auVar15._0_8_);

      _objc_release(uVar9);

      FUN_0029c800(uVar5,extraout_x1_08,1);

      FUN_002a12c0(uVar5,extraout_x1_09,3);

      goto LAB_001e5134;

    }

    lVar3 = FUN_0029bae0(param_4);

    if (DAT_003eaac8 - 5U < 2) {

      if (lVar3 == 3) {

LAB_001e5a78:

        auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

        uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,1,&cf_CLGBehaviorValueCell);

        FUN_002a50e0();

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_n_vRhNe);

        _objc_release(auVar15._0_8_);

        FUN_001e64a0();

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002944a0(uVar5);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,uVar9);

        _objc_release(auVar15._0_8_);

        _objc_release(uVar9);

        FUN_0029c800(uVar5,extraout_x1_11,1);

        FUN_002a12c0(uVar5,extraout_x1_12,3);

        goto LAB_001e5134;

      }

      lVar3 = FUN_0029bae0(param_4);

      if (lVar3 == 4) {

        FUN_002a50e0(uVar2);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf__T_ud__h);

        _objc_release(auVar15._0_8_);

        FUN_001e62d4(DAT_003e715e,param_1,"onHorizontalSearchOrbChanged:");

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar9 = auVar15._0_8_;

        FUN_0029c820(uVar2,auVar15._8_8_,uVar9);

        goto LAB_001e5120;

      }

      if ((DAT_003eaac8 - 5U < 2) && (lVar3 = FUN_0029bae0(param_4), lVar3 == 5)) {

        auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

        uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,1,&cf_CLGBehaviorValueCell);

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a45e0(auVar15._0_8_,auVar15._8_8_,&cf_xzyChatListGroupingHorizontalSearchOrbTitle);

        pcVar13 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        _objc_release(auVar15._0_8_);

        FUN_002a50e0(uVar5);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_d__heW_);

        _objc_release(auVar15._0_8_);

        if (pcVar13 == (cfstringStruct *)0x0) {

          pcVar12 = &cf__;

        }

        else {

          lVar3 = FUN_00297fa0(pcVar13);

          pcVar12 = &cf__gkXQ;

          if (lVar3 != 0) {

            pcVar12 = pcVar13;

          }

        }

        FUN_002944a0(uVar5);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,pcVar12);

        _objc_release(auVar15._0_8_);

        FUN_0029c800(uVar5,extraout_x1_18,1);

        FUN_002a12c0(uVar5,extraout_x1_19,3);

        goto LAB_001e5710;

      }

    }

    else {

      lVar10 = 4;

      if ((DAT_003eaac8 - 1U < 6 & DAT_003eaa30) != 0) {

        lVar10 = 5;

      }

      if (lVar3 == lVar10) goto LAB_001e5a78;

    }

  }

  else {

    lVar3 = FUN_0029c020(param_4);

    if (lVar3 == 3) {

      lVar3 = FUN_00293860(DAT_003eaa10);

      lVar10 = FUN_0029bae0(param_4);

      if (lVar10 < lVar3) {

        auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

        uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,1,&cf_CLGCustomCell);

        uVar9 = DAT_003eaa10;

        auVar15 = FUN_0029bae0(param_4);

        FUN_00299500(uVar9,auVar15._8_8_,auVar15._0_8_);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        pcVar13 = auVar15._0_8_;

        FUN_00299540(pcVar13,auVar15._8_8_,&cf_id);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_001cb9dc();

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002a50e0(uVar5);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,uVar6);

        _objc_release(auVar15._0_8_);

        _objc_release(uVar6);

        FUN_00299540(pcVar13,extraout_x1,&cf_members);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);

        auVar15 = _objc_opt_isKindOfClass(uVar7,uVar6);

        uVar6 = auVar15._8_8_;

        if ((auVar15._0_8_ & 1) != 0) {

          FUN_00293860(uVar7);

          uVar6 = extraout_x1_00;

        }

        FUN_002a4680(&_OBJC_CLASS___NSString,uVar6,&::cf__);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002944a0(uVar5);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,uVar6);

        _objc_release(auVar15._0_8_);

        _objc_release(uVar6);

        FUN_0029c800(uVar5,extraout_x1_07,1);

        _objc_release(uVar7);

      }

      else {

        auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

        uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,0,&cf_CLGCustomAddCell);

        FUN_002a50e0();

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_format_s_);

        _objc_release(auVar15._0_8_);

        FUN_002a4a80(&_OBJC_CLASS___UIColor);

        pcVar13 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        FUN_002a50e0(uVar5);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar9 = auVar15._0_8_;

        FUN_002a1da0(uVar9,auVar15._8_8_,pcVar13);

      }

      _objc_release(uVar9);

LAB_001e5710:

      _objc_release(pcVar13);

      goto LAB_001e5134;

    }

    lVar3 = FUN_0029c020(param_4);

    if (lVar3 != 4) goto LAB_001e5128;

    lVar3 = 2;

    if (DAT_003e70f0 != '\0') {

      lVar3 = 3;

    }

    lVar10 = 3;

    if (DAT_003e70f0 != '\0') {

      lVar10 = 4;

    }

    uVar14 = (ulong)DAT_003eaabe;

    uVar11 = (ulong)DAT_003eaabf;

    lVar8 = FUN_0029bae0(param_4);

    if (lVar8 == 0) {

      FUN_002a50e0(uVar2);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_>f_yk_pe);

      _objc_release(auVar15._0_8_);

      FUN_001e62d4(DAT_003e70f1,param_1,"onShowCountChanged:");

      auVar15 = _objc_retainAutoreleasedReturnValue();

      uVar9 = auVar15._0_8_;

      FUN_0029c820(uVar2,auVar15._8_8_,uVar9);

    }

    else {

      lVar8 = FUN_0029bae0(param_4);

      if (lVar8 == 1) {

        FUN_002a50e0(uVar2);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_R_N>f_y_gh__);

        _objc_release(auVar15._0_8_);

        FUN_001e62d4(DAT_003e70f0,param_1,"onShowUnreadBadgeChanged:");

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar9 = auVar15._0_8_;

        FUN_0029c820(uVar2,auVar15._8_8_,uVar9);

      }

      else {

        if ((DAT_003e70f0 != '\x01') || (lVar8 = FUN_0029bae0(param_4), lVar8 != 2)) {

          lVar8 = FUN_0029bae0(param_4);

          if (lVar8 == lVar3) {

            auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

            uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,1,&cf_CLGDisplayColorCell);

            FUN_002a50e0();

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf__INhN_4Yr);

            _objc_release(auVar15._0_8_);

            FUN_001e64f4();

            uVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_002944a0(uVar5);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,uVar9);

            _objc_release(auVar15._0_8_);

            _objc_release(uVar9);

            FUN_0029bfa0(&_OBJC_CLASS___UIColor);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_002944a0(uVar5);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1da0(auVar15._0_8_,auVar15._8_8_,uVar9);

            _objc_release(auVar15._0_8_);

            _objc_release(uVar9);

            FUN_001e62d4(DAT_003eaabe,param_1,"onDividerTitleColorEnabledChanged:");

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_0029c820(uVar5,auVar15._8_8_,auVar15._0_8_);

            _objc_release(auVar15._0_8_);

            FUN_002a12c0(uVar5,extraout_x1_10,0);

            goto LAB_001e5134;

          }

          if ((DAT_003eaabe == 1) && (lVar8 = FUN_0029bae0(param_4), lVar8 == lVar3 + 1)) {

            auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

            uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,0,&cf_CLGDisplayColorPickerCell);

            FUN_002a50e0();

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_hN_4Yr);

            _objc_release(auVar15._0_8_);

            FUN_00214474(DAT_003ea958,DAT_003ea960);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_0029c820(uVar5,auVar15._8_8_,auVar15._0_8_);

            _objc_release(auVar15._0_8_);

            FUN_002a12c0(uVar5,extraout_x1_13,3);

            goto LAB_001e5134;

          }

          lVar10 = lVar10 + uVar14;

          uVar14 = DAT_003eaac8 - 1;

          if ((DAT_003eaa30 == 1) && (uVar14 < 4)) {

            lVar3 = FUN_0029bae0(param_4);

            if (lVar3 == lVar10) {

              auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

              uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,1,&cf_CLGSideRailTitleColorCell);

              FUN_002a50e0();

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf__INOhhr);

              _objc_release(auVar15._0_8_);

              FUN_001e6538();

              uVar9 = _objc_retainAutoreleasedReturnValue();

              FUN_002944a0(uVar5);

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,uVar9);

              _objc_release(auVar15._0_8_);

              _objc_release(uVar9);

              FUN_0029bfa0(&_OBJC_CLASS___UIColor);

              uVar9 = _objc_retainAutoreleasedReturnValue();

              FUN_002944a0(uVar5);

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1da0(auVar15._0_8_,auVar15._8_8_,uVar9);

              _objc_release(auVar15._0_8_);

              _objc_release(uVar9);

              FUN_001e62d4(DAT_003eaabf,param_1,"onSideRailTitleColorEnabledChanged:");

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_0029c820(uVar5,auVar15._8_8_,auVar15._0_8_);

              _objc_release(auVar15._0_8_);

              FUN_002a12c0(uVar5,extraout_x1_14,0);

              goto LAB_001e5134;

            }

            uVar14 = DAT_003eaac8 - 1;

          }

          if ((((DAT_003eaa30 & 1) != 0) && (uVar14 < 4)) && ((DAT_003eaabf & 1) != 0)) {

            lVar3 = FUN_0029bae0(param_4);

            if (lVar3 == lVar10 + 1) {

              auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

              uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,0,&cf_CLGSideRailTitleColorPickerCell

                                  );

              FUN_002a50e0();

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_Ohhr);

              _objc_release(auVar15._0_8_);

              FUN_00214474(DAT_003ea968,DAT_003ea970);

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_0029c820(uVar5,auVar15._8_8_,auVar15._0_8_);

              _objc_release(auVar15._0_8_);

              FUN_002a12c0(uVar5,extraout_x1_15,3);

              goto LAB_001e5134;

            }

            uVar14 = DAT_003eaac8 - 1;

          }

          if (((DAT_003eaa30 & 1) != 0) && (uVar14 < 4)) {

            lVar3 = FUN_0029bae0(param_4);

            if (lVar3 == lVar10 + uVar11 + 1) {

              auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

              uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,1,

                                   &cf_CLGSideRailSelectedBackgroundColorCell);

              FUN_002a50e0();

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf__INOh_Nofr);

              _objc_release(auVar15._0_8_);

              FUN_001e657c();

              uVar9 = _objc_retainAutoreleasedReturnValue();

              FUN_002944a0(uVar5);

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,uVar9);

              _objc_release(auVar15._0_8_);

              _objc_release(uVar9);

              FUN_0029bfa0(&_OBJC_CLASS___UIColor);

              uVar9 = _objc_retainAutoreleasedReturnValue();

              FUN_002944a0(uVar5);

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1da0(auVar15._0_8_,auVar15._8_8_,uVar9);

              _objc_release(auVar15._0_8_);

              _objc_release(uVar9);

              FUN_001e62d4(DAT_003eaac0,param_1,"onSideRailSelectedBackgroundColorEnabledChanged:");

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_0029c820(uVar5,auVar15._8_8_,auVar15._0_8_);

              _objc_release(auVar15._0_8_);

              FUN_002a12c0(uVar5,extraout_x1_16,0);

              goto LAB_001e5134;

            }

            uVar14 = DAT_003eaac8 - 1;

          }

          if ((((DAT_003eaa30 & 1) != 0) && (uVar14 < 4)) &&

             (((DAT_003eaac0 & 1) != 0 &&

              (lVar3 = FUN_0029bae0(param_4), lVar3 == lVar10 + uVar11 + 2)))) {

            auVar15 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

            uVar5 = FUN_00296ec0(auVar15._0_8_,auVar15._8_8_,0,

                                 &cf_CLGSideRailSelectedBackgroundColorPickerCell);

            FUN_002a50e0();

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_Oh_Nofr);

            _objc_release(auVar15._0_8_);

            FUN_001e65c0();

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_0029c820(uVar5,auVar15._8_8_,auVar15._0_8_);

            _objc_release(auVar15._0_8_);

            FUN_002a12c0(uVar5,extraout_x1_17,3);

            goto LAB_001e5134;

          }

          goto LAB_001e5128;

        }

        FUN_002a50e0(uVar2);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf__Nh);

        _objc_release(auVar15._0_8_);

        FUN_001e62d4(DAT_003e70e8,param_1,"onFollowThemeBadgeChanged:");

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar9 = auVar15._0_8_;

        FUN_0029c820(uVar2,auVar15._8_8_,uVar9);

      }

    }

LAB_001e5120:

    _objc_release(uVar9);

  }

LAB_001e5128:

  _objc_retain(uVar2);

LAB_001e5134:

  _objc_release(uVar2);

  _objc_release(param_4);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_68) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  IVar4 = _objc_autoreleaseReturnValue(uVar5);

  return IVar4;

}




