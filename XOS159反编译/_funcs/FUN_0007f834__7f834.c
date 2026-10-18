// FUN_0007f834 @0x7f834


void FUN_0007f834(long param_1,undefined8 param_2,long param_3)



{

  bool bVar1;

  cfstringStruct *pcVar2;

  byte bVar3;

  bool bVar4;

  bool bVar5;

  uint uVar6;

  uint uVar7;

  uint uVar8;

  int iVar9;

  uint uVar10;

  uint uVar11;

  undefined8 uVar13;

  long lVar14;

  long lVar15;

  long lVar16;

  long lVar17;

  cfstringStruct *pcVar18;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 uVar19;

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

  long lVar20;

  long lVar21;

  undefined8 uVar22;

  uint uVar23;

  uint uVar24;

  undefined1 auVar25 [16];

  undefined1 auVar26 [16];

  uint local_21c;

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

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

  undefined8 uVar12;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar25 = _objc_retainAutoreleasedReturnValue();

  uVar12 = auVar25._0_8_;

  uVar6 = FUN_002924c0(uVar12,auVar25._8_8_,&cf_coversEnabled);

  uVar7 = FUN_002924c0(uVar12,extraout_x1,&cf_ttsFunctionEnabled);

  uVar8 = FUN_002924c0(uVar12,extraout_x1_00,&cf_aiChatEnabled);

  _objc_retain(param_1);

  if (param_1 == 0) {

    lVar14 = 0;

  }

  else {

    FUN_00294ee0(param_1);

    uVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_000856e8();

    lVar14 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar13);

    iVar9 = FUN_000c0d54(lVar14);

    lVar15 = lVar14;

    if (iVar9 == 0) {

      FUN_0029b900(param_1);

      lVar16 = _objc_retainAutoreleasedReturnValue();

      if (lVar16 == 0) {

        lVar14 = 0;

      }

      else {

        do {

          FUN_000856e8(lVar16);

          lVar15 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar14);

          iVar9 = FUN_000c0d54(lVar15);

          if (iVar9 != 0) {

            _objc_retain(lVar15);

LAB_0007faf8:

            _objc_release(lVar16);

            lVar14 = lVar15;

            goto LAB_0007fb04;

          }

          FUN_002a6080(lVar16,extraout_x1_01,&cf_viewModel);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_000856e8();

          lVar21 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar15);

          iVar9 = FUN_000c0d54(lVar21);

          if (iVar9 != 0) {

            _objc_retain(lVar21);

            _objc_release(uVar13);

            lVar15 = lVar21;

            goto LAB_0007faf8;

          }

          _objc_release(uVar13);

          FUN_002a6080(lVar16,extraout_x1_02,&cf_msgData);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_000856e8();

          lVar14 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar21);

          iVar9 = FUN_000c0d54(lVar14);

          lVar15 = lVar14;

          if (iVar9 != 0) {

            _objc_retain(lVar14);

            _objc_release(uVar13);

            goto LAB_0007faf8;

          }

          _objc_release(uVar13);

          FUN_00299220(lVar16);

          lVar21 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar16);

          lVar16 = lVar21;

        } while (lVar21 != 0);

        lVar14 = 0;

      }

    }

    else {

      _objc_retain(lVar14);

    }

