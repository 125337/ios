// FUN_0010c338 @0x10c338


void FUN_0010c338(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 long param_5,long param_6)



{

  undefined8 *puVar1;

  undefined *puVar2;

  bool bVar3;

  byte bVar4;

  int iVar5;

  uint uVar6;

  int iVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  ulong uVar11;

  long lVar12;

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

  undefined8 uVar16;

  double dVar17;

  double dVar18;

  double dVar19;

  double dVar20;

  double dVar21;

  double dVar22;

  undefined1 auVar23 [16];

  undefined8 local_e0;

  long local_c8;

  double local_c0;

  undefined8 uStack_b8;

  double local_b0;

  double dStack_a8;

  

  _objc_retain();

  _objc_retain(param_6);

  if ((param_5 == 0) ||

     ((DAT_003e8128 != 4 && ((param_6 == 0 || (FUN_00295600(param_6), param_3 <= 0.0))))))

  goto LAB_0010d4d8;

  puVar2 = PTR_LOOP_003e68f8;

  uVar8 = _objc_opt_class(&_OBJC_CLASS___UILabel);

  FUN_0010bf34(param_5,param_6,puVar2,0x15b31,uVar8);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  puVar2 = PTR_LOOP_003e6900;

  uVar8 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

  FUN_0010bf34(param_5,param_6,puVar2,0x15b32,uVar8);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  uVar8 = auVar23._8_8_;

  local_c8 = auVar23._0_8_;

  if (DAT_003e8128 == 0) {

    if (lVar9 != 0) {

      FUN_0029e8a0(lVar9,uVar8,1);

      uVar8 = extraout_x1;

    }

    if (local_c8 == 0) {

      local_c8 = 0;

    }

    else {

      FUN_0029e8a0(local_c8,uVar8,1);

    }

  }

  else {

    FUN_002a6080(param_5,uVar8,&cf_viewModel);

    auVar23 = _objc_retainAutoreleasedReturnValue();

    uVar8 = auVar23._8_8_;

    lVar10 = auVar23._0_8_;

    if (lVar10 != 0) {

      if (DAT_003e8128 == 4) {

        _objc_retain(lVar10);

        uVar11 = FUN_00004f4c(lVar10);

        if ((uVar11 & 1) == 0) {

          _objc_release(lVar10);

          uVar8 = extraout_x1_00;

          goto LAB_0010c5d0;

        }

        _objc_retain(lVar10);

        auVar23 = _objc_opt_respondsToSelector(lVar10,"parentModel");

        lVar14 = lVar10;

        if ((auVar23._0_8_ & 1) != 0) {

          FUN_002a6080(lVar10,auVar23._8_8_,&cf_parentModel);

          lVar12 = _objc_retainAutoreleasedReturnValue();

          if ((lVar12 != 0) &&

             (uVar11 = _objc_opt_respondsToSelector(lVar12,"isSender"), (uVar11 & 1) != 0)) {

            _objc_opt_class(lVar10);

            _NSStringFromClass();

            auVar23 = _objc_retainAutoreleasedReturnValue();

            iVar5 = FUN_00293580(auVar23._0_8_,auVar23._8_8_,&cf_TextMessageSubViewModel);

            _objc_release(auVar23._0_8_);

            if (iVar5 != 0) {

              _objc_retain(lVar12);

              _objc_release(lVar10);

              lVar14 = lVar12;

            }

          }

          _objc_release(lVar12);

        }

        auVar23 = _objc_opt_respondsToSelector(lVar14,"isSender");

        if ((auVar23._0_8_ & 1) == 0) {

          uVar8 = 0;

        }

        else {

          FUN_002a6080(lVar14,auVar23._8_8_,&cf_isSender);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          uVar8 = FUN_002924e0();

          _objc_release(uVar13);

        }

        uVar11 = FUN_00192218(uVar8);

        _objc_release(lVar14);

        _objc_release(lVar10);

        uVar8 = extraout_x1_01;

        if ((uVar11 & 1) != 0) goto LAB_0010c5d0;

        if (lVar9 != 0) {

          FUN_0029e8a0(lVar9,extraout_x1_01,1);

          uVar8 = extraout_x1_06;

        }

        if (local_c8 != 0) {

          FUN_0029e8a0(local_c8,uVar8,1);

          goto LAB_0010d4c4;

        }

      }

      else {

LAB_0010c5d0:

        if (DAT_003e8168 == '\x01') {

          FUN_002a6080(lVar10,uVar8,&cf_messageWrap);

          lVar12 = _objc_retainAutoreleasedReturnValue();

          if (lVar12 == 0) {

LAB_0010c634:

            _objc_getAssociatedObject(lVar10,PTR_LOOP_003e6860);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            lVar14 = FUN_002a5a40();

            _objc_release(uVar8);

          }

          else {

            _objc_getAssociatedObject(lVar12,PTR_LOOP_003e6860);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            lVar14 = FUN_002a5a40();

            _objc_release(uVar8);

            if (lVar14 == 0) goto LAB_0010c634;

          }

          _objc_release(lVar12);

          uVar8 = extraout_x1_02;

        }

        else {

          lVar14 = 0;

        }

        bVar4 = lVar14 == 0 || lVar14 == 3;

        if ((((DAT_003e8153 & 1) == 0) && (lVar14 == 0 || lVar14 == 3)) && ((DAT_003e8169 & 1) != 0)

           ) {

          _objc_getAssociatedObject(lVar10,PTR_LOOP_003e5cc0);

          lVar14 = _objc_retainAutoreleasedReturnValue();

          if (lVar14 == 0) {

            bVar4 = 1;

          }

          else {

            bVar4 = FUN_002924e0(lVar14);

          }

          _objc_release(lVar14);

          uVar8 = extraout_x1_03;

        }

        if (DAT_003e8128 == 4) {

          FUN_0010b9c4(param_5);

          lVar14 = _objc_retainAutoreleasedReturnValue();

          bVar4 = lVar14 != 0;

          _objc_release();

          uVar8 = extraout_x1_04;

        }

        if (((DAT_003e8153 & 1) != 0) || ((bVar4 & 1) != 0)) {

          FUN_002a6080(lVar10,uVar8,&cf_isSender);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          iVar5 = FUN_002924e0();

          _objc_release(uVar8);

          FUN_0010da24(iVar5);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          if (lVar9 == 0) {

            if (DAT_003e8128 == 4) {

              auVar23 = _objc_alloc_init(&objc::class_t::XZYPinnedTimeLabel);

            }

            else {

              auVar23 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

            }

            lVar9 = auVar23._0_8_;

            FUN_002a1c80(lVar9,auVar23._8_8_,0x15b31);

            FUN_002a1d80(lVar9,extraout_x1_07,2);

            FUN_00291380(param_5,extraout_x1_08,lVar9);

            _objc_setAssociatedObject(param_5,PTR_LOOP_003e68f8,lVar9,1);

          }

          FUN_002a4aa0(DAT_003e68f0,&_OBJC_CLASS___UIFont);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          FUN_0029e520(lVar9,auVar23._8_8_,auVar23._0_8_);

          _objc_release(auVar23._0_8_);

          FUN_002a1da0(lVar9,extraout_x1_09,uVar8);

          uVar13 = extraout_x1_10;

          if (local_c8 == 0) {

            auVar23 = _objc_alloc_init(&_OBJC_CLASS___UIImageView);

            local_c8 = auVar23._0_8_;

            FUN_002a1c80(local_c8,auVar23._8_8_,0x15b32);

            FUN_0029d6c0(local_c8,extraout_x1_11,1);

            FUN_00291380(param_5,extraout_x1_12,local_c8);

            _objc_setAssociatedObject(param_5,PTR_LOOP_003e6900,local_c8,1);

            uVar13 = extraout_x1_13;

          }

          FUN_002a1f40(local_c8,uVar13,uVar8);

          FUN_002a6080(lVar10,extraout_x1_14,&cf_messageWrap);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          lVar14 = auVar23._0_8_;

          if (lVar14 == 0) {

            FUN_0029e8a0(lVar9,auVar23._8_8_,1);

            FUN_0029e8a0(local_c8,extraout_x1_17,1);

          }

          else {

            FUN_002a6080(lVar14,auVar23._8_8_,&cf_m_uiCreateTime);

            uVar13 = _objc_retainAutoreleasedReturnValue();

            uVar6 = FUN_002a5a00();

            _objc_release(uVar13);

            if (uVar6 == 0) {

              FUN_0029e8a0(lVar9,extraout_x1_15,1);

              FUN_0029e8a0(local_c8,extraout_x1_18,1);

            }

            else {

              FUN_00294180((double)uVar6,&_OBJC_CLASS___NSDate);

              uVar13 = _objc_retainAutoreleasedReturnValue();

              FUN_0010dce4();

              auVar23 = _objc_retainAutoreleasedReturnValue();

              uVar15 = auVar23._0_8_;

              if (DAT_003e8151 == '\x01') {

                puVar1 = &DAT_003e80e8;

                if (iVar5 == 0) {

                  puVar1 = &DAT_003e80f0;

                }

                uVar16 = *puVar1;

                _objc_retain(uVar16);

                auVar23 = FUN_00297fa0(uVar16);

                local_e0 = uVar15;

                if (auVar23._0_8_ != 0) {

                  FUN_002a44a0(uVar15,auVar23._8_8_,uVar16);

                  local_e0 = _objc_retainAutoreleasedReturnValue();

                  _objc_release(uVar15);

                }

                _objc_release(uVar16);

                auVar23._8_8_ = extraout_x1_16;

                auVar23._0_8_ = local_e0;

              }

              local_e0 = auVar23._0_8_;

              FUN_002a1d60(lVar9,auVar23._8_8_,local_e0);

              FUN_002a3de0(lVar9);

              dVar18 = DAT_003e68f0;

              if (DAT_003e8128 == 4) {

                uStack_b8 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8);

                local_c0 = *(double *)PTR__CGRectZero_00388bf0;

                dStack_a8 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

                local_b0 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

                dVar20 = 0.0;

LAB_0010ca7c:

                FUN_002925a0(param_6);

                dVar21 = 0.0;

                dVar17 = param_3;

              }

              else {

                dVar20 = (double)FUN_0010dd64(param_5,param_6);

                uStack_b8 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8);

                local_c0 = *(double *)PTR__CGRectZero_00388bf0;

                dStack_a8 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

                local_b0 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

                if ((DAT_003e8128 == 4) ||

                   (iVar7 = FUN_0010deb4(param_5,param_6,&local_c0), dVar21 = local_c0, iVar7 == 0))

                goto LAB_0010ca7c;

                param_3 = local_b0;

                param_4 = dStack_a8;

                dVar17 = (double)_CGRectGetMaxX(local_c0,uStack_b8,local_b0,dStack_a8);

              }

              dVar19 = (dVar18 * 12.0) / 9.0;

              if (DAT_003e8128 == 1) {

                FUN_002925a0(param_6);

                dVar22 = param_4;

                FUN_002925a0(lVar9);

                dVar20 = dVar20 + (((param_4 - dVar22) + -8.0) - DAT_003e8138);

                if (iVar5 == 0) {

                  if (DAT_003e811a == '\0') {

LAB_0010cf68:

                    bVar3 = false;

                  }

                  else {

                    auVar23 = FUN_00297fa0(DAT_003e80e0);

                    if (auVar23._0_8_ == 0) goto LAB_0010cf68;

                    FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar23._8_8_,DAT_003e80e0);

                    auVar23 = _objc_retainAutoreleasedReturnValue();

                    lVar12 = auVar23._0_8_;

                    bVar3 = lVar12 != 0;

                    if (lVar12 != 0) {

                      FUN_00296620(lVar12,auVar23._8_8_,2);

                      auVar23 = _objc_retainAutoreleasedReturnValue();

                      FUN_0029ec00(local_c8,auVar23._8_8_,auVar23._0_8_);

                      _objc_release(auVar23._0_8_);

                    }

                    _objc_release(lVar12);

                  }

                  FUN_002925a0(lVar9);

                  dVar21 = dVar17 + 5.0 + DAT_003e8130;

                  if (bVar3 == false) {

                    FUN_002925a0(lVar9);

                    FUN_002925a0(lVar9);

                    FUN_0029e5e0(dVar21,dVar20,param_3,lVar9);

                    uVar15 = extraout_x1_26;

                  }

                  else {

                    FUN_002925a0(lVar9);

                    FUN_002925a0(lVar9);

                    FUN_0029e5e0(dVar21,dVar20,param_3,lVar9);

                    dVar21 = (double)FUN_00295600(lVar9);

                    FUN_002925a0(lVar9);

                    FUN_0029e5e0(dVar21 + param_3 + 3.0,dVar20 + (dVar22 - dVar18) * 0.5,dVar19,

                                 dVar18,local_c8);

                    uVar15 = extraout_x1_24;

                  }

                  FUN_0029e8a0(local_c8,uVar15,bVar3 ^ 1);

                  goto LAB_0010d450;

                }

                if (DAT_003e811a == '\0') {

LAB_0010cebc:

                  bVar3 = false;

                }

                else {

                  auVar23 = FUN_00297fa0(DAT_003e80d8);

                  if (auVar23._0_8_ == 0) goto LAB_0010cebc;

                  FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar23._8_8_,DAT_003e80d8);

                  auVar23 = _objc_retainAutoreleasedReturnValue();

                  lVar12 = auVar23._0_8_;

                  bVar3 = lVar12 != 0;

                  if (lVar12 != 0) {

                    FUN_00296620(lVar12,auVar23._8_8_,2);

                    auVar23 = _objc_retainAutoreleasedReturnValue();

                    FUN_0029ec00(local_c8,auVar23._8_8_,auVar23._0_8_);

                    _objc_release(auVar23._0_8_);

                  }

                  _objc_release(lVar12);

                }

                FUN_002925a0(lVar9);

                dVar21 = dVar21 + -5.0 + DAT_003e8130;

                if (bVar3 == false) {

                  FUN_002925a0(lVar9);

                  dVar18 = param_3;

                  FUN_002925a0(lVar9);

                  FUN_002925a0(lVar9);

                  FUN_0029e5e0(dVar21 - param_3,dVar20,dVar18,lVar9);

                  uVar15 = extraout_x1_25;

                }

                else {

                  FUN_002925a0(lVar9);

                  dVar17 = param_3;

                  FUN_002925a0(lVar9);

                  FUN_002925a0(lVar9);

                  FUN_0029e5e0(((dVar21 - param_3) - dVar19) + -3.0,dVar20,dVar17,lVar9);

                  dVar21 = (double)FUN_00295600(lVar9);

                  FUN_002925a0(lVar9);

                  FUN_0029e5e0(dVar21 + dVar17 + 3.0,dVar20 + (dVar22 - dVar18) * 0.5,dVar19,dVar18,

                               local_c8);

                  uVar15 = extraout_x1_23;

                }

                FUN_0029e8a0(local_c8,uVar15,bVar3 ^ 1);

LAB_0010d450:

                FUN_0010e498(param_5,param_6,lVar9,local_c8);

                uVar15 = extraout_x1_35;

              }

              else {

                if (DAT_003e8128 != 4) {

                  if ((DAT_003e8128 & 0xfffffffffffffffe) == 2) {

                    FUN_002925a0(param_6);

                    dVar20 = dVar20 + ((param_4 + 5.0) - DAT_003e8138) + -5.0;

                    if (iVar5 == 0) {

                      if (DAT_003e811a == '\0') {

LAB_0010d1a0:

                        bVar3 = false;

                      }

                      else {

                        auVar23 = FUN_00297fa0(DAT_003e80e0);

                        if (auVar23._0_8_ == 0) goto LAB_0010d1a0;

                        FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar23._8_8_,DAT_003e80e0);

                        auVar23 = _objc_retainAutoreleasedReturnValue();

                        lVar12 = auVar23._0_8_;

                        bVar3 = lVar12 != 0;

                        if (lVar12 != 0) {

                          FUN_00296620(lVar12,auVar23._8_8_,2);

                          auVar23 = _objc_retainAutoreleasedReturnValue();

                          FUN_0029ec00(local_c8,auVar23._8_8_,auVar23._0_8_);

                          _objc_release(auVar23._0_8_);

                        }

                        _objc_release(lVar12);

                      }

                      FUN_002925a0(lVar9);

                      dVar22 = dVar20 + (param_4 - dVar18) * 0.5;

                      if (DAT_003e8128 == 2) {

                        dVar21 = dVar21 + 5.0 + DAT_003e8130;

                        if (bVar3) {

                          FUN_002925a0(lVar9);

                          FUN_002925a0(lVar9);

                          FUN_0029e5e0(dVar21,dVar20,param_3,lVar9);

                          dVar20 = (double)FUN_00295600(lVar9);

                          FUN_002925a0(lVar9);

                          FUN_0029e5e0(dVar20 + param_3 + 3.0,dVar22,dVar19,dVar18,local_c8);

                          uVar15 = extraout_x1_28;

                          goto LAB_0010d33c;

                        }

                        FUN_002925a0(lVar9);

                        FUN_002925a0(lVar9);

                        FUN_0029e5e0(dVar21,dVar20,param_3,lVar9);

                        uVar15 = extraout_x1_32;

LAB_0010d440:

                        uVar16 = 1;

                      }

                      else {

                        if (!bVar3) {

                          FUN_002925a0(lVar9);

                          dVar18 = DAT_003e8130;

                          dVar21 = param_3;

                          FUN_002925a0(lVar9);

                          FUN_002925a0(lVar9);

                          FUN_0029e5e0((dVar17 - param_3) + -5.0 + dVar18,dVar20,dVar21,lVar9);

                          uVar15 = extraout_x1_34;

                          goto LAB_0010d440;

                        }

                        FUN_0029e5e0((dVar17 - dVar19) + -5.0 + DAT_003e8130,dVar22,dVar19,dVar18,

                                     local_c8);

                        dVar21 = (double)FUN_00295600(local_c8);

                        FUN_002925a0(lVar9);

                        dVar18 = dVar19;

                        FUN_002925a0(lVar9);

                        FUN_002925a0(lVar9);

                        FUN_0029e5e0((dVar21 - dVar19) + -3.0,dVar20,dVar18,lVar9);

                        uVar15 = extraout_x1_30;

LAB_0010d33c:

                        uVar16 = 0;

                      }

                      FUN_0029e8a0(local_c8,uVar15,uVar16);

                    }

                    else {

                      if (DAT_003e811a == '\0') {

LAB_0010d0f4:

                        bVar3 = false;

                      }

                      else {

                        auVar23 = FUN_00297fa0(DAT_003e80d8);

                        if (auVar23._0_8_ == 0) goto LAB_0010d0f4;

                        FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar23._8_8_,DAT_003e80d8);

                        auVar23 = _objc_retainAutoreleasedReturnValue();

                        lVar12 = auVar23._0_8_;

                        bVar3 = lVar12 != 0;

                        if (lVar12 != 0) {

                          FUN_00296620(lVar12,auVar23._8_8_,2);

                          auVar23 = _objc_retainAutoreleasedReturnValue();

                          FUN_0029ec00(local_c8,auVar23._8_8_,auVar23._0_8_);

                          _objc_release(auVar23._0_8_);

                        }

                        _objc_release(lVar12);

                      }

                      FUN_002925a0(lVar9);

                      dVar22 = dVar20 + (param_4 - dVar18) * 0.5;

                      if (DAT_003e8128 == 2) {

                        if (bVar3) {

                          FUN_0029e5e0((dVar17 - dVar19) + -5.0 + DAT_003e8130,dVar22,dVar19,dVar18,

                                       local_c8);

                          dVar21 = (double)FUN_00295600(local_c8);

                          FUN_002925a0(lVar9);

                          dVar18 = dVar19;

                          FUN_002925a0(lVar9);

                          FUN_002925a0(lVar9);

                          FUN_0029e5e0((dVar21 - dVar19) + -3.0,dVar20,dVar18,lVar9);

                          uVar15 = extraout_x1_27;

                          goto LAB_0010d2b8;

                        }

                        FUN_002925a0(lVar9);

                        dVar18 = DAT_003e8130;

                        dVar21 = param_3;

                        FUN_002925a0(lVar9);

                        FUN_002925a0(lVar9);

                        FUN_0029e5e0((dVar17 - param_3) + -5.0 + dVar18,dVar20,dVar21,lVar9);

                        uVar15 = extraout_x1_31;

LAB_0010d3e4:

                        uVar16 = 1;

                      }

                      else {

                        dVar21 = dVar21 + 5.0 + DAT_003e8130;

                        if (!bVar3) {

                          FUN_002925a0(lVar9);

                          FUN_002925a0(lVar9);

                          FUN_0029e5e0(dVar21,dVar20,param_3,lVar9);

                          uVar15 = extraout_x1_33;

                          goto LAB_0010d3e4;

                        }

                        FUN_002925a0(lVar9);

                        FUN_002925a0(lVar9);

                        FUN_0029e5e0(dVar21,dVar20,param_3,lVar9);

                        dVar20 = (double)FUN_00295600(lVar9);

                        FUN_002925a0(lVar9);

                        FUN_0029e5e0(dVar20 + param_3 + 3.0,dVar22,dVar19,dVar18,local_c8);

                        uVar15 = extraout_x1_29;

LAB_0010d2b8:

                        uVar16 = 0;

                      }

                      FUN_0029e8a0(local_c8,uVar15,uVar16);

                    }

                  }

                  else {

                    dVar21 = DAT_003e8130 + 15.0;

                    dVar20 = DAT_003e8138 + 10.0;

                    puVar1 = &DAT_003e80d8;

                    if (iVar5 == 0) {

                      puVar1 = &DAT_003e80e0;

                    }

                    uVar15 = *puVar1;

                    _objc_retain();

                    if (DAT_003e811a == '\x01') {

                      auVar23 = FUN_00297fa0(uVar15);

                      if (auVar23._0_8_ == 0) goto LAB_0010ce40;

                      FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar23._8_8_,uVar15);

                      auVar23 = _objc_retainAutoreleasedReturnValue();

                      lVar12 = auVar23._0_8_;

                      if (lVar12 == 0) goto LAB_0010ce40;

                      FUN_00296620(lVar12,auVar23._8_8_,2);

                      auVar23 = _objc_retainAutoreleasedReturnValue();

                      FUN_0029ec00(local_c8,auVar23._8_8_,auVar23._0_8_);

                      _objc_release(auVar23._0_8_);

                      _objc_release(lVar12);

                      FUN_002925a0(param_6);

                      dVar17 = param_4;

                      FUN_002925a0(lVar9);

                      dVar22 = dVar17;

                      FUN_002925a0(lVar9);

                      FUN_002925a0(param_6);

                      dVar20 = (param_4 - dVar17) - dVar20;

                      FUN_0029e5e0((param_3 - dVar19) - dVar21,dVar20 + (dVar22 - dVar18) * 0.5,

                                   dVar19,dVar18,local_c8);

                      dVar21 = (double)FUN_00295600(local_c8);

                      FUN_002925a0(lVar9);

                      dVar18 = dVar19;

                      FUN_002925a0(lVar9);

                      FUN_002925a0(lVar9);

                      FUN_0029e5e0((dVar21 - dVar19) + -3.0,dVar20,dVar18,lVar9);

                      FUN_0029e8a0(local_c8,extraout_x1_21,0);

                    }

                    else {

LAB_0010ce40:

                      FUN_002925a0(param_6);

                      dVar18 = param_3;

                      FUN_002925a0(lVar9);

                      dVar17 = dVar18;

                      FUN_002925a0(param_6);

                      dVar19 = param_4;

                      FUN_002925a0(lVar9);

                      FUN_002925a0(lVar9);

                      FUN_002925a0(lVar9);

                      FUN_0029e5e0((param_3 - dVar18) - dVar21,(param_4 - dVar19) - dVar20,dVar17,

                                   lVar9);

                      FUN_0029e8a0(local_c8,extraout_x1_22,1);

                    }

                    _objc_release(uVar15);

                  }

                  goto LAB_0010d450;

                }

                auVar23 = FUN_0010e024(dVar19,dVar18,param_5,lVar9,local_c8,iVar5);

                uVar15 = auVar23._8_8_;

                if ((auVar23._0_8_ & 1) == 0) {

                  FUN_0029e8a0(lVar9,uVar15,1);

                  FUN_0029e8a0(local_c8,extraout_x1_19,1);

                  uVar15 = extraout_x1_20;

                }

              }

              if (DAT_003e8128 == 4) {

                FUN_0010b9c4(param_5);

                lVar12 = _objc_retainAutoreleasedReturnValue();

                _objc_release();

                uVar15 = extraout_x1_36;

                if (lVar12 != 0) goto LAB_0010d490;

                uVar16 = 1;

                FUN_0029e8a0(lVar9,extraout_x1_36,1);

                lVar12 = local_c8;

                uVar15 = extraout_x1_37;

              }

              else {

LAB_0010d490:

                uVar16 = 0;

                lVar12 = lVar9;

              }

              FUN_0029e8a0(lVar12,uVar15,uVar16);

              _objc_release(local_e0);

              _objc_release(uVar13);

            }

          }

          _objc_release(lVar14);

          _objc_release(uVar8);

          goto LAB_0010d4c4;

        }

        if (lVar9 != 0) {

          FUN_0029e8a0(lVar9,uVar8,1);

          uVar8 = extraout_x1_05;

        }

        if (local_c8 != 0) {

          FUN_0029e8a0(local_c8,uVar8,1);

          goto LAB_0010d4c4;

        }

      }

      local_c8 = 0;

    }

LAB_0010d4c4:

    _objc_release(lVar10);

  }

  _objc_release(local_c8);

  _objc_release(lVar9);

LAB_0010d4d8:

  _objc_release(param_6);

  _objc_release(param_5);

  return;

}




