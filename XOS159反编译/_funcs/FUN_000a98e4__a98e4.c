// FUN_000a98e4 @0xa98e4


void FUN_000a98e4(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5)



{

  bool bVar1;

  bool bVar2;

  double *pdVar3;

  undefined *puVar4;

  bool bVar5;

  int iVar6;

  uint uVar7;

  uint uVar8;

  int iVar9;

  uint uVar10;

  uint uVar11;

  undefined8 uVar12;

  ulong uVar13;

  long lVar14;

  undefined8 uVar15;

  long lVar16;

  long lVar17;

  long lVar18;

  long lVar19;

  long lVar20;

  long lVar21;

  undefined8 uVar22;

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

  undefined8 extraout_x1_22;

  undefined8 extraout_x1_23;

  undefined8 extraout_x1_24;

  undefined8 extraout_x1_25;

  undefined8 extraout_x1_26;

  undefined8 extraout_x1_27;

  undefined8 extraout_x1_28;

  long *plVar24;

  long *plVar25;

  bool bVar26;

  long lVar27;

  long lVar28;

  float fVar29;

  double dVar30;

  double dVar31;

  double dVar32;

  double dVar33;

  double dVar34;

  double dVar35;

  double dVar36;

  double dVar37;

  double dVar38;

  double dVar39;

  double dVar40;

  double dVar41;

  double dVar42;

  double dVar43;

  double dVar44;

  double dVar45;

  undefined1 auVar46 [16];

  uint local_208;

  long local_200;

  double local_1f0;

  double local_1e8;

  double local_1e0;

  double local_1d8;

  double local_1c0;

  double local_1b8;

  double local_1a8;

  double local_1a0;

  long lStack_198;

  long *local_190;

  undefined8 uStack_188;

  undefined8 local_180;

  undefined8 uStack_178;

  undefined8 uStack_170;

  undefined8 uStack_168;

  undefined8 local_158;

  double local_150;

  double dStack_148;

  double local_140;

  double local_138;

  double local_130;

  double dStack_128;

  double local_120;

  double local_118;

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_5 == 0) goto LAB_000ab7b8;

  if ((DAT_003e74dc & 1) == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar46 = _objc_retainAutoreleasedReturnValue();

    iVar6 = FUN_002924c0(auVar46._0_8_,auVar46._8_8_,&cf_mesMsgMergeBubbleWrapRefer);

    _objc_release(auVar46._0_8_);

    puVar4 = PTR__CGRectZero_00388bf0;

    if (iVar6 == 0) {

      FUN_000b0890(param_5,0);

      FUN_00083a80(*(undefined8 *)puVar4,*(undefined8 *)(puVar4 + 8),*(undefined8 *)(puVar4 + 0x10),

                   *(undefined8 *)(puVar4 + 0x18),param_5);

      FUN_000b0dd4(param_5);

      goto LAB_000ab7b8;

    }

    DAT_003e74dc = 1;

  }

  _objc_retain(param_5);

  uVar12 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar13 = _objc_opt_isKindOfClass(param_5,uVar12);

  lVar18 = param_5;

  if ((uVar13 & 1) == 0) {

    lVar18 = 0;

  }

  _objc_retain(lVar18);

  if ((uVar13 & 1) != 0) {

    FUN_000839f4(param_5);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_000856e8();

    lVar14 = _objc_retainAutoreleasedReturnValue();

    if (lVar14 != 0) {

      iVar6 = FUN_00298760(lVar14);

      _objc_release(lVar14);

      if (iVar6 == 0x22) {

        _objc_getAssociatedObject(uVar12,PTR_LOOP_003e6540);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        if (lVar14 == 0) {

          uVar7 = 0;

        }

        else {

          uVar7 = FUN_002924e0(lVar14);

        }

        uVar8 = FUN_000b16e0(param_5);

        if (((uVar7 | uVar8) & 1) == 0) {

          _objc_setAssociatedObject(uVar12,PTR_LOOP_003e6548,0,1);

          FUN_000b0dd4(param_5);

        }

        else {

          _objc_getAssociatedObject(uVar12,PTR_LOOP_003e6570);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          iVar6 = FUN_002924e0();

          _objc_release(uVar15);

          if (iVar6 == 0) {

            FUN_000822c8(param_5);

            lVar17 = _objc_retainAutoreleasedReturnValue();

            dVar45 = param_2;

            dVar42 = param_3;

            dVar43 = param_4;

            if (lVar17 == 0) {

LAB_000a9b28:

              FUN_00084490(param_5,0);

            }

            else {

              FUN_002a4880(lVar17);

              lVar16 = _objc_retainAutoreleasedReturnValue();

              dVar45 = param_2;

              dVar42 = param_3;

              dVar43 = param_4;

              if (lVar16 == 0) goto LAB_000a9b28;

              iVar6 = FUN_002978a0(lVar17);

              _objc_release(lVar16);

              dVar45 = param_2;

              dVar42 = param_3;

              dVar43 = param_4;

              if (iVar6 != 0) goto LAB_000a9b28;

              FUN_002925a0(lVar17);

              dVar30 = (double)FUN_00293720(lVar17,extraout_x1_04,param_5);

              dVar45 = param_2;

              dVar42 = param_3;

              dVar43 = param_4;

              uVar13 = _CGRectIsNull();

              if ((uVar13 & 1) == 0) {

                dVar45 = param_2;

                dVar42 = param_3;

                dVar43 = param_4;

                uVar7 = _CGRectIsInfinite(dVar30);

                if (param_3 <= 0.5) {

                  uVar7 = 1;

                }

                if (((uVar7 & 1) != 0) || (param_4 <= 0.5)) goto LAB_000aa124;

                dStack_148 = *(double *)(PTR__CGRectZero_00388bf0 + 8);

                local_150 = *(double *)PTR__CGRectZero_00388bf0;

                local_138 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

                dVar45 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

                local_158 = 0;

                local_140 = dVar45;

                uVar13 = FUN_000b182c(param_5,uVar12,&local_150,&local_158);

                uVar15 = local_158;

                _objc_retain(local_158);

                if ((uVar13 & 1) == 0) {

                  FUN_00084490(param_5,0);

                }

                else {

                  local_1d8 = *(double *)PTR__CGRectNull_00388bd0;

                  local_1e0 = *(double *)(PTR__CGRectNull_00388bd0 + 8);

                  local_1e8 = *(double *)(PTR__CGRectNull_00388bd0 + 0x10);

                  local_1c0 = *(double *)(PTR__CGRectNull_00388bd0 + 0x18);

                  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6550);

                  lVar16 = _objc_retainAutoreleasedReturnValue();

                  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6558);

                  lVar19 = _objc_retainAutoreleasedReturnValue();

                  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6560);

                  lVar20 = _objc_retainAutoreleasedReturnValue();

                  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6568);

                  lVar21 = _objc_retainAutoreleasedReturnValue();

                  dVar37 = local_1d8;

                  dVar31 = local_1e8;

                  dVar32 = local_1e0;

                  local_1b8 = local_1c0;

                  if (lVar16 != 0) {

                    dVar37 = (double)FUN_00290aa0(lVar16);

                    dVar31 = dVar42;

                    dVar32 = dVar45;

                    local_1b8 = dVar43;

                  }

                  if (lVar19 != 0) {

                    local_1d8 = (double)FUN_00290aa0(lVar19);

                    local_1e8 = dVar42;

                    local_1e0 = dVar45;

                    local_1c0 = dVar43;

                  }

                  if (lVar20 == 0) {

                    dVar45 = -1.0;

                  }

                  else {

                    fVar29 = (float)FUN_00295480();

                    dVar45 = (double)fVar29;

                  }

                  if (lVar21 == 0) {

                    dVar33 = 0.0;

                  }

                  else {

                    dVar33 = (double)FUN_00294860();

                  }

                  dVar42 = local_1b8;

                  uVar13 = _CGRectIsNull(dVar37,dVar32,dVar31);

                  if (((((uVar13 & 1) != 0) || (1.5 < ABS(dVar37 - local_150))) ||

                      (1.5 < ABS(dVar32 - dStack_148))) ||

                     ((((1.5 < ABS(dVar31 - local_140) || (1.5 < ABS(local_1b8 - local_138))) ||

                       ((1.5 < ABS(local_1d8 - dVar30) ||

                        ((1.5 < ABS(local_1e0 - param_2) || (1.5 < ABS(local_1e8 - param_3))))))) ||

                      (1.5 < ABS(local_1c0 - param_4))))) {

                    bVar5 = false;

                  }

                  else {

                    FUN_002925a0(param_5);

                    bVar5 = ABS(dVar45 - dVar42) <= 1.5;

                  }

                  dVar37 = (double)_CACurrentMediaTime();

                  puVar4 = PTR_LOOP_003e6550;

                  if (!(bool)(bVar5 & 0.0 < dVar33)) {

                    dVar33 = dVar37;

                  }

                  FUN_002a6100(local_150,dStack_148,local_140,local_138,&_OBJC_CLASS___NSValue);

                  uVar22 = _objc_retainAutoreleasedReturnValue();

                  _objc_setAssociatedObject(param_5,puVar4,uVar22,1);

                  _objc_release(uVar22);

                  puVar4 = PTR_LOOP_003e6558;

                  dVar42 = param_3;

                  dVar43 = param_4;

                  FUN_002a6100(dVar30,param_2,&_OBJC_CLASS___NSValue);

                  uVar22 = _objc_retainAutoreleasedReturnValue();

                  _objc_setAssociatedObject(param_5,puVar4,uVar22,1);

                  _objc_release(uVar22);

                  puVar4 = PTR_LOOP_003e6560;

                  FUN_002925a0(param_5);

                  FUN_002993a0(dVar43,&_OBJC_CLASS___NSNumber);

                  uVar22 = _objc_retainAutoreleasedReturnValue();

                  _objc_setAssociatedObject(param_5,puVar4,uVar22,1);

                  _objc_release(uVar22);

                  puVar4 = PTR_LOOP_003e6568;

                  FUN_002993a0(dVar33,&_OBJC_CLASS___NSNumber);

                  uVar22 = _objc_retainAutoreleasedReturnValue();

                  _objc_setAssociatedObject(param_5,puVar4,uVar22,1);

                  _objc_release(uVar22);

                  iVar6 = FUN_000b2cf0(param_5);

                  if (iVar6 == 0) {

LAB_000ab358:

                    uVar22 = _CGRectUnion(dVar30);

                    dVar45 = param_2;

                    dVar42 = param_3;

                    dVar43 = param_4;

                    uVar13 = _CGRectIsNull();

                    if ((uVar13 & 1) == 0) {

                      dVar45 = param_2;

                      dVar42 = param_3;

                      dVar43 = param_4;

                      uVar7 = _CGRectIsInfinite(uVar22);

                      if (param_3 <= 0.5) {

                        uVar7 = 1;

                      }

                      if (((uVar7 & 1) == 0) && (0.5 < param_4)) {

                        FUN_002a4880(lVar17);

                        auVar46 = _objc_retainAutoreleasedReturnValue();

                        dVar45 = param_2;

                        dVar43 = param_3;

                        dVar37 = param_4;

                        dVar32 = (double)FUN_00293720(uVar22,param_5,auVar46._8_8_,auVar46._0_8_);

                        dVar42 = dVar45;

                        dVar30 = dVar43;

                        dVar31 = dVar37;

                        _objc_release(auVar46._0_8_);

                        dVar33 = (double)FUN_00295600(lVar17);

                        if ((1.5 < ABS(dVar33 - dVar32)) ||

                           (((1.5 < ABS(dVar42 - dVar45) || (1.5 < ABS(dVar30 - dVar43))) ||

                            (1.5 < ABS(dVar31 - dVar37))))) {

                          FUN_00292180(&_OBJC_CLASS___CATransaction);

                          FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_22,1);

                          FUN_0029e5e0(dVar32,dVar45,dVar43,dVar37,lVar17);

                          FUN_002930a0(&_OBJC_CLASS___CATransaction);

                        }

                        uStack_178 = 0;

                        local_180 = 0;

                        uStack_168 = 0;

                        uStack_170 = 0;

                        lStack_198 = 0;

                        local_1a0 = 0.0;

                        uStack_188 = 0;

                        local_190 = (long *)0x0;

                        _objc_retain(uVar15);

                        lVar23 = FUN_00293880(uVar15,extraout_x1_23,&local_1a0,&local_130,0x10);

                        if (lVar23 != 0) {

                          lVar27 = *local_190;

                          do {

                            lVar28 = 0;

                            do {

                              if (*local_190 != lVar27) {

                                _objc_enumerationMutation(uVar15);

                              }

                              FUN_000b2d6c(*(undefined8 *)(lStack_198 + lVar28 * 8),0);

                              lVar28 = lVar28 + 1;

                            } while (lVar23 != lVar28);

                            lVar23 = FUN_00293880(uVar15,extraout_x1_24,&local_1a0,&local_130,0x10);

                          } while (lVar23 != 0);

                        }

                        _objc_release(uVar15);

                        FUN_000b2fc4(uVar22,param_2,param_3,param_4,param_5);

                        puVar4 = PTR_LOOP_003e6408;

                        FUN_002a6100(uVar22,&_OBJC_CLASS___NSValue);

                        uVar22 = _objc_retainAutoreleasedReturnValue();

                        _objc_setAssociatedObject(lVar18,puVar4,uVar22,1);

                        _objc_release(uVar22);

                        dVar45 = param_2;

                        dVar42 = param_3;

                        dVar43 = param_4;

                      }

                    }

                  }

                  else {

                    bVar26 = false;

                    if (0.1 <= dVar37 - dVar33) {

                      bVar26 = bVar5;

                    }

                    if ((bVar26) || (dVar45 = 0.6, 0.6 <= dVar37 - dVar33)) goto LAB_000ab358;

                  }

                  _objc_release(lVar21);

                  _objc_release(lVar20);

                  _objc_release(lVar19);

                  _objc_release(lVar16);

                }

                _objc_release(uVar15);

              }

              else {

LAB_000aa124:

                FUN_00084490(param_5,0);

              }

            }

            _objc_release(lVar17);

            param_2 = dVar45;

            param_3 = dVar42;

            param_4 = dVar43;

          }

          else {

            FUN_00084490(param_5,0);

          }

        }

        _objc_release(lVar14);

      }

    }

    _objc_release(uVar12);

  }

  _objc_release(lVar18);

  _objc_release(param_5);

  _objc_retain(param_5);

  uVar12 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar13 = _objc_opt_isKindOfClass(param_5,uVar12);

  lVar18 = param_5;

  if ((uVar13 & 1) == 0) {

    lVar18 = 0;

  }

  _objc_retain(lVar18);

  if ((uVar13 & 1) != 0) {

    lVar14 = _object_getClass(param_5);

    if (lVar14 == 0) {

LAB_000a9d80:

      lVar14 = 0;

    }

    else {

      lVar17 = lVar14;

      if (0 < DAT_003e7b00) {

        plVar24 = (long *)&DAT_003e7ac0;

        lVar16 = DAT_003e7b00;

        plVar25 = &DAT_003e7a80;

        do {

          if (*plVar25 == lVar14) {

            lVar16 = *plVar24;

            lVar14 = 0;

            dVar45 = param_2;

            dVar42 = param_3;

            dVar43 = param_4;

            if (lVar16 != 0) goto LAB_000a9c44;

            goto LAB_000a9d84;

          }

          plVar24 = plVar24 + 1;

          lVar16 = lVar16 + -1;

          plVar25 = plVar25 + 1;

        } while (lVar16 != 0);

      }

      do {

        lVar16 = _class_getInstanceVariable(lVar17,"m_translateView");

        if (lVar16 != 0) break;

        lVar17 = _class_getSuperclass(lVar17);

      } while (lVar17 != 0);

      if (DAT_003e7b00 < 8) {

        (&DAT_003e7a80)[DAT_003e7b00] = lVar14;

        *(long *)(&DAT_003e7ac0 + DAT_003e7b00 * 8) = lVar16;

        DAT_003e7b00 = DAT_003e7b00 + 1;

      }

      dVar45 = param_2;

      dVar42 = param_3;

      dVar43 = param_4;

      if (lVar16 == 0) {

        lVar14 = 0;

      }

      else {

LAB_000a9c44:

        _object_getIvar(lVar18,lVar16);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        uVar12 = _objc_opt_class(&_OBJC_CLASS___UIView);

        uVar13 = _objc_opt_isKindOfClass(lVar14,uVar12);

        lVar17 = lVar14;

        if ((uVar13 & 1) == 0) {

          lVar17 = 0;

        }

        _objc_retain(lVar17);

        _objc_release(lVar14);

        param_2 = dVar45;

        param_3 = dVar42;

        param_4 = dVar43;

        if (lVar17 == 0) goto LAB_000a9d80;

        iVar6 = FUN_000b30dc(lVar14,lVar18);

        param_2 = dVar45;

        param_3 = dVar42;

        param_4 = dVar43;

        if (iVar6 != 0) {

          FUN_002925a0(lVar14);

          uVar12 = FUN_00293720(lVar14,extraout_x1,lVar18);

          param_2 = dVar45;

          param_3 = dVar42;

          param_4 = dVar43;

          uVar13 = _CGRectIsNull();

          if ((uVar13 & 1) == 0) {

            dVar30 = dVar42;

            dVar37 = dVar43;

            uVar7 = _CGRectIsInfinite(uVar12);

            if (dVar42 <= 0.5) {

              uVar7 = 1;

            }

            param_2 = dVar45;

            param_3 = dVar30;

            param_4 = dVar37;

            if (((uVar7 & 1) == 0) && (0.5 < dVar43)) {

              FUN_000b2d6c(lVar14,0);

              FUN_000822c8(lVar18);

              lVar17 = _objc_retainAutoreleasedReturnValue();

              param_2 = dVar45;

              param_3 = dVar30;

              param_4 = dVar37;

              if (lVar17 != 0) {

                FUN_002a4880(lVar17);

                lVar16 = _objc_retainAutoreleasedReturnValue();

                param_2 = dVar45;

                param_3 = dVar30;

                param_4 = dVar37;

                if (lVar16 != 0) {

                  uVar13 = FUN_002978a0(lVar17);

                  _objc_release(lVar16);

                  param_2 = dVar45;

                  param_3 = dVar30;

                  param_4 = dVar37;

                  if ((uVar13 & 1) == 0) {

                    FUN_002925a0(lVar17);

                    uVar12 = FUN_00293720(lVar17,extraout_x1_00,lVar18);

                    param_2 = dVar45;

                    param_3 = dVar30;

                    param_4 = dVar37;

                    uVar13 = _CGRectIsNull();

                    if ((uVar13 & 1) == 0) {

                      param_2 = dVar45;

                      param_3 = dVar30;

                      param_4 = dVar37;

                      uVar7 = _CGRectIsInfinite(uVar12);

                      if (dVar30 <= 0.5) {

                        uVar7 = 1;

                      }

                      if ((((uVar7 & 1) == 0) && (0.5 < dVar37)) &&

                         (param_2 = dVar45, param_3 = dVar30, param_4 = dVar37,

                         uVar13 = _CGRectContainsRect(uVar12), (uVar13 & 1) == 0)) {

                        uVar12 = _CGRectUnion(uVar12);

                        FUN_002a4880(lVar17);

                        auVar46 = _objc_retainAutoreleasedReturnValue();

                        uVar12 = FUN_00293720(uVar12,lVar18,auVar46._8_8_,auVar46._0_8_);

                        _objc_release(auVar46._0_8_);

                        param_2 = dVar45;

                        param_3 = dVar30;

                        param_4 = dVar37;

                        uVar13 = _CGRectIsNull(uVar12);

                        if ((uVar13 & 1) == 0) {

                          param_2 = dVar45;

                          param_3 = dVar30;

                          param_4 = dVar37;

                          uVar7 = _CGRectIsInfinite(uVar12);

                          if (dVar30 <= 0.5) {

                            uVar7 = 1;

                          }

                          if (((uVar7 & 1) == 0) && (0.5 < dVar37)) {

                            FUN_00292180(&_OBJC_CLASS___CATransaction);

                            FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_05,1);

                            FUN_0029e5e0(uVar12,lVar17);

                            FUN_002930a0(&_OBJC_CLASS___CATransaction);

                            param_2 = dVar45;

                            param_3 = dVar30;

                            param_4 = dVar37;

                          }

                        }

                      }

                    }

                  }

                }

              }

              _objc_release(lVar17);

            }

          }

        }

      }

    }

