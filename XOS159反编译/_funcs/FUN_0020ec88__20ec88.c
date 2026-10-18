// FUN_0020ec88 @0x20ec88


void FUN_0020ec88(undefined8 param_1,long param_2,long param_3)



{

  byte bVar1;

  int iVar2;

  uint uVar3;

  uint uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  ulong uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  long lVar20;

  undefined8 uVar21;

  ulong uVar22;

  undefined8 uVar23;

  undefined8 uVar24;

  long lVar25;

  undefined8 uVar26;

  long lVar27;

  undefined8 uVar28;

  cfstringStruct *pcVar29;

  undefined8 uVar30;

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

  long lVar31;

  undefined1 auVar32 [16];

  undefined1 auVar33 [16];

  long local_2c8;

  long local_270;

  cfstringStruct *local_268;

  long local_260;

  undefined8 local_220;

  long lStack_218;

  long *local_210;

  undefined8 uStack_208;

  undefined8 local_200;

  undefined8 uStack_1f8;

  undefined8 uStack_1f0;

  undefined8 uStack_1e8;

  undefined *local_1d8;

  undefined8 local_1d0;

  code *local_1c8;

  undefined *puStack_1c0;

  undefined8 local_1b8;

  undefined8 local_1b0;

  long lStack_1a8;

  long *local_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  auVar32 = _objc_alloc_init(&objc::class_t::XZYCLGPlan);

  uVar5 = auVar32._0_8_;

  FUN_002a1420(uVar5,auVar32._8_8_,DAT_003eaab4);

  FUN_002a6080(param_1,extraout_x1,&cf_m_tableView);

  local_2c8 = _objc_retainAutoreleasedReturnValue();

  if (local_2c8 == 0) {

    local_2c8 = 0;

LAB_0020ed30:

    lVar6 = 1;

  }

  else {

    auVar32 = _objc_opt_respondsToSelector(param_1,"numberOfSectionsInTableView:");

    if ((auVar32._0_8_ & 1) == 0) goto LAB_0020ed30;

    lVar6 = FUN_00299360(param_1,auVar32._8_8_,local_2c8);

  }

  FUN_002115b0(param_1);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  uVar11 = auVar32._8_8_;

  uVar9 = auVar32._0_8_;

  local_260 = 0;

  lVar31 = 0;

  if (lVar6 < 2) {

    lVar6 = 1;

  }

  do {

    lVar20 = param_3;

    if (param_2 != lVar31) {

      auVar32 = FUN_0020eb40(param_1,lVar31);

      uVar11 = auVar32._8_8_;

      lVar20 = auVar32._0_8_;

    }

    if (0 < lVar20) {

      FUN_00299400(&_OBJC_CLASS___NSNumber,uVar11,lVar31);

      auVar32 = _objc_retainAutoreleasedReturnValue();

      uVar10 = FUN_00293560(uVar7,auVar32._8_8_,auVar32._0_8_);

      _objc_release(auVar32._0_8_);

      uVar11 = extraout_x1_00;

      if ((uVar10 & 1) == 0) {

        auVar32 = FUN_00211660(param_1,lVar31,lVar20);

        uVar11 = auVar32._8_8_;

        if ((auVar32._0_8_ & 1) == 0) goto LAB_0020eee0;

      }

      if ((param_2 == lVar31) ||

         (iVar2 = FUN_00211744(param_1,lVar31,lVar20), uVar11 = extraout_x1_01, iVar2 == 0)) {

        FUN_00299400(&_OBJC_CLASS___NSNumber,uVar11,lVar31);

        auVar32 = _objc_retainAutoreleasedReturnValue();

        FUN_00291240(uVar7,auVar32._8_8_,auVar32._0_8_);

        _objc_release(auVar32._0_8_);

        FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_03,lVar31);

        auVar32 = _objc_retainAutoreleasedReturnValue();

        FUN_00291240(uVar8,auVar32._8_8_,auVar32._0_8_);

        _objc_release(auVar32._0_8_);

        FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_04,lVar20);

        auVar32 = _objc_retainAutoreleasedReturnValue();

        FUN_00291240(uVar9,auVar32._8_8_,auVar32._0_8_);

        _objc_release(auVar32._0_8_);

        local_260 = lVar20 + local_260;

        uVar11 = extraout_x1_05;

      }

      else {

        FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_01,lVar31);

        auVar32 = _objc_retainAutoreleasedReturnValue();

        FUN_00291240(uVar7,auVar32._8_8_,auVar32._0_8_);

        _objc_release(auVar32._0_8_);

        uVar11 = extraout_x1_02;

      }

    }

