// FUN_00099820 @0x99820


undefined1  [16] FUN_00099820(long param_1,undefined8 param_2)



{

  uint uVar1;

  double *pdVar2;

  undefined1 auVar3 [16];

  undefined *puVar4;

  byte bVar5;

  byte bVar6;

  uint uVar7;

  uint uVar8;

  uint uVar9;

  int iVar10;

  uint uVar11;

  uint uVar12;

  int iVar13;

  ulong uVar14;

  long lVar15;

  long lVar16;

  undefined8 uVar17;

  long lVar18;

  long lVar19;

  long lVar20;

  long lVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  float fVar24;

  float fVar25;

  double dVar26;

  undefined1 auVar27 [16];

  double dVar28;

  undefined8 uVar29;

  double dVar30;

  long local_78;

  

  uVar14 = FUN_000a89d8();

  if ((uVar14 & 1) == 0) {

    DAT_003e7b40 = DAT_003e7b40 + 1;

    auVar27 = (*DAT_003e7898)(param_1,param_2);

    DAT_003e7b40 = DAT_003e7b40 + -1;

    return auVar27;

  }

  if (((DAT_003e7a2f & 1) != 0) || (DAT_003e7a2e != '\0')) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

    lVar15 = _objc_retainAutoreleasedReturnValue();

    if ((lVar15 != 0) && (fVar24 = (float)FUN_00295480(lVar15), 0.0 < fVar24)) {

      fVar24 = (float)FUN_00295480(lVar15);

      dVar28 = (double)fVar24;

      uVar29 = 0;

      param_1 = lVar15;

      goto LAB_0009a7c0;

    }

    _objc_release(lVar15);

  }

  DAT_003e7b40 = DAT_003e7b40 + 1;

  auVar27 = (*DAT_003e7898)(param_1,param_2);

  uVar29 = auVar27._8_8_;

  dVar28 = auVar27._0_8_;

  DAT_003e7b40 = DAT_003e7b40 + -1;

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

  lVar15 = _objc_retainAutoreleasedReturnValue();

  if ((lVar15 == 0) || (fVar24 = (float)FUN_00295480(lVar15), fVar24 <= 0.0)) {

LAB_000999a0:

    _objc_release(lVar15);

    uVar14 = FUN_000af458(param_1);

    auVar27._8_8_ = uVar29;

    auVar27._0_8_ = dVar28;

    if ((uVar14 & 1) != 0) {

      return auVar27;

    }

    if (DAT_003e76c0 == 0) {

      DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

    }

    lVar15 = DAT_003e76c0;

    _objc_retain(DAT_003e76c0);

    _objc_autorelease(lVar15);

    uVar14 = _objc_opt_isKindOfClass(param_1,lVar15);

    if ((uVar14 & 1) == 0) {

      _objc_retain(param_1);

      FUN_00298ce0(param_1);

      uVar17 = _objc_retainAutoreleasedReturnValue();

      iVar10 = FUN_000a96c8(param_1);

      if (iVar10 == 0) {

        if (DAT_003e7b50 == 0) {

          bVar5 = 0;

        }

        else {

          bVar5 = _objc_opt_isKindOfClass(param_1);

        }

        if (DAT_003e7b58 == 0) {

          bVar6 = 0;

        }

        else {

          bVar6 = _objc_opt_isKindOfClass(param_1);

        }

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e64b0);

        auVar27 = _objc_retainAutoreleasedReturnValue();

        lVar15 = auVar27._0_8_;

        if ((lVar15 == 0) ||

           (uVar14 = FUN_00297820(lVar15,auVar27._8_8_,DAT_003e7488), (uVar14 & 1) == 0)) {

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

          lVar16 = _objc_retainAutoreleasedReturnValue();

          if ((lVar16 != 0) && (fVar24 = (float)FUN_00295480(lVar16), 0.0 < fVar24)) {

            fVar24 = (float)FUN_00295480(lVar16);

            dVar28 = (double)fVar24;

            uVar29 = 0;

          }

        }

        else {

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e5ce0);

          lVar16 = _objc_retainAutoreleasedReturnValue();

          if (lVar16 == 0) {

            _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

            lVar18 = _objc_retainAutoreleasedReturnValue();

            if ((lVar18 != 0) && (fVar24 = (float)FUN_00295480(lVar18), 0.0 < fVar24)) {

              fVar24 = (float)FUN_00295480(lVar18);

              dVar28 = (double)fVar24;

              uVar29 = 0;

            }

          }

          else {

            _objc_getAssociatedObject(param_1,PTR_LOOP_003e6540);

            uVar29 = _objc_retainAutoreleasedReturnValue();

            uVar9 = FUN_002924e0();

            _objc_release(uVar29);

            _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

            lVar18 = _objc_retainAutoreleasedReturnValue();

            if ((lVar18 == 0 || (uVar9 & 1) != 0) ||

               (fVar24 = (float)FUN_00295480(lVar18), fVar24 <= 0.0)) {

LAB_0009a13c:

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e64e8);

              lVar19 = _objc_retainAutoreleasedReturnValue();

              fVar24 = (float)FUN_00295480();

              puVar4 = PTR_LOOP_003e64e8;

              dVar26 = dVar28;

              if (fVar24 == 0.0) {

                FUN_002993a0(dVar28,&_OBJC_CLASS___NSNumber);

                uVar29 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(param_1,puVar4,uVar29,1);

LAB_0009a194:

                _objc_release(uVar29);

              }

              else {

                if (((bVar5 & 30.0 < dVar28) == 1) && (1.0 <= ABS((double)fVar24 - dVar28))) {

                  FUN_002993a0(dVar28,&_OBJC_CLASS___NSNumber);

                  uVar29 = _objc_retainAutoreleasedReturnValue();

                  _objc_setAssociatedObject(param_1,puVar4,uVar29,1);

                  goto LAB_0009a194;

                }

                if (uVar9 == 0) {

                  dVar26 = (double)fVar24;

                }

              }

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc0);

              uVar29 = _objc_retainAutoreleasedReturnValue();

              iVar10 = FUN_002924e0();

              _objc_release(uVar29);

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e6480);

              uVar29 = _objc_retainAutoreleasedReturnValue();

              iVar13 = FUN_002924e0();

              _objc_release(uVar29);

              dVar28 = DAT_003e7b48;

              if (iVar10 == 0) {

                uVar14 = FUN_002924e0(lVar16);

                _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc8);

                uVar29 = _objc_retainAutoreleasedReturnValue();

                uVar9 = FUN_002924e0();

                _objc_release(uVar29);

                if ((uVar14 & 1) == 0) {

                  dVar26 = dVar26 + -10.0;

                }

                else {

                  FUN_000a1fe0();

                  uVar29 = _objc_retainAutoreleasedReturnValue();

                  FUN_002985c0(uVar17);

                  auVar27 = _objc_retainAutoreleasedReturnValue();

                  iVar10 = FUN_00297820(auVar27._0_8_,auVar27._8_8_,uVar29);

                  _objc_release(auVar27._0_8_);

                  if (iVar10 == 0) {

                    iVar10 = FUN_000a8a64(uVar17);

                    if (iVar10 == 0) {

                      dVar26 = dVar26 + -10.0;

                    }

                    else {

                      _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a0);

                      lVar20 = _objc_retainAutoreleasedReturnValue();

                      if (lVar20 == 0) {

                        bVar5 = (bVar5 | bVar6) ^ 1;

                      }

                      else {

                        bVar5 = FUN_002924e0(lVar20);

                      }

                      _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cd0);

                      uVar22 = _objc_retainAutoreleasedReturnValue();

                      uVar11 = FUN_002924e0();

                      _objc_release(uVar22);

                      dVar30 = -10.0;

                      if ((uVar11 & uVar9) == 0) {

                        dVar30 = -23.0;

                      }

                      if ((bVar5 & 1) == 0) {

                        dVar30 = -10.0;

                      }

                      dVar26 = dVar26 + dVar30;

                      _objc_release(lVar20);

                    }

                  }

                  else {

                    dVar26 = dVar26 + -10.0;

                  }

                  _objc_release(uVar29);

                }

                dVar26 = dVar26 - dVar28;

                if (dVar26 <= 30.0) {

                  dVar26 = 30.0;

                }

                iVar10 = FUN_000b2838(param_1);

                puVar4 = PTR_LOOP_003e64a8;

                dVar28 = dVar26 + 3.0;

                if (iVar10 == 0) {

                  dVar28 = dVar26;

                }

                uVar29 = 0;

                FUN_002993a0(dVar28,&_OBJC_CLASS___NSNumber);

                uVar22 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(param_1,puVar4,uVar22,1);

              }

              else {

                if (iVar13 != 0) {

                  _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a0);

                  lVar20 = _objc_retainAutoreleasedReturnValue();

                  if (lVar20 == 0) {

                    uVar9 = 1;

                  }

                  else {

                    uVar9 = FUN_002924e0(lVar20);

                  }

                  _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cd8);

                  uVar29 = _objc_retainAutoreleasedReturnValue();

                  iVar10 = FUN_002924e0();

                  if (iVar10 == 0) {

                    uVar11 = 0;

                  }

                  else {

                    uVar11 = FUN_00192180(param_1);

                  }

                  _objc_release(uVar29);

                  FUN_000a1fe0();

                  uVar29 = _objc_retainAutoreleasedReturnValue();

                  uVar7 = FUN_000a8a64(uVar17);

                  if (((uVar9 | uVar7 ^ 0xffffffff) & 1) == 0) {

                    FUN_002985c0(uVar17);

                    auVar27 = _objc_retainAutoreleasedReturnValue();

                    uVar9 = FUN_00297820(auVar27._0_8_,auVar27._8_8_,uVar29);

                    _objc_release(auVar27._0_8_);

                    if (((uVar9 | uVar11) & 1) == 0) {

                      dVar26 = dVar26 + 13.0;

                    }

                  }

                  if ((uVar11 & 1) == 0) {

                    iVar10 = FUN_000a8a64(uVar17);

                    pdVar2 = (double *)&DAT_003e6488;

                    if (iVar10 == 0) {

                      pdVar2 = (double *)&DAT_003e6490;

                    }

                    dVar30 = *pdVar2;

                    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6498);

                    uVar22 = _objc_retainAutoreleasedReturnValue();

                    iVar10 = FUN_002924e0();

                    _objc_release(uVar22);

                    dVar28 = dVar30 * 0.5;

                    if (iVar10 == 0) {

                      dVar28 = dVar30;

                    }

                    dVar26 = dVar26 - dVar28;

                    if (dVar26 <= 30.0) {

                      dVar26 = 30.0;

                    }

                  }

                  _objc_release(uVar29);

                  _objc_release(lVar20);

                }

                iVar10 = FUN_000b2838(param_1);

                puVar4 = PTR_LOOP_003e64a8;

                dVar28 = dVar26 + 3.0;

                if (iVar10 == 0) {

                  dVar28 = dVar26;

                }

                uVar29 = 0;

                FUN_002993a0(dVar28,&_OBJC_CLASS___NSNumber);

                uVar22 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(param_1,puVar4,uVar22,1);

              }

              _objc_release(uVar22);

            }

            else {

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e64e8);

              lVar19 = _objc_retainAutoreleasedReturnValue();

              if ((lVar19 == 0) ||

                 (fVar25 = (float)FUN_00295480(), 1.0 <= ABS((double)fVar25 - dVar28))) {

                _objc_release(lVar19);

                goto LAB_0009a13c;

              }

              dVar28 = (double)fVar24;

              uVar29 = 0;

            }

            _objc_release(lVar19);

          }

          _objc_release(lVar18);

        }

        _objc_release(lVar16);

        _objc_release(lVar15);

      }

      _objc_release(uVar17);

      goto LAB_0009a7c0;

    }

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

    auVar27 = _objc_retainAutoreleasedReturnValue();

    uVar17 = auVar27._8_8_;

    lVar15 = auVar27._0_8_;

    if ((lVar15 != 0) && (fVar24 = (float)FUN_00295480(lVar15), uVar17 = extraout_x1, 0.0 < fVar24))

    {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e64e8);

      lVar16 = _objc_retainAutoreleasedReturnValue();

      if ((lVar16 != 0) &&

         (fVar24 = (float)FUN_00295480(lVar16), ABS((double)fVar24 - dVar28) < 1.0)) {

        fVar24 = (float)FUN_00295480(lVar15);

        goto LAB_00099990;

      }

      _objc_release(lVar16);

      uVar17 = extraout_x1_00;

    }

    FUN_002a6080(param_1,uVar17,&cf_parentModel);

    lVar16 = _objc_retainAutoreleasedReturnValue();

    if (lVar16 == 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

      lVar18 = _objc_retainAutoreleasedReturnValue();

      if ((lVar18 != 0) && (fVar24 = (float)FUN_00295480(lVar18), 0.0 < fVar24)) {

        fVar24 = (float)FUN_00295480(lVar18);

        dVar28 = (double)fVar24;

        uVar29 = 0;

      }

    }

    else {

      uVar14 = FUN_000a96c8(lVar16);

      puVar4 = PTR_LOOP_003e64e8;

      if ((uVar14 & 1) != 0) goto LAB_0009a4d8;

      FUN_002993a0(dVar28,&_OBJC_CLASS___NSNumber);

      uVar17 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_1,puVar4,uVar17,1);

      _objc_release(uVar17);

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e5ce0);

      lVar18 = _objc_retainAutoreleasedReturnValue();

      if (lVar18 == 0) {

        _objc_getAssociatedObject(lVar16,PTR_LOOP_003e64b0);

        auVar27 = _objc_retainAutoreleasedReturnValue();

        local_78 = auVar27._0_8_;

        if ((local_78 == 0) ||

           (uVar14 = FUN_00297820(local_78,auVar27._8_8_,DAT_003e7488), (uVar14 & 1) == 0)) {

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

          lVar19 = _objc_retainAutoreleasedReturnValue();

          if ((lVar19 != 0) && (fVar24 = (float)FUN_00295480(lVar19), 0.0 < fVar24)) {

            fVar24 = (float)FUN_00295480(lVar19);

LAB_0009a01c:

            dVar28 = (double)fVar24;

            uVar29 = 0;

          }

        }

        else {

          _objc_getAssociatedObject(lVar16,PTR_LOOP_003e5ce0);

          lVar19 = _objc_retainAutoreleasedReturnValue();

          if (lVar19 != 0) {

            uVar7 = FUN_002924e0(lVar19);

            _objc_getAssociatedObject(lVar16,PTR_LOOP_003e5cc0);

            uVar17 = _objc_retainAutoreleasedReturnValue();

            uVar8 = FUN_002924e0();

            _objc_release(uVar17);

            _objc_getAssociatedObject(lVar16,PTR_LOOP_003e5cc8);

            uVar17 = _objc_retainAutoreleasedReturnValue();

            uVar9 = FUN_002924e0();

            _objc_release(uVar17);

            _objc_getAssociatedObject(lVar16,PTR_LOOP_003e5cd0);

            uVar17 = _objc_retainAutoreleasedReturnValue();

            iVar10 = FUN_002924e0();

            _objc_release(uVar17);

            _objc_getAssociatedObject(lVar16,PTR_LOOP_003e6478);

            uVar17 = _objc_retainAutoreleasedReturnValue();

            uVar11 = FUN_002924e0();

            _objc_release(uVar17);

            _objc_getAssociatedObject(lVar16,PTR_LOOP_003e64a0);

            lVar20 = _objc_retainAutoreleasedReturnValue();

            _objc_release(lVar19);

            _objc_release(local_78);

            local_78 = lVar20;

            goto LAB_00099c18;

          }

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

          lVar19 = _objc_retainAutoreleasedReturnValue();

          if ((lVar19 != 0) && (fVar24 = (float)FUN_00295480(lVar19), 0.0 < fVar24)) {

            fVar24 = (float)FUN_00295480(lVar19);

            goto LAB_0009a01c;

          }

        }

      }

      else {

        uVar7 = FUN_002924e0(lVar18);

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc0);

        uVar17 = _objc_retainAutoreleasedReturnValue();

        uVar8 = FUN_002924e0();

        _objc_release(uVar17);

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc8);

        uVar17 = _objc_retainAutoreleasedReturnValue();

        uVar9 = FUN_002924e0();

        _objc_release(uVar17);

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cd0);

        uVar17 = _objc_retainAutoreleasedReturnValue();

        iVar10 = FUN_002924e0();

        _objc_release(uVar17);

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e6478);

        uVar17 = _objc_retainAutoreleasedReturnValue();

        uVar11 = FUN_002924e0();

        _objc_release(uVar17);

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a0);

        local_78 = _objc_retainAutoreleasedReturnValue();

