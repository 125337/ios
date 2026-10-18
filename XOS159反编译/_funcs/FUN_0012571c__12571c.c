// FUN_0012571c @0x12571c


void FUN_0012571c(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,double param_4,

                 long param_5)



{

  bool bVar1;

  undefined *puVar2;

  bool bVar3;

  bool bVar4;

  bool bVar5;

  uint uVar6;

  int iVar7;

  uint uVar8;

  uint uVar9;

  uint uVar10;

  uint uVar11;

  long lVar12;

  long lVar13;

  ulong uVar14;

  long lVar15;

  long lVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  ulong uVar19;

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

  long lVar20;

  undefined **ppuVar21;

  long lVar22;

  long lVar23;

  undefined8 unaff_x28;

  float fVar24;

  undefined8 uVar25;

  double dVar26;

  double dVar27;

  double dVar28;

  double dVar29;

  double dVar30;

  double dVar31;

  double dVar32;

  double dVar33;

  double dVar34;

  double dVar35;

  double dVar36;

  double dVar37;

  undefined1 auVar38 [16];

  undefined1 auVar39 [16];

  double local_1e8;

  long local_1a8;

  long local_190;

  long local_180;

  undefined8 local_170;

  long lStack_168;

  long *local_160;

  undefined8 uStack_158;

  undefined8 local_150;

  undefined8 uStack_148;

  undefined8 uStack_140;

  undefined8 uStack_138;

  double local_130 [16];

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  FUN_0011a5d0();

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6a40);

  local_180 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6a48);

  local_190 = _objc_retainAutoreleasedReturnValue();

  auVar38 = _objc_opt_respondsToSelector(param_5,"viewModel");

  uVar18 = auVar38._8_8_;

  if ((auVar38._0_8_ & 1) != 0) {

    auVar38 = _objc_opt_respondsToSelector(param_5,"getHeadImageView");

    uVar18 = auVar38._8_8_;

    if ((auVar38._0_8_ & 1) != 0) {

      FUN_002a6280(param_5);

      auVar38 = _objc_retainAutoreleasedReturnValue();

      uVar18 = auVar38._8_8_;

      lVar12 = auVar38._0_8_;

      if (lVar12 == 0) {

        if (local_180 != 0) {

          FUN_0029e8a0(local_180,uVar18,1);

          uVar18 = extraout_x1_00;

        }

        if (local_190 == 0) {

          local_190 = 0;

        }

        else {

          FUN_0029e8a0(local_190,uVar18,1);

        }

      }

      else {

        _objc_retain(param_5);

        _objc_retain(lVar12);

        if (param_5 != 0) {

          uVar6 = FUN_00123948(lVar12);

          dVar37 = 0.0;

          dVar36 = 13.0;

          if (uVar6 == 0) {

            dVar36 = 0.0;

          }

          _objc_getAssociatedObject(param_5,PTR_LOOP_003e6a30);

          lVar13 = _objc_retainAutoreleasedReturnValue();

          if (lVar13 != 0) {

            fVar24 = (float)FUN_00295480(lVar13);

            dVar37 = (double)fVar24;

          }

          dVar31 = 0.001;

          uVar8 = uVar6;

          if (0.001 < ABS(dVar37)) {

            uVar8 = 1;

          }

          if ((uVar8 & 1) != 0) {

            uVar14 = _objc_opt_respondsToSelector(param_5,"getHeadImageView");

            if ((uVar14 & 1) == 0) {

              lVar15 = 0;

            }

            else {

              FUN_002959c0(param_5);

              lVar15 = _objc_retainAutoreleasedReturnValue();

            }

            uStack_148 = 0;

            local_150 = 0;

            uStack_138 = 0;

            uStack_140 = 0;

            lStack_168 = 0;

            local_170 = 0;

            uStack_158 = 0;

            local_160 = (long *)0x0;

            FUN_002a4840(param_5);

            auVar38 = _objc_retainAutoreleasedReturnValue();

            uVar18 = auVar38._0_8_;

            auVar38 = FUN_00293880(uVar18,auVar38._8_8_,&local_170,local_130,0x10);

            if (auVar38._0_8_ != 0) {

              lVar20 = *local_160;

              do {

                uVar17 = auVar38._8_8_;

                lVar23 = 0;

                do {

                  if (*local_160 != lVar20) {

                    _objc_enumerationMutation(uVar18);

                    uVar17 = extraout_x1_01;

                  }

                  lVar22 = *(long *)(lStack_168 + lVar23 * 8);

                  if (lVar22 != lVar15) {

                    auVar39 = FUN_002a4e60(lVar22);

                    uVar17 = auVar39._8_8_;

                    if (auVar39._0_8_ != 0x1352577) {

                      auVar39 = FUN_002a4e60(lVar22);

                      uVar17 = auVar39._8_8_;

                      if (auVar39._0_8_ != 0x1352578) {

                        uVar25 = FUN_00295600(lVar22);

                        dVar29 = dVar31;

                        uVar17 = param_3;

                        dVar34 = param_4;

                        _objc_getAssociatedObject(lVar22,PTR_LOOP_003e6a38);

                        lVar16 = _objc_retainAutoreleasedReturnValue();

                        dVar35 = dVar31;

                        if ((lVar16 != 0) &&

                           (fVar24 = (float)FUN_00295480(lVar16),

                           ABS(dVar31 - (double)fVar24) <= 0.5)) {

                          dVar35 = dVar31 - dVar37;

                        }

                        dVar35 = dVar36 + dVar35;

                        dVar32 = dVar31 - dVar35;

                        dVar31 = dVar29;

                        if (0.5 < ABS(dVar32)) {

                          dVar31 = dVar35;

                          FUN_0029e5e0(uVar25,dVar35,param_3,lVar22);

                          uVar17 = param_3;

                          dVar34 = param_4;

                        }

                        param_4 = dVar34;

                        param_3 = uVar17;

                        puVar2 = PTR_LOOP_003e6a38;

                        if (uVar6 == 0) {

                          uVar17 = 0;

                        }

                        else {

                          FUN_002993a0(dVar35,&_OBJC_CLASS___NSNumber);

                          uVar17 = _objc_retainAutoreleasedReturnValue();

                          unaff_x28 = uVar17;

                        }

                        _objc_setAssociatedObject(lVar22,puVar2,uVar17,1);

                        if (uVar6 != 0) {

                          _objc_release(unaff_x28);

                        }

                        _objc_release(lVar16);

                        uVar17 = extraout_x1_02;

                      }

                    }

                  }

                  lVar23 = lVar23 + 1;

                } while (auVar38._0_8_ != lVar23);

                auVar38 = FUN_00293880(uVar18,uVar17,&local_170,local_130,0x10);

              } while (auVar38._0_8_ != 0);

            }

            _objc_release(uVar18);

            puVar2 = PTR_LOOP_003e6a30;

            if (uVar6 == 0) {

              uVar18 = 0;

            }

            else {

              FUN_002993a0(0x402a000000000000,&_OBJC_CLASS___NSNumber);

              uVar18 = _objc_retainAutoreleasedReturnValue();

            }

            _objc_setAssociatedObject(param_5,puVar2,uVar18,1);

            if (uVar6 != 0) {

              _objc_release(uVar18);

            }

            _objc_release(lVar15);

          }

          _objc_release(lVar13);

        }

        _objc_release(lVar12);

        _objc_release(param_5);

        if ((DAT_003e8321 == '\x01') && ((DAT_003e8322 & 1) != 0)) {

          auVar38 = _objc_opt_respondsToSelector(lVar12,"messageWrap");

          uVar18 = auVar38._8_8_;

          if ((auVar38._0_8_ & 1) == 0) {

LAB_00125ba0:

            if (local_180 != 0) {

              FUN_0029e8a0(local_180,uVar18,1);

              uVar18 = extraout_x1_03;

            }

            if (local_190 == 0) {

              lVar13 = 0;

LAB_001260d0:

              local_190 = 0;

            }

            else {

              FUN_0029e8a0(local_190,uVar18,1);

              lVar13 = 0;

            }

          }

          else {

            FUN_00298ce0(lVar12);

            auVar38 = _objc_retainAutoreleasedReturnValue();

            uVar18 = auVar38._8_8_;

            lVar13 = auVar38._0_8_;

            if (lVar13 == 0) goto LAB_00125ba0;

            uVar14 = FUN_00127bf0(param_5);

            if ((uVar14 & 1) == 0) {

              _objc_retain(lVar12);

              _objc_getAssociatedObject(lVar12,PTR_LOOP_003e6a50);

              lVar15 = _objc_retainAutoreleasedReturnValue();

              if (lVar15 == 0) {

                iVar7 = FUN_00127bf0(lVar12);

                if (iVar7 == 0) {

                  FUN_002a6080(lVar12,extraout_x1_04,&cf_messageWrap);

                  auVar38 = _objc_retainAutoreleasedReturnValue();

                  lVar20 = auVar38._0_8_;

                  if (lVar20 == 0) {

                    _objc_setAssociatedObject

                              (lVar12,PTR_LOOP_003e6a50,

                               &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc50,1);

                    uVar6 = 0;

                  }

                  else {

                    FUN_002a6080(lVar20,auVar38._8_8_,&cf_m_uiMessageType);

                    uVar18 = _objc_retainAutoreleasedReturnValue();

                    lVar23 = FUN_002974a0();

                    _objc_release(uVar18);

                    uVar18 = extraout_x1_05;

                    if (lVar23 == 0) {

                      FUN_002a6080(lVar20,extraout_x1_05,&cf_m_uiMsgType);

                      uVar18 = _objc_retainAutoreleasedReturnValue();

                      lVar23 = FUN_002974a0();

                      _objc_release(uVar18);

                      uVar18 = extraout_x1_06;

                    }

                    FUN_002a6080(lVar20,uVar18,&cf_m_nsContent);

                    uVar18 = _objc_retainAutoreleasedReturnValue();

                    lVar22 = FUN_00297fa0(uVar18);

                    if ((lVar22 == 0) || ((lVar23 != 0 && (lVar23 != 0x31)))) {

                      _objc_setAssociatedObject

                                (lVar12,PTR_LOOP_003e6a50,

                                 &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc50,1);

                      uVar6 = 0;

                    }

                    else {

                      FUN_002984e0(uVar18);

                      auVar38 = _objc_retainAutoreleasedReturnValue();

                      uVar17 = auVar38._0_8_;

                      auVar38 = FUN_00293580(uVar17,auVar38._8_8_,&cf_<type>57<_type>);

                      if ((auVar38._0_8_ & 1) == 0) {

                        auVar38 = FUN_00293580(uVar17,auVar38._8_8_,

                                               &cf_wxpay___c2cbizmessagehandler_hongbao);

                        if ((auVar38._0_8_ & 1) == 0) {

                          auVar38 = FUN_00293580(uVar17,auVar38._8_8_,

                                                 &cf_wxpay___c2cbizmessagehandler_transfer);

                          if ((auVar38._0_8_ & 1) == 0) {

                            iVar7 = FUN_00293580(uVar17,auVar38._8_8_,&cf_wxpay___);

                            uVar25 = extraout_x1_07;

                            if (iVar7 == 0) {

LAB_00125de4:

                              iVar7 = FUN_00293580(uVar17,uVar25,&cf_wcpay);

                              if (iVar7 == 0) {

                                uVar6 = 0;

                                ppuVar21 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc50;

                              }

                              else {

                                auVar38 = FUN_00293580(uVar17,extraout_x1_08,&cf_hongbao);

                                ppuVar21 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc38;

                                if ((auVar38._0_8_ & 1) == 0) {

                                  uVar6 = FUN_00293580(uVar17,auVar38._8_8_,&cf_transfer);

                                  if ((uVar6 & 1) == 0) {

                                    ppuVar21 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc50;

                                  }

                                }

                                else {

                                  uVar6 = 1;

                                }

                              }

                              goto LAB_00125d78;

                            }

                            auVar38 = FUN_00293580(uVar17,extraout_x1_07,&cf_hongbao);

                            if ((auVar38._0_8_ & 1) == 0) {

                              auVar38 = FUN_00293580(uVar17,auVar38._8_8_,&cf_transfer);

                              uVar25 = auVar38._8_8_;

                              if ((auVar38._0_8_ & 1) == 0) goto LAB_00125de4;

                            }

                          }

                        }

                        uVar6 = 1;

                        ppuVar21 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc38;

                      }

                      else {

                        uVar6 = 0;

                        ppuVar21 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc50;

                      }

LAB_00125d78:

                      _objc_setAssociatedObject(lVar12,PTR_LOOP_003e6a50,ppuVar21,1);

                      _objc_release(uVar17);

                    }

                    _objc_release(uVar18);

                    _objc_release(lVar20);

                  }

                }

                else {

                  uVar6 = 1;

                  _objc_setAssociatedObject

                            (lVar12,PTR_LOOP_003e6a50,

                             &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc38,1);

                }

              }

              else {

                iVar7 = FUN_00297460(lVar15);

                uVar6 = (uint)(iVar7 == 1);

              }

              _objc_release(lVar15);

              _objc_release(lVar12);

            }

            else {

              uVar6 = 1;

            }

            if (DAT_003e84b0 != -1) {

              FUN_0028f44c();

            }

            if (DAT_003e84a8 == 0) {

LAB_0012602c:

              uVar14 = _objc_opt_respondsToSelector(lVar12,"isSender");

              if ((uVar14 & 1) == 0) {

LAB_0012604c:

                auVar38 = FUN_00123bd8(lVar13);

                uVar18 = auVar38._8_8_;

                if ((auVar38._0_8_ & 1) != 0) {

                  FUN_002959c0(param_5);

                  auVar38 = _objc_retainAutoreleasedReturnValue();

                  uVar18 = auVar38._8_8_;

                  lVar15 = auVar38._0_8_;

                  if (lVar15 == 0) {

LAB_00126080:

                    if (local_180 != 0) {

                      FUN_0029e8a0(local_180,uVar18,1);

                      uVar18 = extraout_x1_12;

                    }

                    if (local_190 != 0) {

                      FUN_0029e8a0(local_190,uVar18,1);

                      goto LAB_00126a24;

                    }

                  }

                  else {

                    FUN_00295600(lVar15);

                    iVar7 = _CGRectIsEmpty();

                    uVar18 = extraout_x1_11;

                    if (iVar7 != 0) goto LAB_00126080;

                    uVar8 = FUN_00004788(lVar12);

                    uVar9 = FUN_000048dc(lVar12);

                    iVar7 = FUN_00005168(lVar12);

                    if ((iVar7 == 0) || ((uVar9 & uVar8 & 1) != 0)) {

                      FUN_002985c0(lVar13);

                      lVar20 = _objc_retainAutoreleasedReturnValue();

                      FUN_0011ad20();

                      lVar23 = _objc_retainAutoreleasedReturnValue();

                      if ((lVar23 == 0) ||

                         (lVar16 = FUN_00297fa0(lVar23), lVar22 = lVar23, lVar16 == 0)) {

                        FUN_00298680(lVar13);

                        uVar18 = _objc_retainAutoreleasedReturnValue();

                        FUN_0011ad20();

                        lVar22 = _objc_retainAutoreleasedReturnValue();

                        _objc_release(lVar23);

                        _objc_release(uVar18);

                        uVar18 = extraout_x1_16;

                        if (lVar22 != 0) goto LAB_001261ac;

LAB_001262f0:

                        if (local_180 != 0) {

                          FUN_0029e8a0(local_180,uVar18,1);

                          uVar18 = extraout_x1_17;

                        }

                        if (local_190 == 0) {

                          local_190 = 0;

                        }

                        else {

                          FUN_0029e8a0(local_190,uVar18,1);

                        }

                      }

                      else {

LAB_001261ac:

                        auVar38 = FUN_00297fa0(lVar22);

                        uVar18 = auVar38._8_8_;

                        if (auVar38._0_8_ == 0) goto LAB_001262f0;

                        dVar36 = (double)FUN_0018da20();

                        dVar36 = dVar36 + 12.0;

                        if (dVar36 <= 1.0) {

                          dVar36 = 1.0;

                        }

                        FUN_002a4aa0(dVar36,&_OBJC_CLASS___UIFont);

                        uVar18 = _objc_retainAutoreleasedReturnValue();

                        dVar31 = (double)FUN_00298040();

                        uVar14 = DAT_003e83f0;

                        dVar37 = DAT_003e83e8;

                        dVar36 = DAT_003e83e0;

                        dVar35 = -2.0;

                        if ((DAT_003e83f0 & 0xfffffffffffffffe) != 2) {

                          dVar35 = 2.0;

                        }

                        dVar29 = DAT_003e83e0;

                        if (DAT_003e83d1 == '\x01') {

                          FUN_00298640(lVar13);

                          lVar23 = _objc_retainAutoreleasedReturnValue();

                          if ((lVar23 == 0) || (lVar16 = FUN_00297fa0(lVar23), lVar16 == 0)) {

                            _objc_retain(lVar20);

                            _objc_release(lVar23);

                            lVar23 = lVar20;

                          }

                          auVar38 = FUN_00297fa0(lVar23);

                          if ((auVar38._0_8_ == 0) ||

                             (uVar19 = FUN_00295fa0(lVar23,auVar38._8_8_,&cf__chatroom),

                             (uVar19 & 1) != 0)) {

                            _objc_release(lVar23);

                            goto LAB_00126294;

                          }

                          FUN_00122470(lVar23);

                          local_1a8 = _objc_retainAutoreleasedReturnValue();

                          _objc_release(lVar23);

                          if (local_1a8 == 0) goto LAB_00126294;

                          dVar34 = DAT_003e83d8;

                          if (DAT_003e83d8 <= 0.0) {

                            dVar34 = 14.0;

                          }

LAB_001262bc:

                          dVar32 = 14.0;

                          FUN_002a3d80(local_1a8);

                          if (dVar32 <= 0.0) {

                            local_1e8 = 0.0;

                          }

                          else {

                            dVar26 = (double)FUN_002a3d80(local_1a8);

                            FUN_002a3d80(local_1a8);

                            local_1e8 = dVar34 * (dVar26 / dVar32);

                          }

                          bVar1 = true;

                        }

                        else {

LAB_00126294:

                          FUN_00127d18();

                          local_1a8 = _objc_retainAutoreleasedReturnValue();

                          dVar32 = 14.0;

                          dVar34 = DAT_003e83d8;

                          if (DAT_003e83d8 <= 0.0) {

                            dVar34 = 14.0;

                          }

                          if (local_1a8 != 0) goto LAB_001262bc;

                          bVar1 = false;

                          local_1a8 = 0;

                          local_1e8 = 0.0;

                        }

                        FUN_0012d9bc();

                        lVar23 = _objc_retainAutoreleasedReturnValue();

                        if (local_180 == 0) {

                          auVar38 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

                          local_180 = auVar38._0_8_;

                          FUN_002a1c80(local_180,auVar38._8_8_,0x1352577);

                          auVar38._8_8_ = extraout_x1_19;

                          auVar38._0_8_ = lVar23;

                          if (lVar23 == 0) {

                            FUN_00295d00(&_OBJC_CLASS___UIColor);

                            auVar38 = _objc_retainAutoreleasedReturnValue();

                          }

                          FUN_002a1da0(local_180,auVar38._8_8_,auVar38._0_8_);

                          uVar17 = extraout_x1_20;

                          if (lVar23 == 0) {

                            _objc_release(auVar38._0_8_);

                            uVar17 = extraout_x1_21;

                          }

                          FUN_00291380(param_5,uVar17,local_180);

                          _objc_setAssociatedObject(param_5,PTR_LOOP_003e6a40,local_180,1);

                        }

                        else {

                          FUN_002a4880(local_180);

                          lVar16 = _objc_retainAutoreleasedReturnValue();

                          _objc_release();

                          if (lVar16 != param_5) {

                            FUN_00291380(param_5,extraout_x1_18,local_180);

                          }

                        }

                        FUN_002954e0(local_180);

                        auVar38 = _objc_retainAutoreleasedReturnValue();

                        iVar7 = FUN_002977c0(auVar38._0_8_,auVar38._8_8_,uVar18);

                        _objc_release(auVar38._0_8_);

                        FUN_0029e520(local_180,extraout_x1_22,uVar18);

                        _objc_getAssociatedObject(local_180,&DAT_003e84b8);

                        auVar38 = _objc_retainAutoreleasedReturnValue();

                        uVar17 = auVar38._8_8_;

                        if (iVar7 == 0) {

LAB_00126484:

                          FUN_002a1d60(local_180,uVar17,lVar22);

                          FUN_002a3de0(local_180);

                          _objc_setAssociatedObject(local_180,&DAT_003e84b8,lVar22,1);

                          uVar17 = extraout_x1_23;

                        }

                        else {

                          auVar39 = FUN_00297820(lVar22,uVar17,auVar38._0_8_);

                          uVar17 = auVar39._8_8_;

                          if ((auVar39._0_8_ & 1) == 0) goto LAB_00126484;

                        }

                        auVar39._8_8_ = uVar17;

                        auVar39._0_8_ = lVar23;

                        if (lVar23 == 0) {

                          FUN_00295d00(&_OBJC_CLASS___UIColor);

                          auVar39 = _objc_retainAutoreleasedReturnValue();

                        }

                        FUN_002a1da0(local_180,auVar39._8_8_,auVar39._0_8_);

                        uVar17 = extraout_x1_24;

                        if (lVar23 == 0) {

                          _objc_release(auVar39._0_8_);

                          uVar17 = extraout_x1_25;

                        }

                        FUN_0029e8a0(local_180,uVar17,0);

                        FUN_002a4880(lVar15);

                        uVar17 = _objc_retainAutoreleasedReturnValue();

                        FUN_00295600(lVar15);

                        uVar25 = FUN_00293720(uVar17,extraout_x1_26,param_5);

                        dVar26 = param_4;

                        _objc_release(uVar17);

                        FUN_002925a0(param_5);

                        if (((uVar8 | uVar9 ^ 0xffffffff) & 1) == 0) {

                          uVar17 = extraout_x1_27;

                          if (local_180 != 0) {

                            FUN_0029e8a0(local_180,extraout_x1_27,1);

                            uVar17 = extraout_x1_28;

                          }

                          if (local_190 == 0) {

                            local_190 = 0;

                          }

                          else {

                            FUN_0029e8a0(local_190,uVar17,1);

                          }

                        }

                        else {

                          dVar27 = (double)FUN_00191a54(param_5);

                          dVar28 = (double)FUN_001910c8(param_5);

                          dVar29 = (double)_CGRectGetMaxX(uVar25,dVar32,dVar29,param_4);

                          dVar30 = dVar28 + (dVar29 - dVar27) + 8.0;

                          dVar29 = 0.001;

                          dVar33 = dVar30 - DAT_003e83f8;

                          dVar27 = dVar33;

                          if ((ABS(dVar28) < 0.001 & DAT_003e8400) == 0) {

                            dVar27 = dVar30;

                          }

                          uVar10 = FUN_00191b50(lVar12);

                          uVar8 = FUN_00192180(lVar12);

                          uVar11 = FUN_00123948(lVar12);

                          uVar8 = uVar8 & uVar10;

                          uVar6 = uVar6 & uVar10;

                          if (uVar9 == 0) {

                            if (uVar8 == 0) {

                              if ((uVar6 & 1) != 0) {

                                bVar3 = false;

                                bVar4 = true;

                                bVar5 = false;

                                if (dVar26 * 0.4 < dVar32) {

                                  bVar3 = false;

                                  bVar4 = false;

                                  bVar5 = true;

                                  if (!NAN(dVar26)) {

                                    bVar3 = dVar26 < 0.0;

                                    bVar4 = dVar26 == 0.0;

                                    bVar5 = false;

                                  }

                                }

                                dVar28 = 2.0;

                                if (bVar4 || bVar3 != bVar5) {

                                  dVar28 = dVar32 + -2.0;

                                }

                                goto LAB_001267d8;

                              }

                              _objc_getAssociatedObject(lVar15,&DAT_003e84b9);

                              lVar16 = _objc_retainAutoreleasedReturnValue();

                              if (lVar16 == 0) {

                                FUN_00295600(lVar15);

                                FUN_002993a0(dVar33,&_OBJC_CLASS___NSNumber);

                                lVar16 = _objc_retainAutoreleasedReturnValue();

                                _objc_setAssociatedObject(lVar15,&DAT_003e84b9,lVar16,1);

                              }

                              if ((uVar11 & 1) == 0) {

                                uVar17 = FUN_00295600(lVar15);

                                fVar24 = (float)FUN_00295480(lVar16);

                                dVar33 = (double)fVar24;

                                FUN_0029e5e0(uVar17,dVar33,dVar29,param_4,lVar15);

                              }

                              FUN_002a4880(lVar15);

                              uVar17 = _objc_retainAutoreleasedReturnValue();

                              FUN_00295600(lVar15);

                              FUN_00293720(uVar17,extraout_x1_29,param_5);

                              _objc_release(uVar17);

                              dVar28 = 11.0;

                              if (uVar10 == 0) {

                                dVar28 = 0.0;

                              }

                              dVar29 = 13.0;

                              dVar32 = 13.0;

                              if (uVar11 == 0) {

                                dVar32 = 0.0;

                              }

                              bVar3 = false;

                              bVar4 = true;

                              bVar5 = false;

                              if (dVar26 * 0.4 < dVar33) {

                                bVar3 = false;

                                bVar4 = false;

                                bVar5 = true;

                                if (!NAN(dVar26)) {

                                  bVar3 = dVar26 < 0.0;

                                  bVar4 = dVar26 == 0.0;

                                  bVar5 = false;

                                }

                              }

                              dVar30 = -9.0;

                              if (bVar4 || bVar3 != bVar5) {

                                dVar30 = dVar33 + -13.0;

                              }

                              _objc_release(lVar16);

                              dVar28 = dVar28 + dVar30;

                            }

                            else {

                              dVar28 = -2.0;

                            }

                            dVar28 = dVar32 + dVar28;

                          }

                          else {

                            dVar28 = 2.0;

                            if (uVar11 == 0) {

                              dVar28 = -8.0;

                            }

                          }

LAB_001267d8:

                          dVar32 = -13.0;

                          if (-13.0 <= dVar37 + dVar28) {

                            dVar32 = dVar37 + dVar28;

                          }

                          bVar3 = (bool)(bVar1 ^ 1);

                          if (1 < uVar14 - 1) {

                            bVar3 = true;

                          }

                          if (bVar3) {

                            FUN_00295600(local_180);

                            dVar27 = dVar36 + dVar27;

                            dVar36 = dVar35 + dVar27 + dVar29;

                          }

                          else {

                            dVar36 = dVar36 + dVar27;

                            dVar27 = dVar35 + local_1e8 + dVar36;

                          }

                          if (uVar10 != 0) {

                            dVar37 = (double)FUN_0018db40(param_5);

                            dVar32 = dVar32 + dVar37;

                          }

                          FUN_00295600(local_180);

                          dVar37 = (double)(long)(dVar31 + 1.0);

                          if (dVar37 <= 13.0) {

                            dVar37 = 13.0;

                          }

                          dVar31 = dVar32;

                          dVar35 = dVar37;

                          FUN_0029e5e0(dVar27,local_180);

                          if (bVar1) {

                            if (local_190 == 0) {

                              auVar39 = _objc_alloc_init(&_OBJC_CLASS___UIImageView);

                              local_190 = auVar39._0_8_;

                              FUN_002a1c80(local_190,auVar39._8_8_,0x1352578);

                              FUN_0029d6c0(local_190,extraout_x1_33,1);

                              FUN_0029d4a0(local_190,extraout_x1_34,1);

                              FUN_00291380(param_5,extraout_x1_35,local_190);

                              _objc_setAssociatedObject(param_5,PTR_LOOP_003e6a48,local_190,1);

                              uVar17 = extraout_x1_36;

                            }

                            else {

                              FUN_002a4880();

                              lVar16 = _objc_retainAutoreleasedReturnValue();

                              _objc_release();

                              uVar17 = extraout_x1_31;

                              if (lVar16 != param_5) {

                                FUN_00291380(param_5,extraout_x1_31,local_190);

                                uVar17 = extraout_x1_32;

                              }

                            }

                            FUN_0029ec00(local_190,uVar17,local_1a8);

                            FUN_0029e8a0(local_190,extraout_x1_37,0);

                            dVar31 = (dVar37 - dVar34) * 0.5 + dVar32;

                            FUN_0029e5e0(dVar36,dVar31,local_1e8,dVar34,local_190);

                            dVar29 = local_1e8;

                            dVar35 = dVar34;

                          }

                          else if (local_190 == 0) {

                            local_190 = 0;

                          }

                          else {

                            FUN_0029e8a0(local_190,extraout_x1_30,1);

                          }

                          dVar36 = dVar31;

                          if (((((uVar11 & 1) == 0) && (((uVar9 | uVar8 | uVar6) & 1) == 0)) &&

                              ((uVar10 & (uVar8 ^ 1) & (uVar6 ^ 1) & 1) == 0)) &&

                             (uVar14 = FUN_002978a0(lVar15), dVar36 = dVar31, (uVar14 & 1) == 0)) {

                            FUN_002a4880(lVar15);

                            uVar17 = _objc_retainAutoreleasedReturnValue();

                            FUN_00295600(lVar15);

                            FUN_00293720(uVar17,extraout_x1_38,param_5);

                            dVar36 = dVar31;

                            _objc_release(uVar17);

                            if (((dVar26 <= 0.0) || (dVar31 <= dVar26 * 0.4)) &&

                               (1.0 < dVar31 - dVar32)) {

                              _objc_getAssociatedObject(lVar15,&DAT_003e84b9);

                              lVar16 = _objc_retainAutoreleasedReturnValue();

                              if (lVar16 != 0) {

                                uVar17 = FUN_00295600(lVar15);

                                fVar24 = (float)FUN_00295480(lVar16);

                                dVar36 = (double)fVar24 - (dVar31 - dVar32);

                                FUN_0029e5e0(uVar17,dVar36,dVar29,dVar35,lVar15);

                              }

                              _objc_release(lVar16);

                            }

                          }

                          if ((((uVar6 ^ 1 | uVar9 | uVar8) & 1) == 0) &&

                             (uVar14 = FUN_002978a0(lVar15), (uVar14 & 1) == 0)) {

                            local_130[0] = 0.0;

                            iVar7 = FUN_00191bb4(dVar26,lVar12,local_130);

                            if ((iVar7 != 0) &&

                               (FUN_00295600(lVar15), 0.5 < ABS(dVar36 - local_130[0]))) {

                              FUN_0029e5e0(lVar15);

                            }

                          }

                          FUN_0018ee10(param_5);

                        }

                        _objc_release(auVar38._0_8_);

                        _objc_release(lVar23);

                        _objc_release(local_1a8);

                        _objc_release(uVar18);

                      }

                      _objc_release(lVar22);

                      goto LAB_00126a1c;

                    }

                    uVar18 = extraout_x1_14;

                    if (local_180 != 0) {

                      FUN_0029e8a0(local_180,extraout_x1_14,1);

                      uVar18 = extraout_x1_15;

                    }

                    if (local_190 != 0) {

                      FUN_0029e8a0(local_190,uVar18,1);

                      goto LAB_00126a24;

                    }

                  }

                  local_190 = 0;

                  goto LAB_00126a24;

                }

              }

              else {

                auVar38 = FUN_00297a80(lVar12);

                uVar18 = auVar38._8_8_;

                if ((auVar38._0_8_ & 1) == 0) goto LAB_0012604c;

              }

              if (local_180 != 0) {

                FUN_0029e8a0(local_180,uVar18,1);

                uVar18 = extraout_x1_13;

              }

              if (local_190 != 0) {

                FUN_0029e8a0(local_190,uVar18,1);

                goto LAB_00126a2c;

              }

              goto LAB_001260d0;

            }

            auVar38 = _objc_opt_isKindOfClass(lVar12);

            if ((auVar38._0_8_ & 1) == 0) goto LAB_0012602c;

            FUN_002a6080(lVar12,auVar38._8_8_,&cf_parentModel);

            lVar15 = _objc_retainAutoreleasedReturnValue();

            if (lVar15 == 0) {

LAB_00126024:

              _objc_release(lVar15);

              goto LAB_0012602c;

            }

            auVar38 = _objc_opt_respondsToSelector(lVar15,"subViewModels");

            if ((auVar38._0_8_ & 1) == 0) goto LAB_00126024;

            FUN_002a6080(lVar15,auVar38._8_8_,&cf_subViewModels);

            lVar20 = _objc_retainAutoreleasedReturnValue();

            uVar14 = FUN_00293860();

            if (uVar14 < 2) {

LAB_0012601c:

              _objc_release(lVar20);

              goto LAB_00126024;

            }

            FUN_00295440(lVar20);

            lVar23 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar23 == lVar12) goto LAB_0012601c;

            uVar18 = extraout_x1_09;

            if (local_180 != 0) {

              FUN_0029e8a0(local_180,extraout_x1_09,1);

              uVar18 = extraout_x1_10;

            }

            if (local_190 != 0) {

              FUN_0029e8a0(local_190,uVar18,1);

            }

LAB_00126a1c:

            _objc_release(lVar20);

LAB_00126a24:

            _objc_release(lVar15);

          }

LAB_00126a2c:

          _objc_release(lVar13);

        }

      }

      _objc_release(lVar12);

      goto LAB_00126a3c;

    }

  }

  if (local_180 != 0) {

    FUN_0029e8a0(local_180,uVar18,1);

    uVar18 = extraout_x1;

  }

  if (local_190 == 0) {

    local_190 = 0;

  }

  else {

    FUN_0029e8a0(local_190,uVar18,1);

  }

LAB_00126a3c:

  _objc_release(local_190);

  _objc_release(local_180);

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