LAB_000a9d84:

    _objc_release(lVar14);

  }

  _objc_release(lVar18);

  _objc_release(param_5);

  if (DAT_003e7a78 != -1) {

    FUN_0028eff0();

  }

  if (DAT_003e7a70 == 0) goto LAB_000ab7b8;

  _objc_retain(param_5);

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6328);

  lVar18 = _objc_retainAutoreleasedReturnValue();

  uVar7 = FUN_0008336c(param_5);

  FUN_000839f4(param_5);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_000856e8();

  lVar14 = _objc_retainAutoreleasedReturnValue();

  if (lVar14 == 0) {

    bVar5 = false;

  }

  else {

    iVar6 = FUN_00298760(lVar14);

    bVar5 = iVar6 == 0x22;

  }

  _objc_release(lVar14);

  _objc_release(uVar12);

  if ((lVar18 == 0) || (uVar8 = FUN_002924e0(lVar18), ((uVar7 | uVar8) & 1) != 0 || bVar5)) {

    FUN_00083564(param_5,DAT_003e7a70);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    if ((lVar14 == 0) || (iVar6 = FUN_002978a0(lVar14), iVar6 != 0)) {

      uVar13 = FUN_000b0edc(param_5);

      if ((uVar13 & 1) == 0) {

        if (uVar7 == 0) {

          _objc_setAssociatedObject(param_5,PTR_LOOP_003e6328,PTR____kCFBooleanFalse_00388318,1);

        }

        else {

          _objc_setAssociatedObject(param_5,PTR_LOOP_003e6328,0,1);

          FUN_00083714(param_5);

        }

        puVar4 = PTR__CGRectZero_00388bf0;

        FUN_000b0890(param_5,0);

        FUN_00083a80(*(undefined8 *)puVar4,*(undefined8 *)(puVar4 + 8),

                     *(undefined8 *)(puVar4 + 0x10),*(undefined8 *)(puVar4 + 0x18),param_5);

      }

    }

    else {

      _objc_setAssociatedObject(param_5,PTR_LOOP_003e6330,0,1);

      _objc_setAssociatedObject(param_5,PTR_LOOP_003e6338,0,1);

      if ((lVar18 == 0) || (uVar13 = FUN_002924e0(lVar18), (uVar13 & 1) == 0)) {

        _objc_setAssociatedObject(param_5,PTR_LOOP_003e6328,PTR____kCFBooleanTrue_00388320,1);

      }

      FUN_002a4880(lVar14);

      lVar17 = _objc_retainAutoreleasedReturnValue();

      if (lVar17 != 0) {

        FUN_000822c8(param_5);

        lVar16 = _objc_retainAutoreleasedReturnValue();

        if (lVar16 == 0) {

LAB_000a9fe0:

          FUN_00083a80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                       *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                       *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                       *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18),param_5);

        }

        else {

          iVar6 = FUN_002978a0(lVar16);

          if (iVar6 == 0) {

LAB_000a9fd4:

            iVar6 = FUN_002978a0(lVar16);

            if (iVar6 != 0) goto LAB_000a9fe0;

          }

          else {

            FUN_000839f4(param_5);

            uVar12 = _objc_retainAutoreleasedReturnValue();

            iVar6 = FUN_00083990();

            _objc_release(uVar12);

            if (iVar6 == 0) goto LAB_000a9fd4;

            FUN_0029e8a0(lVar16,extraout_x1_01,0);

          }

          FUN_002a4880(lVar16);

          lVar19 = _objc_retainAutoreleasedReturnValue();

          if (lVar19 == 0) {

            FUN_00083a80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                         *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                         *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                         *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18),param_5);

          }

          else {

            FUN_00295600(lVar16);

            local_1a8 = (double)FUN_00293720(lVar19,extraout_x1_02,param_5);

            dVar45 = param_2;

            dVar42 = param_3;

            dVar43 = param_4;

            FUN_00295600(lVar14);

            dVar30 = (double)FUN_00293720(lVar17,extraout_x1_03,param_5);

            if ((((param_3 <= 0.0) || (param_4 <= 0.0)) || (dVar42 <= 0.0)) || (dVar43 <= 0.0)) {

              FUN_00083a80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18),param_5);

            }

            else {

              dVar37 = dVar42;

              uVar7 = FUN_002249d4(param_5);

              if ((uVar7 == 0) ||

                 (dVar37 = dVar42, dVar31 = (double)_CGRectGetMaxY(dVar30,dVar45,dVar42,dVar43),

                 param_2 + 0.5 < dVar31)) {

                bVar5 = false;

                local_1b8 = param_2;

              }

              else {

                bVar5 = true;

                local_1b8 = dVar45;

              }

              FUN_000839f4(param_5);

              lVar20 = _objc_retainAutoreleasedReturnValue();

              uVar8 = FUN_00083990();

              iVar6 = FUN_000b11cc(param_5);

              local_1f0 = param_4;

              if (uVar8 == 0) {

                local_208 = 0;

                local_200 = 0;

                uVar10 = 0;

                uVar11 = 0;

                local_1a0 = 0.0;

                local_1c0 = *(double *)PTR__CGRectZero_00388bf0;

                dVar31 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

              }

              else {

                iVar9 = FUN_000b1410(lVar20);

                if (((iVar9 == 0) || (iVar9 = FUN_00004f4c(lVar20), iVar9 == 0)) ||

                   (uVar13 = FUN_00192180(lVar20), (uVar13 & 1) != 0)) {

                  local_208 = 0;

                }

                else {

                  local_208 = FUN_00192218(iVar6);

                  local_208 = local_208 ^ 1;

                }

                local_1a0 = 0.0;

                uVar10 = FUN_000b14fc(param_5,&local_1a0);

                dVar31 = local_1a0;

                if (((uVar7 | uVar10 ^ 0xffffffff) & 1) == 0) {

                  _objc_getAssociatedObject(lVar20,PTR_LOOP_003e6538);

                  lVar21 = _objc_retainAutoreleasedReturnValue();

                  if (lVar21 == 0) {

                    dStack_128 = *(double *)(PTR__CGRectZero_00388bf0 + 8);

                    local_130 = *(double *)PTR__CGRectZero_00388bf0;

                    local_118 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

                    local_120 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

                    iVar9 = FUN_00083ee4(param_5,&local_130);

                    dVar32 = 0.0;

                    lVar21 = 0;

                    if (((iVar9 != 0) && (dVar33 = dVar31 - dStack_128, 0.0 <= dVar33)) &&

                       (dVar33 <= 120.0)) {

                      FUN_002993a0(dVar33,&_OBJC_CLASS___NSNumber);

                      lVar21 = _objc_retainAutoreleasedReturnValue();

                      _objc_setAssociatedObject(lVar20,PTR_LOOP_003e6538,lVar21,1);

                      dVar32 = dVar33;

                    }

                  }

                  else {

                    dVar32 = (double)FUN_00294860(lVar21);

                  }

                  puVar4 = PTR_LOOP_003e6538;

                  dVar33 = dVar31 - local_1b8;

                  uVar10 = 0;

                  if (0.5 < dVar32) {

                    uVar10 = local_208;

                  }

                  if ((uVar10 != 1) || (dVar33 <= dVar32 + 24.0)) {

                    if ((0.0 <= dVar33) && (dVar33 <= 120.0)) {

                      FUN_002993a0(&_OBJC_CLASS___NSNumber);

                      uVar12 = _objc_retainAutoreleasedReturnValue();

                      _objc_setAssociatedObject(lVar20,puVar4,uVar12,1);

                      _objc_release(uVar12);

                    }

                  }

                  else {

                    dVar37 = param_3;

                    dVar33 = (double)_CGRectGetMaxY(local_1a8,local_1b8,param_3,param_4);

                    dVar31 = dVar31 - dVar32;

                    if ((local_1b8 + 1.0 < dVar31) && (dVar31 < dVar33 + -1.0)) {

                      local_1f0 = dVar33 - dVar31;

                      dVar32 = dVar31;

                      dVar37 = param_3;

                      dVar33 = local_1f0;

                      uVar12 = FUN_00293720(local_1a8,dVar31,param_5,extraout_x1_06,lVar19);

                      FUN_00292180(&_OBJC_CLASS___CATransaction);

                      FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_07,1);

                      FUN_0029e5e0(uVar12,dVar32,dVar37,dVar33,lVar16);

                      FUN_002930a0(&_OBJC_CLASS___CATransaction);

                      local_1b8 = dVar31;

                    }

                  }

                  _objc_release(lVar21);

                }

                local_1c0 = *(double *)PTR__CGRectZero_00388bf0;

                dVar31 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

                _objc_getAssociatedObject(param_5,PTR_LOOP_003e6408);

                local_200 = _objc_retainAutoreleasedReturnValue();

                _objc_retain();

                _objc_release(local_200);

                if (local_200 == 0) {

                  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6340);

                  local_200 = _objc_retainAutoreleasedReturnValue();

                  if (local_200 != 0) goto LAB_000aa700;

                  local_200 = 0;

                }

                else {

LAB_000aa700:

                  local_1c0 = (double)FUN_00290aa0();

                  dVar31 = dVar37;

                }

                uVar11 = FUN_000b16e0(param_5);

                if ((uVar11 & 1) == 0) {

                  _objc_getAssociatedObject(lVar20,PTR_LOOP_003e6540);

                  uVar12 = _objc_retainAutoreleasedReturnValue();

                  iVar9 = FUN_002924e0();

                  _objc_release(uVar12);

                  if (iVar9 == 0) {

                    uVar10 = 0;

                    uVar11 = 0;

                    goto LAB_000aa77c;

                  }

                }

                uVar10 = FUN_000b182c(param_5,lVar20,0,0);

              }

