// tableView:cellForRowAtIndexPath: @0x7116c


/* Function Stack Size: 0x20 bytes */



ID _0x016d26c7::tableView_cellForRowAtIndexPath_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  ID IVar5;

  cfstringStruct *pcVar6;

  undefined8 uVar7;

  ulong uVar8;

  undefined8 uVar9;

  cfstringStruct *pcVar10;

  cfstringStruct *pcVar11;

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

  undefined8 uVar12;

  undefined8 uVar13;

  long lVar14;

  long lVar15;

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_4);

  FUN_002943e0(param_3,extraout_x1,&cf_TTSSettingCell);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  if (auVar16._0_8_ == 0) {

    auVar16 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

    uVar2 = FUN_00296ec0(auVar16._0_8_,auVar16._8_8_,1,&cf_TTSSettingCell);

    FUN_0029c000(&_OBJC_CLASS___UIColor);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar2,auVar16._8_8_,auVar16._0_8_);

    _objc_release(auVar16._0_8_);

    auVar16._8_8_ = extraout_x1_00;

    auVar16._0_8_ = uVar2;

  }

  uVar12 = auVar16._0_8_;

  FUN_0029c800(uVar12,auVar16._8_8_,0);

  FUN_002a12c0(uVar12,extraout_x1_01,3);

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a50e0(uVar12);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar16._0_8_,auVar16._8_8_,uVar2);

  _objc_release(auVar16._0_8_);

  _objc_release(uVar2);

  FUN_002a50e0(uVar12);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ffc0(auVar16._0_8_,auVar16._8_8_,1);

  _objc_release(auVar16._0_8_);

  FUN_002a4aa0(0x4031000000000000,&_OBJC_CLASS___UIFont);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a50e0(uVar12);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar16._0_8_,auVar16._8_8_,uVar2);

  _objc_release(auVar16._0_8_);

  _objc_release(uVar2);

  FUN_002944a0(uVar12);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,0);

  _objc_release(auVar16._0_8_);

  FUN_002a4aa0(0x4031000000000000,&_OBJC_CLASS___UIFont);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002944a0(uVar12);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar16._0_8_,auVar16._8_8_,uVar2);

  _objc_release(auVar16._0_8_);

  _objc_release(uVar2);

  lVar3 = FUN_0029c020(param_4);

  if (lVar3 == 0) {

    FUN_002a50e0(uVar12);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf__T_ueW_l);

    _objc_release(auVar16._0_8_);

    FUN_002a12c0(uVar12,extraout_x1_02,0);

    FUN_0029c820(uVar12,extraout_x1_03,0);

    pcVar6 = (cfstringStruct *)_objc_alloc_init(&_OBJC_CLASS___UISwitch);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    auVar17 = FUN_002924c0(auVar16._0_8_,auVar16._8_8_,&cf_ttsFunctionEnabled);

    FUN_002a0120(pcVar6,auVar17._8_8_,auVar17._0_8_);

    _objc_release(auVar16._0_8_);

    FUN_002a1c80(pcVar6,extraout_x1_04,0xbb9);

    FUN_002913c0(pcVar6,extraout_x1_05,param_1,"toggleTTSFunction:",0x1000);

    FUN_002a57c0(param_1,extraout_x1_06,0,0,pcVar6);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_0029c820(uVar12,auVar16._8_8_,auVar16._0_8_);

    _objc_release(auVar16._0_8_);

    goto LAB_000714f4;

  }

  auVar16 = FUN_0029c020(param_4);

  if (auVar16._0_8_ != 1) {

    auVar16 = FUN_0029c020(param_4);

    if (auVar16._0_8_ == 2) {

      FUN_0029c820(uVar12,auVar16._8_8_,0);

      lVar3 = FUN_0029bae0(param_4);

      if (lVar3 == 0) {

        FUN_002a50e0(uVar12);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf_format_s_);

        _objc_release(auVar16._0_8_);

        FUN_002a4080(param_1);

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_15,&cf___1fx);

        pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        FUN_002944a0(uVar12);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        pcVar6 = auVar16._0_8_;

        FUN_002a1d60(pcVar6,auVar16._8_8_,pcVar11);

      }

      else {

        lVar3 = FUN_0029bae0(param_4);

        if (lVar3 == 1) {

          FUN_002a50e0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf__);

          _objc_release(auVar16._0_8_);

          FUN_002a63e0(param_1);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_07,&cf___0f__);

          pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          FUN_002944a0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          pcVar6 = auVar16._0_8_;

          FUN_002a1d60(pcVar6,auVar16._8_8_,pcVar11);

        }

        else {

          FUN_002a50e0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf_r__);

          _objc_release(auVar16._0_8_);

          FUN_0006da8c();

          pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          FUN_0006d5ac();

          auVar16 = _objc_retainAutoreleasedReturnValue();

          pcVar6 = &cf_normal;

          if (pcVar11 != (cfstringStruct *)0x0) {

            pcVar6 = pcVar11;

          }

          FUN_00299540(auVar16._0_8_,auVar16._8_8_,pcVar6);

          pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          pcVar6 = pcVar11;

          if (pcVar4 != (cfstringStruct *)0x0) {

            pcVar6 = pcVar4;

          }

          _objc_retain(pcVar6);

          _objc_release(pcVar4);

          _objc_release(auVar16._0_8_);

          FUN_0006ae98(&cf_ttsFishEmotion,&PTR__OBJC_CLASS___NSConstantDictionary_003c05b8);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(&PTR__OBJC_CLASS___NSConstantDictionary_003c05b8,auVar16._8_8_,auVar16._0_8_)

          ;

          auVar17 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar17._8_8_,&::cf_F);

          uVar2 = _objc_retainAutoreleasedReturnValue();

          FUN_002944a0(uVar12);

          auVar18 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar18._0_8_,auVar18._8_8_,uVar2);

          _objc_release(auVar18._0_8_);

          _objc_release(uVar2);

          _objc_release(auVar17._0_8_);

          _objc_release(auVar16._0_8_);

        }

      }

      goto LAB_00071a34;

    }

    lVar3 = FUN_0029c020(param_4);

    if (lVar3 == 3) {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      iVar1 = FUN_002924c0(auVar16._0_8_,auVar16._8_8_,&cf_ttsLocalMode);

      _objc_release(auVar16._0_8_);

      FUN_0029c820(uVar12,extraout_x1_08,0);

      lVar3 = FUN_0029bae0(param_4);

      if (lVar3 == 0) {

        FUN_002a50e0(uVar12);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf_L_j_);

        _objc_release(auVar16._0_8_);

        FUN_002944a0(uVar12);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        pcVar6 = &cf__g0W_j_;

        if (iVar1 == 0) {

          pcVar6 = &cf__W__j_;

        }

        FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,pcVar6);

        _objc_release(auVar16._0_8_);

        FUN_0029c800(uVar12,extraout_x1_19,1);

        goto LAB_00071a50;

      }

      if (iVar1 == 0) {

LAB_00071ef8:

        lVar14 = FUN_0029bae0(param_4);

        lVar3 = -3;

        if (iVar1 == 0) {

          lVar3 = -1;

        }

        if (lVar14 + lVar3 == 1) {

          FUN_002a50e0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf_rlsQ_);

          _objc_release(auVar16._0_8_);

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a45e0(auVar16._0_8_,auVar16._8_8_,&cf_xzy_voice_jump_keyword);

          pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          _objc_release(auVar16._0_8_);

          if ((pcVar6 == (cfstringStruct *)0x0) || (lVar3 = FUN_00297fa0(pcVar6), lVar3 == 0)) {

            _objc_release(pcVar6);

            pcVar6 = &cf_r;

          }

          FUN_002944a0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,pcVar6);

          _objc_release(auVar16._0_8_);

          FUN_0029c800(uVar12,extraout_x1_27,1);

        }

        else {

          if (lVar14 + lVar3 == 0) {

            FUN_002a50e0(uVar12);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf_SMR);

            _objc_release(auVar16._0_8_);

            FUN_002a5780(param_1);

            uVar2 = _objc_retainAutoreleasedReturnValue();

            FUN_002944a0(uVar12);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,uVar2);

            _objc_release(auVar16._0_8_);

            _objc_release(uVar2);

            FUN_0029c800(uVar12,extraout_x1_26,1);

            goto LAB_00071a50;

          }

          FUN_002a50e0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf_r_INMR);

          _objc_release(auVar16._0_8_);

          FUN_00295780(&objc::class_t::_0x00bdda58);

          pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          auVar16 = FUN_00293860();

          if (auVar16._0_8_ == 0) {

            pcVar11 = &cf_e;

          }

          else {

            FUN_002a4680(&_OBJC_CLASS___NSString,auVar16._8_8_,&cf__n_);

            pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          }

          FUN_002944a0(uVar12);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar17._0_8_,auVar17._8_8_,pcVar11);

          _objc_release(auVar17._0_8_);

          uVar2 = extraout_x1_28;

          if (auVar16._0_8_ != 0) {

            _objc_release(pcVar11);

            uVar2 = extraout_x1_29;

          }

          FUN_0029c800(uVar12,uVar2,1);

        }

      }

      else {

        lVar3 = FUN_0029bae0(param_4);

        if (lVar3 == 1) {

          FUN_002a50e0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf__T_uF);

          _objc_release(auVar16._0_8_);

          FUN_002a12c0(uVar12,extraout_x1_09,0);

          pcVar6 = (cfstringStruct *)_objc_alloc_init(&_OBJC_CLASS___UISwitch);

          auVar16 = FUN_000724dc(&cf_fish);

          FUN_002a0120(pcVar6,auVar16._8_8_,auVar16._0_8_);

          FUN_002a1c80(pcVar6,extraout_x1_10,0xbba);

          FUN_002913c0(pcVar6,extraout_x1_11,param_1,"toggleTTSProxy:",0x1000);

          FUN_0029c820(uVar12,extraout_x1_12,pcVar6);

        }

        else {

          lVar3 = FUN_0029bae0(param_4);

          if (lVar3 != 2) goto LAB_00071ef8;

          FUN_002a50e0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf__T_uF);

          _objc_release(auVar16._0_8_);

          FUN_002a12c0(uVar12,extraout_x1_22,0);

          pcVar6 = (cfstringStruct *)_objc_alloc_init(&_OBJC_CLASS___UISwitch);

          auVar16 = FUN_000724dc(&cf_fv);

          FUN_002a0120(pcVar6,auVar16._8_8_,auVar16._0_8_);

          FUN_002a1c80(pcVar6,extraout_x1_23,0xbbb);

          FUN_002913c0(pcVar6,extraout_x1_24,param_1,"toggleTTSProxy:",0x1000);

          FUN_0029c820(uVar12,extraout_x1_25,pcVar6);

        }

      }

    }

    else {

      auVar16 = FUN_0029c020(param_4);

      if (auVar16._0_8_ == 4) {

        FUN_0029c820(uVar12,auVar16._8_8_,0);

        lVar3 = FUN_0029bae0(param_4);

        if (lVar3 == 0) {

          FUN_002a50e0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf_FineVoiceToken);

          _objc_release(auVar16._0_8_);

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a45e0(auVar16._0_8_,auVar16._8_8_,&cf_ttsCustomFvToken);

          pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          _objc_release(auVar16._0_8_);

          pcVar11 = &cf__;

          if (pcVar6 != (cfstringStruct *)0x0) {

            lVar3 = FUN_00297fa0(pcVar6);

            if (lVar3 != 0) {

              pcVar11 = &cf__n_;

            }

          }

          FUN_002944a0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,pcVar11);

          _objc_release(auVar16._0_8_);

          FUN_0029c800(uVar12,extraout_x1_21,1);

        }

        else {

          FUN_002a50e0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf_FishAudioToken);

          _objc_release(auVar16._0_8_);

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a45e0(auVar16._0_8_,auVar16._8_8_,&cf_ttsCustomFishToken);

          pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          _objc_release(auVar16._0_8_);

          pcVar11 = &cf__;

          if (pcVar6 != (cfstringStruct *)0x0) {

            lVar3 = FUN_00297fa0(pcVar6);

            if (lVar3 != 0) {

              pcVar11 = &cf__n_;

            }

          }

          FUN_002944a0(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,pcVar11);

          _objc_release(auVar16._0_8_);

          FUN_0029c800(uVar12,extraout_x1_14,1);

        }

        goto LAB_000714f4;

      }

      FUN_0029c820(uVar12,auVar16._8_8_,0);

      FUN_002a50e0(uVar12);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf__IN_cVh);

      _objc_release(auVar16._0_8_);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45e0(auVar16._0_8_,auVar16._8_8_,&cf_ttsCustomIconPath);

      pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      _objc_release(auVar16._0_8_);

      if (pcVar6 == (cfstringStruct *)0x0) {

LAB_00071cbc:

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_002a45e0(auVar16._0_8_,auVar16._8_8_,&cf_ttsDefaultIconCode);

        pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        _objc_release(auVar16._0_8_);

        if ((pcVar11 == (cfstringStruct *)0x0) || (lVar3 = FUN_00297fa0(pcVar11), lVar3 == 0)) {

          _objc_release(pcVar11);

          pcVar11 = &cf_icons_filled_song;

        }

        FUN_002944a0(uVar12);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,pcVar11);

        _objc_release(auVar16._0_8_);

      }

      else {

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        iVar1 = FUN_00295160(auVar16._0_8_,auVar16._8_8_,pcVar6);

        _objc_release(auVar16._0_8_);

        if (iVar1 == 0) goto LAB_00071cbc;

        FUN_002944a0(uVar12);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        pcVar11 = auVar16._0_8_;

        FUN_002a1d60(pcVar11,auVar16._8_8_,&cf__INVh);

      }

      _objc_release(pcVar11);

      FUN_0029c800(uVar12,extraout_x1_20,1);

    }

