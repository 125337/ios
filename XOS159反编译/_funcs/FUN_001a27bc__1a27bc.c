// FUN_001a27bc @0x1a27bc


void FUN_001a27bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,

                 long param_5,long param_6,ulong param_7,int param_8)



{

  bool bVar1;

  ulong *puVar2;

  ulong *puVar3;

  long *plVar4;

  long lVar5;

  long lVar6;

  undefined *puVar7;

  bool bVar8;

  int iVar9;

  long lVar10;

  long lVar11;

  undefined8 uVar12;

  long lVar13;

  ulong uVar14;

  undefined8 uVar15;

  long lVar16;

  long lVar17;

  long lVar18;

  long lVar19;

  long lVar20;

  long lVar21;

  long lVar22;

  long lVar23;

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

  ulong uVar24;

  long lVar25;

  long lVar26;

  ulong uVar27;

  long lVar28;

  float fVar29;

  double dVar30;

  double dVar31;

  double dVar32;

  double dVar33;

  double dVar34;

  undefined1 auVar35 [16];

  long local_1f0;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 uStack_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 local_180;

  long lStack_178;

  long *local_170;

  undefined8 uStack_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  byte local_131;

  undefined1 auStack_130 [128];

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  dVar32 = param_4;

  _objc_retain();

  _objc_retain(param_6);

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6f38);

  lVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6f40);

  lVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5680(param_5);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  lVar13 = FUN_002a5fc0();

  _objc_release(uVar12);

  iVar9 = (int)param_7;

  puVar3 = &DAT_003e6e70;

  if (iVar9 == 0) {

    puVar3 = &DAT_003e6e80;

  }

  puVar2 = &DAT_003e6e68;

  if (iVar9 == 0) {

    puVar2 = &DAT_003e6e78;

  }

  if (lVar13 != 2) {

    puVar3 = puVar2;

  }

  if ((param_8 == 0) || (uVar27 = *puVar3, uVar27 == 9)) {

    uVar12 = extraout_x1;

    if (lVar10 != 0) {

      FUN_0029e8a0(lVar10,extraout_x1,1);

      uVar12 = extraout_x1_00;

    }

    if (lVar11 != 0) {

      FUN_0029e8a0(lVar11,uVar12,1);

    }

    goto LAB_001a347c;

  }

  FUN_002925a0(param_5);

  dVar30 = DAT_003e6ea0;

  dVar34 = DAT_003e6e98;

  if (iVar9 == 0) {

    dVar34 = (double)_CGRectGetMinX(param_1,param_2,param_3,param_4);

    dVar34 = dVar34 - dVar30;

  }

  else {

    dVar30 = (double)_CGRectGetMaxX(param_1,param_2,param_3,param_4);

    dVar34 = dVar34 + dVar30;

  }

  dVar30 = (double)_CGRectGetMidY(param_1,param_2,param_3);

  local_131 = 0;

  uVar12 = FUN_001a4248(param_5,param_7,&local_131);

  if ((local_131 & 1) == 0) {

    uVar12 = extraout_x1_01;

    if (lVar10 != 0) {

      FUN_0029e8a0(lVar10,extraout_x1_01,1);

      uVar12 = extraout_x1_02;

    }

    if (lVar11 != 0) {

      FUN_0029e8a0(lVar11,uVar12,1);

    }

    goto LAB_001a347c;

  }

  if (iVar9 == 0) {

    _CGRectGetMinX(uVar12,param_2,param_3,param_4);

  }

  else {

    _CGRectGetMaxX(uVar12,param_2,param_3,param_4);

  }

  dVar31 = (double)_CGRectGetMidY(uVar12,param_2,param_3);

  plVar4 = &DAT_003e6e88;

  if (iVar9 == 0) {

    plVar4 = &DAT_003e6e90;

  }

  lVar13 = *plVar4;

  uVar12 = extraout_x1_03;

  if (param_6 != 0) {

    auVar35 = FUN_00004de8();

    uVar12 = auVar35._8_8_;

    if (((lVar13 == 2) && (auVar35._0_8_ - 1U < 2)) || ((lVar13 == 0 && (auVar35._0_8_ == 3)))) {

      _objc_retain(param_5);

      lVar17 = param_5;

      if (param_5 == 0) {

        lVar16 = 0;

      }

      else {

        do {

          uVar12 = _objc_opt_class(&_OBJC_CLASS___UITableViewCell);

          uVar14 = _objc_opt_isKindOfClass(lVar17,uVar12);

          if ((uVar14 & 1) != 0) {

LAB_001a2ae8:

            _objc_retain(lVar17);

            lVar16 = lVar17;

            break;

          }

          FUN_002a4880(lVar17);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          uVar15 = _objc_opt_class(&_OBJC_CLASS___UITableView);

          uVar14 = _objc_opt_isKindOfClass(uVar12,uVar15);

          _objc_release(uVar12);

          if ((uVar14 & 1) != 0) goto LAB_001a2ae8;

          FUN_002a4880(lVar17);

          lVar16 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar17);

          lVar17 = lVar16;

        } while (lVar16 != 0);

      }

      FUN_002a4880(lVar16);

      lVar17 = _objc_retainAutoreleasedReturnValue();

      if (lVar17 == 0) {

        local_1f0 = 0;

      }

      else {

        if (DAT_003e9678 != -1) {

          FUN_0028f7b0();

        }

        if (DAT_003e9670 == 0) {

          local_1f0 = 0;

        }

        else {

          _objc_retain(lVar17);

          lVar19 = lVar17;

          do {

            uVar14 = _objc_opt_isKindOfClass(lVar19,DAT_003e9670);

            if ((uVar14 & 1) != 0) {

              auVar35 = _objc_opt_respondsToSelector(lVar19,"getArrMessageNodeData");

              uVar12 = auVar35._8_8_;

              if ((auVar35._0_8_ & 1) != 0) {

                FUN_00299c80(lVar19,uVar12,"getArrMessageNodeData");

                auVar35 = _objc_retainAutoreleasedReturnValue();

                uVar12 = auVar35._8_8_;

                local_1f0 = auVar35._0_8_;

                if (local_1f0 != 0) goto LAB_001a2bd4;

              }

              FUN_002a6080(lVar19,uVar12,&cf_m_arrMessageNodeData);

              local_1f0 = _objc_retainAutoreleasedReturnValue();

              goto LAB_001a2bd4;

            }

            FUN_00299220(lVar19);

            lVar18 = _objc_retainAutoreleasedReturnValue();

            _objc_release(lVar19);

            lVar19 = lVar18;

          } while (lVar18 != 0);

          local_1f0 = 0;

LAB_001a2bd4:

          _objc_release(lVar19);

        }

        uVar12 = _objc_opt_class(&_OBJC_CLASS___UITableView);

        auVar35 = _objc_opt_isKindOfClass(lVar17,uVar12);

        if ((auVar35._0_8_ & 1) != 0) {

          FUN_00296760(lVar17,auVar35._8_8_,lVar16);

          lVar19 = _objc_retainAutoreleasedReturnValue();

          uVar14 = param_7;

          if (lVar19 != 0) {

            lVar20 = FUN_00299340(lVar17);

            lVar18 = -1;

            if (lVar13 == 2) {

              lVar18 = 1;

            }

            auVar35 = FUN_0029c020(lVar19);

            uVar12 = auVar35._8_8_;

            if (lVar13 != 2) {

              lVar20 = -1;

            }

            lVar23 = auVar35._0_8_ + lVar18;

            if (lVar23 != lVar20) {

              lVar6 = 3;

              if (lVar13 != 2) {

                lVar6 = 1;

              }

              uVar24 = 0x14;

              while( true ) {

                FUN_00296780(&_OBJC_CLASS___NSIndexPath,uVar12,0,lVar23);

                auVar35 = _objc_retainAutoreleasedReturnValue();

                uVar15 = auVar35._8_8_;

                uVar12 = auVar35._0_8_;

                if ((local_1f0 == 0) || (lVar23 < 0)) break;

                auVar35 = FUN_00293860(local_1f0);

                uVar15 = auVar35._8_8_;

                if (auVar35._0_8_ <= lVar23) break;

                FUN_00299500(local_1f0,uVar15,lVar23);

                auVar35 = _objc_retainAutoreleasedReturnValue();

                uVar15 = auVar35._8_8_;

                lVar22 = auVar35._0_8_;

                if (lVar22 == 0) break;

LAB_001a2e50:

                auVar35 = FUN_00004de8(lVar22);

                if (auVar35._0_8_ == lVar6) {

                  FUN_0029ae00(lVar17,auVar35._8_8_,uVar12);

                  FUN_00293720(lVar17,extraout_x1_07,param_5);

                  dVar31 = (double)_CGRectGetMidY();

                }

                _objc_release(lVar22);

                _objc_release(uVar12);

                if (((auVar35._0_8_ != 2) || (lVar23 = lVar23 + lVar18, lVar23 == lVar20)) ||

                   (bVar8 = uVar24 < 2, uVar12 = extraout_x1_08, uVar24 = uVar24 - 1, bVar8))

                goto LAB_001a2f20;

              }

              FUN_00292aa0(lVar17,uVar15,uVar12);

              auVar35 = _objc_retainAutoreleasedReturnValue();

              uVar15 = auVar35._8_8_;

              lVar21 = auVar35._0_8_;

              if (lVar21 != 0) {

                FUN_00293640(lVar21);

                lVar22 = _objc_retainAutoreleasedReturnValue();

                lVar5 = lVar21;

                if (lVar22 != 0) {

                  lVar5 = lVar22;

                }

                _objc_retain();

                _objc_release(lVar22);

                uStack_158 = 0;

                local_160 = 0;

                uStack_148 = 0;

                uStack_150 = 0;

                lStack_178 = 0;

                local_180 = 0;

                uStack_168 = 0;

                local_170 = (long *)0x0;

                FUN_002a4840(lVar5);

                auVar35 = _objc_retainAutoreleasedReturnValue();

                uVar15 = auVar35._0_8_;

                lVar22 = FUN_00293880(uVar15,auVar35._8_8_,&local_180,auStack_130,0x10);

                if (lVar22 != 0) {

                  lVar28 = *local_170;

                  do {

                    lVar25 = 0;

                    do {

                      if (*local_170 != lVar28) {

                        _objc_enumerationMutation(uVar15);

                      }

                      lVar26 = *(long *)(lStack_178 + lVar25 * 8);

                      auVar35 = _objc_opt_respondsToSelector(lVar26,"viewModel");

                      if ((auVar35._0_8_ & 1) != 0) {

                        _objc_retain(lVar26);

                        _objc_release(uVar15);

                        uVar15 = extraout_x1_04;

                        if (lVar26 == 0) goto LAB_001a2df4;

                        goto LAB_001a2e10;

                      }

                      lVar25 = lVar25 + 1;

                    } while (lVar22 != lVar25);

                    lVar22 = FUN_00293880(uVar15,auVar35._8_8_,&local_180,auStack_130,0x10);

                  } while (lVar22 != 0);

                }

                _objc_release(uVar15);

LAB_001a2df4:

                uVar14 = _objc_opt_respondsToSelector(lVar21,"viewModel");

                if ((uVar14 & 1) == 0) {

                  lVar26 = 0;

                  lVar22 = 0;

                }

                else {

                  _objc_retain(lVar21);

                  uVar15 = extraout_x1_05;

                  lVar26 = lVar21;

LAB_001a2e10:

                  FUN_00299c80(lVar26,uVar15,"viewModel");

                  lVar22 = _objc_retainAutoreleasedReturnValue();

                }

                uVar14 = param_7 & 0xffffffff;

                _objc_release(lVar5);

                _objc_release(lVar26);

                _objc_release(lVar21);

                uVar15 = extraout_x1_06;

                if (lVar22 != 0) goto LAB_001a2e50;

              }

              FUN_0029ae00(lVar17,uVar15,uVar12);

              if (0.0 < param_4) {

                FUN_00293720(lVar17,extraout_x1_09,param_5);

                dVar31 = (double)_CGRectGetMidY();

              }

              _objc_release(uVar12);

            }

          }

LAB_001a2f20:

          _objc_release(lVar19);

          param_7 = uVar14;

        }

      }

      _objc_release(local_1f0);

      _objc_release(lVar17);

      _objc_release(lVar16);

      _objc_release(lVar16);

      uVar12 = extraout_x1_10;

    }

  }

  dVar33 = (double)NEON_fminnm(dVar30,dVar31);

  if (dVar30 <= dVar31) {

    dVar30 = dVar31;

  }

  dVar30 = dVar30 - dVar33;

  if (dVar30 < 12.0) {

    if (lVar10 != 0) {

      FUN_0029e8a0(lVar10,uVar12,1);

      uVar12 = extraout_x1_11;

    }

    if (lVar11 != 0) {

      FUN_0029e8a0(lVar11,uVar12,1);

    }

    goto LAB_001a347c;

  }

  if ((dVar31 < -0.5) || (dVar32 + 0.5 < dVar31)) {

    iVar9 = FUN_00292e20(param_5);

    if (iVar9 != 0) {

      FUN_0029d4a0(param_5,extraout_x1_12,0);

    }

    FUN_00297e40(param_5);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    iVar9 = FUN_00298a60();

    _objc_release(uVar12);

    if (iVar9 != 0) {

      FUN_00297e40(param_5);

      auVar35 = _objc_retainAutoreleasedReturnValue();

      FUN_0029f960(auVar35._0_8_,auVar35._8_8_,0);

      _objc_release(auVar35._0_8_);

    }

    auVar35 = _objc_opt_respondsToSelector(param_5,"contentView");

    if ((auVar35._0_8_ & 1) == 0) {

      lVar17 = 0;

    }

    else {

      lVar17 = FUN_00299c80(param_5,auVar35._8_8_,"contentView");

      _objc_retain();

      if (lVar17 != 0) {

        iVar9 = FUN_00292e20(lVar17);

        if (iVar9 != 0) {

          FUN_0029d4a0(lVar17,extraout_x1_13,0);

        }

        FUN_00297e40(lVar17);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        iVar9 = FUN_00298a60();

        _objc_release(uVar12);

        if (iVar9 != 0) {

          FUN_00297e40(lVar17);

          auVar35 = _objc_retainAutoreleasedReturnValue();

          FUN_0029f960(auVar35._0_8_,auVar35._8_8_,0);

          _objc_release(auVar35._0_8_);

        }

      }

    }

    FUN_002a4880(param_5);

    lVar16 = _objc_retainAutoreleasedReturnValue();

    while (lVar16 != 0) {

      uVar12 = _objc_opt_class(&_OBJC_CLASS___UITableView);

      uVar14 = _objc_opt_isKindOfClass(lVar16,uVar12);

      if ((uVar14 & 1) != 0) {

        FUN_002a4840(lVar16);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_00297d80();

        lVar19 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        _objc_release(uVar12);

        if (lVar19 != param_5) {

          FUN_002925e0(lVar16,extraout_x1_14,param_5);

        }

        break;

      }

      FUN_002a4880(lVar16);

      lVar19 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar16);

      lVar16 = lVar19;

    }

    _objc_release(lVar16);

    _objc_release(lVar17);

  }

  dVar32 = dVar34 + -10.0 + 1.5;

  if ((int)param_7 == 0) {

    dVar32 = dVar34 + -1.5;

  }

  _objc_retain(param_5);

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6f38);

  lVar17 = _objc_retainAutoreleasedReturnValue();

  if (lVar17 == 0) {

    auVar35 = _objc_alloc_init(&_OBJC_CLASS___UIView);

    lVar17 = auVar35._0_8_;

    FUN_002a1c80(lVar17,auVar35._8_8_,0x135257e);

    FUN_002a23c0(lVar17,extraout_x1_16,0);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar35 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(lVar17,auVar35._8_8_,auVar35._0_8_);

    _objc_release(auVar35._0_8_);

    FUN_0029d4a0(lVar17,extraout_x1_17,0);

    _objc_setAssociatedObject(param_5,PTR_LOOP_003e6f38,lVar17,1);

    uVar12 = extraout_x1_18;

LAB_001a3250:

    FUN_00291380(param_5,uVar12,lVar17);

  }

  else {

    FUN_002a4880(lVar17);

    lVar16 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar12 = extraout_x1_15;

    if (lVar16 != param_5) goto LAB_001a3250;

  }

  _objc_retain(lVar17);

  _objc_release(lVar17);

  _objc_release(param_5);

  FUN_0029e8a0(lVar17,extraout_x1_19,0);

  uStack_1a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

  local_1b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

  uStack_198 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

  uStack_1a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

  uStack_188 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

  local_190 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

  FUN_002a21c0(lVar17,extraout_x1_20,&local_1b0);

  FUN_0029e5e0(dVar32,dVar33,0x4024000000000000,dVar30,lVar17);

  lVar16 = DAT_003e9538;

  if (DAT_003e9538 == 0) {

    FUN_00295d00(&_OBJC_CLASS___UIColor);

    lVar16 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_retain(DAT_003e9538);

  }

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6f40);

  auVar35 = _objc_retainAutoreleasedReturnValue();

  lVar19 = auVar35._0_8_;

  if (lVar19 != 0) {

    FUN_0029e8a0(lVar19,auVar35._8_8_,1);

  }

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6f48);

  lVar18 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6f50);

  lVar20 = _objc_retainAutoreleasedReturnValue();

  uVar14 = 0x80000000;

  if ((int)param_7 == 0) {

    uVar14 = 0;

  }

  lVar13 = (uVar27 & 0xffffffff | uVar14 | lVar13 << 0x1d) + ((ulong)DAT_003e9540 << 0x20);

  if (lVar18 == 0) {

    bVar8 = false;

    if (lVar20 != 0) goto LAB_001a33a8;

LAB_001a33c8:

    FUN_001a4cc8(lVar17,uVar27,lVar16,param_7);

    puVar7 = PTR_LOOP_003e6f48;

    FUN_002994a0(&_OBJC_CLASS___NSNumber,extraout_x1_21,lVar13);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_5,puVar7,uVar12,1);

    _objc_release(uVar12);

    puVar7 = PTR_LOOP_003e6f50;

    FUN_002993a0(dVar30,&_OBJC_CLASS___NSNumber);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_5,puVar7,uVar12,1);

    _objc_release(uVar12);

  }

  else {

    lVar23 = FUN_002a5a40(lVar18);

    bVar8 = lVar23 == lVar13;

    if (lVar20 == 0) goto LAB_001a33c8;

LAB_001a33a8:

    fVar29 = (float)FUN_00295480(lVar20);

    bVar1 = false;

    if (ABS((double)fVar29 - dVar30) < 2.0) {

      bVar1 = bVar8;

    }

    if (!bVar1) goto LAB_001a33c8;

  }

  _objc_release(lVar20);

  _objc_release(lVar18);

  _objc_release(lVar19);

  _objc_release(lVar16);

  _objc_release(lVar17);

LAB_001a347c:

  _objc_release(lVar11);

  _objc_release(lVar10);

  _objc_release(param_6);

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




