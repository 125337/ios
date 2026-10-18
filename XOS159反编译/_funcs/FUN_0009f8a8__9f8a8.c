// FUN_0009f8a8 @0x9f8a8


void FUN_0009f8a8(undefined8 param_1,undefined8 param_2)



{

  bool bVar1;

  uint uVar2;

  uint uVar3;

  uint uVar4;

  int iVar5;

  uint uVar6;

  uint uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  ulong uVar12;

  long lVar13;

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

  long lVar14;

  undefined8 uVar15;

  bool bVar16;

  undefined8 uVar17;

  long lVar18;

  long lVar19;

  undefined1 auVar20 [16];

  undefined1 auVar21 [16];

  long local_218;

  long local_208;

  uint local_200;

  undefined4 local_1fc;

  undefined8 local_1f8;

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

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a6080(param_1,param_2,&cf_m_chatRoomName);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  lVar13 = auVar20._0_8_;

  if (lVar13 == 0) {

    FUN_002a6080(param_1,auVar20._8_8_,&cf_chatContact);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar8 == 0) goto LAB_000a00c4;

    FUN_002986c0(lVar8);

    lVar13 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar8);

    if (lVar13 == 0) goto LAB_000a00c4;

  }

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e6648,lVar13,1);

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e6650,lVar13,1);

  FUN_002a6080(param_1,extraout_x1,&cf_m_tableViewInfo);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  if (lVar8 != 0) {

    auVar20 = _objc_opt_respondsToSelector(lVar8,"getAllSections");

    if ((auVar20._0_8_ & 1) == 0) {

      local_200 = 0;

      uVar7 = 0;

LAB_0009fbcc:

      uVar12 = FUN_000bc9c0();

      bVar16 = false;

      bVar1 = false;

      if ((uVar12 & 1) == 0) goto LAB_0009fbd8;

    }

    else {

      FUN_00299c80(lVar8,auVar20._8_8_,"getAllSections");

      uVar9 = _objc_retainAutoreleasedReturnValue();

      uStack_188 = 0;

      local_190 = 0;

      uStack_178 = 0;

      uStack_180 = 0;

      lStack_1a8 = 0;

      local_1b0 = 0;

      uStack_198 = 0;

      local_1a0 = (long *)0x0;

      _objc_retain();

      local_218 = FUN_00293880(uVar9,extraout_x1_00,&local_1b0,auStack_f0,0x10);

      if (local_218 == 0) {

        _objc_release(uVar9);

        _objc_release(uVar9);

        local_200 = 0;

        uVar7 = 0;

        goto LAB_0009fbcc;

      }

      uVar7 = 0;

      local_200 = 0;

      uVar6 = 0;

      lVar14 = *local_1a0;

      do {

        local_208 = 0;

        do {

          if (*local_1a0 != lVar14) {

            _objc_enumerationMutation(uVar9);

          }

          uVar15 = *(undefined8 *)(lStack_1a8 + local_208 * 8);

          auVar20 = _objc_opt_respondsToSelector(uVar15,"getAllCells");

          uVar10 = auVar20._8_8_;

          if ((auVar20._0_8_ & 1) != 0) {

            FUN_00299c80(uVar15,uVar10,"getAllCells");

            uVar10 = _objc_retainAutoreleasedReturnValue();

            uStack_1c8 = 0;

            local_1d0 = 0;

            uStack_1b8 = 0;

            uStack_1c0 = 0;

            lStack_1e8 = 0;

            local_1f0 = 0;

            uStack_1d8 = 0;

            local_1e0 = (long *)0x0;

            _objc_retain();

            lVar11 = FUN_00293880(uVar10,extraout_x1_01,&local_1f0,auStack_170,0x10);

            if (lVar11 != 0) {

              lVar19 = *local_1e0;

              do {

                lVar18 = 0;

                do {

                  if (*local_1e0 != lVar19) {

                    _objc_enumerationMutation(uVar10);

                  }

                  uVar17 = *(undefined8 *)(lStack_1e8 + lVar18 * 8);

                  auVar20 = _objc_opt_respondsToSelector(uVar17,"userInfo");

                  uVar15 = auVar20._8_8_;

                  if ((auVar20._0_8_ & 1) != 0) {

                    FUN_00299c80(uVar17,uVar15,"userInfo");

                    uVar15 = _objc_retainAutoreleasedReturnValue();

                    uVar17 = _objc_opt_class(&_OBJC_CLASS___NSString);

                    auVar20 = _objc_opt_isKindOfClass(uVar15,uVar17);

                    if ((auVar20._0_8_ & 1) != 0) {

                      uVar2 = FUN_00297820(uVar15,auVar20._8_8_,&cf_AiAutoReplySwitchCell);

                      uVar3 = FUN_00297820(uVar15,extraout_x1_02,&cf_MsgMergeReverseSwitchCell);

                      uVar4 = FUN_00297820(uVar15,extraout_x1_03,&cf_AiCustomPromptSwitchCell);

                      uVar6 = uVar2 | uVar6;

                      local_200 = uVar3 | local_200;

                      uVar7 = uVar4 | uVar7;

                    }

                    _objc_release(uVar15);

                    uVar15 = extraout_x1_04;

                  }

                  lVar18 = lVar18 + 1;

                } while (lVar11 != lVar18);

                lVar11 = FUN_00293880(uVar10,uVar15,&local_1f0,auStack_170,0x10);

              } while (lVar11 != 0);

            }

            _objc_release(uVar10);

            _objc_release(uVar10);

            uVar10 = extraout_x1_05;

          }

          local_208 = local_208 + 1;

        } while (local_208 != local_218);

        local_218 = FUN_00293880(uVar9,uVar10,&local_1b0,auStack_f0,0x10);

      } while (local_218 != 0);

      _objc_release(uVar9);

      _objc_release(uVar9);

      if ((uVar6 & 1) == 0) goto LAB_0009fbcc;

      bVar1 = true;

LAB_0009fbd8:

      bVar16 = bVar1;

      if (((local_200 & 1) != 0) || (iVar5 = FUN_000a89d8(), iVar5 == 0)) goto LAB_000a00b4;

      local_200 = 0;

    }

    lVar14 = _objc_getClass("WCTableViewSectionManager");

    lVar11 = _objc_getClass("WCTableViewCellManager");

    if ((lVar14 != 0) && (lVar11 != 0)) {

      uVar9 = _objc_alloc_init(lVar14);

      local_1f8 = uVar9;

      uVar6 = FUN_000bc9c0();

      if (bVar16 || ((uVar6 ^ 1) & 1) != 0) {

        bVar1 = false;

      }

      else {

        auVar20 = FUN_000bca40(lVar13);

        FUN_002a4980(lVar11,auVar20._8_8_,"aiSwitchChanged:",param_1,&cf_A,auVar20._0_8_);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        if (lVar14 == 0) {

LAB_0009fcd0:

          bVar1 = false;

        }

        else {

          auVar20 = _objc_opt_respondsToSelector(lVar14,"setUserInfo:");

          if ((auVar20._0_8_ & 1) != 0) {

            FUN_00299ca0(lVar14,auVar20._8_8_,"setUserInfo:",&cf_AiAutoReplySwitchCell);

          }

          auVar20 = _objc_opt_respondsToSelector(uVar9,"addCell:");

          if ((auVar20._0_8_ & 1) == 0) goto LAB_0009fcd0;

          FUN_00299ca0(uVar9,auVar20._8_8_,"addCell:",lVar14);

          bVar1 = true;

        }

        _objc_retain(lVar13);

        lVar19 = FUN_00297fa0(lVar13);

        if (lVar19 == 0) {

          uVar10 = 0;

        }

        else {

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          auVar20 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar20._8_8_,&cf_aiNoAt___);

          auVar21 = _objc_retainAutoreleasedReturnValue();

          uVar10 = FUN_002924c0(auVar20._0_8_,auVar21._8_8_,auVar21._0_8_);

          _objc_release(auVar21._0_8_);

          _objc_release(auVar20._0_8_);

        }

        _objc_release(lVar13);

        FUN_002a4980(lVar11,extraout_x1_06,"aiNoAtSwitchChanged:",param_1,&cf_A,uVar10);

        lVar19 = _objc_retainAutoreleasedReturnValue();

        if (lVar19 != 0) {

          auVar20 = _objc_opt_respondsToSelector(uVar9,"addCell:");

          if ((auVar20._0_8_ & 1) != 0) {

            FUN_00299ca0(uVar9,auVar20._8_8_,"addCell:",lVar19);

          }

        }

        if ((uVar7 & 1) == 0) {

          auVar20 = FUN_000bcb24(lVar13);

          FUN_002a4980(lVar11,auVar20._8_8_,"aiCustomPromptSwitchChanged:",param_1,&cf_USrA,

                       auVar20._0_8_);

          lVar18 = _objc_retainAutoreleasedReturnValue();

          if (lVar18 != 0) {

            auVar20 = _objc_opt_respondsToSelector(lVar18,"setUserInfo:");

            if ((auVar20._0_8_ & 1) != 0) {

              FUN_00299ca0(lVar18,auVar20._8_8_,"setUserInfo:",&cf_AiCustomPromptSwitchCell);

            }

            auVar20 = _objc_opt_respondsToSelector(uVar9,"addCell:");

            if ((auVar20._0_8_ & 1) != 0) {

              FUN_00299ca0(uVar9,auVar20._8_8_,"addCell:",lVar18);

            }

          }

          _objc_release(lVar18);

        }

        _objc_release(lVar19);

        _objc_release(lVar14);

      }

      uVar7 = FUN_000a89d8();

      if (((local_200 | uVar7 ^ 0xffffffff) & 1) == 0) {

        auVar20 = FUN_000bcd6c(lVar13);

        FUN_002a4980(lVar11,auVar20._8_8_,"msgMergeReverseChanged:",param_1,&cf_STTv_,auVar20._0_8_)

        ;

        lVar14 = _objc_retainAutoreleasedReturnValue();

        if (lVar14 != 0) {

          auVar20 = _objc_opt_respondsToSelector(lVar14,"setUserInfo:");

          if ((auVar20._0_8_ & 1) != 0) {

            FUN_00299ca0(lVar14,auVar20._8_8_,"setUserInfo:",&cf_MsgMergeReverseSwitchCell);

          }

          auVar20 = _objc_opt_respondsToSelector(uVar9,"addCell:");

          if ((auVar20._0_8_ & 1) != 0) {

            FUN_00299ca0(uVar9,auVar20._8_8_,"addCell:",lVar14);

            bVar1 = true;

          }

        }

        auVar20 = FUN_000bce54(lVar13);

        FUN_002a4980(lVar11,auVar20._8_8_,"msgMergeAvatarAboveChanged:",param_1,&cf_4YPllN,

                     auVar20._0_8_);

        lVar11 = _objc_retainAutoreleasedReturnValue();

        if (lVar11 != 0) {

          auVar20 = _objc_opt_respondsToSelector(lVar11,"setUserInfo:");

          if ((auVar20._0_8_ & 1) != 0) {

            FUN_00299ca0(lVar11,auVar20._8_8_,"setUserInfo:",&cf_MsgMergeAvatarAboveSwitchCell);

          }

          auVar20 = _objc_opt_respondsToSelector(uVar9,"addCell:");

          if ((auVar20._0_8_ & 1) != 0) {

            FUN_00299ca0(uVar9,auVar20._8_8_,"addCell:",lVar11);

            _objc_release(lVar11);

            _objc_release(lVar14);

            goto LAB_0009ffb4;

          }

        }

        _objc_release(lVar11);

        _objc_release(lVar14);

        if (bVar1) goto LAB_0009ffb4;

      }

      else if (bVar1) {

LAB_0009ffb4:

        auVar20 = _objc_opt_respondsToSelector(lVar8,"insertSection:At:");

        if ((auVar20._0_8_ & 1) == 0) {

          auVar20 = _objc_opt_respondsToSelector(lVar8,"addSection:");

          if ((auVar20._0_8_ & 1) != 0) {

            FUN_00299ca0(lVar8,auVar20._8_8_,"addSection:",uVar9);

          }

        }

        else {

          FUN_00298d40(lVar8,auVar20._8_8_,"insertSection:At:");

          auVar20 = _objc_retainAutoreleasedReturnValue();

          FUN_002975a0(&_OBJC_CLASS___NSInvocation,auVar20._8_8_,auVar20._0_8_);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar20._0_8_);

          FUN_002a13a0(uVar9,extraout_x1_07,"insertSection:At:");

          FUN_002a1ce0(uVar9,extraout_x1_08,lVar8);

          FUN_0029cce0(uVar9,extraout_x1_09,&local_1f8,2);

          local_1fc = 1;

          FUN_0029cce0(uVar9,extraout_x1_10,&local_1fc,3);

          FUN_002975c0(uVar9);

          _objc_release(uVar9);

        }

        auVar20 = _objc_opt_respondsToSelector(lVar8,"reloadTableView");

        if ((auVar20._0_8_ & 1) != 0) {

          FUN_00299c80(lVar8,auVar20._8_8_,"reloadTableView");

        }

      }

      _objc_release(local_1f8);

    }

  }

LAB_000a00b4:

  _objc_release(lVar8);

  _objc_release(lVar13);

LAB_000a00c4:

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




