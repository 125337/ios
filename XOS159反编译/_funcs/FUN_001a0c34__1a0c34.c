// FUN_001a0c34 @0x1a0c34


void FUN_001a0c34(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,

                 undefined8 param_6,uint param_7,ulong param_8,int param_9,uint param_10)



{

  bool bVar1;

  undefined8 *puVar2;

  undefined8 *puVar3;

  cfstringStruct *pcVar4;

  double *pdVar5;

  undefined *puVar6;

  bool bVar7;

  bool bVar8;

  uint uVar9;

  uint uVar10;

  int iVar11;

  long lVar13;

  long lVar14;

  undefined8 uVar15;

  ulong uVar16;

  long lVar17;

  long lVar18;

  long lVar19;

  long lVar20;

  long lVar21;

  undefined8 uVar22;

  long lVar23;

  undefined8 uVar24;

  cfstringStruct *pcVar25;

  long lVar26;

  long lVar27;

  undefined8 uVar28;

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

  cfstringStruct *pcVar29;

  cfstringStruct *pcVar30;

  double dVar31;

  double dVar32;

  double dVar33;

  double dVar34;

  double dVar35;

  undefined1 auVar36 [16];

  undefined1 auVar37 [16];

  undefined1 auVar38 [16];

  undefined1 auVar39 [16];

  undefined1 auVar40 [16];

  double local_100;

  cfstringStruct *local_e0;

  double local_d0;

  double local_c8;

  undefined8 local_c0;

  long lVar12;

  

  dVar33 = param_3;

  dVar32 = param_4;

  _objc_retain();

  _objc_retain(param_6);

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6ea8);

  auVar36 = _objc_retainAutoreleasedReturnValue();

  lVar12 = auVar36._0_8_;

  if (((param_8 & 1) == 0) || (DAT_003e9578 == 7)) {

    if (lVar12 != 0) {

      FUN_0029e8a0(lVar12,auVar36._8_8_,1);

    }

    goto LAB_001a1db0;

  }

  FUN_002a6080(param_6,auVar36._8_8_,&cf_messageWrap);

  auVar36 = _objc_retainAutoreleasedReturnValue();

  uVar15 = auVar36._8_8_;

  lVar14 = auVar36._0_8_;

  if (lVar14 != 0) {

    FUN_002a6080(lVar14,uVar15,&cf_m_uiCreateTime);

    lVar13 = _objc_retainAutoreleasedReturnValue();

    if (lVar13 == 0) {

      _objc_release(lVar14);

      uVar15 = extraout_x1_01;

    }

    else {

      uVar9 = FUN_002a5a00(lVar13);

      _objc_release(lVar13);

      _objc_release(lVar14);

      uVar15 = extraout_x1;

      if (uVar9 != 0) {

        _objc_retain(param_5);

        _objc_getAssociatedObject(param_5,PTR_LOOP_003e6ea8);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        if (lVar14 == 0) {

          auVar36 = _objc_alloc_init(&_OBJC_CLASS___UIView);

          lVar14 = auVar36._0_8_;

          FUN_002a1c80(lVar14,auVar36._8_8_,0x135257b);

          FUN_002a23c0(lVar14,extraout_x1_02,0);

          lVar13 = DAT_003e9538;

          if (DAT_003e9538 == 0) {

            FUN_00295d00(&_OBJC_CLASS___UIColor);

            lVar13 = _objc_retainAutoreleasedReturnValue();

          }

          else {

            _objc_retain(DAT_003e9538);

          }

          uVar15 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

          FUN_002a4aa0(0x4024000000000000,&_OBJC_CLASS___UIFont);

          auVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_0029e520(uVar15,auVar36._8_8_,auVar36._0_8_);

          _objc_release(auVar36._0_8_);

          FUN_002a1da0(uVar15,extraout_x1_03,lVar13);

          FUN_00291380(lVar14,extraout_x1_04,uVar15);

          uVar24 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

          FUN_002a4aa0(0x4024000000000000,&_OBJC_CLASS___UIFont);

          auVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_0029e520(uVar24,auVar36._8_8_,auVar36._0_8_);

          _objc_release(auVar36._0_8_);

          FUN_002a1da0(uVar24,extraout_x1_05,lVar13);

          FUN_00291380(lVar14,extraout_x1_06,uVar24);

          _objc_setAssociatedObject(param_5,PTR_LOOP_003e6ea8,lVar14,1);

          _objc_release(uVar24);

          _objc_release(uVar15);

          _objc_release(lVar13);

          uVar15 = extraout_x1_07;

LAB_001a0eec:

          FUN_00291380(param_5,uVar15,lVar14);

        }

        else {

          FUN_002a4880(lVar14);

          lVar13 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          uVar15 = extraout_x1_00;

          if (lVar13 != param_5) goto LAB_001a0eec;

        }

        _objc_release(param_5);

        FUN_0029e8a0(lVar14,extraout_x1_08,0);

        FUN_002a4840(lVar14);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        lVar13 = FUN_00293860();

        if (lVar13 == 0) {

          lVar13 = 0;

        }

        else {

          FUN_002a4840(lVar14);

          auVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_00299500(auVar36._0_8_,auVar36._8_8_,0);

          lVar13 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar36._0_8_);

        }

        _objc_release(uVar15);

        FUN_002a4840(lVar14);

        local_c0 = _objc_retainAutoreleasedReturnValue();

        uVar16 = FUN_00293860();

        if (uVar16 < 2) {

          lVar17 = 0;

LAB_001a1d90:

          _objc_release(local_c0);

        }

        else {

          FUN_002a4840(lVar14);

          auVar36 = _objc_retainAutoreleasedReturnValue();

          FUN_00299500(auVar36._0_8_,auVar36._8_8_,1);

          lVar17 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar36._0_8_);

          _objc_release(local_c0);

          lVar27 = DAT_003e9580;

          if ((lVar13 != 0) && (lVar17 != 0)) {

            bVar7 = DAT_003e9580 != 1;

            FUN_0029ffc0(lVar13,extraout_x1_09,bVar7);

            FUN_0029ffc0(lVar17,extraout_x1_10,bVar7);

            uVar15 = 4;

            if (lVar27 == 1) {

              uVar15 = 1;

            }

            FUN_002a1d80(lVar13,extraout_x1_11,uVar15);

            FUN_002a1d80(lVar17,extraout_x1_12,uVar15);

            FUN_001a37cc(lVar13,0.01 < ABS(DAT_003e94f8),0);

            FUN_001a37cc(lVar17,0.01 < ABS(DAT_003e94f8),0);

            lVar18 = DAT_003e9538;

            if (DAT_003e9538 == 0) {

              FUN_00295d00(&_OBJC_CLASS___UIColor);

              auVar36 = _objc_retainAutoreleasedReturnValue();

            }

            else {

              _objc_retain(DAT_003e9538);

              auVar36._8_8_ = extraout_x1_13;

              auVar36._0_8_ = lVar18;

            }

            local_c0 = auVar36._0_8_;

            FUN_002a1da0(lVar13,auVar36._8_8_,local_c0);

            FUN_002a1da0(lVar17,extraout_x1_14,local_c0);

            _objc_getAssociatedObject(param_5,PTR_LOOP_003e6f00);

            lVar18 = _objc_retainAutoreleasedReturnValue();

            _objc_getAssociatedObject(param_5,PTR_LOOP_003e6f08);

            lVar19 = _objc_retainAutoreleasedReturnValue();

            if (lVar18 == 0) {

              bVar7 = false;

            }

            else {

              uVar10 = FUN_002a5a00(lVar18);

              bVar7 = uVar10 == uVar9;

            }

            if (lVar19 == 0) {

              bVar8 = false;

            }

            else {

              iVar11 = FUN_002a5a00(lVar19);

              bVar8 = iVar11 == DAT_003e9540;

            }

            if (DAT_003e9578 == 5) {

              FUN_002940e0(&_OBJC_CLASS___NSDate);

              uVar15 = _objc_retainAutoreleasedReturnValue();

              dVar31 = (double)FUN_002a51c0();

              _objc_release(uVar15);

              iVar11 = (int)(dVar31 / 86400.0);

              if (DAT_003e966c == (int)(dVar31 / 86400.0)) goto LAB_001a118c;

LAB_001a11a8:

              DAT_003e966c = iVar11;

              FUN_00294180((double)uVar9,&_OBJC_CLASS___NSDate);

              lVar26 = _objc_retainAutoreleasedReturnValue();

              _objc_retain();

              if (DAT_003e9568 - 1U < 3) {

                pcVar29 = (cfstringStruct *)(&PTR_cf_HH_mm_ss_0038e3f8)[DAT_003e9568 - 1U];

              }

              else {

                pcVar29 = &cf_HH_mm;

              }

              FUN_001a3c94();

              uVar15 = _objc_retainAutoreleasedReturnValue();

              pcVar30 = &cf___;

              iVar11 = FUN_001a3d74();

              if (DAT_003e9578 < 4) {

                if (DAT_003e9578 < 2) {

                  if (DAT_003e9578 == 0) {

                    FUN_001a3e2c(lVar26,uVar15);

                    local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                    FUN_001a3e2c(lVar26,pcVar29);

                    pcVar30 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                  }

                  else if (DAT_003e9578 == 1) {

                    FUN_001a3e2c(lVar26,pcVar29);

                    local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                  }

                  else {

LAB_001a15d8:

                    FUN_001a3e2c(lVar26,uVar15);

                    local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                    FUN_001a3e2c(lVar26,pcVar29);

                    pcVar30 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                  }

                }

                else if (DAT_003e9578 == 2) {

                  FUN_001a3e2c(lVar26,uVar15);

                  local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                }

                else {

                  if (DAT_003e9578 != 3) goto LAB_001a15d8;

                  FUN_001a3e2c(lVar26,pcVar29);

                  local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                  pcVar29 = &cf_EE;

                  if (iVar11 == 0) {

                    pcVar29 = &cf_EEE;

                  }

                  FUN_001a3e2c(lVar26,pcVar29);

                  pcVar30 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                }

              }

              else if (DAT_003e9578 < 6) {

                if (DAT_003e9578 == 4) {

                  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_15,&cf_M_d__);

                  uVar24 = _objc_retainAutoreleasedReturnValue();

                  FUN_001a3e2c(lVar26,uVar24);

                  local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                  _objc_release(uVar24);

                }

                else {

                  if (DAT_003e9578 != 5) goto LAB_001a15d8;

                  _objc_retain(lVar26);

                  if (lVar26 == 0) {

                    local_e0 = &cf___;

                  }

                  else {

                    FUN_00293bc0(&_OBJC_CLASS___NSCalendar);

                    auVar36 = _objc_retainAutoreleasedReturnValue();

                    uVar24 = auVar36._0_8_;

                    FUN_002a5280(&_OBJC_CLASS___NSTimeZone,auVar36._8_8_,&cf_Asia_Shanghai);

                    auVar36 = _objc_retainAutoreleasedReturnValue();

                    if (auVar36._0_8_ == 0) {

                      FUN_002a5260(&_OBJC_CLASS___NSTimeZone,auVar36._8_8_,0x7080);

                      auVar36 = _objc_retainAutoreleasedReturnValue();

                    }

                    FUN_002a1e80(uVar24,auVar36._8_8_,auVar36._0_8_);

                    FUN_002940e0(&_OBJC_CLASS___NSDate);

                    auVar37 = _objc_retainAutoreleasedReturnValue();

                    FUN_00293200(uVar24,auVar37._8_8_,0x1c,auVar37._0_8_);

                    auVar38 = _objc_retainAutoreleasedReturnValue();

                    FUN_00293200(uVar24,auVar38._8_8_,0x1c,lVar26);

                    auVar39 = _objc_retainAutoreleasedReturnValue();

                    FUN_00294160(uVar24,auVar39._8_8_,auVar38._0_8_);

                    auVar40 = _objc_retainAutoreleasedReturnValue();

                    lVar20 = auVar40._0_8_;

                    FUN_00294160(uVar24,auVar40._8_8_,auVar39._0_8_);

                    auVar40 = _objc_retainAutoreleasedReturnValue();

                    lVar21 = auVar40._0_8_;

                    if ((lVar20 == 0) || (lVar21 == 0)) {

                      FUN_001a3c94();

                      uVar22 = _objc_retainAutoreleasedReturnValue();

                      FUN_001a3e2c(lVar26,uVar22);

                      local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                    }

                    else {

                      FUN_00293220(uVar24,auVar40._8_8_,0x10,lVar21,lVar20,0);

                      uVar22 = _objc_retainAutoreleasedReturnValue();

                      lVar23 = FUN_002941c0();

                      iVar11 = FUN_001a3d74();

                      if (lVar23 == 1) {

                        pcVar30 = &cf_Yesterday;

                        local_e0 = &cf__f_Y;

                      }

                      else {

                        if (lVar23 != 0) {

                          if (lVar23 - 2U < 5) {

                            FUN_001a3e2c(lVar26,&cf_EEEE);

                            local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                          }

                          else {

                            FUN_001a3c94();

                            uVar28 = _objc_retainAutoreleasedReturnValue();

                            FUN_001a3e2c(lVar26,uVar28);

                            local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                            _objc_release(uVar28);

                          }

                          goto LAB_001a16c0;

                        }

                        pcVar30 = &cf_Today;

                        local_e0 = &cf_N_Y;

                      }

                      if (iVar11 == 0) {

                        local_e0 = pcVar30;

                      }

                      _objc_retain();

                    }

LAB_001a16c0:

                    _objc_release(uVar22);

                    _objc_release(lVar21);

                    _objc_release(lVar20);

                    _objc_release(auVar39._0_8_);

                    _objc_release(auVar38._0_8_);

                    _objc_release(auVar37._0_8_);

                    _objc_release(auVar36._0_8_);

                    _objc_release(uVar24);

                  }

                  _objc_release(lVar26);

                  FUN_001a3e2c(lVar26,pcVar29);

                  pcVar30 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                }

              }

              else if (DAT_003e9578 == 6) {

                pcVar30 = &cf_y;

                if (iVar11 == 0) {

                  pcVar30 = &cf_yyyy_MM_dd;

                }

                FUN_001a3e2c(lVar26,pcVar30);

                local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                FUN_001a3e2c(lVar26,pcVar29);

                pcVar30 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              }

              else {

                local_e0 = &cf___;

                pcVar30 = &cf___;

                if (DAT_003e9578 != 7) {

                  if (DAT_003e9578 != 8) goto LAB_001a15d8;

                  puVar2 = &DAT_003e9508;

                  if (param_7 == 0) {

                    puVar2 = &DAT_003e9518;

                  }

                  puVar3 = &DAT_003e9510;

                  if (param_7 == 0) {

                    puVar3 = &DAT_003e9520;

                  }

                  pcVar29 = &cf___;

                  if ((cfstringStruct *)*puVar2 != (cfstringStruct *)0x0) {

                    pcVar29 = (cfstringStruct *)*puVar2;

                  }

                  _objc_retain(pcVar29);

                  pcVar25 = &cf___;

                  if ((cfstringStruct *)*puVar3 != (cfstringStruct *)0x0) {

                    pcVar25 = (cfstringStruct *)*puVar3;

                  }

                  _objc_retain(pcVar25);

                  lVar20 = FUN_00297fa0(pcVar29);

                  if (lVar20 == 0) {

                    local_e0 = &cf___;

                  }

                  else {

                    FUN_0019de24(lVar26,pcVar29);

                    local_e0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                  }

                  lVar20 = FUN_00297fa0(pcVar25);

                  if (lVar20 == 0) {

                    pcVar30 = &cf___;

                  }

                  else {

                    FUN_0019de24(lVar26,pcVar25);

                    pcVar30 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                  }

                  _objc_release(pcVar25);

                  _objc_release(pcVar29);

                }

              }

              pcVar29 = local_e0;

              pcVar25 = pcVar30;

              if (DAT_003e9580 == 1) {

                FUN_001a4040(local_e0);

                pcVar29 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                _objc_release(local_e0);

                FUN_001a4040(pcVar30);

                pcVar25 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                _objc_release(pcVar30);

              }

              pcVar30 = &cf___;

              if (pcVar29 != (cfstringStruct *)0x0) {

                pcVar30 = pcVar29;

              }

              _objc_retainAutorelease(pcVar30);

              pcVar4 = &cf___;

              if (pcVar25 != (cfstringStruct *)0x0) {

                pcVar4 = pcVar25;

              }

              _objc_retainAutorelease(pcVar4);

              _objc_release(uVar15);

              _objc_release(pcVar25);

              _objc_release(pcVar29);

              _objc_release(lVar26);

              _objc_retain(pcVar30);

              _objc_retain(pcVar4);

              FUN_002a1d60(lVar13,extraout_x1_16,pcVar30);

              FUN_002a1d60(lVar17,extraout_x1_17,pcVar4);

              FUN_002a5020(lVar13);

              uVar15 = _objc_retainAutoreleasedReturnValue();

              auVar36 = FUN_00297fa0();

              FUN_0029e8a0(lVar13,auVar36._8_8_,auVar36._0_8_ == 0);

              _objc_release(uVar15);

              FUN_002a5020(lVar17);

              uVar15 = _objc_retainAutoreleasedReturnValue();

              auVar36 = FUN_00297fa0();

              FUN_0029e8a0(lVar17,auVar36._8_8_,auVar36._0_8_ == 0);

              _objc_release(uVar15);

              uVar16 = FUN_002978a0(lVar13);

              if ((uVar16 & 1) == 0) {

                FUN_002a3de0(lVar13);

              }

              auVar36 = FUN_002978a0(lVar17);

              uVar15 = auVar36._8_8_;

              if ((auVar36._0_8_ & 1) == 0) {

                FUN_002a3de0(lVar17);

                uVar15 = extraout_x1_18;

              }

              puVar6 = PTR_LOOP_003e6f00;

              FUN_00299460(&_OBJC_CLASS___NSNumber,uVar15,uVar9);

              uVar15 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(param_5,puVar6,uVar15,1);

              _objc_release(uVar15);

              puVar6 = PTR_LOOP_003e6f08;

              FUN_00299460(&_OBJC_CLASS___NSNumber,extraout_x1_19,DAT_003e9540);

              uVar15 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(param_5,puVar6,uVar15,1);

              _objc_release(uVar15);

              _objc_release(pcVar4);

              _objc_release(pcVar30);

              _objc_release(lVar26);

            }

            else {

LAB_001a118c:

              iVar11 = DAT_003e966c;

              if (!(bool)(bVar7 & bVar8)) goto LAB_001a11a8;

            }

            uVar16 = FUN_002978a0(lVar13);

            if ((uVar16 & 1) == 0) {

              FUN_002a5020(lVar13);

              uVar15 = _objc_retainAutoreleasedReturnValue();

              lVar26 = FUN_00297fa0();

              bVar7 = lVar26 != 0;

              _objc_release(uVar15);

            }

            else {

              bVar7 = false;

            }

            auVar36 = FUN_002978a0(lVar17);

            uVar15 = auVar36._8_8_;

            if ((auVar36._0_8_ & 1) == 0) {

              FUN_002a5020(lVar17);

              uVar15 = _objc_retainAutoreleasedReturnValue();

              lVar26 = FUN_00297fa0();

              bVar8 = lVar26 != 0;

              _objc_release(uVar15);

              uVar15 = extraout_x1_20;

            }

            else {

              bVar8 = false;

            }

            if (bVar7 || bVar8) {

              local_c8 = 0.0;

              dVar34 = dVar33;

              dVar35 = 0.0;

              dVar31 = 0.0;

              if (bVar7) {

                FUN_002925a0(lVar13);

                dVar34 = dVar33;

                FUN_002925a0(lVar13);

                dVar35 = dVar33;

                dVar31 = dVar32;

              }

              dVar33 = 0.0;

              if (bVar8) {

                FUN_002925a0(lVar17);

                FUN_002925a0(lVar17);

                dVar33 = dVar32;

                local_c8 = dVar34;

              }

              dVar32 = local_c8;

              if (local_c8 <= dVar35) {

                dVar32 = dVar35;

              }

              bVar1 = (bool)(bVar7 & bVar8);

              local_d0 = dVar33;

              if (lVar27 == 1) {

                local_e0 = (cfstringStruct *)(dVar32 * 2.0 + 8.0);

                if (!bVar1) {

                  local_e0 = (cfstringStruct *)dVar32;

                }

                dVar34 = dVar32;

                if (dVar33 <= dVar31) {

                  local_d0 = dVar31;

                }

              }

              else {

                if (bVar1) {

                  local_d0 = dVar31 + 5.0 + dVar33;

                }

                else if (dVar33 <= dVar31) {

                  local_d0 = dVar31;

                }

                dVar34 = 0.0;

                local_e0 = (cfstringStruct *)dVar32;

              }

              if (param_7 == 0) {

                local_100 = (double)_CGRectGetMaxX(param_1,param_2,param_3,param_4);

                if (lVar27 == 1) {

                  dVar32 = 11.0;

                  goto LAB_001a1bcc;

                }

                local_100 = (double)_CGRectGetMaxX(param_1,param_2,param_3,param_4);

                local_100 = local_100 + 11.0;

                if (bVar1) {

                  FUN_0029e5e0(0,0,dVar35,dVar31,lVar13);

                  FUN_0029e5e0(0,dVar31 + 5.0,local_c8,dVar33,lVar17);

                  goto LAB_001a1b68;

                }

                lVar27 = lVar13;

                if (!bVar7) {

                  lVar27 = lVar17;

                  dVar31 = dVar33;

                  dVar35 = local_c8;

                }

                FUN_0029e5e0(0,0,dVar35,dVar31,lVar27);

LAB_001a1cd4:

                dVar33 = (double)_CGRectGetMinY(param_1,param_2,param_3,param_4);

                dVar31 = (double)_CGRectGetHeight(param_1,param_2,param_3,param_4);

                FUN_0018da3c();

                pdVar5 = (double *)&DAT_003e95a0;

                if (param_7 == 0) {

                  pdVar5 = (double *)&DAT_003e95a8;

                }

                dVar32 = *pdVar5;

                dVar33 = dVar33 + (dVar31 - local_d0) * 0.5;

LAB_001a1d3c:

                dVar33 = dVar33 + dVar32;

              }

              else {

                local_100 = (double)_CGRectGetMinX(param_1,param_2,param_3,param_4);

                if (lVar27 == 1) {

                  local_100 = local_100 - (double)local_e0;

                  dVar32 = -11.0;

LAB_001a1bcc:

                  local_100 = local_100 + dVar32;

                  if (bVar1) {

                    FUN_0029e5e0(0,(local_d0 - dVar31) * 0.5,dVar34,dVar31,lVar13);

                    dVar32 = dVar34 + 8.0;

                    lVar27 = lVar17;

LAB_001a1c24:

                    FUN_0029e5e0(dVar32,(local_d0 - dVar33) * 0.5,dVar34,dVar33,lVar27);

                  }

                  else {

                    lVar27 = lVar13;

                    if (!bVar7) {

                      lVar27 = lVar17;

                      dVar31 = dVar33;

                    }

                    dVar33 = dVar31;

                    if ((bool)(bVar7 | bVar8)) {

                      dVar32 = 0.0;

                      goto LAB_001a1c24;

                    }

                  }

                  dVar33 = (double)_CGRectGetMidY(param_1,param_2,param_3,param_4);

                  FUN_0018da3c();

                  pdVar5 = (double *)&DAT_003e95a0;

                  if (param_7 == 0) {

                    pdVar5 = (double *)&DAT_003e95a8;

                  }

                  dVar32 = *pdVar5;

                  dVar33 = dVar33 + local_d0 * -0.5;

                  goto LAB_001a1d3c;

                }

                dVar32 = (double)_CGRectGetMinX(param_1,param_2,param_3,param_4);

                local_100 = (dVar32 - (double)local_e0) + -11.0;

                if (!bVar1) {

                  lVar27 = lVar13;

                  if (!bVar7) {

                    lVar27 = lVar17;

                    dVar31 = dVar33;

                    dVar35 = local_c8;

                  }

                  FUN_0029e5e0((double)local_e0 - dVar35,0,dVar35,dVar31,lVar27);

                  goto LAB_001a1cd4;

                }

                FUN_0029e5e0((double)local_e0 - dVar35,0,dVar35,dVar31,lVar13);

                FUN_0029e5e0((double)local_e0 - local_c8,dVar31 + 5.0,local_c8,dVar33,lVar17);

LAB_001a1b68:

                dVar33 = (double)_CGRectGetMinY(param_1,param_2,param_3,param_4);

                FUN_0018da3c();

                pdVar5 = (double *)&DAT_003e95a0;

                if (param_7 == 0) {

                  pdVar5 = (double *)&DAT_003e95a8;

                }

                dVar33 = dVar33 + 16.0 + *pdVar5;

              }

              if ((((param_7 & 1) == 0) && ((param_10 & 1) == 0)) && (param_9 != 0)) {

                if (DAT_003e95b8 == 1) {

                  dVar32 = 13.0;

                }

                else {

                  dVar32 = -13.0;

                }

                dVar33 = dVar33 + dVar32;

              }

              FUN_0029e5e0(local_100,dVar33,local_e0,local_d0,lVar14);

            }

            else {

              FUN_0029e8a0(lVar14,uVar15,1);

            }

            _objc_release(lVar19);

            _objc_release(lVar18);

            goto LAB_001a1d90;

          }

        }

        _objc_release(lVar17);

        _objc_release(lVar13);

        _objc_release(lVar14);

        goto LAB_001a1db0;

      }

    }

  }

  if (lVar12 != 0) {

    FUN_0029e8a0(lVar12,uVar15,1);

  }

LAB_001a1db0:

  _objc_release(lVar12);

  _objc_release(param_6);

  _objc_release(param_5);

  return;

}




