// FUN_0002dbf4 @0x2dbf4


void FUN_0002dbf4(long param_1,undefined8 param_2)



{

  undefined *puVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  ulong uVar9;

  undefined *puVar10;

  cfstringStruct *pcVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  cfstringStruct *pcVar19;

  undefined8 uVar20;

  undefined8 uVar21;

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

  cfstringStruct *pcVar22;

  long lVar23;

  cfstringStruct *pcVar24;

  long lVar25;

  cfstringStruct *pcVar26;

  undefined1 extraout_b0;

  undefined1 extraout_var;

  undefined1 extraout_var_00;

  undefined1 extraout_var_01;

  undefined1 extraout_var_02;

  undefined1 extraout_var_03;

  undefined1 extraout_var_04;

  undefined1 extraout_var_05;

  undefined1 auVar27 [16];

  undefined1 auVar28 [16];

  undefined8 local_248;

  cfstringStruct *local_228;

  cfstringStruct *local_220 [16];

  cfstringStruct *local_1a0;

  long lStack_198;

  long *local_190;

  undefined8 uStack_188;

  undefined8 local_180;

  undefined8 uStack_178;

  undefined8 uStack_170;

  undefined8 uStack_168;

  cfstringStruct *local_160 [16];

  undefined8 local_e0;

  long lStack_d8;

  long *local_d0;

  undefined8 uStack_c8;

  undefined8 local_c0;

  undefined8 uStack_b8;

  undefined8 uStack_b0;

  undefined8 uStack_a8;

  cfstringStruct *local_90;

  cfstringStruct *local_88;

  cfstringStruct *local_80;

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  lVar3 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar3 == 0) goto LAB_0002f150;

  uVar4 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  FUN_00298780(&_OBJC_CLASS___NSBundle);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00292640();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar5);

  lVar7 = FUN_00297fa0(uVar6);

  if (lVar7 != 0) {

    _CFPreferencesAppSynchronize(uVar6);

    lVar7 = _CFPreferencesCopyKeyList

                      (uVar6,*(undefined8 *)PTR__kCFPreferencesCurrentUser_00388340,

                       *(undefined8 *)PTR__kCFPreferencesAnyHost_00388338);

    if (lVar7 != 0) {

      for (lVar23 = 0; lVar8 = _CFArrayGetCount(lVar7), lVar23 < lVar8; lVar23 = lVar23 + 1) {

        _CFArrayGetValueAtIndex(lVar7,lVar23);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        uVar9 = FUN_00085164();

        if ((uVar9 & 1) != 0) {

          auVar27 = _CFPreferencesCopyAppValue(uVar5,uVar6);

          lVar8 = auVar27._0_8_;

          if (lVar8 != 0) {

            FUN_002a00a0(uVar4,auVar27._8_8_,lVar8,uVar5);

            _objc_release(lVar8);

          }

        }

        _objc_release(uVar5);

      }

      _CFRelease(lVar7);

    }

  }

  lVar7 = FUN_00293860(uVar4);

  if (lVar7 == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00294500();

    uVar12 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar5);

    uStack_b8 = 0;

    local_c0 = 0;

    uStack_a8 = 0;

    uStack_b0 = 0;

    lStack_d8 = 0;

    local_e0 = 0;

    uStack_c8 = 0;

    local_d0 = (long *)0x0;

    _objc_retain(uVar12);

    lVar7 = FUN_00293880(uVar12,extraout_x1,&local_e0,local_160,0x10);

    if (lVar7 != 0) {

      lVar23 = *local_d0;

      do {

        lVar8 = 0;

        do {

          if (*local_d0 != lVar23) {

            _objc_enumerationMutation(uVar12);

          }

          uVar13 = *(undefined8 *)(lStack_d8 + lVar8 * 8);

          iVar2 = FUN_00085164(uVar13);

          uVar5 = extraout_x1_00;

          if (iVar2 != 0) {

            FUN_00299540(uVar12,extraout_x1_00,uVar13);

            auVar27 = _objc_retainAutoreleasedReturnValue();

            FUN_002a00a0(uVar4,auVar27._8_8_,auVar27._0_8_,uVar13);

            _objc_release(auVar27._0_8_);

            uVar5 = extraout_x1_01;

          }

          lVar8 = lVar8 + 1;

        } while (lVar7 != lVar8);

        lVar7 = FUN_00293880(uVar12,uVar5,&local_e0,local_160,0x10);

      } while (lVar7 != 0);

    }

    _objc_release(uVar12);

    lVar7 = FUN_00293860(uVar4);

    if ((lVar7 == 0) && (lVar7 = FUN_00297fa0(uVar6), lVar7 != 0)) {

      _NSHomeDirectory();

      auVar27 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar27._8_8_,&cf_Library_Preferences____plist);

      auVar28 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4460(auVar27._0_8_,auVar28._8_8_,auVar28._0_8_);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar28._0_8_);

      _objc_release(auVar27._0_8_);

      FUN_00294540(&_OBJC_CLASS___NSDictionary,extraout_x1_02,uVar5);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      uStack_178 = 0;

      local_180 = 0;

      uStack_168 = 0;

      uStack_170 = 0;

      lStack_198 = 0;

      local_1a0 = (cfstringStruct *)0x0;

      uStack_188 = 0;

      local_190 = (long *)0x0;

      _objc_retain();

      lVar7 = FUN_00293880(uVar13,extraout_x1_03,&local_1a0,local_220,0x10);

      if (lVar7 != 0) {

        lVar23 = *local_190;

        do {

          lVar8 = 0;

          do {

            if (*local_190 != lVar23) {

              _objc_enumerationMutation(uVar13);

            }

            uVar15 = *(undefined8 *)(lStack_198 + lVar8 * 8);

            iVar2 = FUN_00085164(uVar15);

            uVar14 = extraout_x1_04;

            if (iVar2 != 0) {

              FUN_00299540(uVar13,extraout_x1_04,uVar15);

              auVar27 = _objc_retainAutoreleasedReturnValue();

              FUN_002a00a0(uVar4,auVar27._8_8_,auVar27._0_8_,uVar15);

              _objc_release(auVar27._0_8_);

              uVar14 = extraout_x1_05;

            }

            lVar8 = lVar8 + 1;

          } while (lVar7 != lVar8);

          lVar7 = FUN_00293880(uVar13,uVar14,&local_1a0,local_220,0x10);

        } while (lVar7 != 0);

      }

      _objc_release(uVar13);

      _objc_release(uVar13);

      _objc_release(uVar5);

    }

    lVar7 = FUN_00293860(uVar4);

    if (lVar7 == 0) {

      puVar10 = (undefined *)0x0;

    }

    else {

      puVar10 = (undefined *)FUN_002937a0(uVar4);

    }

    _objc_release(uVar12);

  }

  else {

    puVar10 = (undefined *)FUN_002937a0(uVar4);

  }

  _objc_release(uVar6);

  _objc_release(uVar4);

  puVar1 = PTR____NSDictionary0__struct_00388310;

  if (puVar10 != (undefined *)0x0) {

    puVar1 = puVar10;

  }

  pcVar11 = (cfstringStruct *)FUN_00299020(puVar1);

  _objc_release(puVar10);

  FUN_00085afc(pcVar11);

  uVar4 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  lVar7 = _CFPreferencesCopyKeyList

                    (&cf_com_shtm_cadis,*(undefined8 *)PTR__kCFPreferencesCurrentUser_00388340,

                     *(undefined8 *)PTR__kCFPreferencesAnyHost_00388338);

  if (lVar7 != 0) {

    for (lVar23 = 0; lVar8 = _CFArrayGetCount(lVar7), lVar23 < lVar8; lVar23 = lVar23 + 1) {

      _CFArrayGetValueAtIndex(lVar7,lVar23);

      auVar27 = _objc_retainAutoreleasedReturnValue();

      uVar5 = auVar27._0_8_;

      uVar9 = FUN_00295f60(uVar5,auVar27._8_8_,&cf_Cadis);

      if ((uVar9 & 1) != 0) {

        auVar27 = _CFPreferencesCopyAppValue(uVar5,&cf_com_shtm_cadis);

        lVar8 = auVar27._0_8_;

        if (lVar8 != 0) {

          FUN_002a00a0(uVar4,auVar27._8_8_,lVar8,uVar5);

          _objc_release(lVar8);

        }

      }

      _objc_release(uVar5);

    }

    _CFRelease(lVar7);

  }

  lVar7 = FUN_00293860(uVar4);

  if (lVar7 == 0) {

    auVar27 = _objc_alloc(&_OBJC_CLASS___NSUserDefaults);

    uVar5 = FUN_00296ee0(auVar27._0_8_,auVar27._8_8_,&cf_com_shtm_cadis);

    FUN_00294500();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uStack_b8 = 0;

    local_c0 = 0;

    uStack_a8 = 0;

    uStack_b0 = 0;

    lStack_d8 = 0;

    local_e0 = 0;

    uStack_c8 = 0;

    local_d0 = (long *)0x0;

    _objc_retain();

    auVar27 = FUN_00293880(uVar6,extraout_x1_06,&local_e0,local_160,0x10);

    if (auVar27._0_8_ != 0) {

      lVar7 = *local_d0;

      do {

        uVar12 = auVar27._8_8_;

        lVar23 = 0;

        do {

          if (*local_d0 != lVar7) {

            _objc_enumerationMutation(uVar6);

            uVar12 = extraout_x1_07;

          }

          uVar13 = *(undefined8 *)(lStack_d8 + lVar23 * 8);

          iVar2 = FUN_00295f60(uVar13,uVar12,&cf_Cadis);

          uVar12 = extraout_x1_08;

          if (iVar2 != 0) {

            FUN_00299540(uVar6,extraout_x1_08,uVar13);

            auVar28 = _objc_retainAutoreleasedReturnValue();

            FUN_002a00a0(uVar4,auVar28._8_8_,auVar28._0_8_,uVar13);

            _objc_release(auVar28._0_8_);

            uVar12 = extraout_x1_09;

          }

          lVar23 = lVar23 + 1;

        } while (auVar27._0_8_ != lVar23);

        auVar27 = FUN_00293880(uVar6,uVar12,&local_e0,local_160,0x10);

      } while (auVar27._0_8_ != 0);

    }

    _objc_release(uVar6);

    lVar7 = FUN_00293860(uVar4);

    if (lVar7 == 0) {

      _NSHomeDirectory();

      auVar27 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar27._8_8_,&cf_Library_Preferences____plist);

      auVar28 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4460(auVar27._0_8_,auVar28._8_8_,auVar28._0_8_);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar28._0_8_);

      _objc_release(auVar27._0_8_);

      FUN_00294540(&_OBJC_CLASS___NSDictionary,extraout_x1_10,uVar12);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      uStack_178 = 0;

      local_180 = 0;

      uStack_168 = 0;

      uStack_170 = 0;

      lStack_198 = 0;

      local_1a0 = (cfstringStruct *)0x0;

      uStack_188 = 0;

      local_190 = (long *)0x0;

      _objc_retain();

      auVar27 = FUN_00293880(uVar13,extraout_x1_11,&local_1a0,local_220,0x10);

      if (auVar27._0_8_ != 0) {

        lVar7 = *local_190;

        do {

          uVar14 = auVar27._8_8_;

          lVar23 = 0;

          do {

            if (*local_190 != lVar7) {

              _objc_enumerationMutation(uVar13);

              uVar14 = extraout_x1_12;

            }

            uVar15 = *(undefined8 *)(lStack_198 + lVar23 * 8);

            iVar2 = FUN_00295f60(uVar15,uVar14,&cf_Cadis);

            uVar14 = extraout_x1_13;

            if (iVar2 != 0) {

              FUN_00299540(uVar13,extraout_x1_13,uVar15);

              auVar28 = _objc_retainAutoreleasedReturnValue();

              FUN_002a00a0(uVar4,auVar28._8_8_,auVar28._0_8_,uVar15);

              _objc_release(auVar28._0_8_);

              uVar14 = extraout_x1_14;

            }

            lVar23 = lVar23 + 1;

          } while (auVar27._0_8_ != lVar23);

          auVar27 = FUN_00293880(uVar13,uVar14,&local_1a0,local_220,0x10);

        } while (auVar27._0_8_ != 0);

      }

      _objc_release(uVar13);

      _objc_release(uVar13);

      _objc_release(uVar12);

    }

    lVar7 = FUN_00293860(uVar4);

    if (lVar7 == 0) {

      puVar10 = (undefined *)0x0;

    }

    else {

      puVar10 = (undefined *)FUN_002937a0(uVar4);

    }

    _objc_release(uVar6);

    _objc_release(uVar5);

  }

  else {

    puVar10 = (undefined *)FUN_002937a0(uVar4);

  }

  _objc_release(uVar4);

  puVar1 = PTR____NSDictionary0__struct_00388310;

  if (puVar10 != (undefined *)0x0) {

    puVar1 = puVar10;

  }

  uVar4 = FUN_00299020(puVar1);

  _objc_release(puVar10);

  FUN_00085afc(uVar4);

  auVar27 = FUN_00293860(pcVar11);

  uVar5 = auVar27._8_8_;

  if (auVar27._0_8_ == 0) {

    auVar27 = FUN_00293860(uVar4);

    uVar5 = auVar27._8_8_;

    if (auVar27._0_8_ != 0) goto LAB_0002e3dc;

    local_220[0] = *(cfstringStruct **)PTR__NSLocalizedDescriptionKey_00388218;

    local_160[0] = &cf_S_MRlgSYNvcNMn_;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar5,local_160,local_220,1);

    auVar27 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar27._0_8_;

    FUN_00294de0(&_OBJC_CLASS___NSError,auVar27._8_8_,&cf_XZYSettings,1,uVar6);

    pcVar19 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_autorelease();

    uVar5 = 0;

  }

  else {

LAB_0002e3dc:

    local_220[0] = &cf_settings;

    local_160[0] = pcVar11;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar5,local_160,local_220,1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar6 = FUN_00299020();

    _objc_release(uVar5);

    auVar27 = FUN_00293860(uVar4);

    uVar5 = auVar27._8_8_;

    if (auVar27._0_8_ != 0) {

      local_1a0 = &cf_com_shtm_cadis;

      local_e0 = uVar4;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar5,&local_e0,&local_1a0,1);

      auVar27 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(uVar6,auVar27._8_8_,auVar27._0_8_,&cf_suites);

      _objc_release(auVar27._0_8_);

      uVar5 = extraout_x1_15;

    }

    local_80 = (cfstringStruct *)0x0;

    FUN_002940c0(&_OBJC_CLASS___NSPropertyListSerialization,uVar5,uVar6,100,0,&local_80);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    pcVar26 = local_80;

    _objc_retain(local_80);

    if (lVar7 == 0) {

      _objc_retainAutorelease(pcVar26);

      uVar5 = 0;

      pcVar19 = pcVar26;

    }

    else {

      FUN_00292140(lVar7,extraout_x1_16,0);

      auVar27 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar27._8_8_,&cf_______);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar27._0_8_);

      pcVar19 = (cfstringStruct *)0x0;

    }

    _objc_release(lVar7);

    _objc_release(pcVar26);

  }

  _objc_release(uVar6);

  _objc_release(uVar4);

  _objc_release(pcVar11);

  _objc_retain(pcVar19);

  lVar7 = FUN_00297fa0(uVar5);

  if (lVar7 == 0) {

    FUN_00298400(pcVar19);

    auVar27 = _objc_retainAutoreleasedReturnValue();

    pcVar26 = (cfstringStruct *)0x0;

    pcVar11 = &cf_elYNMn_;

    if (auVar27._0_8_ != (cfstringStruct *)0x0) {

      pcVar11 = auVar27._0_8_;

    }

    pcVar24 = &cf_YN1Y_;

  }

  else {

    FUN_002956a0(&_OBJC_CLASS___UIPasteboard);

    auVar27 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1a60(auVar27._0_8_,auVar27._8_8_,uVar5);

    _objc_release(auVar27._0_8_);

    _objc_retain(uVar5);

    lVar23 = FUN_00297fa0(uVar5);

    if (lVar23 == 0) {

      pcVar26 = (cfstringStruct *)0x0;

      uVar4 = 0;

    }

    else {

      _objc_getClass("MMServiceCenter");

      FUN_00294200();

      uVar6 = _objc_retainAutoreleasedReturnValue();

      auVar27 = _objc_getClass("CContactMgr");

      FUN_00295b60(uVar6,auVar27._8_8_,auVar27._0_8_);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_00295b20();

      uVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_002986c0();

      uVar14 = _objc_retainAutoreleasedReturnValue();

      auVar27 = FUN_00297fa0();

      if (auVar27._0_8_ == 0) {

        local_88 = *(cfstringStruct **)PTR__NSLocalizedDescriptionKey_00388218;

        local_80 = &cf__gS0RS_MR_O_S;

        FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar27._8_8_,&local_80,&local_88,1);

        auVar27 = _objc_retainAutoreleasedReturnValue();

        local_248 = auVar27._0_8_;

        FUN_00294de0(&_OBJC_CLASS___NSError,auVar27._8_8_,&cf_XZYSettings,0x14);

        pcVar26 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        _objc_autorelease();

        uVar4 = 0;

      }

      else {

        FUN_00293fa0(uVar5,auVar27._8_8_,4);

        local_248 = _objc_retainAutoreleasedReturnValue();

        _NSSearchPathForDirectoriesInDomains(0xe,1,1);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        FUN_00295440();

        auVar27 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4460(auVar27._0_8_,auVar27._8_8_,&cf_XOSConfigurationBackups);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar27._0_8_);

        _objc_release(uVar4);

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar27 = _objc_retainAutoreleasedReturnValue();

        local_90 = (cfstringStruct *)0x0;

        uVar9 = FUN_00293a60(auVar27._0_8_,auVar27._8_8_,uVar15,1,0,&local_90);

        pcVar26 = local_90;

        _objc_retain(local_90);

        _objc_release(auVar27._0_8_);

        if ((uVar9 & 1) == 0) {

          _objc_retainAutorelease(pcVar26);

          uVar4 = 0;

          pcVar11 = pcVar26;

        }

        else {

          auVar27 = _objc_opt_new(&_OBJC_CLASS___NSDateFormatter);

          uVar4 = auVar27._0_8_;

          FUN_00298380(&_OBJC_CLASS___NSLocale,auVar27._8_8_,&cf_en_US_POSIX);

          auVar27 = _objc_retainAutoreleasedReturnValue();

          FUN_0029f620(uVar4,auVar27._8_8_,auVar27._0_8_);

          _objc_release(auVar27._0_8_);

          FUN_0029db60(uVar4,extraout_x1_17,&cf_yyyyMMdd_HHmmss);

          FUN_002940e0(&_OBJC_CLASS___NSDate);

          auVar27 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4600(uVar4,auVar27._8_8_,auVar27._0_8_);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar28._8_8_,&cf_X);

          uVar16 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar28._0_8_);

          _objc_release(auVar27._0_8_);

          _objc_release(uVar4);

          FUN_002a4460(uVar15,extraout_x1_18,uVar16);

          auVar27 = _objc_retainAutoreleasedReturnValue();

          uVar17 = auVar27._0_8_;

          local_228 = pcVar26;

          uVar9 = FUN_002a65c0(local_248,auVar27._8_8_,uVar17,1,&local_228);

          pcVar24 = local_228;

          _objc_retain(local_228);

          _objc_release(pcVar26);

          pcVar11 = pcVar24;

          if ((uVar9 & 1) == 0) {

            _objc_retainAutorelease(pcVar24);

            uVar4 = 0;

          }

          else {

            _objc_retain(uVar16);

            _objc_retain(local_248);

            _objc_retain(uVar17);

            uVar4 = _objc_getClass("MMExtensionShareDataUtil");

            uVar18 = _NSSelectorFromString(&cf_getPathOfMsgAppFileWithFileName_);

            uVar9 = _objc_opt_respondsToSelector(uVar4,uVar18);

            if ((uVar9 & 1) == 0) {

              uVar4 = 0;

            }

            else {

              _objc_msgSend(uVar4,uVar18,uVar16);

              uVar4 = _objc_retainAutoreleasedReturnValue();

            }

            lVar23 = FUN_00297fa0(uVar4);

            if (lVar23 == 0) {

              _objc_retain(uVar17);

              _objc_release(uVar4);

              uVar4 = uVar17;

            }

            FUN_002a44c0(uVar4);

            uVar20 = _objc_retainAutoreleasedReturnValue();

            auVar27 = FUN_00297fa0();

            uVar18 = auVar27._8_8_;

            if (auVar27._0_8_ == 0) {

              pcVar26 = (cfstringStruct *)0x0;

LAB_0002ea3c:

              local_88 = pcVar26;

              uVar9 = FUN_002a65c0(local_248,uVar18,uVar4,1,&local_88);

              pcVar22 = local_88;

              _objc_retain(local_88);

              _objc_release(pcVar26);

              if ((uVar9 & 1) == 0) {

                _objc_retainAutorelease(pcVar22);

                uVar18 = 0;

                pcVar11 = pcVar22;

              }

              else {

                _objc_retain(uVar4);

                uVar18 = uVar4;

              }

            }

            else {

              FUN_00294240(&_OBJC_CLASS___NSFileManager);

              auVar27 = _objc_retainAutoreleasedReturnValue();

              local_80 = (cfstringStruct *)0x0;

              uVar9 = FUN_00293a60(auVar27._0_8_,auVar27._8_8_,uVar20,1,0,&local_80);

              pcVar22 = local_80;

              _objc_retain(local_80);

              _objc_release(auVar27._0_8_);

              uVar18 = extraout_x1_19;

              pcVar26 = pcVar22;

              if ((uVar9 & 1) != 0) goto LAB_0002ea3c;

              _objc_retainAutorelease(pcVar22);

              pcVar11 = pcVar22;

              uVar18 = 0;

            }

            _objc_release(pcVar22);

            _objc_release(uVar20);

            _objc_release(uVar4);

            _objc_release(uVar17);

            _objc_release(local_248);

            _objc_release(uVar16);

            _objc_retain(pcVar11);

            _objc_release(pcVar24);

            lVar23 = FUN_00297fa0(uVar18);

            if (lVar23 == 0) {

              _objc_retainAutorelease(pcVar11);

              uVar4 = 0;

              pcVar24 = pcVar11;

            }

            else {

              _objc_getClass("CMessageWrap");

              auVar27 = _objc_alloc();

              lVar23 = FUN_00296d40(auVar27._0_8_,auVar27._8_8_,0x31,uVar14);

              FUN_00298560();

              auVar28 = _objc_retainAutoreleasedReturnValue();

              if (auVar28._0_8_ == 0) {

                _objc_getClass("CExtendInfoOfAPP");

                auVar27 = _objc_opt_new();

                FUN_0029f6c0(lVar23,auVar27._8_8_,auVar27._0_8_);

                auVar28._8_8_ = extraout_x1_20;

                auVar28._0_8_ = auVar27._0_8_;

              }

              lVar8 = auVar28._0_8_;

              if ((lVar23 == 0) || (lVar8 == 0)) {

                local_88 = *(cfstringStruct **)PTR__NSLocalizedDescriptionKey_00388218;

                local_80 = &cf__ODNmo_RYS1Y_;

                FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar28._8_8_,&local_80,&local_88,1);

                auVar27 = _objc_retainAutoreleasedReturnValue();

                lVar25 = auVar27._0_8_;

                FUN_00294de0(&_OBJC_CLASS___NSError,auVar27._8_8_,&cf_XZYSettings,0x18,lVar25);

                pcVar24 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                _objc_autorelease();

LAB_0002f01c:

                uVar4 = 0;

              }

              else {

                FUN_0029f760(lVar23,auVar28._8_8_,uVar14);

                FUN_0029f780(lVar23,extraout_x1_21,uVar14);

                FUN_0029f840(lVar23,extraout_x1_22,0);

                FUN_002940e0(&_OBJC_CLASS___NSDate);

                uVar4 = _objc_retainAutoreleasedReturnValue();

                FUN_002a51c0();

                FUN_0029f7e0(lVar23,extraout_x1_23,

                             (int)(double)CONCAT17(extraout_var_05,

                                                   CONCAT16(extraout_var_04,

                                                            CONCAT15(extraout_var_03,

                                                                     CONCAT14(extraout_var_02,

                                                                              CONCAT13(

                                                  extraout_var_01,

                                                  CONCAT12(extraout_var_00,

                                                           CONCAT11(extraout_var,extraout_b0))))))))

                ;

                _objc_release(uVar4);

                FUN_0029f860(lVar23,extraout_x1_24,1);

                FUN_0029f820(lVar23,extraout_x1_25,1);

                FUN_0029f800(lVar23,extraout_x1_26,0);

                FUN_00085bf8(lVar23,&cf_m_uiPercent,

                             &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890);

                FUN_00085bf8(lVar8,&cf_m_nsTitle,uVar16);

                FUN_00085bf8(lVar8,&cf_m_nsDesc,&cf_X);

                FUN_00085bf8(lVar8,&cf_m_nsAppAction,&cf___);

                FUN_00085bf8(lVar8,&cf_m_uiAppMsgInnerType,

                             &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfa10);

                FUN_00085bf8(lVar8,&cf_m_uiShowType,

                             &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890);

                FUN_00085bf8(lVar8,&cf_m_nsAppContent,&cf___);

                FUN_00085bf8(lVar8,&cf_m_nsAppMediaUrl,&cf___);

                auVar27 = FUN_00297fa0(local_248);

                FUN_00299480(&_OBJC_CLASS___NSNumber,auVar27._8_8_,auVar27._0_8_);

                uVar4 = _objc_retainAutoreleasedReturnValue();

                FUN_00085bf8(lVar8,&cf_m_uiAppDataSize,uVar4);

                _objc_release(uVar4);

                FUN_00085bf8(lVar8,&cf_m_nsAppAttachID,&cf___);

                FUN_00085bf8(lVar8,&cf_m_nsAppFileExt,&cf_xosconfig);

                FUN_00085bf8(lVar8,&cf_m_nsAppExtInfo,&cf___);

                FUN_00085bf8(lVar8,&cf_m_nsAppName,&cf_XOS);

                FUN_00085bf8(lVar8,&cf_m_refMessageWrap,lVar23);

                FUN_00085bf8(lVar8,&cf_m_bAppAttachExistInSvr,PTR____kCFBooleanFalse_00388318);

                FUN_00085bf8(lVar23,&cf_m_uiAppMsgInnerType,

                             &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfa10);

                FUN_00085bf8(lVar23,&cf_m_nsAppMediaUrl,&cf___);

                FUN_00085bf8(lVar23,&cf_m_nsFilePath,uVar18);

                FUN_00085bf8(lVar23,&cf_m_nsAppFileExt,&cf_xosconfig);

                auVar27 = FUN_00297fa0(local_248);

                FUN_00299480(&_OBJC_CLASS___NSNumber,auVar27._8_8_,auVar27._0_8_);

                uVar4 = _objc_retainAutoreleasedReturnValue();

                FUN_00085bf8(lVar23,&cf_m_uiAppDataSize,uVar4);

                _objc_release(uVar4);

                FUN_00085bf8(lVar23,&cf_m_nsAppName,&cf_XOS);

                FUN_00085bf8(lVar23,&cf_m_nsTitle,uVar16);

                FUN_00085bf8(lVar23,&cf_m_nsDesc,&cf_X);

                auVar27 = _objc_getClass("CMessageMgr");

                FUN_00295b60(uVar6,auVar27._8_8_,auVar27._0_8_);

                auVar27 = _objc_retainAutoreleasedReturnValue();

                lVar25 = auVar27._0_8_;

                if (lVar25 == 0) {

                  local_88 = *(cfstringStruct **)PTR__NSLocalizedDescriptionKey_00388218;

                  local_80 = &cf__OeNSgRNS_u;

                  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar27._8_8_,&local_80,&local_88,1);

                  auVar27 = _objc_retainAutoreleasedReturnValue();

                  uVar4 = auVar27._0_8_;

                  FUN_00294de0(&_OBJC_CLASS___NSError,auVar27._8_8_,&cf_XZYSettings,0x15,uVar4);

                  pcVar24 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

LAB_0002f00c:

                  _objc_autorelease();

                  _objc_release(uVar4);

                  goto LAB_0002f01c;

                }

                uVar20 = _NSSelectorFromString(&cf_AddAppMsg_MsgWrap_DataPath_Scene_);

                uVar21 = _NSSelectorFromString(&cf_AddAppMsg_MsgWrap_Data_Scene_);

                uVar9 = _objc_opt_respondsToSelector(lVar25,uVar20);

                uVar4 = uVar18;

                if ((uVar9 & 1) == 0) {

                  auVar27 = _objc_opt_respondsToSelector(lVar25,uVar21);

                  uVar4 = local_248;

                  uVar20 = uVar21;

                  if ((auVar27._0_8_ & 1) == 0) {

                    local_88 = *(cfstringStruct **)PTR__NSLocalizedDescriptionKey_00388218;

                    local_80 = &cf_S_MR_OHr_g___eNNOcS;

                    FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar27._8_8_,&local_80,&local_88,1);

                    auVar27 = _objc_retainAutoreleasedReturnValue();

                    uVar4 = auVar27._0_8_;

                    FUN_00294de0(&_OBJC_CLASS___NSError,auVar27._8_8_,&cf_XZYSettings,0x17,uVar4);

                    pcVar24 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                    goto LAB_0002f00c;

                  }

                }

                _objc_msgSend(lVar25,uVar20,uVar14,lVar23,uVar4,0);

                pcVar24 = (cfstringStruct *)0x0;

                uVar4 = 1;

              }

              _objc_release(lVar25);

              _objc_release(lVar8);

              _objc_release(lVar23);

            }

            _objc_release(uVar18);

          }

          _objc_release(uVar17);

          _objc_release(uVar16);

          pcVar26 = pcVar24;

        }

        _objc_release(pcVar11);

        _objc_release(uVar15);

      }

      _objc_release(local_248);

      _objc_release(uVar14);

      _objc_release(uVar13);

      _objc_release(uVar12);

      _objc_release(uVar6);

    }

    _objc_release(uVar5);

    _objc_retain(pcVar26);

    if ((int)uVar4 == 0) {

      FUN_00298400(pcVar26);

      auVar27 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar27._0_8_;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar27._8_8_,&cf_S_MRcNMn__Y6R0RjRR_gYUO_);

      pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      _objc_retain();

      _objc_release(pcVar11);

      _objc_release(uVar4);

    }

    else {

      pcVar11 = &cf_S_MRcNMn__Y6R0RjRR_gYUO_;

    }

    _objc_release(pcVar26);

    auVar27._8_8_ = extraout_x1_27;

    auVar27._0_8_ = uVar4;

    pcVar24 = &cf_YNbR;

    pcVar26 = pcVar11;

  }

  FUN_0029a3e0(lVar3,auVar27._8_8_,pcVar24,pcVar11,0);

  if (lVar7 == 0) {

    _objc_release(auVar27._0_8_);

  }

  _objc_release(pcVar26);

  _objc_release(uVar5);

  _objc_release(pcVar19);

LAB_0002f150:

  _objc_release(lVar3);

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




