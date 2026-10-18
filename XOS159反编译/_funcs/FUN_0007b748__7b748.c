// FUN_0007b748 @0x7b748


void FUN_0007b748(long param_1,undefined8 param_2)



{

  bool bVar1;

  bool bVar2;

  int iVar3;

  u_int32_t uVar4;

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  long lVar10;

  cfstringStruct *pcVar11;

  undefined8 uVar12;

  cfstringStruct *pcVar13;

  void *pvVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  ulong uVar20;

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

  undefined8 uVar21;

  cfstringStruct *pcVar22;

  undefined8 uVar23;

  long lVar24;

  undefined8 uVar25;

  long lVar26;

  float fVar27;

  float fVar28;

  float fVar29;

  double dVar30;

  double dVar31;

  double dVar32;

  double dVar33;

  undefined1 auVar34 [16];

  undefined1 auVar35 [16];

  undefined1 auVar36 [16];

  undefined1 auVar37 [16];

  cfstringStruct *local_320;

  undefined8 local_2f0;

  undefined *local_2e0;

  undefined8 local_2d8;

  code *local_2d0;

  undefined *puStack_2c8;

  undefined8 local_2c0;

  undefined8 local_2b8;

  undefined *local_2b0;

  undefined8 local_2a8;

  code *local_2a0;

  undefined *puStack_298;

  undefined8 local_290;

  undefined8 local_288;

  undefined8 local_280;

  undefined8 local_278;

  undefined8 local_270;

  undefined8 local_268;

  double local_260;

  double dStack_258;

  undefined *local_250;

  undefined8 local_248;

  code *local_240;

  undefined *puStack_238;

  undefined8 local_230;

  undefined8 local_228;

  double local_220;

  double dStack_218;

  undefined8 local_210;

  long lStack_208;

  long *local_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  undefined8 uStack_1e8;

  undefined8 uStack_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  long lStack_1c8;

  long *local_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 uStack_1a0;

  undefined8 uStack_198;

  undefined1 auStack_190 [128];

  byte local_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  FUN_002a45e0(*(undefined8 *)(param_1 + 0x20),extraout_x1,&cf_ttsSelectedBgSound);

  pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar22 = &cf___;

  if (pcVar5 != (cfstringStruct *)0x0) {

    pcVar22 = pcVar5;

  }

  _objc_retain(pcVar22);

  _objc_release(pcVar5);

  if (*(char *)(param_1 + 0x48) == '\x01') {

    _objc_retain(pcVar22);

    iVar3 = FUN_00297820(pcVar22,extraout_x1_01,&cf___xzy_tts_random_bg_sound__);

    if (iVar3 == 0) {

      lVar8 = FUN_00297fa0(pcVar22);

      if (lVar8 == 0) {

        pcVar5 = (cfstringStruct *)0x0;

      }

      else {

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar34 = _objc_retainAutoreleasedReturnValue();

        iVar3 = FUN_00295160(auVar34._0_8_,auVar34._8_8_,pcVar22);

        pcVar5 = pcVar22;

        if (iVar3 == 0) {

          pcVar5 = (cfstringStruct *)0x0;

        }

        _objc_retain(pcVar5);

        _objc_release(auVar34._0_8_);

      }

    }

    else {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar34 = _objc_retainAutoreleasedReturnValue();

      FUN_00291d40(auVar34._0_8_,auVar34._8_8_,&cf_ttsLocalBgSoundCatalog);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar34._0_8_);

      auVar34 = FUN_00293860(uVar6);

      FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar34._8_8_,auVar34._0_8_);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      uStack_1a8 = 0;

      local_1b0 = 0;

      uStack_198 = 0;

      uStack_1a0 = 0;

      lStack_1c8 = 0;

      local_1d0 = 0;

      uStack_1b8 = 0;

      local_1c0 = (long *)0x0;

      _objc_retain(uVar6);

      lVar8 = FUN_00293880(uVar6,extraout_x1_02,&local_1d0,local_110,0x10);

      if (lVar8 != 0) {

        lVar26 = *local_1c0;

        do {

          lVar24 = 0;

          do {

            if (*local_1c0 != lVar26) {

              _objc_enumerationMutation(uVar6);

            }

            FUN_00070748(*(undefined8 *)(lStack_1c8 + lVar24 * 8));

            uVar9 = _objc_retainAutoreleasedReturnValue();

            lVar10 = FUN_00297fa0();

            if (lVar10 != 0) {

              FUN_00294240(&_OBJC_CLASS___NSFileManager);

              auVar34 = _objc_retainAutoreleasedReturnValue();

              iVar3 = FUN_00295160(auVar34._0_8_,auVar34._8_8_,uVar9);

              _objc_release(auVar34._0_8_);

              if (iVar3 != 0) {

                FUN_00291240(uVar7,extraout_x1_03,uVar9);

              }

            }

            _objc_release(uVar9);

            lVar24 = lVar24 + 1;

          } while (lVar8 != lVar24);

          lVar8 = FUN_00293880(uVar6,extraout_x1_04,&local_1d0,local_110,0x10);

        } while (lVar8 != 0);

      }

      _objc_release(uVar6);

      lVar8 = FUN_00293860(uVar7);

      if (lVar8 == 0) {

        pcVar5 = (cfstringStruct *)0x0;

      }

      else {

        uVar4 = FUN_00293860(uVar7);

        _arc4random_uniform(uVar4);

        FUN_00299500(uVar7);

        pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      }

      _objc_release(uVar7);

      _objc_release(uVar6);

    }

    _objc_release(pcVar22);

    pcVar11 = &cf___;

    if (pcVar5 != (cfstringStruct *)0x0) {

      pcVar11 = pcVar5;

    }

    _objc_retain(pcVar11);

    pcVar13 = pcVar22;

