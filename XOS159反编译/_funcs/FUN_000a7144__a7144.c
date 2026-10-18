// FUN_000a7144 @0xa7144


void FUN_000a7144(long param_1)



{

  cfstringStruct *pcVar1;

  bool bVar2;

  undefined1 uVar3;

  int iVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  cfstringStruct *pcVar9;

  long lVar10;

  long lVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  ulong uVar14;

  ulong uVar15;

  undefined8 uVar16;

  long lVar17;

  long lVar18;

  cfstringStruct *pcVar19;

  long lVar20;

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

  undefined8 uVar21;

  undefined8 uVar22;

  long lVar23;

  long *plVar24;

  long lVar25;

  cfstringStruct *pcVar26;

  undefined8 uVar27;

  undefined8 uVar28;

  undefined8 uVar29;

  double dVar30;

  undefined1 auVar31 [16];

  undefined1 auVar32 [16];

  long local_198;

  undefined *local_190;

  undefined8 local_188;

  code *local_180;

  undefined *puStack_178;

  long local_170;

  undefined8 local_168;

  undefined8 local_160;

  undefined8 local_158;

  long local_150;

  undefined8 local_148;

  undefined8 uStack_140;

  undefined1 local_138;

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_getClass("MMContext");

  FUN_00293c40();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  auVar31 = _objc_getClass("CMessageMgr");

  FUN_00295b60(uVar5,auVar31._8_8_,auVar31._0_8_);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  auVar31 = _objc_getClass("CContactMgr");

  FUN_00295b60(uVar5,auVar31._8_8_,auVar31._0_8_);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00295b20();

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002986c0();

  pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar9 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar9;

  }

  _objc_retain();

  _objc_release(pcVar9);

  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(char *)(param_1 + 0x39) == '\x01')) {

    FUN_000a4e90(*(undefined8 *)(param_1 + 0x20));

    lVar10 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    lVar10 = 0;

  }

  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(char *)(param_1 + 0x39) == '\x01')) {

    uVar21 = *(undefined8 *)(param_1 + 0x28);

  }

  else {

    uVar21 = 0;

  }

  _objc_retain(uVar21);

  uVar29 = *(undefined8 *)(param_1 + 0x30);

  uVar22 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar29);

  _objc_retain(uVar22);

  _objc_retain(lVar10);

  _objc_retain(uVar21);

  _objc_retain(uVar29);

  lVar11 = FUN_00297fa0(uVar29);

  if (lVar11 == 0) {

    pcVar9 = (cfstringStruct *)0x0;

    lVar11 = 0;

    bVar2 = false;

  }

  else {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_00295780(&objc::class_t::_0x00bdda58);

    uVar13 = _objc_retainAutoreleasedReturnValue();

    uStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    uStack_100 = 0;

    lStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    local_120 = (long *)0x0;

    FUN_00291600();

    auVar31 = _objc_retainAutoreleasedReturnValue();

    uVar16 = auVar31._0_8_;

    auVar31 = FUN_00293880(uVar16,auVar31._8_8_,&local_130,auStack_f0,0x10);

    if (auVar31._0_8_ == 0) {

      _objc_release(uVar16);

      local_198 = 0;

      uVar16 = extraout_x1_02;

LAB_000a74c8:

      FUN_002a45e0(uVar12,uVar16,&cf_ttsTriggerPrefix);

      pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar26 = &cf_zz;

      if (pcVar9 != (cfstringStruct *)0x0) {

        pcVar26 = pcVar9;

      }

      _objc_retain(pcVar26);

      _objc_release(pcVar9);

      auVar31 = FUN_00297fa0(pcVar26);

      if ((auVar31._0_8_ != 0) && (iVar4 = FUN_00295f60(uVar29,auVar31._8_8_,pcVar26), iVar4 != 0))

      {

        uVar14 = FUN_00297fa0(uVar29);

        uVar15 = FUN_00297fa0(pcVar26);

        if (uVar15 < uVar14) goto LAB_000a741c;

      }

      pcVar19 = (cfstringStruct *)0x0;

LAB_000a755c:

      lVar11 = 0;

      pcVar9 = (cfstringStruct *)0x0;

      bVar2 = false;

    }

    else {

      pcVar26 = (cfstringStruct *)0x0;

      local_198 = 0;

      lVar11 = *local_120;

      do {

        uVar27 = auVar31._8_8_;

        lVar23 = 0;

        do {

          if (*local_120 != lVar11) {

            _objc_enumerationMutation(uVar16);

            uVar27 = extraout_x1;

          }

          lVar25 = *(long *)(lStack_128 + lVar23 * 8);

          FUN_00299540(uVar13,uVar27,lVar25);

          pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          uVar14 = FUN_00297fa0();

          auVar32 = FUN_00297fa0(pcVar26);

          if ((auVar32._0_8_ < uVar14) &&

             (iVar4 = FUN_00295f60(uVar29,auVar32._8_8_,pcVar9), iVar4 != 0)) {

            uVar14 = FUN_00297fa0(uVar29);

            uVar15 = FUN_00297fa0(pcVar9);

            if (uVar15 < uVar14) {

              _objc_retain(pcVar9);

              _objc_release(pcVar26);

              _objc_retain(lVar25);

              _objc_release(local_198);

              pcVar26 = pcVar9;

              local_198 = lVar25;

            }

          }

          _objc_release(pcVar9);

          lVar23 = lVar23 + 1;

          uVar27 = extraout_x1_00;

        } while (auVar31._0_8_ != lVar23);

        auVar31 = FUN_00293880(uVar16,extraout_x1_00,&local_130,auStack_f0,0x10);

      } while (auVar31._0_8_ != 0);

      _objc_release(uVar16);

      uVar16 = extraout_x1_01;

      if (pcVar26 == (cfstringStruct *)0x0) goto LAB_000a74c8;

LAB_000a741c:

      auVar31 = FUN_00297fa0(pcVar26);

      FUN_002a47c0(uVar29,auVar31._8_8_,auVar31._0_8_);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

      auVar31 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45c0(uVar16,auVar31._8_8_,auVar31._0_8_);

      pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      _objc_release(uVar16);

      _objc_release(auVar31._0_8_);

      lVar11 = FUN_00297fa0(pcVar9);

      pcVar19 = pcVar26;

      pcVar26 = pcVar9;

      if (lVar11 == 0) goto LAB_000a755c;

      _objc_retainAutorelease(pcVar9);

      _objc_retainAutorelease(local_198);

      bVar2 = true;

      lVar11 = local_198;

    }

    _objc_release(pcVar26);

    _objc_release(uVar13);

    _objc_release(local_198);

    _objc_release(pcVar19);

    _objc_release(uVar12);

  }

  _objc_release(uVar29);

  _objc_retain(pcVar9);

  _objc_retain(lVar11);

  if (bVar2) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar31 = _objc_retainAutoreleasedReturnValue();

    uVar12 = auVar31._0_8_;

    uVar14 = FUN_002924c0(uVar12,auVar31._8_8_,&cf_ttsFunctionEnabled);

    if ((uVar14 & 1) != 0) {

      uVar13 = _objc_getClass("BaseMsgContentViewController");

      uVar14 = _objc_opt_isKindOfClass(lVar10,uVar13);

      lVar23 = lVar10;

      if ((uVar14 & 1) == 0) {

        lVar23 = 0;

      }

      _objc_retain(lVar23);

      uVar3 = FUN_000a2d9c(lVar23,uVar22);

      if (lVar23 == 0) {

        uVar13 = 0;

      }

      else {

        FUN_00295b80(lVar10);

        uVar13 = _objc_retainAutoreleasedReturnValue();

      }

      uVar16 = FUN_000a2fe8(lVar23);

      auVar31 = FUN_00297fa0(lVar11);

      if (auVar31._0_8_ == 0) {

        uVar27 = 0;

        uVar28 = 0;

      }

      else {

        FUN_002a45e0(uVar12,auVar31._8_8_,&cf_ttsSelectedVoice);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        uVar27 = auVar31._0_8_;

        FUN_002a45e0(uVar12,auVar31._8_8_,&cf_ttsSelectedVoiceName);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        uVar28 = auVar31._0_8_;

        FUN_002a0060(uVar12,auVar31._8_8_,lVar11,&cf_ttsSelectedVoice);

        FUN_00299520(uVar12,extraout_x1_03,&cf_ttsVoiceCustomPrefixNames);

        auVar31 = _objc_retainAutoreleasedReturnValue();

        FUN_00299540(auVar31._0_8_,auVar31._8_8_,lVar11);

        auVar32 = _objc_retainAutoreleasedReturnValue();

        lVar17 = auVar32._0_8_;

        lVar25 = lVar11;

        if (lVar17 != 0) {

          lVar25 = lVar17;

        }

        FUN_002a0060(uVar12,auVar32._8_8_,lVar25,&cf_ttsSelectedVoiceName);

        _objc_release(lVar17);

        _objc_release(auVar31._0_8_);

      }

      _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038af00);

      local_190 = PTR___NSConcreteStackBlock_003886f0;

      local_188 = 0xc2000000;

      local_180 = FUN_000a851c;

      puStack_178 = &DAT_0038af50;

      _objc_retain(lVar11);

      local_170 = lVar11;

      _objc_retain(uVar27);

      local_168 = uVar27;

      _objc_retain(uVar28);

      local_160 = uVar28;

      _objc_retain(uVar22);

      local_158 = uVar22;

      _objc_retain(lVar10);

      local_150 = lVar10;

      _objc_retain(uVar21);

      local_148 = uVar21;

      uStack_140 = uVar16;

      local_138 = uVar3;

      FUN_00293740(&objc::class_t::_0x016d26c7,extraout_x1_04,pcVar9,&local_190);

      _objc_release(local_148);

      _objc_release(local_150);

      _objc_release(local_158);

      _objc_release(local_160);

      _objc_release(local_168);

      _objc_release(local_170);

      _objc_release(uVar28);

      _objc_release(uVar27);

      _objc_release(uVar13);

      _objc_release(lVar23);

      _objc_release(uVar12);

      _objc_release(lVar11);

      _objc_release(pcVar9);

      _objc_release(uVar21);

      _objc_release(lVar10);

      _objc_release(uVar22);

      _objc_release(uVar29);

      goto LAB_000a7eac;

    }

    _objc_release(uVar12);

  }

  _objc_release(lVar11);

  _objc_release(pcVar9);

  _objc_release(uVar21);

  _objc_release(lVar10);

  _objc_release(uVar22);

  _objc_release(uVar29);

  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(char *)(param_1 + 0x39) == '\x01')) {

    FUN_000a4e90(*(undefined8 *)(param_1 + 0x20));

    lVar11 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    lVar11 = 0;

  }

  if (*(char *)(param_1 + 0x38) == '\x01') {

    if (*(char *)(param_1 + 0x39) != '\x01') {

LAB_000a79fc:

      if (*(char *)(param_1 + 0x39) != '\x01') goto LAB_000a7e08;

      lVar23 = *(long *)(param_1 + 0x28);

      lVar25 = *(long *)(param_1 + 0x30);

      uVar22 = *(undefined8 *)(param_1 + 0x20);

      _objc_retain(lVar25);

      _objc_retain(uVar22);

      _objc_retain(pcVar1);

      _objc_retain(lVar23);

      lVar17 = FUN_00297fa0(lVar25);

      if ((((lVar17 != 0) && (lVar17 = FUN_00297fa0(uVar22), lVar17 != 0)) &&

          (lVar17 = FUN_00297fa0(pcVar1), lVar23 != 0)) && (lVar17 != 0)) {

        _objc_getClass("CMessageWrap");

        auVar31 = _objc_alloc();

        lVar17 = FUN_00296d40(auVar31._0_8_,auVar31._8_8_,0x31,pcVar1);

        if ((lVar17 == 0) ||

           (uVar14 = _objc_opt_respondsToSelector(lVar17,"updateForReferMsg:replyContent:"),

           (uVar14 & 1) == 0)) {

LAB_000a7de0:

          _objc_release(lVar17);

        }

        else {

          FUN_00298560(lVar17);

          auVar31 = _objc_retainAutoreleasedReturnValue();

          if (auVar31._0_8_ == 0) {

            _objc_getClass("CExtendInfoOfAPP");

            auVar31 = _objc_opt_new();

            lVar18 = auVar31._0_8_;

            FUN_0029f6c0(lVar17,auVar31._8_8_,lVar18);

            auVar31._8_8_ = extraout_x1_05;

            auVar31._0_8_ = lVar18;

            if (lVar18 == 0) goto LAB_000a7de0;

          }

          uVar12 = auVar31._0_8_;

          FUN_0029f760(lVar17,auVar31._8_8_,pcVar1);

          FUN_0029f780(lVar17,extraout_x1_06,uVar22);

          FUN_0029f740(lVar17,extraout_x1_07,lVar25);

          FUN_0029f840(lVar17,extraout_x1_08,0);

          FUN_002940e0(&_OBJC_CLASS___NSDate);

          uVar29 = _objc_retainAutoreleasedReturnValue();

          dVar30 = (double)FUN_002a51c0();

          FUN_0029f7e0(lVar17,extraout_x1_09,(int)dVar30);

          _objc_release(uVar29);

          FUN_0029f860(lVar17,extraout_x1_10,1);

          FUN_0029f7c0(uVar12,extraout_x1_11,0x39);

          FUN_0029f7a0(uVar12,extraout_x1_12,lVar17);

          FUN_002a24a0(lVar17,extraout_x1_13,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfae8,

                       &cf_m_uiAppMsgInnerType);

          FUN_002a5b80(lVar17,extraout_x1_14,lVar23,lVar25);

          FUN_00298560(lVar17);

          lVar18 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar12);

          uVar29 = extraout_x1_15;

          if (lVar18 == 0) {

            _objc_getClass("CExtendInfoOfAPP");

            auVar31 = _objc_opt_new();

            lVar18 = auVar31._0_8_;

            FUN_0029f6c0(lVar17,auVar31._8_8_,lVar18);

            uVar29 = extraout_x1_16;

            if (lVar18 == 0) goto LAB_000a7de0;

          }

          FUN_0029f7c0(lVar18,uVar29,0x39);

          FUN_0029f7a0(lVar18,extraout_x1_17,lVar17);

          FUN_002a24a0(lVar17,extraout_x1_18,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfae8,

                       &cf_m_uiAppMsgInnerType);

          FUN_002985a0(lVar17);

          pcVar26 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          pcVar9 = &cf___;

          if (pcVar26 != (cfstringStruct *)0x0) {

            pcVar9 = pcVar26;

          }

          _objc_retain(pcVar9);

          _objc_release(pcVar26);

          auVar31 = FUN_0029abc0(pcVar9,extraout_x1_19,&cf_<type>0<_type>,1);

          if (auVar31._0_8_ != 0x7fffffffffffffff) {

            FUN_002a4560(pcVar9,auVar31._8_8_,&cf_<type>0<_type>,&cf_<type>57<_type>);

            auVar31 = _objc_retainAutoreleasedReturnValue();

            FUN_0029f740(lVar17,auVar31._8_8_,auVar31._0_8_);

            _objc_release(auVar31._0_8_);

          }

          _objc_retain(lVar17);

          FUN_000a8794(lVar17,&cf_m_uiMessageType);

          uVar29 = _objc_retainAutoreleasedReturnValue();

          FUN_00298560(lVar17);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          FUN_000a8794(uVar12,&cf_m_uiAppMsgInnerType);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar12);

          FUN_000a8794(lVar17,&cf_m_nsContent);

          pcVar19 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          uVar12 = _objc_opt_class(&_OBJC_CLASS___NSString);

          uVar14 = _objc_opt_isKindOfClass(pcVar19,uVar12);

          pcVar26 = pcVar19;

          if ((uVar14 & 1) == 0) {

            pcVar26 = &cf___;

          }

          _objc_retain(pcVar26);

          iVar4 = FUN_002a5a00(uVar29);

          if ((iVar4 == 0x31) && (iVar4 = FUN_002a5a00(uVar13), iVar4 == 0x39)) {

            auVar31 = FUN_0029abc0(pcVar26,extraout_x1_20,&cf_<type>57<_type>,1);

            if (auVar31._0_8_ == 0x7fffffffffffffff) goto LAB_000a7d98;

            lVar20 = FUN_0029abc0(pcVar26,auVar31._8_8_,&cf_<refermsg>,1);

            _objc_release(pcVar26);

            _objc_release(pcVar19);

            _objc_release(uVar13);

            _objc_release(uVar29);

            _objc_release(lVar17);

            if (lVar20 == 0x7fffffffffffffff) {

              _objc_release(pcVar9);

              _objc_release(lVar18);

              _objc_release(lVar17);

              goto LAB_000a7de8;

            }

            _objc_getClass("MMServiceCenter");

            FUN_00294200();

            uVar29 = _objc_retainAutoreleasedReturnValue();

            auVar31 = _objc_getClass("CMessageMgr");

            FUN_00295b60(uVar29,auVar31._8_8_,auVar31._0_8_);

            lVar20 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar29);

            if (lVar20 != 0) {

              auVar31 = _objc_opt_respondsToSelector(lVar20,"AddMsg:MsgWrap:");

              if ((auVar31._0_8_ & 1) != 0) {

                FUN_002909e0(lVar20,auVar31._8_8_,uVar22,lVar17);

                _objc_release(lVar20);

                _objc_release(pcVar9);

                _objc_release(lVar18);

                _objc_release(lVar17);

                pcVar9 = pcVar1;

                goto LAB_000a79b0;

              }

            }

          }

          else {

LAB_000a7d98:

            _objc_release(pcVar26);

            _objc_release(pcVar19);

            _objc_release(uVar13);

            _objc_release(uVar29);

            lVar20 = lVar17;

          }

          _objc_release(lVar20);

          _objc_release(pcVar9);

          _objc_release(lVar18);

          _objc_release(lVar17);

        }

      }

