
void FUN_0003a06c(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
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
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 local_180;
  long local_168;
  undefined8 local_160;
  long lStack_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 auStack_110 [128];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_0010c310;
  (*DAT_0013ad78)();
  auVar20 = FUN_0003b980();
  if ((auVar20._0_8_ & 1) == 0) {
    FUN_0003b9e0(param_5);
    auVar20 = _objc_retainAutoreleasedReturnValue();
    lVar10 = auVar20._0_8_;
    if (lVar10 != 0) {
      FUN_000cba80(lVar10,auVar20._8_8_,1);
    }
    if (*(long *)PTR____stack_chk_guard_0010c310 == local_90) {
      _objc_release(lVar10);
      return;
    }
    goto LAB_0003ad38;
  }
  FUN_000d0f40(param_5,auVar20._8_8_,&cf_viewModel);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_opt_respondsToSelector(uVar3,"isSender");
  if ((uVar4 & 1) != 0) {
    uVar4 = _objc_opt_respondsToSelector(uVar3,"messageWrap");
    if ((uVar4 & 1) == 0) {
      local_168 = 0;
    }
    else {
      FUN_000c7ea0(uVar3);
      local_168 = _objc_retainAutoreleasedReturnValue();
    }
    iVar1 = FUN_000c6f20(uVar3);
    if ((local_168 == 0) ||
       (uVar4 = _objc_opt_respondsToSelector(local_168,"m_uiCreateTime"), (uVar4 & 1) == 0)) {
      FUN_0003c604(uVar3);
      local_180 = _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar5 = FUN_000c7bc0(local_168);
      FUN_000c7ac0(local_168);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      FUN_000c7b20(local_168);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      FUN_0003ba04(uVar6,uVar7);
      uVar8 = _objc_retainAutoreleasedReturnValue();
      uVar9 = FUN_0003bb04(iVar1,uVar8,uVar5);
      FUN_0003bcb0(uVar5,iVar1,uVar9);
      local_180 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    FUN_000cfd20(&_OBJC_CLASS___NSUserDefaults);
    auVar20 = _objc_retainAutoreleasedReturnValue();
    uVar5 = FUN_000c6960(auVar20._0_8_,auVar20._8_8_,&cf_com_wechat_enhance_messageTime_position);
    uVar4 = FUN_0003c628(uVar3,uVar5);
    if ((uVar4 & 1) == 0) {
      FUN_0003b9e0(param_5);
      auVar21 = _objc_retainAutoreleasedReturnValue();
      lVar10 = auVar21._0_8_;
      if (lVar10 != 0) {
        FUN_000cba80(lVar10,auVar21._8_8_,1);
      }
      _objc_release(lVar10);
    }
    else {
      FUN_0003b9e0(param_5);
      lVar10 = _objc_retainAutoreleasedReturnValue();
      if (lVar10 != 0) {
        uVar5 = _objc_retain(param_5);
        uVar6 = _objc_retain(lVar10);
        uVar7 = _objc_retain(local_180);
        FUN_000cfd20(&_OBJC_CLASS___NSUserDefaults);
        auVar21 = _objc_retainAutoreleasedReturnValue();
        uVar8 = auVar21._0_8_;
        fVar15 = (float)FUN_000c5780(uVar8,auVar21._8_8_,&cf_com_wechat_enhance_messageTime_fontSize
                                    );
        dVar18 = 7.0;
        if (fVar15 != 0.0) {
          dVar18 = (double)fVar15;
        }
        iVar2 = FUN_000c3380(uVar8,extraout_x1,&cf_com_wechat_enhance_messageTime_boldFont);
        if (iVar2 == 0) {
          FUN_000d02c0(dVar18,&_OBJC_CLASS___UIFont);
          auVar21 = _objc_retainAutoreleasedReturnValue();
        }
        else {
          FUN_000c3360(dVar18);
          auVar21 = _objc_retainAutoreleasedReturnValue();
        }
        FUN_000cb880(uVar6,auVar21._8_8_,auVar21._0_8_);
        _objc_release(auVar21._0_8_);
        FUN_0003b3b4(iVar1);
        auVar21 = _objc_retainAutoreleasedReturnValue();
        FUN_000ce080(uVar6,auVar21._8_8_,auVar21._0_8_);
        _objc_release(auVar21._0_8_);
        FUN_0003b4dc(iVar1);
        auVar21 = _objc_retainAutoreleasedReturnValue();
        FUN_000ca840(uVar6,auVar21._8_8_,auVar21._0_8_);
        _objc_release(auVar21._0_8_);
        fVar15 = (float)FUN_000c5780(uVar8,extraout_x1_00,
                                     &cf_com_wechat_enhance_messageTime_cornerRadius);
        FUN_000c71e0(uVar6);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        dVar18 = 8.0;
        if (fVar15 != 0.0) {
          dVar18 = (double)fVar15;
        }
        FUN_000cb180(dVar18);
        _objc_release(uVar9);
        FUN_000cba80(uVar6,extraout_x1_01,0);
        FUN_000ce040(uVar6,extraout_x1_02,uVar7);
        local_120 = *(undefined8 *)PTR__NSFontAttributeName_0010c220;
        FUN_000c57c0(uVar6);
        auVar21 = _objc_retainAutoreleasedReturnValue();
        local_118 = auVar21._0_8_;
        FUN_000c50c0(&_OBJC_CLASS___NSDictionary,auVar21._8_8_,&local_118,&local_120,1);
        auVar22 = _objc_retainAutoreleasedReturnValue();
        FUN_000c35c0(0x4055800000000000,0x7fefffffffffffff,uVar7,auVar22._8_8_,1,auVar22._0_8_,0);
        _objc_release(auVar22._0_8_);
        _objc_release(auVar21._0_8_);
        dVar19 = (double)NEON_fminnm(param_3 + 4.0,0x4056800000000000);
        dVar18 = 30.0;
        if (30.0 <= dVar19) {
          dVar18 = dVar19;
        }
        param_4 = param_4 + 4.0;
        FUN_000cb900(0,0,dVar18,param_4,uVar6);
        lVar11 = FUN_000c6960(uVar8,extraout_x1_03,&cf_com_wechat_enhance_messageTime_position);
        uVar5 = _objc_retain(uVar5);
        auVar21 = _objc_retain(uVar6);
        uVar9 = auVar21._8_8_;
        uVar6 = auVar21._0_8_;
        if (lVar11 < 4) {
          if (lVar11 == 0) {
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            lStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            local_150 = (long *)0x0;
            FUN_000d0160(uVar5);
            auVar21 = _objc_retainAutoreleasedReturnValue();
            uVar9 = auVar21._0_8_;
            lVar11 = FUN_000c4560(uVar9,auVar21._8_8_,&local_160,auStack_110,0x10);
            if (lVar11 != 0) {
              lVar13 = *local_150;
              do {
                lVar12 = 0;
                do {
                  if (*local_150 != lVar13) {
                    _objc_enumerationMutation(uVar9);
                  }
                  uVar14 = *(undefined8 *)(lStack_158 + lVar12 * 8);
                  _objc_opt_class(uVar14);
                  _NSStringFromClass();
                  auVar21 = _objc_retainAutoreleasedReturnValue();
                  uVar4 = FUN_000c6cc0(auVar21._0_8_,auVar21._8_8_,&cf_MMHeadImageView);
                  _objc_release(auVar21._0_8_);
                  if ((uVar4 & 1) != 0) {
                    lVar11 = _objc_retain(uVar14);
                    _objc_release(uVar9);
                    uVar9 = extraout_x1_08;
                    if (lVar11 == 0) goto LAB_0003a908;
                    FUN_000c58c0(lVar11);
                    dVar19 = (double)_CGRectGetMidX();
                    FUN_000c58c0(lVar11);
                    dVar18 = (double)_CGRectGetMinY();
                    FUN_000c35e0(uVar6);
                    goto LAB_0003abe8;
                  }
                  lVar12 = lVar12 + 1;
                } while (lVar11 != lVar12);
                lVar11 = FUN_000c4560(uVar9,extraout_x1_04,&local_160,auStack_110,0x10);
              } while (lVar11 != 0);
            }
            _objc_release(uVar9);
            uVar9 = extraout_x1_05;
LAB_0003a908:
            FUN_000d0f40(uVar5,uVar9,&cf_m_contentView);
            lVar11 = _objc_retainAutoreleasedReturnValue();
            if (lVar11 != 0) {
              if (iVar1 == 0) {
                FUN_000c58c0(lVar11);
                dVar19 = (double)_CGRectGetMaxX();
                FUN_000c35e0(uVar6);
                dVar17 = 0.5;
              }
              else {
                FUN_000c58c0(lVar11);
                dVar19 = (double)_CGRectGetMinX();
                FUN_000c35e0(uVar6);
                dVar17 = -0.5;
              }
              dVar19 = dVar19 + dVar18 * dVar17;
              FUN_000c58c0(lVar11);
              dVar18 = (double)_CGRectGetMaxY();
              FUN_000c35e0(uVar6);
              goto LAB_0003abe8;
            }
          }
          else if (lVar11 == 1) {
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            lStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            local_150 = (long *)0x0;
            FUN_000d0160(uVar5);
            auVar21 = _objc_retainAutoreleasedReturnValue();
            uVar9 = auVar21._0_8_;
            lVar11 = FUN_000c4560(uVar9,auVar21._8_8_,&local_160,auStack_110,0x10);
            if (lVar11 != 0) {
              lVar13 = *local_150;
              do {
                lVar12 = 0;
                do {
                  if (*local_150 != lVar13) {
                    _objc_enumerationMutation(uVar9);
                  }
                  uVar14 = *(undefined8 *)(lStack_158 + lVar12 * 8);
                  _objc_opt_class(uVar14);
                  _NSStringFromClass();
                  auVar21 = _objc_retainAutoreleasedReturnValue();
                  uVar4 = FUN_000c6cc0(auVar21._0_8_,auVar21._8_8_,&cf_MMHeadImageView);
                  _objc_release(auVar21._0_8_);
                  if ((uVar4 & 1) != 0) {
                    lVar11 = _objc_retain(uVar14);
                    _objc_release(uVar9);
                    uVar9 = extraout_x1_09;
                    if (lVar11 == 0) goto LAB_0003a994;
                    FUN_000c58c0(lVar11);
                    dVar19 = (double)_CGRectGetMidX();
                    FUN_000c58c0(lVar11);
                    dVar18 = (double)_CGRectGetMaxY();
                    FUN_000c35e0(uVar6);
                    goto LAB_0003ab64;
                  }
                  lVar12 = lVar12 + 1;
                } while (lVar11 != lVar12);
                lVar11 = FUN_000c4560(uVar9,extraout_x1_06,&local_160,auStack_110,0x10);
              } while (lVar11 != 0);
            }
            _objc_release(uVar9);
            uVar9 = extraout_x1_07;
LAB_0003a994:
            FUN_000d0f40(uVar5,uVar9,&cf_m_contentView);
            lVar11 = _objc_retainAutoreleasedReturnValue();
            if (lVar11 != 0) {
              if (iVar1 == 0) {
                FUN_000c58c0(lVar11);
                dVar19 = (double)_CGRectGetMaxX();
                FUN_000c35e0(uVar6);
                dVar17 = 0.5;
              }
              else {
                FUN_000c58c0(lVar11);
                dVar19 = (double)_CGRectGetMinX();
                FUN_000c35e0(uVar6);
                dVar17 = -0.5;
              }
              dVar19 = dVar19 + dVar18 * dVar17;
              FUN_000c58c0(lVar11);
              dVar18 = (double)_CGRectGetMaxY();
              FUN_000c35e0(uVar6);
              goto LAB_0003abe8;
            }
          }
          else {
            if (lVar11 != 3) goto LAB_0003a71c;
            FUN_000d0f40(uVar5,uVar9,&cf_m_contentView);
            lVar11 = _objc_retainAutoreleasedReturnValue();
            if (lVar11 != 0) {
              if (iVar1 == 0) {
                FUN_000c58c0(lVar11);
                dVar19 = (double)_CGRectGetMaxX();
                FUN_000c35e0(uVar6);
                dVar17 = -0.5;
              }
              else {
                FUN_000c58c0(lVar11);
                dVar19 = (double)_CGRectGetMinX();
                FUN_000c35e0(uVar6);
                dVar17 = 0.5;
              }
              dVar19 = dVar19 + dVar18 * dVar17;
              FUN_000c58c0(lVar11);
              dVar18 = (double)_CGRectGetMaxY();
              FUN_000c35e0(uVar6);
              goto LAB_0003ab64;
            }
          }
LAB_0003a9dc:
          dVar18 = 0.0;
          dVar19 = 0.0;
        }
        else {
          if (lVar11 < 6) {
            if (lVar11 == 4) {
              FUN_000d0f40(uVar5,uVar9,&cf_m_contentView);
              lVar11 = _objc_retainAutoreleasedReturnValue();
              if (lVar11 != 0) {
                if (iVar1 == 0) {
                  FUN_000c58c0(lVar11);
                  dVar19 = (double)_CGRectGetMinX();
                  FUN_000c35e0(uVar6);
                  dVar17 = 0.5;
                }
                else {
                  FUN_000c58c0(lVar11);
                  dVar19 = (double)_CGRectGetMaxX();
                  FUN_000c35e0(uVar6);
                  dVar17 = -0.5;
                }
                dVar19 = dVar19 + dVar18 * dVar17;
                FUN_000c58c0(lVar11);
                dVar18 = (double)_CGRectGetMaxY();
                FUN_000c35e0(uVar6);
LAB_0003ab64:
                dVar17 = 0.5;
                goto LAB_0003abec;
              }
            }
            else {
              if (lVar11 != 5) goto LAB_0003a71c;
              FUN_000d0f40(uVar5,uVar9,&cf_m_contentView);
              lVar11 = _objc_retainAutoreleasedReturnValue();
              if (lVar11 != 0) {
                if (iVar1 == 0) {
                  FUN_000c58c0(lVar11);
                  dVar19 = (double)_CGRectGetMaxX();
                  FUN_000c35e0(uVar6);
                  dVar17 = -0.5;
                }
                else {
                  FUN_000c58c0(lVar11);
                  dVar19 = (double)_CGRectGetMinX();
                  FUN_000c35e0(uVar6);
                  dVar17 = 0.5;
                }
                dVar19 = dVar19 + dVar18 * dVar17;
                FUN_000c58c0(lVar11);
                dVar18 = (double)_CGRectGetMinY();
                FUN_000c35e0(uVar6);
                goto LAB_0003abe8;
              }
            }
            goto LAB_0003a9dc;
          }
          if (lVar11 == 6) {
            FUN_000d0f40(uVar5,uVar9,&cf_m_contentView);
            lVar11 = _objc_retainAutoreleasedReturnValue();
            if (lVar11 == 0) goto LAB_0003a9dc;
            if (iVar1 == 0) {
              FUN_000c58c0(lVar11);
              dVar19 = (double)_CGRectGetMinX();
              FUN_000c35e0(uVar6);
              dVar17 = 0.5;
            }
            else {
              FUN_000c58c0(lVar11);
              dVar19 = (double)_CGRectGetMaxX();
              FUN_000c35e0(uVar6);
              dVar17 = -0.5;
            }
            dVar19 = dVar19 + dVar18 * dVar17;
            FUN_000c58c0(lVar11);
            dVar18 = (double)_CGRectGetMinY();
            FUN_000c35e0(uVar6);
          }
          else if (lVar11 == 7) {
            FUN_000d0f40(uVar5,uVar9,&cf_m_contentView);
            lVar11 = _objc_retainAutoreleasedReturnValue();
            if (lVar11 == 0) goto LAB_0003a9dc;
            if (iVar1 == 0) {
              FUN_000c58c0(lVar11);
              dVar19 = (double)_CGRectGetMaxX();
              FUN_000c35e0(uVar6);
              dVar17 = 0.5;
            }
            else {
              FUN_000c58c0(lVar11);
              dVar19 = (double)_CGRectGetMinX();
              FUN_000c35e0(uVar6);
              dVar17 = -0.5;
            }
            dVar19 = dVar19 + dVar18 * dVar17;
            FUN_000c58c0(lVar11);
            dVar18 = (double)_CGRectGetMaxY();
            FUN_000c35e0(uVar6);
          }
          else {
LAB_0003a71c:
            FUN_000d0f40(uVar5,uVar9,&cf_m_contentView);
            lVar11 = _objc_retainAutoreleasedReturnValue();
            if (lVar11 == 0) goto LAB_0003a9dc;
            if (iVar1 == 0) {
              FUN_000c58c0(lVar11);
              dVar19 = (double)_CGRectGetMaxX();
              FUN_000c35e0(uVar6);
              dVar17 = 0.5;
            }
            else {
              FUN_000c58c0(lVar11);
              dVar19 = (double)_CGRectGetMinX();
              FUN_000c35e0(uVar6);
              dVar17 = -0.5;
            }
            dVar19 = dVar19 + dVar18 * dVar17;
            FUN_000c58c0(lVar11);
            dVar18 = (double)_CGRectGetMaxY();
            FUN_000c35e0(uVar6);
          }
LAB_0003abe8:
          dVar17 = -0.5;
LAB_0003abec:
          dVar18 = dVar18 + param_4 * dVar17;
        }
        _objc_release(lVar11);
        _objc_release(uVar6);
        _objc_release(uVar5);
        FUN_000cae00(dVar19,dVar18,uVar6);
        fVar15 = (float)FUN_000c5780(uVar8,extraout_x1_10,&cf_com_wechat_enhance_messageTime_offsetX
                                    );
        fVar16 = (float)FUN_000c5780(uVar8,extraout_x1_11,&cf_com_wechat_enhance_messageTime_offsetY
                                    );
        dVar17 = (double)FUN_000c3a60(uVar6);
        FUN_000c3a60(uVar6);
        dVar19 = (double)fVar15;
        if (iVar1 == 0) {
          dVar19 = -(double)fVar15;
        }
        FUN_000cae00(dVar19 + dVar17,dVar18 - (double)fVar16,uVar6);
        auVar21 = FUN_000c6be0(uVar6,extraout_x1_12,uVar5);
        uVar9 = auVar21._8_8_;
        if ((auVar21._0_8_ & 1) == 0) {
          FUN_000c2940(uVar5,uVar9,uVar6);
          uVar9 = extraout_x1_13;
        }
        FUN_000c3600(uVar5,uVar9,uVar6);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      _objc_release(lVar10);
    }
    _objc_release(auVar20._0_8_);
    _objc_release(local_180);
    _objc_release(local_168);
  }
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_0010c310 == local_90) {
    return;
  }
LAB_0003ad38:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