LAB_0020eee0:

    lVar31 = lVar31 + 1;

  } while (lVar6 != lVar31);

  FUN_002a04a0(uVar5,uVar11,local_260);

  auVar32 = FUN_00293860(uVar8);

  if (auVar32._0_8_ == 0) {

    FUN_0029f140(uVar5,auVar32._8_8_,0);

    FUN_0029e100(uVar5,extraout_x1_06,PTR____NSArray0__struct_00388308);

    FUN_0029dde0(uVar5,extraout_x1_07,PTR____NSArray0__struct_00388308);

    FUN_00211bfc(param_1);

    _objc_retain(uVar5);

    goto LAB_0020fcf4;

  }

  FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar32._8_8_,local_260);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029c6e0(&_OBJC_CLASS___NSCountedSet);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

  uVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  if (DAT_003e715d == '\x01') {

    FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

    local_270 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    local_270 = 0;

  }

  uVar10 = 0;

  bVar1 = 0;

  while( true ) {

    auVar32 = FUN_00293860(uVar8);

    if (auVar32._0_8_ <= uVar10) break;

    FUN_00299500(uVar8,auVar32._8_8_,uVar10);

    uVar18 = _objc_retainAutoreleasedReturnValue();

    uVar19 = FUN_002974a0();

    _objc_release(uVar18);

    FUN_00299500(uVar9,extraout_x1_08,uVar10);

    uVar18 = _objc_retainAutoreleasedReturnValue();

    lVar6 = FUN_002974a0();

    _objc_release(uVar18);

    if (0 < lVar6) {

      lVar31 = 0;

      uVar18 = extraout_x1_09;

      do {

        FUN_00296780(&_OBJC_CLASS___NSIndexPath,uVar18,lVar31,uVar19);

        uVar18 = _objc_retainAutoreleasedReturnValue();

        FUN_00211d9c(param_1,uVar18);

        lVar20 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar18);

        if (lVar20 == 0) {

LAB_0020f0e8:

          bVar1 = 1;

        }

        else {

          uVar18 = _objc_opt_class(&_OBJC_CLASS___UIResponder);

          auVar32 = _objc_opt_isKindOfClass(lVar20,uVar18);

          if ((auVar32._0_8_ & 1) != 0) goto LAB_0020f0e8;

          FUN_002a6080(lVar20,auVar32._8_8_,&cf_m_nsUserName);

          uVar18 = _objc_retainAutoreleasedReturnValue();

          if (local_270 == 0) {

LAB_0020f158:

            FUN_00211e50(lVar20,uVar18);

            uVar21 = _objc_retainAutoreleasedReturnValue();

            _objc_retain(uVar18);

            uVar23 = _objc_opt_class(&_OBJC_CLASS___NSString);

            auVar32 = _objc_opt_isKindOfClass(uVar18,uVar23);

            if ((auVar32._0_8_ & 1) == 0) {

              uVar23 = 0;

            }

            else {

              uVar23 = FUN_00297820(uVar18,auVar32._8_8_,&cf_brandservicesessionholder);

            }

            _objc_release(uVar18);

            auVar32 = _objc_alloc_init(&objc::class_t::XZYCLGEntry);

            uVar28 = auVar32._0_8_;

            FUN_0029f060(uVar28,auVar32._8_8_,0);

            FUN_0029e780(uVar28,extraout_x1_10,uVar21);

            FUN_002a0480(uVar28,extraout_x1_11,lVar31);

            FUN_002a04c0(uVar28,extraout_x1_12,uVar19);

            FUN_0029f000(uVar28,extraout_x1_13,uVar23);

            FUN_002a23e0(uVar28,extraout_x1_14,uVar18);

            FUN_00291240(uVar11,extraout_x1_15,uVar28);

            FUN_00291240(uVar12,extraout_x1_16,uVar21);

            uVar24 = _objc_opt_class(&_OBJC_CLASS___NSString);

            uVar22 = _objc_opt_isKindOfClass(uVar18,uVar24);

            if ((uVar22 & 1) != 0) {

              auVar32 = FUN_00297fa0(uVar18);

              if (auVar32._0_8_ != 0) {

                FUN_002a00a0(uVar14,auVar32._8_8_,uVar21,uVar18);

                FUN_00299540(uVar17,extraout_x1_17,uVar18);

                lVar25 = _objc_retainAutoreleasedReturnValue();

                _objc_release();

                if (lVar25 == 0) {

                  FUN_00296780(&_OBJC_CLASS___NSIndexPath,extraout_x1_18,lVar31,uVar19);

                  auVar32 = _objc_retainAutoreleasedReturnValue();

                  FUN_002a00a0(uVar17,auVar32._8_8_,auVar32._0_8_,uVar18);

                  _objc_release(auVar32._0_8_);

                }

              }

            }

            uVar26 = FUN_00212188(lVar20);

            lVar25 = FUN_00212374(lVar20,uVar23,uVar26);

            uVar24 = _objc_opt_class(&_OBJC_CLASS___NSString);

            auVar32 = _objc_opt_isKindOfClass(uVar18,uVar24);

            uVar24 = auVar32._8_8_;

            if ((auVar32._0_8_ & 1) != 0) {

              auVar32 = FUN_00297fa0(uVar18);

              uVar24 = auVar32._8_8_;

              if (auVar32._0_8_ != 0) {

                FUN_00299420(&_OBJC_CLASS___NSNumber,uVar24,lVar25);

                auVar32 = _objc_retainAutoreleasedReturnValue();

                FUN_002a00a0(uVar15,auVar32._8_8_,auVar32._0_8_,uVar18);

                _objc_release(auVar32._0_8_);

                FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1_19,uVar26);

                auVar32 = _objc_retainAutoreleasedReturnValue();

                FUN_002a00a0(uVar16,auVar32._8_8_,auVar32._0_8_,uVar18);

                _objc_release(auVar32._0_8_);

                uVar24 = extraout_x1_20;

              }

            }

            if (lVar25 != 0) {

              FUN_00299540(uVar13,uVar24,uVar21);

              uVar24 = _objc_retainAutoreleasedReturnValue();

              lVar27 = FUN_002984c0();

              _objc_release(uVar24);

              FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1_21,lVar27 + lVar25);

              auVar32 = _objc_retainAutoreleasedReturnValue();

              FUN_002a00a0(uVar13,auVar32._8_8_,auVar32._0_8_,uVar21);

              _objc_release(auVar32._0_8_);

              uVar24 = extraout_x1_22;

            }

            if ((DAT_003eaac1 == '\x01') &&

               (uVar22 = FUN_00297820(uVar21,uVar24,&cf_other), (uVar22 & 1) == 0)) {

              auVar32 = _objc_alloc_init(&objc::class_t::XZYCLGEntry);

              uVar24 = auVar32._0_8_;

              FUN_0029f060(uVar24,auVar32._8_8_,0);

              FUN_0029e780(uVar24,extraout_x1_23,&cf_other);

              FUN_002a0480(uVar24,extraout_x1_24,lVar31);

              FUN_002a04c0(uVar24,extraout_x1_25,uVar19);

              FUN_0029f000(uVar24,extraout_x1_26,uVar23);

              FUN_002a23e0(uVar24,extraout_x1_27,uVar18);

              FUN_00291240(uVar11,extraout_x1_28,uVar24);

              FUN_00291240(uVar12,extraout_x1_29,&cf_other);

              if (lVar25 != 0) {

                FUN_00299540(uVar13,extraout_x1_30,&cf_other);

                uVar23 = _objc_retainAutoreleasedReturnValue();

                lVar27 = FUN_002984c0();

                _objc_release(uVar23);

                FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1_31,lVar27 + lVar25);

                auVar32 = _objc_retainAutoreleasedReturnValue();

                FUN_002a00a0(uVar13,auVar32._8_8_,auVar32._0_8_,&cf_other);

                _objc_release(auVar32._0_8_);

              }

              _objc_release(uVar24);

            }

            _objc_release(uVar28);

            _objc_release(uVar21);

          }

          else {

            uVar21 = _objc_opt_class(&_OBJC_CLASS___NSString);

            uVar22 = _objc_opt_isKindOfClass(uVar18,uVar21);

            if ((uVar22 & 1) == 0) goto LAB_0020f158;

            auVar32 = FUN_00297fa0(uVar18);

            if (auVar32._0_8_ == 0) goto LAB_0020f158;

            auVar32 = FUN_00293560(local_270,auVar32._8_8_,uVar18);

            if ((auVar32._0_8_ & 1) == 0) {

              FUN_00291240(local_270,auVar32._8_8_,uVar18);

              goto LAB_0020f158;

            }

          }

          _objc_release(uVar18);

        }

        _objc_release(lVar20);

        lVar31 = lVar31 + 1;

        uVar18 = extraout_x1_32;

      } while (lVar6 != lVar31);

    }

    uVar10 = uVar10 + 1;

  }

  auVar32 = FUN_00293860(uVar11);

  uVar18 = auVar32._8_8_;

  if ((bool)(auVar32._0_8_ != 0 & bVar1)) {

    FUN_00211340(param_1);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar18 = extraout_x1_33;

    if (lVar6 == 0) goto LAB_0020f5c8;

LAB_0020f574:

    FUN_0029f140(uVar5,uVar18,0);

    FUN_0029e100(uVar5,extraout_x1_34,PTR____NSArray0__struct_00388308);

    FUN_0029dde0(uVar5,extraout_x1_35,PTR____NSArray0__struct_00388308);

    FUN_0029ca80(uVar5,extraout_x1_36,PTR____NSArray0__struct_00388308);

    FUN_00211bfc(param_1);

    _objc_retain(uVar5);

  }

  else {

    if (auVar32._0_8_ == 0) goto LAB_0020f574;

LAB_0020f5c8:

    FUN_0029f140(uVar5,uVar18,1);

    FUN_002a2700(uVar5,extraout_x1_37,uVar14);

    FUN_002a2760(uVar5,extraout_x1_38,uVar15);

    FUN_002a2740(uVar5,extraout_x1_39,uVar16);

    FUN_002a2720(uVar5,extraout_x1_40,uVar17);

    FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

    uVar18 = _objc_retainAutoreleasedReturnValue();

    uStack_188 = 0;

    local_190 = 0;

    uStack_178 = 0;

    uStack_180 = 0;

    lStack_1a8 = 0;

    local_1b0 = 0;

    uStack_198 = 0;

    local_1a0 = (long *)0x0;

    _objc_retain(uVar11);

    lVar6 = FUN_00293880(uVar11,extraout_x1_41,&local_1b0,auStack_f0,0x10);

    if (lVar6 != 0) {

      lVar31 = *local_1a0;

      do {

        lVar20 = 0;

        do {

          if (*local_1a0 != lVar31) {

            _objc_enumerationMutation(uVar11);

          }

          uVar21 = *(undefined8 *)(lStack_1a8 + lVar20 * 8);

          FUN_00295de0(uVar21);

          auVar32 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(uVar18,auVar32._8_8_,auVar32._0_8_);

          lVar25 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          _objc_release(auVar32._0_8_);

          uVar19 = extraout_x1_42;

          if (lVar25 == 0) {

            FUN_00295de0(uVar21);

            uVar19 = _objc_retainAutoreleasedReturnValue();

            auVar32 = FUN_00212910();

            FUN_00299400(&_OBJC_CLASS___NSNumber,auVar32._8_8_,auVar32._0_8_);

            uVar23 = _objc_retainAutoreleasedReturnValue();

            FUN_00295de0(uVar21);

            auVar32 = _objc_retainAutoreleasedReturnValue();

            FUN_002a00a0(uVar18,auVar32._8_8_,uVar23,auVar32._0_8_);

            _objc_release(auVar32._0_8_);

            _objc_release(uVar23);

            _objc_release(uVar19);

            uVar19 = extraout_x1_43;

          }

          lVar20 = lVar20 + 1;

        } while (lVar6 != lVar20);

        lVar6 = FUN_00293880(uVar11,uVar19,&local_1b0,auStack_f0,0x10);

      } while (lVar6 != 0);

    }

    _objc_release(uVar11);

    local_1d8 = PTR___NSConcreteStackBlock_003886f0;

    local_1d0 = 0xc2000000;

    local_1c8 = FUN_002129b8;

    puStack_1c0 = &DAT_0038f198;

    _objc_retain(uVar18);

    local_1b8 = uVar18;

    FUN_002a3ee0(uVar11,extraout_x1_44,&local_1d8);

    FUN_00291da0(&_OBJC_CLASS___NSMutableArray,extraout_x1_45,local_260 + 6);

    auVar32 = _objc_retainAutoreleasedReturnValue();

    uVar19 = auVar32._0_8_;

    FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar32._8_8_,6);

    uVar21 = _objc_retainAutoreleasedReturnValue();

    FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

    uVar23 = _objc_retainAutoreleasedReturnValue();

    uVar10 = DAT_003eaac8;

    uVar4 = 0;

    local_268 = (cfstringStruct *)0x0;

    if ((DAT_003eaa30 == '\x01') && (DAT_003eaac8 - 1 < 6)) {

      lVar6 = FUN_00293860(uVar11);

      if (lVar6 == 0) {

        local_268 = (cfstringStruct *)0x0;

      }

      else {

        FUN_001d31c8(param_1);

        local_268 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        if ((DAT_003eaac8 == 6) || ((uVar10 < 6 && ((1L << (uVar10 & 0x3f) & 0x26U) != 0)))) {

          auVar32 = FUN_00297fa0(local_268);

          if ((auVar32._0_8_ == 0) ||

             (lVar6 = FUN_002938a0(uVar12,auVar32._8_8_,local_268), lVar6 == 0)) {

            FUN_00295440(uVar11);

            uVar28 = _objc_retainAutoreleasedReturnValue();

            FUN_00295de0();

            pcVar29 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            _objc_release(local_268);

            _objc_release(uVar28);

            FUN_001d393c(param_1,pcVar29);

            local_268 = pcVar29;

          }

        }

        else {

          auVar32 = FUN_00297fa0(local_268);

          if (auVar32._0_8_ != 0) {

            auVar32 = FUN_00297820(local_268,auVar32._8_8_,&cf___xzy_clg_side_total__);

            if (((auVar32._0_8_ & 1) != 0) ||

               (lVar6 = FUN_002938a0(uVar12,auVar32._8_8_,local_268), lVar6 != 0))

            goto LAB_0020f8dc;

          }

          _objc_release(local_268);

          local_268 = &cf___xzy_clg_side_total__;

          FUN_001d393c(param_1);

        }

      }

LAB_0020f8dc:

      if ((DAT_003eaac8 != 6) && ((5 < uVar10 || ((1L << (uVar10 & 0x3f) & 0x26U) == 0)))) {

        auVar32 = FUN_00297fa0(local_268);

        if (auVar32._0_8_ != 0) {

          uVar4 = FUN_00297820(local_268,auVar32._8_8_,&cf___xzy_clg_side_total__);

          uVar4 = uVar4 ^ 1;

          goto LAB_0020f90c;

        }

      }

      uVar4 = 0;

    }