LAB_0007fb04:

    _objc_release(lVar15);

  }

  _objc_release(param_1);

  bVar4 = lVar14 != 0;

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e6670,lVar14,1);

  if (((uVar6 & (uVar7 | uVar8) & 1) == 0) && (lVar14 == 0)) {

    (*DAT_003e7648)(param_1,param_2,param_3);

  }

  else {

    if ((param_3 == 0) || (lVar15 = FUN_00293860(param_3), lVar15 == 0)) {

LAB_00080370:

      (*DAT_003e7648)(param_1,param_2,param_3);

      _objc_release(lVar14);

      _objc_release(uVar12);

      goto LAB_00080398;

    }

    FUN_00295440(param_3);

    uVar13 = _objc_retainAutoreleasedReturnValue();

    lVar15 = _objc_opt_class();

    uStack_188 = 0;

    local_190 = 0;

    uStack_178 = 0;

    uStack_180 = 0;

    lStack_1a8 = 0;

    local_1b0 = 0;

    uStack_198 = 0;

    local_1a0 = (long *)0x0;

    _objc_retain(param_3);

    lVar16 = FUN_00293880(param_3,extraout_x1_03,&local_1b0,auStack_f0,0x10);

    local_21c = uVar6;

    if (lVar16 != 0) {

      bVar3 = 0;

      uVar23 = 0;

      uVar24 = 0;

      lVar21 = *local_1a0;

      do {

        lVar20 = 0;

        do {

          if (*local_1a0 != lVar21) {

            _objc_enumerationMutation(param_3);

          }

          uVar22 = *(undefined8 *)(lStack_1a8 + lVar20 * 8);

          auVar25 = _objc_opt_respondsToSelector(uVar22,"title");

          uVar19 = auVar25._8_8_;

          if ((auVar25._0_8_ & 1) != 0) {

            FUN_00299c80(uVar22,uVar19,"title");

            auVar25 = _objc_retainAutoreleasedReturnValue();

            uVar19 = auVar25._0_8_;

            uVar10 = FUN_00297820(uVar19,auVar25._8_8_,&cf_el);

            uVar11 = FUN_00297820(uVar19,extraout_x1_04,&cf_A);

            iVar9 = FUN_00297820(uVar19,extraout_x1_05,&cf_S);

            if (iVar9 != 0) {

              _objc_getAssociatedObject(uVar22,PTR_LOOP_003e6670);

              lVar17 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              bVar3 = lVar17 != 0 | bVar3;

            }

            _objc_release(uVar19);

            uVar24 = uVar10 | uVar24;

            uVar23 = uVar11 | uVar23;

            uVar19 = extraout_x1_06;

          }

          lVar20 = lVar20 + 1;

        } while (lVar16 != lVar20);

        lVar16 = FUN_00293880(param_3,uVar19,&local_1b0,auStack_f0,0x10);

      } while (lVar16 != 0);

      local_21c = (uVar23 ^ 1) & uVar6;

      bVar4 = (bool)(lVar14 != 0 & (bVar3 ^ 1));

      uVar6 = (uVar24 ^ 1) & uVar6;

    }

    _objc_release(param_3);

    auVar25 = FUN_00299020(param_3);

    uVar19 = auVar25._0_8_;

    uStack_1c8 = 0;

    local_1d0 = 0;

    uStack_1b8 = 0;

    uStack_1c0 = 0;

    lStack_1e8 = 0;

    local_1f0 = 0;

    uStack_1d8 = 0;

    local_1e0 = (long *)0x0;

    auVar25 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdf18,auVar25._8_8_,&local_1f0,

                           auStack_170,0x10);

    if (auVar25._0_8_ == 0) {

      lVar16 = 0;

    }

    else {

      lVar21 = *local_1e0;

      do {

        uVar22 = auVar25._8_8_;

        lVar20 = 0;

        do {

          if (*local_1e0 != lVar21) {

            _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdf18);

            uVar22 = extraout_x1_07;

          }

          lVar16 = *(long *)(lStack_1e8 + lVar20 * 8);

          FUN_002a6080(uVar13,uVar22,lVar16);

          auVar26 = _objc_retainAutoreleasedReturnValue();

          uVar22 = auVar26._8_8_;

          if (auVar26._0_8_ != 0) {

            _objc_retain(lVar16);

            _objc_release(auVar26._0_8_);

            goto LAB_0007fe10;

          }

          lVar20 = lVar20 + 1;

        } while (auVar25._0_8_ != lVar20);

        auVar25 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdf18,uVar22,&local_1f0,

                               auStack_170,0x10);

      } while (auVar25._0_8_ != 0);

      lVar16 = 0;

    }

