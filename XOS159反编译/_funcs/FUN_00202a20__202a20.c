// FUN_00202a20 @0x202a20


void FUN_00202a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  int iVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  undefined8 uVar24;

  undefined8 uVar25;

  undefined8 uVar26;

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

  long lVar27;

  undefined1 auVar28 [16];

  undefined1 auVar29 [16];

  undefined1 auVar30 [16];

  undefined1 auVar31 [16];

  undefined1 auVar32 [16];

  undefined1 auVar33 [16];

  undefined1 auVar34 [16];

  undefined8 local_160;

  long local_158;

  long local_150;

  undefined8 local_148;

  undefined8 local_138;

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined8 local_f0;

  undefined8 uStack_e8;

  undefined8 local_e0;

  undefined8 uStack_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  undefined8 local_c0;

  undefined8 uStack_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 uStack_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 local_80;

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_retain(param_4);

  if ((DAT_003eaa30 != 1) || (uVar2 = FUN_0021af90(param_1), (uVar2 & 1) == 0)) {

    (*DAT_003eabf8)(param_1,param_2,param_3,param_4);

    local_150 = _objc_retainAutoreleasedReturnValue();

    goto LAB_00202cf0;

  }

  FUN_0020e91c(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_retain(param_4);

  if (((param_4 == 0) || ((DAT_003eaa30 & 1) == 0)) || (lVar3 == 0)) {

LAB_00202cb4:

    (*DAT_003eabf8)(param_1,param_2,param_3,param_4);

    local_150 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    lVar4 = FUN_0029c020(param_4);

    lVar5 = FUN_002974a0(lVar3);

    if (lVar4 != lVar5) goto LAB_00202cb4;

    FUN_0020e940(param_1,lVar3,(DAT_003ead50 & DAT_003ead51 ^ 0xff) & 1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if ((lVar4 == 0) || (iVar1 = FUN_00297aa0(lVar4), iVar1 == 0)) {

LAB_00202cac:

      _objc_release(lVar4);

      goto LAB_00202cb4;

    }

    lVar5 = FUN_0029bae0(param_4);

    FUN_00294d00(lVar4);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    lVar7 = FUN_00293860();

    _objc_release(uVar6);

    if (lVar7 <= lVar5) goto LAB_00202cac;

    FUN_00294d00(lVar4);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    auVar28 = FUN_0029bae0(param_4);

    FUN_00299500(uVar6,auVar28._8_8_,auVar28._0_8_);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar6);

    _objc_release(lVar4);

    if (lVar5 == 0) goto LAB_00202cb4;

    iVar1 = FUN_00297760(lVar5);

    if (iVar1 == 0) {

      uVar6 = FUN_00299940(lVar5);

      auVar28 = FUN_00299980(lVar5);

      FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar28._8_8_,uVar6,auVar28._0_8_);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002a5fe0(lVar5);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      lVar4 = FUN_00297fa0();

      _objc_release(uVar6);

      uVar6 = uVar9;

      if (lVar4 != 0) {

        FUN_00211d9c(param_1,uVar9);

        auVar28 = _objc_retainAutoreleasedReturnValue();

        lVar4 = auVar28._0_8_;

        if (lVar4 != 0) {

          FUN_002a6080(lVar4,auVar28._8_8_,&cf_m_nsUserName);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          lVar7 = FUN_00297fa0(uVar8);

          if (lVar7 != 0) {

            FUN_002a5fe0(lVar5);

            auVar28 = _objc_retainAutoreleasedReturnValue();

            uVar2 = FUN_00297820(uVar8,auVar28._8_8_,auVar28._0_8_);

            _objc_release(auVar28._0_8_);

            if ((uVar2 & 1) == 0) {

              uVar10 = FUN_002974a0(lVar3);

              iVar1 = FUN_0021b014(param_1,uVar10);

              if (iVar1 != 0) {

                uVar6 = FUN_00299940(lVar5);

                auVar28 = FUN_00299980(lVar5);

                FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar28._8_8_,uVar6,auVar28._0_8_);

                uVar6 = _objc_retainAutoreleasedReturnValue();

                _objc_release(uVar9);

              }

            }

          }

          _objc_release(uVar8);

        }

        _objc_release(lVar4);

      }

      DAT_003ead8c = DAT_003ead8c + 1;

      (*DAT_003eabf8)(param_1,param_2,param_3,uVar6);

      local_150 = _objc_retainAutoreleasedReturnValue();

      DAT_003ead8c = DAT_003ead8c + -1;

      if (local_150 == 0) {

        auVar28 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

        local_150 = FUN_00296ec0(auVar28._0_8_,auVar28._8_8_,0,0);

      }

      _objc_release(uVar6);

      _objc_release(lVar5);

    }

    else {

      _objc_retain(param_3);

      _objc_retain(lVar5);

      if (DAT_003eaac8 == 6) {

        _objc_retain(param_3);

        _objc_retain(lVar5);

        FUN_002943e0(param_3,extraout_x1_00,&cf_XZYCLGDividerCell);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        uVar6 = _objc_opt_class(&objc::class_t::XZYCLG3DGroupCell);

        uVar2 = _objc_opt_isKindOfClass(lVar7,uVar6);

        lVar4 = lVar7;

        if ((uVar2 & 1) == 0) {

          lVar4 = 0;

        }

        _objc_retain(lVar4);

        auVar28._8_8_ = extraout_x1_01;

        auVar28._0_8_ = lVar7;

        if (lVar4 == 0) {

          auVar28 = _objc_alloc(&objc::class_t::XZYCLG3DGroupCell);

          auVar28 = FUN_00296ec0(auVar28._0_8_,auVar28._8_8_,0,&cf_XZYCLGDividerCell);

        }

        local_150 = auVar28._0_8_;

        FUN_0029ea60(local_150,auVar28._8_8_,param_3);

        FUN_00293380(local_150,extraout_x1_02,lVar5);

        _objc_release(lVar7);

        _objc_release(lVar5);

        _objc_release(param_3);

      }

      else {

        FUN_002943e0(param_3,extraout_x1,&cf_XZYCLGDividerCell);

        local_150 = _objc_retainAutoreleasedReturnValue();

        uVar6 = _objc_opt_class(&objc::class_t::XZYCLG3DGroupCell);

        uVar2 = _objc_opt_isKindOfClass(local_150,uVar6);

        if ((uVar2 & 1) == 0) {

          if (local_150 == 0) goto LAB_002030c8;

          _objc_getAssociatedObject(local_150,&DAT_003ead78);

          local_158 = _objc_retainAutoreleasedReturnValue();

          _objc_getAssociatedObject(local_150,&DAT_003ead79);

          local_148 = _objc_retainAutoreleasedReturnValue();

          _objc_getAssociatedObject(local_150,&DAT_003ead7d);

          local_160 = _objc_retainAutoreleasedReturnValue();

          _objc_getAssociatedObject(local_150,&DAT_003eaabc);

          local_138 = _objc_retainAutoreleasedReturnValue();

          if (local_158 == 0) {

            uStack_108 = 0;

            local_110 = 0;

            uStack_f8 = 0;

            uStack_100 = 0;

            lStack_128 = 0;

            local_130 = 0;

            uStack_118 = 0;

            local_120 = (long *)0x0;

            FUN_00293640(local_150);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            FUN_002a4840();

            uVar9 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar6);

            lVar4 = FUN_00293880(uVar9,extraout_x1_03,&local_130,&local_f0,0x10);

            if (lVar4 != 0) {

              lVar7 = *local_120;

              do {

                lVar27 = 0;

                do {

                  if (*local_120 != lVar7) {

                    _objc_enumerationMutation(uVar9);

                  }

                  local_158 = *(long *)(lStack_128 + lVar27 * 8);

                  uVar6 = _objc_opt_class(&_OBJC_CLASS___UILabel);

                  auVar28 = _objc_opt_isKindOfClass(local_158,uVar6);

                  if ((auVar28._0_8_ & 1) != 0) {

                    _objc_retain(local_158);

                    goto LAB_00203c5c;

                  }

                  lVar27 = lVar27 + 1;

                } while (lVar4 != lVar27);

                lVar4 = FUN_00293880(uVar9,auVar28._8_8_,&local_130,&local_f0,0x10);

              } while (lVar4 != 0);

            }

            local_158 = 0;

            goto LAB_00203c5c;

          }

        }

        else {

          _objc_release(local_150);

LAB_002030c8:

          auVar28 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

          auVar28 = FUN_00296ec0(auVar28._0_8_,auVar28._8_8_,0,&cf_XZYCLGDividerCell);

          local_150 = auVar28._0_8_;

          FUN_002a12c0(local_150,auVar28._8_8_,0);

          FUN_00292dc0(&_OBJC_CLASS___UIColor);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_0029cf60(local_150,auVar28._8_8_,auVar28._0_8_);

          _objc_release(auVar28._0_8_);

          FUN_00292dc0(&_OBJC_CLASS___UIColor);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_00293640(local_150);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_0029cf60(auVar28._0_8_,auVar28._8_8_,uVar6);

          _objc_release(auVar28._0_8_);

          _objc_release(uVar6);

          FUN_002a13c0(0,0x40c3880000000000,0,0,local_150);

          auVar28 = _objc_alloc_init(&_OBJC_CLASS___UIImageView);

          local_148 = auVar28._0_8_;

          FUN_002a21e0(local_148,auVar28._8_8_,0);

          FUN_0029d6c0(local_148,extraout_x1_04,1);

          FUN_0029d4a0(local_148,extraout_x1_05,1);

          FUN_0029e8a0(local_148,extraout_x1_06,1);

          FUN_00293640(local_150);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00291380(auVar28._0_8_,auVar28._8_8_,local_148);

          _objc_release(auVar28._0_8_);

          _objc_setAssociatedObject(local_150,&DAT_003ead79,local_148,1);

          auVar28 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

          local_158 = auVar28._0_8_;

          FUN_002a21e0(local_158,auVar28._8_8_,0);

          FUN_001d0ec4(0x4028000000000000,1);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_0029e520(local_158,auVar28._8_8_,auVar28._0_8_);

          _objc_release(auVar28._0_8_);

          FUN_0029bfa0(&_OBJC_CLASS___UIColor);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1da0(local_158,auVar28._8_8_,auVar28._0_8_);

          _objc_release(auVar28._0_8_);

          FUN_00293640(local_150);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00291380(auVar28._0_8_,auVar28._8_8_,local_158);

          _objc_release(auVar28._0_8_);

          _objc_setAssociatedObject(local_150,&DAT_003ead78,local_158,1);

          auVar28 = _objc_alloc_init(&_OBJC_CLASS___UIImageView);

          local_160 = auVar28._0_8_;

          FUN_002a21e0(local_160,auVar28._8_8_,0);

          FUN_0029d6c0(local_160,extraout_x1_07,1);

          FUN_002a4fc0(&_OBJC_CLASS___UIColor);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1f40(local_160,auVar28._8_8_,auVar28._0_8_);

          _objc_release(auVar28._0_8_);

          FUN_00293640(local_150);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00291380(auVar28._0_8_,auVar28._8_8_,local_160);

          _objc_release(auVar28._0_8_);

          _objc_setAssociatedObject(local_150,&DAT_003ead7d,local_160,1);

          auVar28 = _objc_alloc_init(&objc::class_t::XZYCLGUnreadBadge);

          local_138 = auVar28._0_8_;

          FUN_002a21e0(local_138,auVar28._8_8_,0);

          FUN_0029e8a0(local_138,extraout_x1_08,1);

          FUN_00293640(local_150);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00291380(auVar28._0_8_,auVar28._8_8_,local_138);

          _objc_release(auVar28._0_8_);

          _objc_setAssociatedObject(local_150,&DAT_003eaabc,local_138,1);

          FUN_00297f40(local_148);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_00293640(local_150);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          FUN_00297f40();

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00293480(0x4032000000000000,uVar6,auVar28._8_8_,auVar28._0_8_);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar28._0_8_);

          _objc_release(uVar8);

          _objc_release(uVar6);

          FUN_002a6500(local_148);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_002934a0(0);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar6);

          FUN_00296060(local_148);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_002934a0(0);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar6);

          FUN_00297f40(local_158);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_002a5660(local_148);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00293480(0,uVar6,auVar28._8_8_,auVar28._0_8_);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar28._0_8_);

          _objc_release(uVar6);

          FUN_00292b40(local_148);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_00293640(local_150);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          FUN_00292b40();

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00293460(uVar6,auVar28._8_8_,auVar28._0_8_);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar28._0_8_);

          _objc_release(uVar12);

          _objc_release(uVar6);

          FUN_00292b40(local_158);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_00293640(local_150);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          FUN_00292b40();

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00293460(uVar6,auVar28._8_8_,auVar28._0_8_);

          uVar14 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar28._0_8_);

          _objc_release(uVar12);

          _objc_release(uVar6);

          FUN_002a5660(local_160);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_00293640(local_150);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          FUN_002a5660();

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00293480(0xc032000000000000,uVar6,auVar28._8_8_,auVar28._0_8_);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar28._0_8_);

          _objc_release(uVar12);

          _objc_release(uVar6);

          FUN_002a6500(local_160);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_002934a0(0x4026000000000000);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar6);

          FUN_00296060(local_160);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_002934a0(0x4026000000000000);

          uVar16 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar6);

          _objc_setAssociatedObject(local_150,&DAT_003ead81,uVar9,1);

          _objc_setAssociatedObject(local_150,&DAT_003ead7a,uVar8,1);

          _objc_setAssociatedObject(local_150,&DAT_003ead7b,uVar10,1);

          _objc_setAssociatedObject(local_150,&DAT_003ead7c,uVar11,1);

          _objc_setAssociatedObject(local_150,&DAT_003ead7e,uVar15,1);

          _objc_setAssociatedObject(local_150,&DAT_003ead7f,uVar12,1);

          _objc_setAssociatedObject(local_150,&DAT_003ead80,uVar16,1);

          local_f0 = uVar9;

          uStack_e8 = uVar8;

          local_e0 = uVar10;

          uStack_d8 = uVar11;

          local_d0 = uVar13;

          FUN_002a5660(local_158);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_00297f40(local_138);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00293520(0xc020000000000000,uVar6,auVar28._8_8_,auVar28._0_8_);

          uVar17 = _objc_retainAutoreleasedReturnValue();

          local_c8 = uVar17;

          FUN_002a5660(local_158);

          uVar18 = _objc_retainAutoreleasedReturnValue();

          FUN_00297f40(local_160);

          auVar29 = _objc_retainAutoreleasedReturnValue();

          FUN_00293520(0xc020000000000000,uVar18,auVar29._8_8_,auVar29._0_8_);

          uVar19 = _objc_retainAutoreleasedReturnValue();

          local_c0 = uVar19;

          uStack_b8 = uVar14;

          local_b0 = uVar15;

          FUN_00292b40(local_160);

          uVar20 = _objc_retainAutoreleasedReturnValue();

          FUN_00292b40(local_158);

          auVar30 = _objc_retainAutoreleasedReturnValue();

          FUN_00293460(uVar20,auVar30._8_8_,auVar30._0_8_);

          uVar21 = _objc_retainAutoreleasedReturnValue();

          local_a8 = uVar21;

          uStack_a0 = uVar12;

          local_98 = uVar16;

          FUN_002a5660(local_138);

          uVar22 = _objc_retainAutoreleasedReturnValue();

          FUN_00297f40(local_160);

          auVar31 = _objc_retainAutoreleasedReturnValue();

          FUN_00293480(0xc018000000000000,uVar22,auVar31._8_8_,auVar31._0_8_);

          uVar23 = _objc_retainAutoreleasedReturnValue();

          local_90 = uVar23;

          FUN_00292b40(local_138);

          uVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_00292b40(local_158);

          auVar32 = _objc_retainAutoreleasedReturnValue();

          FUN_00293460(uVar24,auVar32._8_8_,auVar32._0_8_);

          uVar25 = _objc_retainAutoreleasedReturnValue();

          local_88 = uVar25;

          FUN_00296060(local_138);

          uVar26 = _objc_retainAutoreleasedReturnValue();

          FUN_002934e0(0x4032000000000000);

          auVar33 = _objc_retainAutoreleasedReturnValue();

          local_80 = auVar33._0_8_;

          FUN_00291e00(&_OBJC_CLASS___NSArray,auVar33._8_8_,&local_f0,0xf);

          auVar34 = _objc_retainAutoreleasedReturnValue();

          FUN_00290f20(&_OBJC_CLASS___NSLayoutConstraint,auVar34._8_8_,auVar34._0_8_);

          _objc_release(auVar34._0_8_);

          _objc_release(auVar33._0_8_);

          _objc_release(uVar26);

          _objc_release(uVar25);

          _objc_release(auVar32._0_8_);

          _objc_release(uVar24);

          _objc_release(uVar23);

          _objc_release(auVar31._0_8_);

          _objc_release(uVar22);

          _objc_release(uVar21);

          _objc_release(auVar30._0_8_);

          _objc_release(uVar20);

          _objc_release(uVar19);

          _objc_release(auVar29._0_8_);

          _objc_release(uVar18);

          _objc_release(uVar17);

          _objc_release(auVar28._0_8_);

          _objc_release(uVar6);

          uVar6 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);

          FUN_002a2e40(&objc::class_t::XZYCLGDividerGestureTarget);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          uVar6 = FUN_00296f20(uVar6,auVar28._8_8_,auVar28._0_8_,"onLongPress:");

          _objc_release(auVar28._0_8_);

          FUN_0029fce0(0x3fdccccccccccccd,uVar6);

          FUN_00291140(local_150,extraout_x1_09,uVar6);

          _objc_setAssociatedObject(local_150,&DAT_003eaef8,PTR____kCFBooleanTrue_00388320,1);

          _objc_release(uVar6);

          _objc_release(uVar16);

          _objc_release(uVar12);

          _objc_release(uVar15);

          _objc_release(uVar14);

          _objc_release(uVar13);

          _objc_release(uVar11);

          _objc_release(uVar10);

          _objc_release(uVar8);

LAB_00203c5c:

          _objc_release(uVar9);

        }

        FUN_0020cd60(local_150,lVar5);

        _objc_release(local_138);

        _objc_release(local_160);

        _objc_release(local_148);

        _objc_release(local_158);

      }

      _objc_release(lVar5);

      _objc_release(param_3);

      _objc_release(lVar5);

    }

  }

  _objc_release(param_4);

  _objc_release(lVar3);

LAB_00202cf0:

  _objc_release(param_4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    _objc_autoreleaseReturnValue(local_150);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