LAB_0020f90c:

    uStack_1f8 = 0;

    local_200 = 0;

    uStack_1e8 = 0;

    uStack_1f0 = 0;

    lStack_218 = 0;

    local_220 = 0;

    uStack_208 = 0;

    local_210 = (long *)0x0;

    _objc_retain(uVar11);

    lVar31 = FUN_00293880(uVar11,extraout_x1_46,&local_220,auStack_170,0x10);

    lVar6 = 0;

    if (lVar31 != 0) {

      uVar28 = 0;

      lVar20 = *local_210;

      do {

        lVar25 = 0;

        lVar27 = lVar6;

        do {

          if (*local_210 != lVar20) {

            _objc_enumerationMutation(uVar11);

          }

          uVar24 = *(undefined8 *)(lStack_218 + lVar25 * 8);

          if (((uVar4 & 1) != 0) ||

             ((uVar3 = 1, uVar10 < 6 && ((1L << (uVar10 & 0x3f) & 0x26U) != 0)))) {

            FUN_00295de0(uVar24);

            auVar32 = _objc_retainAutoreleasedReturnValue();

            uVar3 = FUN_00297820(auVar32._0_8_,auVar32._8_8_,local_268);

            _objc_release(auVar32._0_8_);

          }

          if (lVar27 == 0) {

LAB_0020f9f8:

            FUN_00295de0(uVar24);

            uVar26 = _objc_retainAutoreleasedReturnValue();

            uVar28 = FUN_001cbca4();

            _objc_release(uVar26);

            auVar32 = _objc_alloc_init(&objc::class_t::XZYCLGEntry);

            uVar26 = auVar32._0_8_;

            FUN_0029f060(uVar26,auVar32._8_8_,1);

            FUN_00295de0(uVar24);

            auVar32 = _objc_retainAutoreleasedReturnValue();

            FUN_0029e780(uVar26,auVar32._8_8_,auVar32._0_8_);

            _objc_release(auVar32._0_8_);

            FUN_00295de0(uVar24);

            auVar32 = _objc_retainAutoreleasedReturnValue();

            auVar33 = FUN_002938a0(uVar12,auVar32._8_8_,auVar32._0_8_);

            FUN_0029e740(uVar26,auVar33._8_8_,auVar33._0_8_);

            _objc_release(auVar32._0_8_);

            FUN_00295de0(uVar24);

            auVar32 = _objc_retainAutoreleasedReturnValue();

            FUN_00299540(uVar13,auVar32._8_8_,auVar32._0_8_);

            uVar30 = _objc_retainAutoreleasedReturnValue();

            auVar33 = FUN_002984c0();

            FUN_002a2340(uVar26,auVar33._8_8_,auVar33._0_8_);

            _objc_release(uVar30);

            _objc_release(auVar32._0_8_);

            FUN_0029f080(uVar26,extraout_x1_48,uVar28);

            FUN_00291240(uVar21,extraout_x1_49,uVar26);

            if (((uVar3 & 1) != 0) && ((5 < uVar10 || ((1L << (uVar10 & 0x3f) & 0x26U) == 0)))) {

              FUN_00291240(uVar19,extraout_x1_50,uVar26);

            }

            FUN_00295de0(uVar24);

            lVar6 = _objc_retainAutoreleasedReturnValue();

            _objc_release(lVar27);

            _objc_release(uVar26);

            uVar26 = extraout_x1_51;

          }

          else {

            FUN_00295de0(uVar24);

            auVar32 = _objc_retainAutoreleasedReturnValue();

            uVar22 = FUN_00297820(auVar32._0_8_,auVar32._8_8_,lVar27);

            _objc_release(auVar32._0_8_);

            uVar26 = extraout_x1_47;

            lVar6 = lVar27;

            if ((uVar22 & 1) == 0) goto LAB_0020f9f8;

          }

          if ((uVar3 & ((uint)uVar28 ^ 0xffffffff) & 1) != 0) {

            auVar32 = FUN_00293860(uVar19);

            FUN_00291240(uVar19,auVar32._8_8_,uVar24);

            FUN_002a5fe0(uVar24);

            uVar26 = _objc_retainAutoreleasedReturnValue();

            lVar27 = FUN_00297fa0();

            _objc_release(uVar26);

            uVar26 = extraout_x1_52;

            if (lVar27 != 0) {

              FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_52,auVar32._0_8_);

              uVar26 = _objc_retainAutoreleasedReturnValue();

              FUN_002a5fe0(uVar24);

              auVar32 = _objc_retainAutoreleasedReturnValue();

              FUN_002a00a0(uVar23,auVar32._8_8_,uVar26,auVar32._0_8_);

              _objc_release(auVar32._0_8_);

              _objc_release(uVar26);

              uVar26 = extraout_x1_53;

            }

          }

          lVar25 = lVar25 + 1;

          lVar27 = lVar6;

        } while (lVar31 != lVar25);

        lVar31 = FUN_00293880(uVar11,uVar26,&local_220,auStack_170,0x10);

      } while (lVar31 != 0);

    }

    _objc_release(uVar11);

    FUN_002a2780(uVar5,extraout_x1_54,uVar23);

    FUN_0029e100(uVar5,extraout_x1_55,uVar19);

    auVar32 = FUN_002937a0(uVar21);

    FUN_0029dde0(uVar5,auVar32._8_8_,auVar32._0_8_);

    _objc_release(auVar32._0_8_);

    auVar32 = FUN_002937a0(uVar11);

    FUN_0029ca80(uVar5,auVar32._8_8_,auVar32._0_8_);

    _objc_release(auVar32._0_8_);

    _objc_retain(uVar5);

    _objc_release(lVar6);

    _objc_release(local_268);

    _objc_release(uVar23);

    _objc_release(uVar21);

    _objc_release(uVar19);

    _objc_release(local_1b8);

    _objc_release(uVar18);

  }

  _objc_release(local_270);

  _objc_release(uVar17);

  _objc_release(uVar16);

  _objc_release(uVar15);

  _objc_release(uVar14);

  _objc_release(uVar13);

  _objc_release(uVar12);

  _objc_release(uVar11);

LAB_0020fcf4:

  _objc_release(uVar9);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(local_2c8);

  _objc_release(uVar5);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(uVar5);

  return;

}