LAB_000a7de8:

      _objc_release(lVar23);

      _objc_release(pcVar1);

      _objc_release(uVar22);

      _objc_release(lVar25);

      goto LAB_000a7e08;

    }

    pcVar9 = *(cfstringStruct **)(param_1 + 0x28);

    uVar22 = *(undefined8 *)(param_1 + 0x30);

    _objc_retain(lVar11);

    _objc_retain(uVar22);

    _objc_retain(pcVar9);

    if (lVar11 == 0) {

LAB_000a79d4:

      _objc_release(pcVar9);

      _objc_release(uVar22);

      _objc_release(lVar11);

      if (*(char *)(param_1 + 0x38) != '\x01') goto LAB_000a7e08;

      goto LAB_000a79fc;

    }

    auVar31 = FUN_00297fa0(uVar22);

    if ((pcVar9 == (cfstringStruct *)0x0) || (auVar31._0_8_ == 0)) goto LAB_000a79d4;

    FUN_002a6080(lVar11,auVar31._8_8_,&cf_m_delegate);

    lVar23 = _objc_retainAutoreleasedReturnValue();

    if (lVar23 == 0) {

      _objc_retain(lVar11);

      uVar29 = _object_getClass(lVar11);

      lVar23 = _class_getInstanceVariable(uVar29,"m_delegate");

      if (lVar23 == 0) {

        plVar24 = (long *)0x0;

      }

      else {

        lVar23 = _ivar_getOffset();

        plVar24 = (long *)(lVar11 + lVar23);

      }

      _objc_release(lVar11);

      lVar23 = *plVar24;

      _objc_retain(lVar23);

    }

    uVar29 = _NSSelectorFromString(&cf_SendTextMessage_replyingMessage_);

    if ((lVar23 == 0) || (uVar14 = _objc_opt_respondsToSelector(lVar23,uVar29), (uVar14 & 1) == 0))

    {

      _objc_release(lVar23);

      goto LAB_000a79d4;

    }

    _objc_msgSend(lVar23,uVar29,uVar22,pcVar9);

    lVar25 = lVar11;