LAB_000aa77c:

              dVar37 = local_1a8;

              if (dVar30 <= local_1a8) {

                dVar37 = dVar30;

              }

              dVar34 = (double)_CGRectGetMaxX(local_1a8,local_1b8,param_3,local_1f0);

              dVar32 = dVar42;

              dVar33 = (double)_CGRectGetMaxX(dVar30,dVar45,dVar42,dVar43);

              if (dVar33 <= dVar34) {

                dVar33 = dVar34;

              }

              if (((uVar8 != 0) &&

                  (uVar13 = FUN_000b2180(param_5,&local_150,&local_158), (uVar13 & 1) != 0)) ||

                 (FUN_002925a0(param_5), dVar32 <= 0.5)) {

                bVar26 = false;

              }

              else if (-1.0 <= local_1a8) {

                dVar32 = param_3;

                dVar34 = (double)_CGRectGetMaxX(local_1a8,local_1b8,param_3,local_1f0);

                FUN_002925a0(param_5);

                bVar26 = dVar32 + 1.0 < dVar34;

              }

              else {

                bVar26 = true;

              }

              if (dVar31 <= 0.5) {

                uVar10 = 1;

              }

              if ((uVar10 & 1) == 0) {

                _objc_getAssociatedObject(lVar20,PTR_LOOP_003e6540);

                uVar12 = _objc_retainAutoreleasedReturnValue();

                uVar10 = FUN_002924e0();

                _objc_release(uVar12);

                if ((((uVar11 | uVar10) & 1) == 0 && !bVar26) &&

                    (dVar33 - dVar37 <= dVar31 + 12.0 || dVar31 <= 0.5)) goto LAB_000aa964;

                dVar37 = local_1b8;

                dVar33 = dVar31;

                dVar38 = local_1f0;

                dVar35 = (double)FUN_00293720(local_1c0,param_5,extraout_x1_08,lVar19);

                dVar32 = dVar37;

                dVar34 = dVar33;

                dVar41 = dVar38;

                dVar36 = (double)FUN_00295600(lVar16);

                if (((1.5 < ABS(dVar36 - dVar35)) || (1.5 < ABS(dVar32 - dVar37))) ||

                   ((1.5 < ABS(dVar34 - dVar33) || (1.5 < ABS(dVar41 - dVar38))))) {

                  FUN_00292180(&_OBJC_CLASS___CATransaction);

                  FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_09,1);

                  FUN_0029e5e0(dVar35,dVar37,dVar33,dVar38,lVar16);

                  FUN_002930a0(&_OBJC_CLASS___CATransaction);

                }

                bVar26 = true;

                local_1a8 = local_1c0;

                param_3 = dVar31;

              }

              else {

LAB_000aa964:

                bVar26 = false;

              }

              iVar9 = FUN_000b1410(lVar20);

              dVar37 = 1.0;

              if (iVar6 == 0) {

                dVar37 = 3.0;

              }

              if (iVar9 == 0) {

                dVar37 = 0.0;

              }

              uVar10 = (uVar7 ^ 1) & uVar8;

              dVar31 = 0.0;

              if (uVar10 == 0) {

                dVar31 = 6.0;

              }

              dVar32 = (double)_CGRectGetMaxY(local_1a8,local_1b8,param_3,local_1f0);

              local_1c0 = dVar45 - dVar31;

              if ((uVar10 & dVar45 < dVar32 + -1.0) == 1) {

                dStack_128 = *(double *)(PTR__CGRectZero_00388bf0 + 8);

                local_130 = *(double *)PTR__CGRectZero_00388bf0;

                local_118 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

                local_120 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

                iVar9 = FUN_00083ee4(param_5,&local_130);

                if (((iVar9 == 0) || (0.75 < ABS(local_130 - local_1a8))) ||

                   ((0.75 < ABS(dStack_128 - local_1b8) || (0.75 < ABS(local_120 - param_3))))) {

                  bVar2 = false;

                }

                else {

                  bVar2 = ABS(local_118 - local_1f0) <= 0.75;

                }

                if (local_1b8 + -0.5 <= dVar45) {

                  dVar33 = (double)_CGRectGetMaxY(dVar30,dVar45,dVar42,dVar43);

                  bVar1 = dVar33 <= dVar32 + 0.5;

                }

                else {

                  bVar1 = false;

                }

                if (!bVar2 && !bVar1) {

                  local_1c0 = dVar32;

                }

              }

              uVar10 = 0;

              if (dVar45 < dVar32 + -1.0) {

                uVar10 = uVar7;

              }

              if (uVar10 == 1) {

                local_1c0 = dVar32 - dVar31;

                if (dVar43 + 8.0 + dVar37 + 12.0 <= local_1f0) {

                  local_1c0 = ((dVar32 + -8.0) - dVar37) - dVar43;

                }

              }

              dVar31 = dVar43;

              dVar33 = (double)_CGRectGetMaxY(dVar30,local_1c0,dVar42);

              if (local_1c0 < local_1b8 + -0.5) {

                bVar5 = true;

              }

              if ((bVar5) || (dVar32 + 0.5 < dVar37 + dVar33 + 8.0)) {

                dVar45 = local_1f0;

                dVar31 = (double)_CGRectGetMaxX(local_1a8,local_1b8,param_3);

                if (!bVar26) {

                  dVar34 = dVar30 + -6.0;

                  if (local_1a8 <= dVar30) {

                    dVar34 = local_1a8;

                  }

                  dVar45 = dVar43;

                  dVar38 = (double)_CGRectGetMaxX(dVar30,local_1c0,dVar42);

                  local_1a8 = dVar34;

                  if (dVar31 < dVar38) {

                    dVar45 = dVar43;

                    dVar31 = (double)_CGRectGetMaxX(dVar30,local_1c0,dVar42);

                    dVar31 = dVar31 + 6.0;

                  }

                }

                dVar30 = dVar37 + dVar33 + 8.0;

                if (dVar30 <= dVar32) {

                  dVar30 = dVar32;

                }

                FUN_002925a0(param_5);

                dVar45 = dVar37 + dVar45;

                bVar5 = dVar45 <= local_1b8 + 0.5;

                dVar32 = dVar45;

                if (bVar5 || dVar30 <= dVar45) {

                  dVar32 = dVar30;

                }

                if ((local_208 & 1) == 0) {

                  dVar33 = 1.0;

                  if (1.0 <= local_1f0) {

                    dVar33 = local_1f0;

                  }

                  dVar34 = local_1b8 + dVar33;

                  if (local_1b8 + dVar33 <= dVar32) {

                    dVar34 = dVar32;

                  }

                }

                else {

                  dVar34 = dVar32;

                  if (dVar32 <= local_1b8) {

                    dVar34 = local_1b8 + 1.0;

                  }

                }

                dVar44 = dVar31 - local_1a8;

                dVar34 = dVar34 - local_1b8;

                dVar32 = local_1b8;

                dVar38 = dVar44;

                dVar35 = dVar34;

                dVar39 = (double)FUN_00293720(local_1a8,param_5,extraout_x1_10,lVar19);

                dVar33 = dVar32;

                dVar41 = dVar38;

                dVar36 = dVar35;

                dVar40 = (double)FUN_00295600(lVar16);

                if ((((1.5 < ABS(dVar40 - dVar39)) || (1.5 < ABS(dVar33 - dVar32))) ||

                    (1.5 < ABS(dVar41 - dVar38))) ||

                   (uVar12 = extraout_x1_11, 1.5 < ABS(dVar36 - dVar35))) {

                  FUN_00292180(&_OBJC_CLASS___CATransaction);

                  FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_12,1);

                  FUN_0029e5e0(dVar39,dVar32,dVar38,dVar35,lVar16);

                  FUN_002930a0(&_OBJC_CLASS___CATransaction);

                  uVar12 = extraout_x1_13;

                }

                if (dVar44 + -12.0 <= dVar42) {

LAB_000aad2c:

                  dVar31 = local_1a8 + (dVar44 - dVar42) * 0.5;

                }

                else if (DAT_003e7508 == 3) {

                  dVar31 = (dVar31 - dVar42) + -6.0;

                  if (iVar6 == 0) {

                    dVar31 = local_1a8 + 6.0;

                  }

                }

                else if (DAT_003e7508 == 2) {

                  dVar31 = (dVar31 - dVar42) + -6.0;

                }

                else {

                  if (DAT_003e7508 != 1) goto LAB_000aad2c;

                  dVar31 = local_1a8 + 6.0;

                }

                pdVar3 = (double *)&DAT_003e74c8;

                if (iVar6 == 0) {

                  pdVar3 = (double *)&DAT_003e74c0;

                }

                dVar32 = *pdVar3;

                if ((uVar7 & 1) == 0) {

                  dVar33 = (double)_CGRectGetMaxY(local_1a8,local_1b8,dVar44,dVar34);

                  local_1c0 = ((dVar33 + -8.0) - dVar37) - dVar43;

                  uVar12 = extraout_x1_14;

                  if (local_1c0 <= local_1b8) {

                    local_1c0 = local_1b8;

                  }

                }

                dVar37 = local_1c0;

                dVar38 = dVar42;

                dVar35 = dVar43;

                dVar39 = (double)FUN_00293720(dVar31 + dVar32,param_5,uVar12,lVar17);

                dVar33 = dVar37;

                dVar41 = dVar38;

                dVar36 = dVar35;

                dVar40 = (double)FUN_00295600(lVar14);

                if (((1.5 < ABS(dVar40 - dVar39)) || (1.5 < ABS(dVar33 - dVar37))) ||

                   ((1.5 < ABS(dVar41 - dVar38) || (1.5 < ABS(dVar36 - dVar35))))) {

                  FUN_00292180(&_OBJC_CLASS___CATransaction);

                  FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_15,1);

                  FUN_0029e5e0(dVar39,dVar37,dVar38,dVar35,lVar14);

                  FUN_002930a0(&_OBJC_CLASS___CATransaction);

                }

                FUN_00083a80(local_1a8,local_1b8,dVar44,dVar34,param_5);

                FUN_000b23c8(local_1a8,local_1b8,dVar44,dVar34,param_5);

                FUN_000b0890(dVar31 + dVar32,local_1c0,dVar42,dVar43,local_1a8,local_1b8,dVar44,

                             dVar34,param_5,iVar6);

                if (((bVar5 || dVar30 <= dVar45) || dVar30 <= dVar45 + 0.5) ||

                   (iVar6 = FUN_000b2838(lVar20), iVar6 == 0)) {

                  _objc_setAssociatedObject(param_5,PTR_LOOP_003e6420,0,1);

                  lVar21 = param_5;

                  if (lVar20 != 0) {

                    lVar21 = lVar20;

                  }

                  _objc_retain(lVar21);

                  _objc_setAssociatedObject(lVar21,PTR_LOOP_003e6418,0,1);

                  _objc_release(lVar21);

                }

                else {

                  _objc_setAssociatedObject

                            (param_5,PTR_LOOP_003e6420,PTR____kCFBooleanTrue_00388320,1);

                  FUN_000b29c4(param_5);

                }

              }

              else {

                FUN_002925a0(param_5);

                dVar31 = dVar37 + dVar31;

                uVar10 = 0;

                if (local_1b8 + 0.5 < dVar31) {

                  uVar10 = uVar8;

                }

                uVar12 = extraout_x1_16;

                if ((uVar10 == 1) &&

                   (dVar30 = (double)_CGRectGetMaxY(local_1a8,local_1b8,param_3,local_1f0),

                   uVar12 = extraout_x1_17, dVar31 + 0.5 < dVar30)) {

                  local_1f0 = dVar31 - local_1b8;

                  _CGRectGetMaxY(local_1a8,local_1b8,param_3,local_1f0);

                  dVar30 = local_1b8;

                  dVar32 = param_3;

                  dVar34 = local_1f0;

                  dVar41 = (double)FUN_00293720(local_1a8,param_5,extraout_x1_18,lVar19);

                  dVar31 = dVar30;

                  dVar33 = dVar32;

                  dVar38 = dVar34;

                  dVar35 = (double)FUN_00295600(lVar16);

                  if ((1.5 < ABS(dVar35 - dVar41)) ||

                     (((1.5 < ABS(dVar31 - dVar30) || (1.5 < ABS(dVar33 - dVar32))) ||

                      (uVar12 = extraout_x1_19, 1.5 < ABS(dVar38 - dVar34))))) {

                    FUN_00292180(&_OBJC_CLASS___CATransaction);

                    FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_20,1);

                    FUN_0029e5e0(dVar41,dVar30,dVar32,dVar34,lVar16);

                    FUN_002930a0(&_OBJC_CLASS___CATransaction);

                    uVar12 = extraout_x1_21;

                  }

                }

                if (param_3 + -12.0 <= dVar42) {

                  dVar30 = local_1a8 + (param_3 - dVar42) * 0.5;

                }

                else if (DAT_003e7508 == 3) {

                  if (iVar6 != 0) {

                    dVar30 = (double)_CGRectGetMaxX(local_1a8,local_1b8,param_3,local_1f0);

                    uVar12 = extraout_x1_26;

                    goto LAB_000ab5fc;

                  }

LAB_000ab610:

                  dVar30 = local_1a8 + 6.0;

                }

                else if (DAT_003e7508 == 2) {

                  dVar30 = (double)_CGRectGetMaxX(local_1a8,local_1b8,param_3,local_1f0);

                  uVar12 = extraout_x1_25;

LAB_000ab5fc:

                  dVar30 = (dVar30 - dVar42) + -6.0;

                }

                else {

                  if (DAT_003e7508 == 1) goto LAB_000ab610;

                  dVar30 = local_1a8 + (param_3 - dVar42) * 0.5;

                }

                pdVar3 = (double *)&DAT_003e74c8;

                if (iVar6 == 0) {

                  pdVar3 = (double *)&DAT_003e74c0;

                }

                dVar31 = *pdVar3;

                if ((uVar7 & 1) == 0) {

                  dVar45 = (double)_CGRectGetMaxY(local_1a8,local_1b8,param_3,local_1f0);

                  local_1c0 = ((dVar45 + -8.0) - dVar37) - dVar43;

                  uVar12 = extraout_x1_27;

                  dVar45 = local_1c0;

                  if (local_1c0 <= local_1b8) {

                    dVar45 = local_1b8;

                    local_1c0 = local_1b8;

                  }

                }

                dVar32 = dVar42;

                dVar34 = dVar43;

                dVar41 = (double)FUN_00293720(dVar30 + dVar31,param_5,uVar12,lVar17);

                dVar37 = dVar45;

                dVar33 = dVar32;

                dVar38 = dVar34;

                dVar35 = (double)FUN_00295600(lVar14);

                if (((1.5 < ABS(dVar35 - dVar41)) || (1.5 < ABS(dVar37 - dVar45))) ||

                   ((1.5 < ABS(dVar33 - dVar32) || (1.5 < ABS(dVar38 - dVar34))))) {

                  FUN_00292180(&_OBJC_CLASS___CATransaction);

                  FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_28,1);

                  FUN_0029e5e0(dVar41,dVar45,dVar32,dVar34,lVar14);

                  FUN_002930a0(&_OBJC_CLASS___CATransaction);

                }

                FUN_00083a80(local_1a8,local_1b8,param_3,local_1f0,param_5);

                FUN_000b23c8(local_1a8,local_1b8,param_3,local_1f0,param_5);

                FUN_000b0890(dVar30 + dVar31,local_1c0,dVar42,dVar43,local_1a8,local_1b8,param_3,

                             local_1f0,param_5,iVar6);

              }

              _objc_release(local_200);

              _objc_release(lVar20);

            }

          }

          _objc_release(lVar19);

        }

        _objc_release(lVar16);

      }

      _objc_release(lVar17);

    }

    _objc_release(lVar14);

  }

  else {

    FUN_000b0edc(param_5);

  }

  _objc_release(lVar18);

  _objc_release(param_5);

LAB_000ab7b8:

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