LAB_00099c18:

        auVar27 = _objc_opt_respondsToSelector(lVar16,"subViewModels");

        if ((auVar27._0_8_ & 1) == 0) {

LAB_00099e9c:

          lVar19 = 0;

        }

        else {

          FUN_002a6080(lVar16,auVar27._8_8_,&cf_subViewModels);

          lVar19 = _objc_retainAutoreleasedReturnValue();

          if (lVar19 == 0) goto LAB_00099e9c;

          lVar20 = FUN_00293860();

          if (lVar20 != 0) {

            FUN_00295440(lVar19);

            lVar20 = _objc_retainAutoreleasedReturnValue();

            FUN_00297d80(lVar19);

            lVar21 = _objc_retainAutoreleasedReturnValue();

            _objc_getAssociatedObject(lVar16,PTR_LOOP_003e65a0);

            uVar17 = _objc_retainAutoreleasedReturnValue();

            uVar12 = FUN_002924e0();

            _objc_release(uVar17);

            _objc_getAssociatedObject(lVar16,PTR_LOOP_003e5cd8);

            uVar17 = _objc_retainAutoreleasedReturnValue();

            iVar13 = FUN_002924e0();

            if (iVar13 == 0) {

              _objc_release(uVar17);

LAB_0009a070:

              if (iVar10 == 0) goto LAB_0009a090;

              uVar1 = 0;

              if (param_1 == lVar20) {

                uVar1 = uVar9;

              }

              if ((uVar1 & 1) == 0) {

                if ((param_1 == lVar20 & uVar7 & uVar11) == 0) {

                  uVar12 = param_1 != lVar20 | uVar9 | uVar8 ^ 1 | uVar12;

                }

              }

              else {

                uVar12 = 1;

              }

            }

            else {

              uVar14 = FUN_00192180(lVar16);

              _objc_release(uVar17);

              if ((uVar14 & 1) == 0) goto LAB_0009a070;

LAB_0009a090:

              uVar12 = param_1 != lVar20 | uVar12 | uVar7 ^ 1;

            }

            _objc_getAssociatedObject(lVar16,PTR_LOOP_003e64d8);

            uVar17 = _objc_retainAutoreleasedReturnValue();

            uVar9 = FUN_002924e0();

            _objc_release(uVar17);

            uVar17 = extraout_x1_01;

            if (((uVar12 | uVar9) & 1) == 0) {

              FUN_002a6080(lVar16,extraout_x1_01,&cf_messageWrap);

              uVar17 = _objc_retainAutoreleasedReturnValue();

              FUN_000a1fe0();

              uVar22 = _objc_retainAutoreleasedReturnValue();

              FUN_002985c0(uVar17);

              auVar27 = _objc_retainAutoreleasedReturnValue();

              uVar23 = auVar27._0_8_;

              uVar14 = FUN_00297820(uVar23,auVar27._8_8_,uVar22);

              if ((uVar14 & 1) == 0) {

                iVar10 = FUN_000a8a64(uVar17);

                _objc_release(uVar23);

                if ((iVar10 != 0) &&

                   ((local_78 == 0 || (iVar10 = FUN_002924e0(local_78), iVar10 != 0)))) {

                  dVar28 = dVar28 + -13.0;

                  uVar29 = 0;

                  if (dVar28 <= 30.0) {

                    dVar28 = 30.0;

                    uVar29 = 0;

                  }

                }

              }

              else {

                _objc_release(uVar23);

              }

              _objc_release(uVar22);

              _objc_release(uVar17);

              uVar17 = extraout_x1_02;

            }

            dVar26 = DAT_003e7b48;

            if (param_1 == lVar21 && (uVar8 & 1) == 0) {

              if (uVar7 != 0) {

                FUN_002a6080(lVar16,uVar17,&cf_messageWrap);

                uVar29 = _objc_retainAutoreleasedReturnValue();

                FUN_000a1fe0();

                uVar17 = _objc_retainAutoreleasedReturnValue();

                FUN_002985c0(uVar29);

                auVar27 = _objc_retainAutoreleasedReturnValue();

                uVar14 = FUN_00297820(auVar27._0_8_,auVar27._8_8_,uVar17);

                _objc_release(auVar27._0_8_);

                if ((uVar14 & 1) == 0) {

                  FUN_000a8a64(uVar29);

                }

                _objc_release(uVar17);

                _objc_release(uVar29);

              }

              dVar28 = (dVar28 + -10.0) - dVar26;

              uVar29 = 0;

              if (dVar28 <= 30.0) {

                dVar28 = 30.0;

                uVar29 = 0;

              }

            }

            _objc_release(lVar21);

            _objc_release(lVar20);

          }

        }

        puVar4 = PTR_LOOP_003e64a8;

        FUN_002993a0(dVar28,&_OBJC_CLASS___NSNumber);

        uVar17 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_1,puVar4,uVar17,1);

        _objc_release(uVar17);

      }

      _objc_release(lVar19);

      _objc_release(local_78);

    }

    _objc_release(lVar18);

  }

  else {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e64e8);

    lVar16 = _objc_retainAutoreleasedReturnValue();

    if ((lVar16 == 0) || (fVar24 = (float)FUN_00295480(lVar16), 1.0 <= ABS((double)fVar24 - dVar28))

       ) {

      _objc_release(lVar16);

      goto LAB_000999a0;

    }

    fVar24 = (float)FUN_00295480(lVar15);

LAB_00099990:

    dVar28 = (double)fVar24;

    uVar29 = 0;

  }

LAB_0009a4d8:

  param_1 = lVar15;

  _objc_release(lVar16);

LAB_0009a7c0:

  _objc_release(param_1);

  auVar3._8_8_ = uVar29;

  auVar3._0_8_ = dVar28;

  return auVar3;

}