LAB_000a79b0:

    _objc_release(lVar23);

    _objc_release(pcVar9);

    _objc_release(uVar22);

  }

  else {

LAB_000a7e08:

    _objc_getClass("CMessageWrap");

    auVar31 = _objc_alloc();

    auVar31 = FUN_00296d20(auVar31._0_8_,auVar31._8_8_,1);

    lVar25 = auVar31._0_8_;

    FUN_0029f760(lVar25,auVar31._8_8_,pcVar1);

    FUN_0029f740(lVar25,extraout_x1_21,*(undefined8 *)(param_1 + 0x30));

    FUN_0029f780(lVar25,extraout_x1_22,*(undefined8 *)(param_1 + 0x20));

    FUN_0029f840(lVar25,extraout_x1_23,0);

    FUN_002940e0(&_OBJC_CLASS___NSDate);

    uVar22 = _objc_retainAutoreleasedReturnValue();

    dVar30 = (double)FUN_002a51c0();

    FUN_0029f7e0(lVar25,extraout_x1_24,(int)dVar30);

    _objc_release(uVar22);

    FUN_002909e0(uVar6,extraout_x1_25,*(undefined8 *)(param_1 + 0x20),lVar25);

  }

  _objc_release(lVar25);

  _objc_release(lVar11);

LAB_000a7eac:

  _objc_release(uVar21);

  _objc_release(lVar10);

  _objc_release(pcVar1);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