LAB_0007bb5c:

    _objc_release(pcVar13);

    _objc_release(pcVar5);

    uVar6 = extraout_x1_08;

    pcVar22 = pcVar11;

  }

  else {

    iVar3 = FUN_00297820(pcVar22,extraout_x1_00,&cf___xzy_tts_random_bg_sound__);

    uVar6 = extraout_x1_05;

    if (iVar3 != 0) {

      FUN_00291d40(*(undefined8 *)(param_1 + 0x20),extraout_x1_05,&cf_ttsBgSoundCatalog);

      pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      auVar34 = FUN_00293860();

      FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar34._8_8_,auVar34._0_8_);

      pcVar13 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      uStack_1e8 = 0;

      local_1f0 = 0;

      uStack_1d8 = 0;

      uStack_1e0 = 0;

      lStack_208 = 0;

      local_210 = 0;

      uStack_1f8 = 0;

      local_200 = (long *)0x0;

      _objc_retain(pcVar5);

      lVar8 = FUN_00293880(pcVar5,extraout_x1_06,&local_210,auStack_190,0x10);

      if (lVar8 != 0) {

        lVar26 = *local_200;

        do {

          lVar24 = 0;

          do {

            if (*local_200 != lVar26) {

              _objc_enumerationMutation(pcVar5);

            }

            FUN_00070748(*(undefined8 *)(lStack_208 + lVar24 * 8));

            uVar6 = _objc_retainAutoreleasedReturnValue();

            auVar34 = FUN_00297fa0();

            if (auVar34._0_8_ != 0) {

              FUN_00291240(pcVar13,auVar34._8_8_,uVar6);

            }

            _objc_release(uVar6);

            lVar24 = lVar24 + 1;

          } while (lVar8 != lVar24);

          lVar8 = FUN_00293880(pcVar5,extraout_x1_07,&local_210,auStack_190,0x10);

        } while (lVar8 != 0);

      }

      _objc_release(pcVar5);

      lVar8 = FUN_00293860(pcVar13);

      if (lVar8 == 0) {

        pcVar11 = &cf___;

      }

      else {

        uVar4 = FUN_00293860(pcVar13);

        _arc4random_uniform(uVar4);

        FUN_00299500(pcVar13);

        pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      }

      _objc_release(pcVar22);

      goto LAB_0007bb5c;

    }

  }

  fVar27 = (float)FUN_00295460(*(undefined8 *)(param_1 + 0x20),uVar6,&cf_ttsSpeechRate);

  fVar28 = (float)FUN_00295460(*(undefined8 *)(param_1 + 0x20),extraout_x1_09,&cf_ttsVolume);

  fVar29 = (float)FUN_00295460(*(undefined8 *)(param_1 + 0x20),extraout_x1_10,&cf_ttsBgVolume);

  dVar32 = (double)fVar27;

  dVar33 = (double)fVar28;

  if (fVar27 <= 0.0) {

    dVar32 = 1.0;

  }

  if (fVar28 <= 0.0) {

    dVar33 = 1.0;

  }

  dVar30 = (double)fVar29;

  if (fVar29 <= 0.0) {

    dVar30 = 0.3;

  }

  dVar31 = 0.5;

  if (0.5 <= dVar32) {

    dVar31 = dVar32;

  }

  dVar32 = 2.0;

  if (dVar31 <= 2.0) {

    dVar32 = dVar31;

  }

  dVar31 = 0.0;

  if (0.0 <= dVar33) {

    dVar31 = dVar33;

  }

  dVar33 = 3.0;

  if (dVar31 <= 3.0) {

    dVar33 = dVar31;

  }

  dVar31 = 0.0;

  if (0.0 <= dVar30) {

    dVar31 = dVar30;

  }

  dVar30 = 1.0;

  if (dVar31 <= 1.0) {

    dVar30 = dVar31;

  }

  FUN_00067458(*(undefined8 *)(param_1 + 0x28));

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_000690c4(&cf_ttsCustomFishToken);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_000690c4(&cf_ttsCustomFvToken);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  auVar34 = _objc_retainBlock(*(undefined8 *)(param_1 + 0x38));

  uVar21 = auVar34._0_8_;

  if (*(char *)(param_1 + 0x48) == '\x01') {

    auVar35 = FUN_00297fa0(pcVar22);

    auVar34._8_8_ = auVar35._8_8_;

    auVar34._0_8_ = uVar21;

    if (auVar35._0_8_ != 0) {

      uVar12 = FUN_002937a0(pcVar22);

      local_250 = PTR___NSConcreteStackBlock_003886f0;

      local_248 = 0xc2000000;

      local_240 = FUN_0007ce24;

      puStack_238 = &DAT_0038a360;

      uVar23 = *(undefined8 *)(param_1 + 0x38);

      _objc_retain(uVar23);

      local_230 = uVar12;

      local_228 = uVar23;

      local_220 = dVar33;

      dStack_218 = dVar30;

      _objc_retain(uVar12);

      uVar23 = _objc_retainBlock(&local_250);

      _objc_release(uVar21);

      _objc_release(local_230);

      _objc_release(local_228);

      _objc_release(uVar12);

      auVar34._8_8_ = extraout_x1_11;

      auVar34._0_8_ = uVar23;

    }

  }

  uVar21 = auVar34._8_8_;

  local_2f0 = auVar34._0_8_;

  if (*(char *)(param_1 + 0x48) != '\x01') goto LAB_0007bd98;

  iVar3 = FUN_00297820(uVar6,uVar21,&cf_kk);

  if (iVar3 != 0) {

    FUN_00069598(dVar32,dVar33,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),

                 local_2f0);

    goto LAB_0007c8d0;

  }

  uVar21 = extraout_x1_12;

  if ((*(char *)(param_1 + 0x48) == '\x01') &&

     (iVar3 = FUN_00297820(uVar6,extraout_x1_12,&cf_fish), uVar21 = extraout_x1_13, iVar3 != 0)) {

    auVar34 = FUN_00297fa0(uVar7);

    uVar21 = auVar34._8_8_;

    if (auVar34._0_8_ == 0) goto LAB_0007bd98;

    auVar34 = FUN_00297fa0(pcVar22);

    uVar21 = auVar34._8_8_;

    if (auVar34._0_8_ != 0) goto LAB_0007bd98;

    uVar12 = *(undefined8 *)(param_1 + 0x38);

LAB_0007bdd4:

    FUN_00069b88(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),uVar7,uVar12);

  }

  else {

LAB_0007bd98:

    if ((*(char *)(param_1 + 0x48) == '\x01') &&

       (iVar3 = FUN_00297820(uVar6,uVar21,&cf_fish), uVar21 = extraout_x1_14, iVar3 != 0)) {

      auVar34 = FUN_00297fa0(uVar7);

      uVar21 = auVar34._8_8_;

      if (auVar34._0_8_ != 0) {

        auVar34 = FUN_00297fa0(pcVar22);

        uVar21 = auVar34._8_8_;

        uVar12 = local_2f0;

        if (auVar34._0_8_ != 0) goto LAB_0007bdd4;

      }

    }

    if ((*(char *)(param_1 + 0x48) == '\x01') &&

       (iVar3 = FUN_00297820(uVar6,uVar21,&cf_fv), uVar21 = extraout_x1_15, iVar3 != 0)) {

      auVar34 = FUN_00297fa0(uVar9);

      uVar21 = auVar34._8_8_;

      if (auVar34._0_8_ != 0) {

        FUN_0006a048(dVar32,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),uVar9,

                     param_2,local_2f0);

        goto LAB_0007c8d0;

      }

    }

    iVar3 = FUN_00297820(uVar6,uVar21,&cf_fish);

    if (iVar3 == 0) {

      bVar1 = false;

      uVar21 = extraout_x1_16;

    }

    else {

      auVar34 = FUN_00297fa0(uVar7);

      uVar21 = auVar34._8_8_;

      bVar1 = auVar34._0_8_ == 0;

    }

    iVar3 = FUN_00297820(uVar6,uVar21,&cf_fv);

    if (iVar3 == 0) {

      bVar2 = false;

    }

    else {

      lVar8 = FUN_00297fa0(uVar9);

      bVar2 = lVar8 == 0;

    }

    if ((*(char *)(param_1 + 0x48) == '\x01') && (bVar1 || bVar2)) {

      local_2b0 = PTR___NSConcreteStackBlock_003886f0;

      local_2a8 = 0xc2000000;

      local_2a0 = FUN_0007cf8c;

      puStack_298 = &DAT_0038a390;

      uVar21 = *(undefined8 *)(param_1 + 0x38);

      _objc_retain(uVar21);

      local_270 = uVar21;

      _objc_retain(uVar6);

      uVar21 = *(undefined8 *)(param_1 + 0x30);

      local_290 = uVar6;

      _objc_retain(uVar21);

      uVar12 = *(undefined8 *)(param_1 + 0x28);

      local_288 = uVar21;

      _objc_retain(uVar12);

      local_280 = uVar12;

      local_260 = dVar32;

      dStack_258 = dVar33;

      _objc_retain(local_2f0);

      local_268 = local_2f0;

      _objc_retain(param_2);

      local_278 = param_2;

      FUN_0006a928(uVar6,&local_2b0);

      _objc_release(local_278);

      _objc_release(local_268);

      _objc_release(local_280);

      _objc_release(local_288);

      _objc_release(local_290);

      uVar21 = local_270;

    }

    else {

      FUN_002940e0(&_OBJC_CLASS___NSDate);

      uVar21 = _objc_retainAutoreleasedReturnValue();

      FUN_002a51c0();

      _objc_release(uVar21);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_17,&cf___0f);

      auVar34 = _objc_retainAutoreleasedReturnValue();

      uVar21 = auVar34._0_8_;

      FUN_00296240(*(undefined8 *)(param_1 + 0x40),auVar34._8_8_,uVar21,&cf_xiazhiyanzuibang);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_getClass("MMServiceCenter");

      FUN_00294200();

      uVar23 = _objc_retainAutoreleasedReturnValue();

      auVar34 = _objc_getClass("CContactMgr");

      FUN_00295b60(uVar23,auVar34._8_8_,auVar34._0_8_);

      lVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar23);

      if (lVar8 == 0) {

        local_320 = &cf___;

      }

      else {

        FUN_00299c80(lVar8,extraout_x1_18,"getSelfContact");

        auVar34 = _objc_retainAutoreleasedReturnValue();

        lVar26 = auVar34._0_8_;

        local_320 = &cf___;

        if (lVar26 != 0) {

          FUN_002a6080(lVar26,auVar34._8_8_,&cf_m_nsUsrName);

          pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          local_320 = &cf___;

          if (pcVar5 != (cfstringStruct *)0x0) {

            local_320 = pcVar5;

          }

          _objc_retain();

          _objc_release(pcVar5);

        }

        _objc_release(lVar26);

      }

      _objc_release(lVar8);

      FUN_002914e0(*(undefined8 *)(param_1 + 0x40),extraout_x1_19,local_320,&cf_xiazhiyanzuibang);

      pcVar13 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar5 = &cf___;

      if (pcVar13 != (cfstringStruct *)0x0) {

        pcVar5 = pcVar13;

      }

      _objc_retain();

      _objc_release(pcVar13);

      FUN_00293fa0(*(undefined8 *)(param_1 + 0x30),extraout_x1_20,4);

      auVar34 = _objc_retainAutoreleasedReturnValue();

      FUN_00292140(auVar34._0_8_,auVar34._8_8_,0);

      uVar23 = _objc_retainAutoreleasedReturnValue();

      pvVar14 = _malloc(0x1c);

      lVar8 = 0;

      do {

        *(byte *)((long)pvVar14 + lVar8) = (&DAT_003081a8)[lVar8] ^ 0xf6;

        lVar8 = lVar8 + 1;

      } while (lVar8 != 0x1b);

      *(undefined1 *)((long)pvVar14 + 0x1b) = 0;

      FUN_002a46c0(&_OBJC_CLASS___NSString);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      _free(pvVar14);

      local_110[0] = 0x9f;

      local_110[1] = 0x98;

      local_110[2] = 0x92;

      local_110[3] = 0x93;

      local_110[4] = 0x8e;

      local_110[5] = 0xd8;

      local_110[6] = 0x86;

      local_110[7] = 0x9e;

      local_110[8] = 0x86;

      pvVar14 = _malloc(10);

      lVar8 = 0;

      do {

        *(byte *)((long)pvVar14 + lVar8) = local_110[lVar8] ^ 0xf6;

        lVar8 = lVar8 + 1;

      } while (lVar8 != 9);

      *(undefined1 *)((long)pvVar14 + 9) = 0;

      FUN_002a46c0(&_OBJC_CLASS___NSString);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      _free(pvVar14);

      FUN_002a44a0(uVar15,extraout_x1_21,uVar16);

      uVar17 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar16);

      _objc_release(uVar15);

      FUN_002a4680(&_OBJC_CLASS___NSMutableString,extraout_x1_22,

                   &cf____timestamp____signature____vid____speed___1f_volume___1f_mode_async);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      uVar15 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

      auVar35 = _objc_opt_isKindOfClass(param_2,uVar15);

      uVar15 = auVar35._8_8_;

      if ((auVar35._0_8_ & 1) != 0) {

        FUN_00299540(param_2,uVar15,&cf_emotion);

        auVar35 = _objc_retainAutoreleasedReturnValue();

        uVar15 = auVar35._0_8_;

        FUN_00299540(param_2,auVar35._8_8_,&cf_emotionMode);

        auVar35 = _objc_retainAutoreleasedReturnValue();

        FUN_00299540(param_2,auVar35._8_8_,&cf_markup);

        auVar36 = _objc_retainAutoreleasedReturnValue();

        uVar19 = auVar36._0_8_;

        FUN_00299540(param_2,auVar36._8_8_,&cf_effect);

        uVar18 = _objc_retainAutoreleasedReturnValue();

        lVar8 = FUN_00297fa0(uVar15);

        if (lVar8 != 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(uVar15,auVar36._8_8_,auVar36._0_8_);

          auVar37 = _objc_retainAutoreleasedReturnValue();

          FUN_002919a0(uVar16,auVar37._8_8_,&cf__fvemotion____fvemotionmode___);

          _objc_release(auVar37._0_8_);

          _objc_release(auVar36._0_8_);

        }

        lVar8 = FUN_00297fa0(uVar19);

        if (lVar8 != 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(uVar19,auVar36._8_8_,auVar36._0_8_);

          auVar37 = _objc_retainAutoreleasedReturnValue();

          FUN_002919a0(uVar16,auVar37._8_8_,&cf__fvmarkup___);

          _objc_release(auVar37._0_8_);

          _objc_release(auVar36._0_8_);

        }

        lVar8 = FUN_00297fa0(uVar18);

        if (lVar8 != 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(uVar18,auVar36._8_8_,auVar36._0_8_);

          auVar37 = _objc_retainAutoreleasedReturnValue();

          FUN_002919a0(uVar16,auVar37._8_8_,&cf__fveffect___);

          _objc_release(auVar37._0_8_);

          _objc_release(auVar36._0_8_);

        }

        _objc_release(uVar18);

        _objc_release(uVar19);

        _objc_release(auVar35._0_8_);

        _objc_release(uVar15);

        uVar15 = extraout_x1_23;

      }

      iVar3 = FUN_00297820(uVar6,uVar15,&cf_fish);

      if (iVar3 != 0) {

        FUN_0006ae98(&cf_ttsFishEmotion,&PTR__OBJC_CLASS___NSConstantDictionary_003c05b8);

        uVar19 = _objc_retainAutoreleasedReturnValue();

        FUN_0006ae98(&cf_ttsFishEffect,&PTR__OBJC_CLASS___NSConstantDictionary_003c05e0);

        auVar35 = _objc_retainAutoreleasedReturnValue();

        uVar18 = auVar35._0_8_;

        auVar35 = FUN_00297820(uVar19,auVar35._8_8_,&cf_none);

        uVar15 = auVar35._8_8_;

        if ((auVar35._0_8_ & 1) == 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar35 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(uVar19,auVar35._8_8_,auVar35._0_8_);

          auVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_002919a0(uVar16,auVar36._8_8_,&cf__fishemotion___);

          _objc_release(auVar36._0_8_);

          _objc_release(auVar35._0_8_);

          uVar15 = extraout_x1_24;

        }

        uVar20 = FUN_00297820(uVar18,uVar15,&cf_none);

        if ((uVar20 & 1) == 0) {

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar35 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(uVar18,auVar35._8_8_,auVar35._0_8_);

          auVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_002919a0(uVar16,auVar36._8_8_,&cf__fisheffect___);

          _objc_release(auVar36._0_8_);

          _objc_release(auVar35._0_8_);

        }

        _objc_release(uVar18);

        _objc_release(uVar19);

      }

      auVar35 = FUN_00297fa0(pcVar22);

      uVar15 = auVar35._8_8_;

      if (auVar35._0_8_ != 0) {

        _objc_retain(pcVar22);

        iVar3 = FUN_00293580(pcVar22,extraout_x1_25,&cf__);

        pcVar13 = pcVar22;

        if (iVar3 != 0) {

          FUN_00297da0(pcVar22);

          pcVar13 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          _objc_release(pcVar22);

        }

        FUN_002916c0(&_OBJC_CLASS___NSCharacterSet);

        auVar35 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4420(pcVar13,auVar35._8_8_,auVar35._0_8_);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar35._0_8_);

        FUN_002919a0(uVar16,extraout_x1_26,&cf__bgSound____bgVolume___2f);

        _objc_release(uVar15);

        _objc_release(pcVar13);

        uVar15 = extraout_x1_27;

      }

      FUN_00290c20(&_OBJC_CLASS___NSURL,uVar15,uVar16);

      auVar35 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b720(&_OBJC_CLASS___NSMutableURLRequest,auVar35._8_8_,auVar35._0_8_);

      auVar36 = _objc_retainAutoreleasedReturnValue();

      uVar19 = auVar36._0_8_;

      FUN_0029e7e0(uVar19,auVar36._8_8_,&cf_GET);

      FUN_002a1ea0(0x404e000000000000,uVar19);

      FUN_002a2480(uVar19,extraout_x1_28,pcVar5,&cf_Xlb);

      FUN_002a2480(uVar19,extraout_x1_29,uVar23,&cf_Text);

      FUN_002a45e0(*(undefined8 *)(param_1 + 0x20),extraout_x1_30,&cf_ttsCustomFishToken);

      auVar36 = _objc_retainAutoreleasedReturnValue();

      lVar8 = auVar36._0_8_;

      FUN_002a45e0(*(undefined8 *)(param_1 + 0x20),auVar36._8_8_,&cf_ttsCustomFvToken);

      auVar36 = _objc_retainAutoreleasedReturnValue();

      uVar15 = auVar36._8_8_;

      lVar26 = auVar36._0_8_;

      if (lVar8 != 0) {

        auVar36 = FUN_00297fa0(lVar8);

        uVar15 = auVar36._8_8_;

        if (auVar36._0_8_ != 0) {

          FUN_002a2480(uVar19,uVar15,lVar8,&cf_Fishtoken);

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(lVar8,auVar36._8_8_,auVar36._0_8_);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar36._0_8_);

          FUN_002919a0(uVar16,extraout_x1_31,&cf__fishtoken___);

          _objc_release(uVar15);

          uVar15 = extraout_x1_32;

        }

      }

      if (lVar26 != 0) {

        auVar36 = FUN_00297fa0(lVar26);

        uVar15 = auVar36._8_8_;

        if (auVar36._0_8_ != 0) {

          FUN_002a2480(uVar19,uVar15,lVar26,&cf_Fvtoken);

          FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

          auVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4420(lVar26,auVar36._8_8_,auVar36._0_8_);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar36._0_8_);

          FUN_002919a0(uVar16,extraout_x1_33,&cf__fvtoken___);

          _objc_release(uVar15);

          uVar15 = extraout_x1_34;

        }

      }

      FUN_00290c20(&_OBJC_CLASS___NSURL,uVar15,uVar16);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar35._0_8_);

      FUN_002a22c0(uVar19,extraout_x1_35,uVar15);

      FUN_002a2ec0(&_OBJC_CLASS___NSURLSession);

      uVar18 = _objc_retainAutoreleasedReturnValue();

      local_2e0 = PTR___NSConcreteStackBlock_003886f0;

      local_2d8 = 0xc2000000;

      local_2d0 = FUN_0007d1d8;

      puStack_2c8 = &DAT_00389f90;

      uVar25 = *(undefined8 *)(param_1 + 0x38);

      _objc_retain(uVar25);

      local_2b8 = uVar25;

      _objc_retain(uVar17);

      local_2c0 = uVar17;

      FUN_00293f60(uVar18,extraout_x1_36,uVar19,&local_2e0);

      uVar25 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar18);

      FUN_0029b980(uVar25);

      _objc_release(uVar25);

      _objc_release(local_2c0);

      _objc_release(local_2b8);

      _objc_release(lVar26);

      _objc_release(lVar8);

      _objc_release(uVar19);

      _objc_release(uVar15);

      _objc_release(uVar16);

      _objc_release(uVar17);

      _objc_release(uVar23);

      _objc_release(auVar34._0_8_);

      _objc_release(pcVar5);

      _objc_release(local_320);

      _objc_release(uVar12);

    }

    _objc_release(uVar21);

  }

LAB_0007c8d0:

  _objc_release(local_2f0);

  _objc_release(uVar9);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(pcVar22);

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




