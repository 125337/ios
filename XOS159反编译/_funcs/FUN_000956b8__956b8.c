// FUN_000956b8 @0x956b8


void FUN_000956b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  cfstringStruct *pcVar1;

  undefined8 *puVar2;

  undefined1 uVar3;

  uint uVar4;

  uint uVar5;

  int iVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  cfstringStruct *pcVar10;

  ulong uVar11;

  ulong uVar12;

  undefined8 uVar13;

  long lVar14;

  undefined8 uVar15;

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

  long lVar16;

  long lVar17;

  undefined8 uVar18;

  long lVar19;

  long lVar20;

  long lVar21;

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  undefined8 local_2a8;

  undefined8 local_2a0;

  undefined *local_270;

  undefined8 local_268;

  code *local_260;

  undefined *puStack_258;

  undefined8 local_250;

  undefined8 local_248;

  undefined8 local_240;

  undefined8 *puStack_238;

  undefined8 local_230;

  undefined1 local_228;

  undefined8 local_220;

  long lStack_218;

  long *local_210;

  undefined8 uStack_208;

  undefined8 local_200;

  undefined8 uStack_1f8;

  undefined8 uStack_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 *local_1d8;

  undefined8 local_1d0;

  code *local_1c8;

  code *pcStack_1c0;

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

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar22 = _objc_retainAutoreleasedReturnValue();

  uVar7 = auVar22._0_8_;

  uVar4 = FUN_002924c0(uVar7,auVar22._8_8_,&cf_coversEnabled);

  uVar5 = FUN_002924c0(uVar7,extraout_x1,&cf_ttsFunctionEnabled);

  if ((uVar4 & uVar5 & 1) == 0) {

    (*DAT_003e77b8)(param_1,param_2,param_3,param_4);

LAB_000958ec:

    _objc_release(uVar7);

  }

  else {

    FUN_002a6080(param_4,extraout_x1_00,&cf_m_uiMessageType);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    iVar6 = FUN_002a5a00();

    _objc_release(uVar8);

    if ((param_4 != 0) && (iVar6 == 1)) {

      FUN_002a6080(param_4,extraout_x1_01,&cf_m_nsContent);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      lVar9 = auVar22._0_8_;

      FUN_002a45e0(uVar7,auVar22._8_8_,&cf_ttsTriggerPrefix);

      pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar1 = &cf_zz;

      if (pcVar10 != (cfstringStruct *)0x0) {

        pcVar1 = pcVar10;

      }

      _objc_retain();

      _objc_release(pcVar10);

      FUN_00295780(&objc::class_t::_0x00bdda58);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      uStack_188 = 0;

      local_190 = 0;

      uStack_178 = 0;

      uStack_180 = 0;

      lStack_1a8 = 0;

      local_1b0 = 0;

      uStack_198 = 0;

      local_1a0 = (long *)0x0;

      FUN_00291600();

      auVar22 = _objc_retainAutoreleasedReturnValue();

      uVar13 = auVar22._0_8_;

      auVar22 = FUN_00293880(uVar13,auVar22._8_8_,&local_1b0,auStack_f0,0x10);

      if (auVar22._0_8_ != 0) {

        lVar19 = *local_1a0;

        do {

          uVar15 = auVar22._8_8_;

          lVar16 = 0;

          do {

            if (*local_1a0 != lVar19) {

              _objc_enumerationMutation(uVar13);

              uVar15 = extraout_x1_02;

            }

            lVar21 = *(long *)(lStack_1a8 + lVar16 * 8);

            FUN_00299540(uVar8,uVar15,lVar21);

            auVar23 = _objc_retainAutoreleasedReturnValue();

            pcVar10 = auVar23._0_8_;

            if ((lVar9 != 0) && (iVar6 = FUN_00295f60(lVar9,auVar23._8_8_,pcVar10), iVar6 != 0)) {

              uVar11 = FUN_00297fa0(lVar9);

              uVar12 = FUN_00297fa0(pcVar10);

              if (uVar12 < uVar11) {

                _objc_retain(lVar21);

                goto LAB_00095900;

              }

            }

            _objc_release(pcVar10);

            lVar16 = lVar16 + 1;

            uVar15 = extraout_x1_03;

          } while (auVar22._0_8_ != lVar16);

          auVar22 = FUN_00293880(uVar13,extraout_x1_03,&local_1b0,auStack_f0,0x10);

        } while (auVar22._0_8_ != 0);

      }

      lVar21 = 0;

      pcVar10 = (cfstringStruct *)0x0;

LAB_00095900:

      _objc_release(uVar13);

      if ((pcVar10 == (cfstringStruct *)0x0) && (lVar9 != 0)) {

        iVar6 = FUN_00295f60(lVar9,extraout_x1_04,pcVar1);

        if (iVar6 != 0) {

          uVar11 = FUN_00297fa0(lVar9);

          uVar12 = FUN_00297fa0(pcVar1);

          if (uVar12 < uVar11) {

            _objc_retain(pcVar1);

            _objc_release(lVar21);

            lVar21 = 0;

            pcVar10 = pcVar1;

            goto LAB_0009595c;

          }

        }

      }

      else if (pcVar10 != (cfstringStruct *)0x0) {

LAB_0009595c:

        auVar22 = FUN_00297fa0(pcVar10);

        FUN_002a47c0(lVar9,auVar22._8_8_,auVar22._0_8_);

        auVar22 = _objc_retainAutoreleasedReturnValue();

        if (lVar21 == 0) {

          local_2a8 = 0;

          local_2a0 = 0;

        }

        else {

          FUN_002a45e0(uVar7,auVar22._8_8_,&cf_ttsSelectedVoice);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          local_2a8 = auVar23._0_8_;

          FUN_002a45e0(uVar7,auVar23._8_8_,&cf_ttsSelectedVoiceName);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          local_2a0 = auVar23._0_8_;

          FUN_002a0060(uVar7,auVar23._8_8_,lVar21,&cf_ttsSelectedVoice);

          FUN_00299520(uVar7,extraout_x1_05,&cf_ttsVoiceCustomPrefixNames);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(auVar23._0_8_,auVar23._8_8_,lVar21);

          lVar16 = _objc_retainAutoreleasedReturnValue();

          lVar19 = lVar21;

          if (lVar16 != 0) {

            lVar19 = lVar16;

          }

          _objc_retain(lVar19);

          _objc_release(lVar16);

          FUN_002a0060(uVar7,extraout_x1_06,lVar19,&cf_ttsSelectedVoiceName);

          _objc_release(lVar19);

          _objc_release(auVar23._0_8_);

        }

        local_1d8 = &local_1e0;

        local_1e0 = 0;

        local_1d0 = 0x3032000000;

        local_1c8 = FUN_00030178;

        pcStack_1c0 = FUN_00030188;

        local_1b8 = 0;

        iVar6 = FUN_00297960(&_OBJC_CLASS___NSThread);

        if (iVar6 != 0) {

          FUN_000a2cac();

          lVar16 = _objc_retainAutoreleasedReturnValue();

          _objc_retain();

          lVar19 = lVar16;

          while (lVar19 != 0) {

            uVar13 = _objc_getClass("BaseMsgContentViewController");

            uVar11 = _objc_opt_isKindOfClass(lVar19,uVar13);

            puVar2 = local_1d8;

            if ((uVar11 & 1) != 0) {

              _objc_retain(lVar19);

              uVar13 = puVar2[5];

              puVar2[5] = lVar19;

              _objc_release(uVar13);

              break;

            }

            FUN_0029a580(lVar19);

            lVar14 = _objc_retainAutoreleasedReturnValue();

            if (lVar14 == 0) {

              FUN_00299ac0(lVar19);

              lVar17 = _objc_retainAutoreleasedReturnValue();

            }

            else {

              _objc_retain(lVar14);

              lVar17 = lVar14;

            }

            _objc_release(lVar19);

            _objc_release(lVar14);

            lVar19 = lVar17;

          }

          if (local_1d8[5] == 0) {

            FUN_002990e0(lVar16);

            lVar14 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar14 != 0) {

              uStack_1f8 = 0;

              local_200 = 0;

              uStack_1e8 = 0;

              uStack_1f0 = 0;

              lStack_218 = 0;

              local_220 = 0;

              uStack_208 = 0;

              local_210 = (long *)0x0;

              FUN_002990e0(lVar16);

              uVar13 = _objc_retainAutoreleasedReturnValue();

              FUN_002a6260();

              uVar15 = _objc_retainAutoreleasedReturnValue();

              _objc_release(uVar13);

              lVar14 = FUN_00293880(uVar15,extraout_x1_07,&local_220,auStack_170,0x10);

              if (lVar14 != 0) {

                lVar17 = *local_210;

                do {

                  lVar20 = 0;

                  do {

                    if (*local_210 != lVar17) {

                      _objc_enumerationMutation(uVar15);

                    }

                    uVar18 = *(undefined8 *)(lStack_218 + lVar20 * 8);

                    uVar13 = _objc_getClass("BaseMsgContentViewController");

                    auVar23 = _objc_opt_isKindOfClass(uVar18,uVar13);

                    puVar2 = local_1d8;

                    if ((auVar23._0_8_ & 1) != 0) {

                      _objc_retain(uVar18);

                      uVar13 = puVar2[5];

                      puVar2[5] = uVar18;

                      _objc_release(uVar13);

                      goto LAB_00095ce0;

                    }

                    lVar20 = lVar20 + 1;

                  } while (lVar14 != lVar20);

                  lVar14 = FUN_00293880(uVar15,auVar23._8_8_,&local_220,auStack_170,0x10);

                } while (lVar14 != 0);

              }

LAB_00095ce0:

              _objc_release(uVar15);

            }

          }

          _objc_release(lVar19);

          _objc_release(lVar16);

        }

        _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038ac50);

        uVar3 = FUN_000a2d9c(local_1d8[5],param_3);

        if (local_1d8[5] == 0) {

          uVar13 = 0;

        }

        else {

          FUN_00295b80();

          uVar13 = _objc_retainAutoreleasedReturnValue();

        }

        uVar15 = FUN_000a2fe8(local_1d8[5]);

        _objc_retain(local_2a8);

        _objc_retain(local_2a0);

        local_270 = PTR___NSConcreteStackBlock_003886f0;

        local_268 = 0xc2000000;

        local_260 = FUN_000a3104;

        puStack_258 = &DAT_0038aca0;

        local_250 = local_2a8;

        local_248 = local_2a0;

        _objc_retain(param_3);

        puStack_238 = &local_1e0;

        local_240 = param_3;

        local_230 = uVar15;

        local_228 = uVar3;

        _objc_retain(local_2a0);

        _objc_retain(local_2a8);

        FUN_00293740(&objc::class_t::_0x016d26c7,extraout_x1_08,auVar22._0_8_,&local_270);

        _objc_release(local_240);

        _objc_release(local_248);

        _objc_release(local_250);

        _objc_release(local_2a0);

        _objc_release(local_2a8);

        _objc_release(uVar13);

        __Block_object_dispose(&local_1e0,8);

        _objc_release(local_1b8);

        _objc_release(local_2a0);

        _objc_release(local_2a8);

        _objc_release(auVar22._0_8_);

        _objc_release(uVar8);

        _objc_release(lVar21);

        _objc_release(pcVar10);

        _objc_release(pcVar1);

        _objc_release(lVar9);

        goto LAB_000958ec;

      }

      _objc_release(uVar8);

      _objc_release(lVar21);

      _objc_release(pcVar1);

      _objc_release(lVar9);

    }

    _objc_release(uVar7);

    (*DAT_003e77b8)(param_1,param_2,param_3,param_4);

  }

  _objc_release(param_4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




