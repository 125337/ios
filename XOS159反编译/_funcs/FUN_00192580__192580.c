// FUN_00192580 @0x192580


/* WARNING: Type propagation algorithm not settling */



void FUN_00192580(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 long param_5)



{

  uint uVar1;

  undefined *puVar2;

  long *plVar3;

  double *pdVar4;

  bool bVar5;

  uint uVar6;

  uint uVar7;

  uint uVar8;

  int iVar9;

  uint uVar10;

  ulong uVar11;

  long lVar12;

  undefined8 uVar13;

  long lVar14;

  long lVar15;

  undefined8 uVar16;

  long lVar17;

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

  long lVar18;

  long lVar19;

  long lVar20;

  float fVar21;

  float fVar22;

  double dVar23;

  double dVar24;

  double dVar25;

  double dVar26;

  double dVar27;

  double dVar28;

  double dVar29;

  double dVar30;

  double dVar31;

  double dVar32;

  double dVar33;

  undefined1 auVar34 [16];

  double local_2c8;

  uint local_2ac;

  double local_2a0;

  double local_288;

  double local_280;

  long local_278;

  double local_270;

  long local_268;

  uint local_25c;

  uint local_258;

  uint local_254;

  long local_250;

  long local_248;

  long local_240;

  double local_238 [2];

  long lStack_228;

  long *local_220;

  undefined8 uStack_218;

  undefined8 local_210;

  undefined8 uStack_208;

  undefined8 uStack_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined1 auStack_1b0 [128];

  undefined1 auStack_130 [128];

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  (*DAT_003e95e8)();

  FUN_0018da3c();

  FUN_001a0888(param_5,0);

  if ((DAT_003e95c8 != '\x01') ||

     (uVar11 = _objc_opt_respondsToSelector(param_5,"viewModel"), (uVar11 & 1) == 0))

  goto LAB_001934f8;

  local_248 = param_5;

  FUN_002a6280(param_5);

  local_250 = _objc_retainAutoreleasedReturnValue();

  lVar12 = local_248;

  if (local_250 != 0) {

    if (DAT_003e95c8 == '\x01') {

      uVar11 = FUN_00191434(local_250);

      lVar12 = local_248;

      _objc_retain(local_248);

      if (lVar12 != 0) {

        if ((uVar11 & 1) == 0) goto LAB_00192664;

        iVar9 = 1;

LAB_0019268c:

        FUN_0011a8ec(local_248);

        lVar12 = _objc_retainAutoreleasedReturnValue();

        if (lVar12 != 0) {

          FUN_001a37cc(lVar12,iVar9,0);

        }

        puVar2 = PTR____kCFBooleanTrue_00388320;

        if (iVar9 == 0) {

          puVar2 = (undefined *)0x0;

        }

        _objc_setAssociatedObject(local_248,PTR_LOOP_003e6fe0,puVar2,1);

        _objc_release(lVar12);

      }

    }

    else {

      _objc_retain(local_248);

      if (lVar12 != 0) {

LAB_00192664:

        _objc_getAssociatedObject(local_248,PTR_LOOP_003e6fe0);

        lVar12 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar12 != 0) {

          iVar9 = 0;

          goto LAB_0019268c;

        }

      }

    }

    lVar12 = local_248;

    _objc_release(local_248);

    uVar11 = _objc_opt_respondsToSelector(lVar12,"getHeadImageView");

    if ((uVar11 & 1) != 0) {

      FUN_002959c0(local_248);

      lVar12 = _objc_retainAutoreleasedReturnValue();

      if (lVar12 != 0) {

        local_240 = lVar12;

        FUN_002925a0();

        if ((1.0 < param_4) && (0.5 < ABS(param_4 - DAT_003e6ec0))) {

          DAT_003e6ec0 = param_4;

          FUN_001aa998(local_248);

        }

        lVar12 = local_250;

        uVar6 = FUN_00191330(local_250);

        local_25c = FUN_00191434(lVar12);

        uVar7 = FUN_002978a0(local_240);

        _objc_getAssociatedObject(local_248,PTR_LOOP_003e6fc0);

        lVar12 = _objc_retainAutoreleasedReturnValue();

        if (lVar12 == 0) {

          uVar8 = 0;

        }

        else {

          uVar8 = FUN_002924e0(lVar12);

        }

        if (((local_25c | uVar8) & 1) != 0) {

          if (local_25c != 0) {

            FUN_001a0888(local_248,1);

          }

          lVar14 = local_250;

          uVar8 = FUN_00191d84(local_250);

          FUN_001a029c(lVar14,uVar6);

          _objc_retain(lVar14);

          uVar11 = _objc_opt_respondsToSelector(lVar14,"isShowChatRoomDisplayName");

          if ((uVar11 & 1) == 0) {

            local_2ac = 1;

          }

          else {

            local_2ac = _objc_msgSend(local_250,"isShowChatRoomDisplayName");

          }

          lVar14 = local_250;

          _objc_release(local_250);

          lVar15 = local_248;

          dVar30 = DAT_003e6ec0;

          if (local_25c == 0) {

            _objc_setAssociatedObject(local_248,PTR_LOOP_003e6eb0,0,1);

            _objc_setAssociatedObject(lVar15,PTR_LOOP_003e6eb8,0,1);

            local_270 = 0.0;

            local_2c8 = 46.0;

            dVar33 = 0.0;

          }

          else {

            dVar25 = 0.0;

            if (local_2ac == 0) {

              dVar25 = 13.0;

            }

            dVar33 = 13.0;

            if (uVar6 == 0 && uVar8 == 0) {

              dVar33 = dVar25;

            }

            local_2c8 = (double)FUN_0019156c(local_248,local_240,uVar6,lVar14);

            puVar2 = PTR_LOOP_003e6eb0;

            bVar5 = uVar6 == 0;

            dVar25 = DAT_003e9638;

            if (bVar5) {

              dVar25 = DAT_003e9630;

            }

            param_4 = -2.0;

            if (bVar5) {

              param_4 = 2.0;

            }

            param_3 = dVar25 - local_2c8;

            if (bVar5) {

              param_3 = -(dVar25 - local_2c8);

            }

            param_3 = param_4 + param_3;

            dVar26 = DAT_003e9638;

            if (bVar5) {

              dVar26 = -dVar25;

            }

            if (uVar7 == 0) {

              dVar26 = param_3;

            }

            local_270 = param_3;

            FUN_002993a0(dVar26,&_OBJC_CLASS___NSNumber);

            uVar13 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(local_248,puVar2,uVar13,1);

            _objc_release(uVar13);

            puVar2 = PTR_LOOP_003e6eb8;

            FUN_002993a0(local_270,&_OBJC_CLASS___NSNumber);

            uVar13 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(local_248,puVar2,uVar13,1);

            dVar33 = dVar33 + dVar30;

            _objc_release(uVar13);

          }

          _objc_getAssociatedObject(local_248,PTR_LOOP_003e6fc8);

          lVar14 = _objc_retainAutoreleasedReturnValue();

          if ((lVar14 == 0) || (iVar9 = FUN_002a5a00(lVar14), iVar9 != DAT_003e9540)) {

            _objc_setAssociatedObject(local_248,PTR_LOOP_003e6fd0,0,1);

            uStack_1c8 = 0;

            local_1d0 = 0;

            uStack_1b8 = 0;

            uStack_1c0 = 0;

            lStack_1e8 = 0;

            local_1f0 = 0;

            uStack_1d8 = 0;

            local_1e0 = (long *)0x0;

            FUN_002a4840(local_248);

            auVar34 = _objc_retainAutoreleasedReturnValue();

            uVar13 = auVar34._0_8_;

            lVar15 = FUN_00293880(uVar13,auVar34._8_8_,&local_1f0,auStack_130,0x10);

            if (lVar15 != 0) {

              lVar18 = *local_1e0;

              do {

                lVar19 = 0;

                do {

                  if (*local_1e0 != lVar18) {

                    _objc_enumerationMutation(uVar13);

                  }

                  _objc_setAssociatedObject

                            (*(undefined8 *)(lStack_1e8 + lVar19 * 8),PTR_LOOP_003e6fd8,0,1);

                  lVar19 = lVar19 + 1;

                } while (lVar15 != lVar19);

                lVar15 = FUN_00293880(uVar13,extraout_x1,&local_1f0,auStack_130,0x10);

              } while (lVar15 != 0);

            }

            _objc_release(uVar13);

            puVar2 = PTR_LOOP_003e6fc8;

            FUN_00299460(&_OBJC_CLASS___NSNumber,extraout_x1_00,DAT_003e9540);

            uVar13 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(local_248,puVar2,uVar13,1);

            _objc_release(uVar13);

          }

          plVar3 = &DAT_003e95b0;

          if (uVar6 == 0) {

            plVar3 = &DAT_003e95b8;

          }

          uVar10 = 0;

          if (*plVar3 == 1) {

            uVar10 = local_25c;

          }

          FUN_002925a0(local_248);

          uVar1 = 0;

          if (DAT_003e95d0 != 0) {

            uVar1 = uVar10;

          }

          dVar30 = param_4;

          local_254 = uVar10;

          if (uVar1 == 1) {

            auVar34 = _objc_opt_isKindOfClass(local_250);

            if ((auVar34._0_8_ & 1) != 0) {

              FUN_002a6080(local_250,auVar34._8_8_,&cf_parentModel);

              lVar15 = _objc_retainAutoreleasedReturnValue();

              if (lVar15 != 0) {

                auVar34 = _objc_opt_respondsToSelector(lVar15,"subViewModels");

                if ((auVar34._0_8_ & 1) != 0) {

                  FUN_002a6080(lVar15,auVar34._8_8_,&cf_subViewModels);

                  uVar13 = _objc_retainAutoreleasedReturnValue();

                  uVar11 = FUN_00293860();

                  if (1 < uVar11) {

                    FUN_00295440(uVar13);

                    lVar18 = _objc_retainAutoreleasedReturnValue();

                    bVar5 = lVar18 == local_250;

                    _objc_release();

                    if (bVar5) {

                      iVar9 = FUN_00292e20(local_248);

                      if (iVar9 != 0) {

                        FUN_0029d4a0(local_248,extraout_x1_01,0);

                      }

                      FUN_00297e40(local_248);

                      uVar16 = _objc_retainAutoreleasedReturnValue();

                      iVar9 = FUN_00298a60();

                      _objc_release(uVar16);

                      if (iVar9 != 0) {

                        FUN_00297e40(local_248);

                        auVar34 = _objc_retainAutoreleasedReturnValue();

                        FUN_0029f960(auVar34._0_8_,auVar34._8_8_,0);

                        _objc_release(auVar34._0_8_);

                      }

                      auVar34 = _objc_opt_respondsToSelector(local_248,"contentView");

                      if ((auVar34._0_8_ & 1) == 0) {

                        lVar18 = 0;

                      }

                      else {

                        lVar18 = FUN_00299c80(local_248,auVar34._8_8_,"contentView");

                        _objc_retain();

                        if (lVar18 != 0) {

                          iVar9 = FUN_00292e20(lVar18);

                          if (iVar9 != 0) {

                            FUN_0029d4a0(lVar18,extraout_x1_02,0);

                          }

                          FUN_00297e40(lVar18);

                          uVar16 = _objc_retainAutoreleasedReturnValue();

                          iVar9 = FUN_00298a60();

                          _objc_release(uVar16);

                          if (iVar9 != 0) {

                            FUN_00297e40(lVar18);

                            auVar34 = _objc_retainAutoreleasedReturnValue();

                            FUN_0029f960(auVar34._0_8_,auVar34._8_8_,0);

                            _objc_release(auVar34._0_8_);

                          }

                        }

                      }

                      _objc_release(lVar18);

                    }

                  }

                  _objc_release(uVar13);

                }

              }

              _objc_release(lVar15);

              uVar10 = local_254;

            }

          }

          dVar25 = 0.0;

          local_2a0 = 0.0;

          if (0.0 <= 4.0 - (double)DAT_003e9598) {

            local_2a0 = 4.0 - (double)DAT_003e9598;

          }

          local_280 = dVar33;

          if (uVar10 != 0) {

            dVar25 = param_4;

            if (DAT_003e95d0 != 0) {

              auVar34 = _objc_opt_isKindOfClass(local_250);

              if ((auVar34._0_8_ & 1) != 0) {

                FUN_002a6080(local_250,auVar34._8_8_,&cf_parentModel);

                lVar15 = _objc_retainAutoreleasedReturnValue();

                if (((lVar15 != 0) &&

                    (uVar11 = _objc_opt_respondsToSelector(lVar15,"rowHeight"), (uVar11 & 1) != 0))

                   && (dVar25 = (double)_objc_msgSend(lVar15,"rowHeight"), dVar25 <= param_4)) {

                  dVar25 = param_4;

                }

                _objc_release(lVar15);

              }

            }

            param_3 = 4.0;

            dVar26 = 4.0;

            if (uVar8 == 0) {

              dVar26 = 3.0;

            }

            dVar30 = (double)DAT_003e9590;

            dVar25 = ((dVar25 - DAT_003e6ec0) + -4.0 + -2.0) - (dVar26 + dVar30);

            local_2a0 = 4.0;

            if (4.0 <= dVar25) {

              local_2a0 = dVar25;

            }

            dVar25 = -13.0;

            local_280 = -13.0;

            if (local_2ac == 0) {

              local_280 = 0.0;

            }

          }

          FUN_00292180(&_OBJC_CLASS___CATransaction);

          FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_03,1);

          uStack_208 = 0;

          local_210 = 0;

          uStack_1f8 = 0;

          uStack_200 = 0;

          lStack_228 = 0;

          local_238[1] = 0.0;

          uStack_218 = 0;

          local_220 = (long *)0x0;

          FUN_002a4840(local_248);

          auVar34 = _objc_retainAutoreleasedReturnValue();

          uVar13 = auVar34._0_8_;

          lVar15 = FUN_00293880(uVar13,auVar34._8_8_,local_238 + 1,auStack_1b0,0x10);

          if (lVar15 != 0) {

            lVar18 = *local_220;

            if (local_254 == 0) {

              dVar33 = 0.0;

            }

            dVar26 = 0.0;

            if (((uVar6 | uVar8) & 1) == 0) {

              dVar26 = 2.0;

            }

            dVar25 = local_2a0 + -2.0;

            dVar26 = dVar25 - dVar26;

            param_3 = local_2a0;

            local_288 = dVar33;

            do {

              lVar19 = 0;

              do {

                dVar33 = param_3;

                dVar31 = dVar30;

                if (*local_220 != lVar18) {

                  _objc_enumerationMutation(uVar13);

                  dVar33 = param_3;

                  dVar31 = dVar30;

                }

                lVar20 = *(long *)(lStack_228 + lVar19 * 8);

                auVar34 = FUN_002a4e60(lVar20);

                uVar16 = auVar34._8_8_;

                param_3 = dVar33;

                dVar30 = dVar31;

                if (auVar34._0_8_ != 0x15b31) {

                  auVar34 = FUN_002a4e60(lVar20);

                  uVar16 = auVar34._8_8_;

                  param_3 = dVar33;

                  dVar30 = dVar31;

                  if (auVar34._0_8_ != 0x15b32) {

                    auVar34 = FUN_002a4e60(lVar20);

                    uVar16 = auVar34._8_8_;

                    param_3 = dVar33;

                    dVar30 = dVar31;

                    if (auVar34._0_8_ != 0x135257a) {

                      auVar34 = FUN_002a4e60(lVar20);

                      uVar16 = auVar34._8_8_;

                      param_3 = dVar33;

                      dVar30 = dVar31;

                      if (auVar34._0_8_ != 0x135257b) {

                        auVar34 = FUN_002a4e60(lVar20);

                        uVar16 = auVar34._8_8_;

                        param_3 = dVar33;

                        dVar30 = dVar31;

                        if ((auVar34._0_8_ != 0x135257c) &&

                           ((uVar10 = FUN_001aa024(lVar20,local_240),

                            ((local_254 | uVar10 ^ 1) & 1) != 0 ||

                            (uVar16 = extraout_x1_04, param_3 = dVar33, dVar30 = dVar31,

                            lVar20 == local_240)))) {

                          pdVar4 = &local_288;

                          if (uVar10 == 0) {

                            pdVar4 = &local_280;

                          }

                          dVar32 = *pdVar4;

                          dVar27 = 0.0;

                          dVar25 = local_270;

                          if (lVar20 != local_240) {

                            dVar25 = 0.0;

                          }

                          dVar23 = (double)FUN_00295600(lVar20);

                          dVar30 = dVar31;

                          if (ABS(dVar25) <= 0.001) {

                            local_258 = 0;

                          }

                          else {

                            _objc_getAssociatedObject(lVar20,PTR_LOOP_003e6ec8);

                            local_268 = _objc_retainAutoreleasedReturnValue();

                            _objc_getAssociatedObject(lVar20,PTR_LOOP_003e6ef8);

                            local_278 = _objc_retainAutoreleasedReturnValue();

                            puVar2 = PTR_LOOP_003e6ec8;

                            if (local_268 == 0) {

                              FUN_002993a0(dVar23,&_OBJC_CLASS___NSNumber);

                              uVar16 = _objc_retainAutoreleasedReturnValue();

                              _objc_setAssociatedObject(lVar20,puVar2,uVar16,1);

LAB_0019306c:

                              _objc_release(uVar16);

                              dVar24 = dVar23;

                            }

                            else {

                              fVar21 = (float)FUN_00295480();

                              if (local_278 == 0) {

                                dVar28 = 0.0;

                              }

                              else {

                                fVar22 = (float)FUN_00295480();

                                dVar28 = (double)fVar22;

                              }

                              puVar2 = PTR_LOOP_003e6ec8;

                              dVar24 = (double)fVar21;

                              if (0.5 < ABS(dVar23 - (dVar28 + (double)fVar21))) {

                                FUN_002993a0(dVar23,&_OBJC_CLASS___NSNumber);

                                uVar16 = _objc_retainAutoreleasedReturnValue();

                                _objc_setAssociatedObject(lVar20,puVar2,uVar16,1);

                                goto LAB_0019306c;

                              }

                            }

                            puVar2 = PTR_LOOP_003e6ef8;

                            dVar29 = ABS(dVar23 - (dVar25 + dVar24));

                            local_258 = (uint)(0.5 < dVar29);

                            dVar28 = dVar25 + dVar24;

                            if (dVar29 <= 0.5) {

                              dVar28 = dVar23;

                            }

                            FUN_002993a0(dVar25,&_OBJC_CLASS___NSNumber);

                            uVar16 = _objc_retainAutoreleasedReturnValue();

                            _objc_setAssociatedObject(lVar20,puVar2,uVar16,1);

                            _objc_release(uVar16);

                            _objc_release(local_278);

                            _objc_release(local_268);

                            dVar23 = dVar28;

                          }

                          if (lVar20 == local_240) {

                            _objc_getAssociatedObject(local_248,PTR_LOOP_003e6fd0);

                            lVar17 = _objc_retainAutoreleasedReturnValue();

                            puVar2 = PTR_LOOP_003e6fd0;

                            if (lVar17 == 0) {

                              FUN_002993a0(dVar27,&_OBJC_CLASS___NSNumber);

                              uVar16 = _objc_retainAutoreleasedReturnValue();

                              _objc_setAssociatedObject(local_248,puVar2,uVar16,1);

                              _objc_release(uVar16);

                              FUN_002993a0(dVar27,&_OBJC_CLASS___NSNumber);

                              lVar17 = _objc_retainAutoreleasedReturnValue();

                            }

                            dVar28 = local_2a0;

                            if ((local_25c & 1) == 0) {

                              fVar21 = (float)FUN_00295480(lVar17);

                              dVar28 = (double)fVar21;

                            }

                            dVar32 = ABS(dVar27 - dVar28);

                            param_3 = 0.5;

                            if (dVar32 <= 0.5) {

                              dVar28 = dVar27;

                            }

                            dVar25 = dVar32;

                            _objc_release(lVar17);

                            uVar16 = extraout_x1_06;

                          }

                          else {

                            _objc_getAssociatedObject(lVar20,PTR_LOOP_003e6fd8);

                            lVar17 = _objc_retainAutoreleasedReturnValue();

                            puVar2 = PTR_LOOP_003e6fd8;

                            if (lVar17 == 0) {

                              FUN_002993a0(dVar27,&_OBJC_CLASS___NSNumber);

                              uVar16 = _objc_retainAutoreleasedReturnValue();

                              _objc_setAssociatedObject(lVar20,puVar2,uVar16,1);

                              _objc_release(uVar16);

                              FUN_002993a0(dVar27,&_OBJC_CLASS___NSNumber);

                              lVar17 = _objc_retainAutoreleasedReturnValue();

                            }

                            dVar28 = dVar26;

                            if ((local_254 & uVar10 & 1) == 0) {

                              fVar21 = (float)FUN_00295480(lVar17);

                              dVar28 = dVar32 + (double)fVar21;

                            }

                            dVar32 = ABS(dVar27 - dVar28);

                            param_3 = 0.5;

                            if (dVar32 <= 0.5) {

                              dVar28 = dVar27;

                            }

                            dVar25 = dVar32;

                            _objc_release(lVar17);

                            uVar16 = extraout_x1_05;

                          }

                          if (0.5 < dVar32 || (local_258 & 1) != 0) {

                            FUN_0029e5e0(dVar23,dVar28,dVar33,dVar31,lVar20);

                            uVar16 = extraout_x1_07;

                            dVar25 = dVar28;

                            param_3 = dVar33;

                            dVar30 = dVar31;

                          }

                        }

                      }

                    }

                  }

                }

                lVar19 = lVar19 + 1;

              } while (lVar15 != lVar19);

              lVar15 = FUN_00293880(uVar13,uVar16,local_238 + 1,auStack_1b0,0x10);

            } while (lVar15 != 0);

          }

          _objc_release(uVar13);

          FUN_002930a0(&_OBJC_CLASS___CATransaction);

          FUN_001a08f8(local_248);

          if (((uVar7 | local_25c ^ 0xffffffff) & 1) == 0) {

            local_238[0] = local_270;

            iVar9 = FUN_001a0964(local_248,local_240,uVar6,local_250,local_238);

            puVar2 = PTR_LOOP_003e6eb0;

            if (iVar9 != 0) {

              local_270 = local_238[0];

              FUN_002993a0(&_OBJC_CLASS___NSNumber);

              uVar13 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(local_248,puVar2,uVar13,1);

              _objc_release(uVar13);

              puVar2 = PTR_LOOP_003e6eb8;

              FUN_002993a0(local_270,&_OBJC_CLASS___NSNumber);

              uVar13 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(local_248,puVar2,uVar13,1);

              _objc_release(uVar13);

            }

          }

          dVar33 = (double)FUN_00295600(local_240);

          lVar15 = local_248;

          if (uVar6 == 0) {

            local_2c8 = -local_2c8;

          }

          dVar26 = local_2c8 + dVar33;

          if ((local_25c & uVar7) == 0) {

            dVar26 = dVar33;

          }

          dVar31 = local_270;

          if (local_25c == 0) {

            dVar31 = 0.0;

          }

          uVar7 = 1;

          if ((uVar6 & 1) == 0) {

            uVar7 = uVar8 | local_2ac ^ 1;

          }

          FUN_001a0c34(dVar26,dVar25,local_248,local_250);

          FUN_0018ee10(lVar15);

          FUN_001a2190(dVar26,dVar25,param_3,dVar30,dVar31,lVar15,uVar6,local_25c,uVar8,uVar7);

          FUN_001a27bc(dVar33,dVar25,param_3,dVar30,lVar15,local_250,uVar6,local_25c);

          FUN_00084ec8(lVar15);

          FUN_002254e4(lVar15);

          FUN_001a08f8(lVar15);

          if ((local_25c != 0) && (uVar11 = FUN_0019f818(local_248), (uVar11 & 1) == 0)) {

            FUN_0019fbfc(local_248);

          }

          lVar15 = local_248;

          FUN_001a0888(local_248,0);

          puVar2 = PTR_LOOP_003e6fc0;

          FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_08,local_25c);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(lVar15,puVar2,uVar13,1);

          _objc_release(uVar13);

          _objc_release(lVar14);

        }

        _objc_release(lVar12);

        lVar12 = local_240;

      }

      _objc_release(lVar12);

    }

  }

  _objc_release(local_250);

LAB_001934f8:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