LAB_000714f4:

    _objc_release(pcVar6);

    goto LAB_00071a50;

  }

  FUN_0029c820(uVar12,auVar16._8_8_,0);

  lVar3 = FUN_0029bae0(param_4);

  if (lVar3 == 0) {

    FUN_002a50e0(uVar12);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf_rb);

    _objc_release(auVar16._0_8_);

    FUN_0029c380(param_1);

    pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    FUN_002944a0(uVar12);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    pcVar6 = auVar16._0_8_;

    pcVar4 = &cf_pQb;

    if (pcVar11 != (cfstringStruct *)0x0) {

      pcVar4 = pcVar11;

    }

    FUN_002a1d60(pcVar6,auVar16._8_8_,pcVar4);

LAB_00071a34:

    _objc_release(pcVar6);

LAB_00071a3c:

    _objc_release(pcVar11);

    uVar2 = extraout_x1_16;

  }

  else {

    lVar3 = FUN_0029bae0(param_4);

    if (lVar3 != 1) {

      FUN_002a50e0(uVar12);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf_of);

      _objc_release(auVar16._0_8_);

      FUN_002923e0(param_1);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_13,&cf___0f__);

      pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      FUN_002944a0(uVar12);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      pcVar6 = auVar16._0_8_;

      FUN_002a1d60(pcVar6,auVar16._8_8_,pcVar11);

      goto LAB_00071a34;

    }

    FUN_002a50e0(uVar12);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,&cf_ofPN);

    _objc_release(auVar16._0_8_);

    FUN_0029c240(param_1);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_00297820(auVar16._0_8_,auVar16._8_8_,&cf___xzy_tts_random_bg_sound__);

    _objc_release(auVar16._0_8_);

    if (iVar1 != 0) {

      FUN_002944a0(uVar12);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      pcVar11 = auVar16._0_8_;

      FUN_002a1d60(pcVar11,auVar16._8_8_,&cf__g);

      goto LAB_00071a3c;

    }

    FUN_0029c240(param_1);

    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    FUN_002923c0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_retain(pcVar6);

    _objc_retain(uVar2);

    lVar3 = FUN_00297fa0(pcVar6);

    if (lVar3 == 0) {

      pcVar11 = (cfstringStruct *)0x0;

    }

    else {

      uStack_108 = 0;

      local_110 = 0;

      uStack_f8 = 0;

      uStack_100 = 0;

      lStack_128 = 0;

      local_130 = 0;

      uStack_118 = 0;

      local_120 = (long *)0x0;

      _objc_retain(uVar2);

      lVar3 = FUN_00293880(uVar2,extraout_x1_17,&local_130,auStack_e8,0x10);

      if (lVar3 != 0) {

        lVar14 = *local_120;

        do {

          lVar15 = 0;

          do {

            if (*local_120 != lVar14) {

              _objc_enumerationMutation(uVar2);

            }

            uVar13 = *(undefined8 *)(lStack_128 + lVar15 * 8);

            FUN_00070748(uVar13);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            uVar7 = auVar16._0_8_;

            uVar8 = FUN_00297820(uVar7,auVar16._8_8_,pcVar6);

            if ((uVar8 & 1) != 0) {

              uVar9 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

              auVar16 = _objc_opt_isKindOfClass(uVar13,uVar9);

              if ((auVar16._0_8_ & 1) != 0) {

                FUN_00299540(uVar13,auVar16._8_8_,&cf_name);

                auVar16 = _objc_retainAutoreleasedReturnValue();

                pcVar4 = auVar16._0_8_;

                if (pcVar4 == (cfstringStruct *)0x0) {

                  FUN_00299540(uVar13,auVar16._8_8_,&cf_label);

                  auVar16 = _objc_retainAutoreleasedReturnValue();

                  pcVar10 = auVar16._0_8_;

                  if (pcVar10 == (cfstringStruct *)0x0) {

                    FUN_00299540(uVar13,auVar16._8_8_,&cf_title);

                    pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                  }

                  else {

                    _objc_retain(pcVar10);

                    pcVar11 = pcVar10;

                  }

                  _objc_release(pcVar10);

                }

                else {

                  _objc_retain(pcVar4);

                  pcVar11 = pcVar4;

                }

                _objc_release(pcVar4);

                lVar3 = FUN_00297fa0(pcVar11);

                if (lVar3 != 0) {

                  _objc_release(uVar7);

                  _objc_release(uVar2);

                  goto LAB_000721d8;

                }

                _objc_release(pcVar11);

              }

              _objc_release(uVar7);

              goto LAB_0007218c;

            }

            _objc_release(uVar7);

            lVar15 = lVar15 + 1;

          } while (lVar3 != lVar15);

          lVar3 = FUN_00293880(uVar2,extraout_x1_18,&local_130,auStack_e8,0x10);

        } while (lVar3 != 0);

      }

LAB_0007218c:

      _objc_release(uVar2);

      iVar1 = FUN_00293580(pcVar6,extraout_x1_30,&cf__);

      if (iVar1 != 0) {

        FUN_00297da0(pcVar6);

        pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        lVar3 = FUN_00297fa0();

        if (lVar3 != 0) goto LAB_000721d8;

        _objc_release(pcVar11);

      }

      _objc_retain(pcVar6);

      pcVar11 = pcVar6;

    }

LAB_000721d8:

    _objc_release(uVar2);

    _objc_release(pcVar6);

    _objc_release(uVar2);

    _objc_release(pcVar6);

    FUN_002944a0(uVar12);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    pcVar6 = &cf_e;

    if (pcVar11 != (cfstringStruct *)0x0) {

      pcVar6 = pcVar11;

    }

    FUN_002a1d60(auVar16._0_8_,auVar16._8_8_,pcVar6);

    _objc_release(auVar16._0_8_);

    _objc_release(pcVar11);

    uVar2 = extraout_x1_31;

  }

  FUN_0029c800(uVar12,uVar2,1);

LAB_00071a50:

  _objc_release(param_4);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    IVar5 = _objc_autoreleaseReturnValue(uVar12);

    return IVar5;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