LAB_0007fe10:

    bVar5 = false;

    if (((uVar6 & uVar7 & 1) != 0) && (lVar15 != 0)) {

      lVar21 = _objc_alloc_init(lVar15);

      bVar5 = lVar21 != 0;

      if (lVar21 != 0) {

        auVar25 = _objc_opt_respondsToSelector(lVar21,"setTitle:");

        uVar22 = auVar25._8_8_;

        if ((auVar25._0_8_ & 1) != 0) {

          FUN_00299ca0(lVar21,uVar22,"setTitle:",&cf_el);

          uVar22 = extraout_x1_08;

        }

        if (lVar16 != 0) {

          FUN_002a45e0(uVar12,uVar22,&cf_ttsCustomIconPath);

          auVar25 = _objc_retainAutoreleasedReturnValue();

          uVar22 = auVar25._8_8_;

          lVar20 = auVar25._0_8_;

          if (lVar20 == 0) {

LAB_0007fee8:

            FUN_002a45e0(uVar12,uVar22,&cf_ttsDefaultIconCode);

            pcVar18 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            pcVar2 = &cf_icons_filled_song;

            if (pcVar18 != (cfstringStruct *)0x0) {

              pcVar2 = pcVar18;

            }

            _objc_retain(pcVar2);

            _objc_release(pcVar18);

            FUN_000c0fb0(pcVar2);

            lVar17 = _objc_retainAutoreleasedReturnValue();

            _objc_release(pcVar2);

            auVar25._8_8_ = extraout_x1_10;

            auVar25._0_8_ = lVar17;

            uVar22 = 0;

            if (lVar17 != 0) goto LAB_0007ff44;

          }

          else {

            FUN_00294240(&_OBJC_CLASS___NSFileManager);

            auVar25 = _objc_retainAutoreleasedReturnValue();

            iVar9 = FUN_00295160(auVar25._0_8_,auVar25._8_8_,lVar20);

            _objc_release(auVar25._0_8_);

            uVar22 = extraout_x1_09;

            if (iVar9 == 0) goto LAB_0007fee8;

            FUN_002965c0(&_OBJC_CLASS___UIImage,extraout_x1_09,lVar20);

            auVar25 = _objc_retainAutoreleasedReturnValue();

            uVar22 = auVar25._8_8_;

            if (auVar25._0_8_ == 0) goto LAB_0007fee8;

LAB_0007ff44:

            uVar22 = auVar25._0_8_;

            FUN_002a24a0(lVar21,auVar25._8_8_,uVar22,lVar16);

          }

          _objc_release(lVar20);

          _objc_release(uVar22);

          uVar22 = extraout_x1_11;

        }

        FUN_00291240(uVar19,uVar22,lVar21);

      }

      _objc_release(lVar21);

    }

    if (((local_21c & uVar8 & 1) != 0) && (lVar15 != 0)) {

      lVar21 = _objc_alloc_init();

      if (lVar21 != 0) {

        auVar25 = _objc_opt_respondsToSelector(lVar21,"setTitle:");

        uVar22 = auVar25._8_8_;

        if ((auVar25._0_8_ & 1) != 0) {

          FUN_00299ca0(lVar21,uVar22,"setTitle:",&cf_A);

          uVar22 = extraout_x1_12;

        }

        if (lVar16 != 0) {

          FUN_002a45e0(uVar12,uVar22,&cf_aiChatCustomIconPath);

          auVar25 = _objc_retainAutoreleasedReturnValue();

          uVar22 = auVar25._8_8_;

          lVar20 = auVar25._0_8_;

          if (lVar20 == 0) {

LAB_00080044:

            FUN_002a45e0(uVar12,uVar22,&cf_aiChatDefaultIconCode);

            pcVar18 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            pcVar2 = &cf_icons_outlined_emoji_animal;

            if (pcVar18 != (cfstringStruct *)0x0) {

              pcVar2 = pcVar18;

            }

            _objc_retain(pcVar2);

            _objc_release(pcVar18);

            FUN_000c0fb0(pcVar2);

            lVar17 = _objc_retainAutoreleasedReturnValue();

            _objc_release(pcVar2);

            auVar26._8_8_ = extraout_x1_14;

            auVar26._0_8_ = lVar17;

            uVar22 = 0;

            if (lVar17 != 0) goto LAB_000800a0;

          }

          else {

            FUN_00294240(&_OBJC_CLASS___NSFileManager);

            auVar25 = _objc_retainAutoreleasedReturnValue();

            iVar9 = FUN_00295160(auVar25._0_8_,auVar25._8_8_,lVar20);

            _objc_release(auVar25._0_8_);

            uVar22 = extraout_x1_13;

            if (iVar9 == 0) goto LAB_00080044;

            FUN_002965c0(&_OBJC_CLASS___UIImage,extraout_x1_13,lVar20);

            auVar26 = _objc_retainAutoreleasedReturnValue();

            uVar22 = auVar26._8_8_;

            if (auVar26._0_8_ == 0) goto LAB_00080044;

LAB_000800a0:

            uVar22 = auVar26._0_8_;

            FUN_002a24a0(lVar21,auVar26._8_8_,uVar22,lVar16);

          }

          _objc_release(lVar20);

          _objc_release(uVar22);

          uVar22 = extraout_x1_15;

        }

        FUN_00291240(uVar19,uVar22,lVar21);

        bVar5 = true;

      }

      _objc_release(lVar21);

    }

    bVar1 = false;

    if (lVar15 != 0) {

      bVar1 = bVar4;

    }

    if ((bVar1) && (lVar15 = _objc_alloc_init(), lVar15 != 0)) {

      auVar25 = _objc_opt_respondsToSelector(lVar15,"setTitle:");

      if ((auVar25._0_8_ & 1) != 0) {

        FUN_00299ca0(lVar15,auVar25._8_8_,"setTitle:",&cf_S);

      }

      if (lVar16 != 0) {

        FUN_000c0fb0(&cf_icons_filled_channels_recommend_group);

        auVar25 = _objc_retainAutoreleasedReturnValue();

        lVar21 = auVar25._0_8_;

        if (lVar21 != 0) {

          FUN_002a24a0(lVar15,auVar25._8_8_,lVar21,lVar16);

        }

        _objc_release(lVar21);

      }

      _objc_setAssociatedObject(lVar15,PTR_LOOP_003e6670,lVar14,1);

      FUN_00291240(uVar19,extraout_x1_16,lVar15);

      _objc_release(lVar15);

    }

    else if (!bVar5) {

      _objc_release(lVar16);

      _objc_release(uVar19);

      _objc_release(uVar13);

      goto LAB_00080370;

    }

    FUN_0029b900(param_1);

    lVar21 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    lVar15 = lVar21;

    if (lVar21 == 0) {

      lVar20 = 0;

    }

    else {

      do {

        auVar25 = _objc_opt_respondsToSelector(lVar15,"messageWrap");

        if ((auVar25._0_8_ & 1) != 0) {

          FUN_002a6080(lVar15,auVar25._8_8_,&cf_messageWrap);

          lVar20 = _objc_retainAutoreleasedReturnValue();

          if (lVar20 == 0) goto LAB_000801fc;

LAB_000802a8:

          lVar17 = DAT_003e7638;

          DAT_003e7638 = lVar20;

          _objc_release(lVar17);

          lVar20 = lVar15;

          break;

        }

LAB_000801fc:

        auVar25 = _objc_opt_respondsToSelector(lVar15,"viewModel");

        uVar22 = auVar25._8_8_;

        if ((auVar25._0_8_ & 1) != 0) {

          FUN_002a6080(lVar15,uVar22,&cf_viewModel);

          auVar25 = _objc_retainAutoreleasedReturnValue();

          uVar22 = auVar25._8_8_;

          lVar20 = auVar25._0_8_;

          if (lVar20 != 0) goto LAB_000802a8;

        }

        FUN_002a6080(lVar15,uVar22,&cf_msgData);

        lVar20 = _objc_retainAutoreleasedReturnValue();

        if (lVar20 != 0) goto LAB_000802a8;

        FUN_00299220(lVar15);

        lVar20 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar15);

        lVar15 = lVar20;

      } while (lVar20 != 0);

    }

    if (DAT_003e7638 == 0) {

      FUN_00294ee0(param_1);

      lVar15 = _objc_retainAutoreleasedReturnValue();

      if (lVar15 != 0) {

        _objc_retain(lVar15);

        lVar17 = DAT_003e7638;

        DAT_003e7638 = lVar15;

        _objc_release(lVar17);

      }

      _objc_release(lVar15);

    }

    (*DAT_003e7648)(param_1,param_2,uVar19);

    _objc_release(lVar20);

    _objc_release(lVar21);

    _objc_release(lVar16);

    _objc_release(uVar19);

    _objc_release(uVar13);

  }

  _objc_release(lVar14);

  _objc_release(uVar12);

LAB_00080398:

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




