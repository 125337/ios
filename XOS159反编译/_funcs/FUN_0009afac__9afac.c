// FUN_0009afac @0x9afac


undefined1  [16] FUN_0009afac(undefined8 param_1,undefined8 param_2)



{

  double *pdVar1;

  undefined1 auVar2 [16];

  undefined *puVar3;

  int iVar4;

  int iVar5;

  uint uVar6;

  uint uVar7;

  uint uVar8;

  ulong uVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  undefined8 uVar14;

  long lVar15;

  undefined8 uVar16;

  long lVar17;

  long lVar18;

  float fVar19;

  double dVar20;

  double dVar21;

  undefined1 auVar22 [16];

  double dVar23;

  undefined8 uVar24;

  double dVar25;

  

  FUN_000a9154(param_1,0);

  uVar9 = FUN_000a89d8();

  if ((uVar9 & 1) == 0) {

    DAT_003e7b40 = DAT_003e7b40 + 1;

    auVar22 = (*DAT_003e78a8)(param_1,param_2);

    DAT_003e7b40 = DAT_003e7b40 + -1;

    return auVar22;

  }

  if (((DAT_003e7a2f & 1) != 0) || (DAT_003e7a2e != '\0')) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

    lVar10 = _objc_retainAutoreleasedReturnValue();

    if ((lVar10 != 0) && (fVar19 = (float)FUN_00295480(lVar10), 0.0 < fVar19)) {

      fVar19 = (float)FUN_00295480(lVar10);

      dVar23 = (double)fVar19;

      uVar24 = 0;

      goto LAB_0009b314;

    }

    _objc_release(lVar10);

  }

  DAT_003e7b40 = DAT_003e7b40 + 1;

  auVar22 = (*DAT_003e78a8)(param_1,param_2);

  uVar24 = auVar22._8_8_;

  dVar23 = auVar22._0_8_;

  DAT_003e7b40 = DAT_003e7b40 + -1;

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

  lVar10 = _objc_retainAutoreleasedReturnValue();

  if ((lVar10 == 0) || (fVar19 = (float)FUN_00295480(lVar10), fVar19 <= 0.0)) {

LAB_0009b130:

    _objc_release(lVar10);

    uVar9 = FUN_000af458(param_1);

    auVar22._8_8_ = uVar24;

    auVar22._0_8_ = dVar23;

    if ((uVar9 & 1) != 0) {

      return auVar22;

    }

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e64b0);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    lVar10 = auVar22._0_8_;

    if ((lVar10 == 0) || (uVar9 = FUN_00297820(lVar10,auVar22._8_8_,DAT_003e7488), (uVar9 & 1) == 0)

       ) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

      lVar11 = _objc_retainAutoreleasedReturnValue();

      if ((lVar11 != 0) && (fVar19 = (float)FUN_00295480(lVar11), 0.0 < fVar19)) {

        fVar19 = (float)FUN_00295480(lVar11);

        goto LAB_0009b304;

      }

    }

    else {

      FUN_00298ce0(param_1);

      lVar11 = _objc_retainAutoreleasedReturnValue();

      uVar9 = FUN_000a96c8(param_1);

      if ((uVar9 & 1) == 0) {

        auVar22 = _objc_opt_respondsToSelector(param_1,"subViewModels");

        if ((auVar22._0_8_ & 1) == 0) {

LAB_0009b348:

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e5ce0);

          lVar12 = _objc_retainAutoreleasedReturnValue();

          if (lVar12 == 0) goto LAB_0009b308;

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e64e8);

          uVar14 = _objc_retainAutoreleasedReturnValue();

          fVar19 = (float)FUN_00295480();

          puVar3 = PTR_LOOP_003e64e8;

          if (fVar19 == 0.0) {

            FUN_002993a0(dVar23,&_OBJC_CLASS___NSNumber);

            uVar24 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(param_1,puVar3,uVar24,1);

            _objc_release(uVar24);

            dVar20 = dVar23;

          }

          else {

            dVar20 = (double)fVar19;

          }

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc0);

          uVar24 = _objc_retainAutoreleasedReturnValue();

          iVar4 = FUN_002924e0();

          _objc_release(uVar24);

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e6480);

          uVar24 = _objc_retainAutoreleasedReturnValue();

          iVar5 = FUN_002924e0();

          _objc_release(uVar24);

          dVar23 = DAT_003e7b48;

          if (iVar4 == 0) {

            uVar9 = FUN_002924e0(lVar12);

            _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc8);

            uVar24 = _objc_retainAutoreleasedReturnValue();

            uVar6 = FUN_002924e0();

            _objc_release(uVar24);

            if ((uVar9 & 1) == 0) {

              dVar20 = dVar20 + -10.0;

            }

            else {

              FUN_000a1fe0();

              uVar24 = _objc_retainAutoreleasedReturnValue();

              FUN_002985c0(lVar11);

              auVar22 = _objc_retainAutoreleasedReturnValue();

              iVar4 = FUN_00297820(auVar22._0_8_,auVar22._8_8_,uVar24);

              _objc_release(auVar22._0_8_);

              if ((iVar4 == 0) && (iVar4 = FUN_000a8a64(lVar11), iVar4 != 0)) {

                _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a0);

                lVar13 = _objc_retainAutoreleasedReturnValue();

                if (lVar13 == 0) {

                  uVar7 = 1;

                }

                else {

                  uVar7 = FUN_002924e0();

                }

                _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cd0);

                uVar16 = _objc_retainAutoreleasedReturnValue();

                uVar8 = FUN_002924e0();

                _objc_release(uVar16);

                dVar25 = -10.0;

                if (lVar13 != 0) {

                  dVar25 = -23.0;

                }

                dVar21 = -23.0;

                if (uVar6 == 0) {

                  dVar21 = dVar25;

                }

                dVar25 = -10.0;

                if (((uVar8 & uVar6 & uVar7 | uVar7 ^ 0xffffffff) & 1) == 0) {

                  dVar25 = dVar21;

                }

                dVar20 = dVar20 + dVar25;

                _objc_release();

              }

              else {

                dVar20 = dVar20 + -10.0;

              }

              _objc_release(uVar24);

            }

            dVar20 = dVar20 - dVar23;

            if (dVar20 <= 30.0) {

              dVar20 = 30.0;

            }

            iVar4 = FUN_000b2838(param_1);

            puVar3 = PTR_LOOP_003e64a8;

            dVar23 = dVar20 + 3.0;

            if (iVar4 == 0) {

              dVar23 = dVar20;

            }

            uVar24 = 0;

            FUN_002993a0(dVar23,&_OBJC_CLASS___NSNumber);

            uVar16 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(param_1,puVar3,uVar16,1);

          }

          else {

            if (iVar5 != 0) {

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a0);

              lVar13 = _objc_retainAutoreleasedReturnValue();

              if (lVar13 == 0) {

                uVar6 = 1;

              }

              else {

                uVar6 = FUN_002924e0(lVar13);

              }

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cd8);

              uVar24 = _objc_retainAutoreleasedReturnValue();

              iVar4 = FUN_002924e0();

              if (iVar4 == 0) {

                uVar7 = 0;

              }

              else {

                uVar7 = FUN_00192180(param_1);

              }

              _objc_release(uVar24);

              FUN_000a1fe0();

              uVar24 = _objc_retainAutoreleasedReturnValue();

              uVar8 = FUN_000a8a64(lVar11);

              if (((uVar6 | uVar8 ^ 0xffffffff) & 1) == 0) {

                FUN_002985c0(lVar11);

                auVar22 = _objc_retainAutoreleasedReturnValue();

                uVar6 = FUN_00297820(auVar22._0_8_,auVar22._8_8_,uVar24);

                _objc_release(auVar22._0_8_);

                if (((uVar6 | uVar7) & 1) == 0) {

                  dVar20 = dVar20 + 13.0;

                }

              }

              if ((uVar7 & 1) == 0) {

                iVar4 = FUN_000a8a64(lVar11);

                pdVar1 = (double *)&DAT_003e6488;

                if (iVar4 == 0) {

                  pdVar1 = (double *)&DAT_003e6490;

                }

                dVar25 = *pdVar1;

                _objc_getAssociatedObject(param_1,PTR_LOOP_003e6498);

                uVar16 = _objc_retainAutoreleasedReturnValue();

                iVar4 = FUN_002924e0();

                _objc_release(uVar16);

                dVar23 = dVar25 * 0.5;

                if (iVar4 == 0) {

                  dVar23 = dVar25;

                }

                dVar20 = dVar20 - dVar23;

                if (dVar20 <= 30.0) {

                  dVar20 = 30.0;

                }

              }

              _objc_release(uVar24);

              _objc_release(lVar13);

            }

            iVar4 = FUN_000b2838(param_1);

            puVar3 = PTR_LOOP_003e64a8;

            dVar23 = dVar20 + 3.0;

            if (iVar4 == 0) {

              dVar23 = dVar20;

            }

            uVar24 = 0;

            FUN_002993a0(dVar23,&_OBJC_CLASS___NSNumber);

            uVar16 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(param_1,puVar3,uVar16,1);

          }

          _objc_release(uVar16);

          _objc_release(uVar14);

        }

        else {

          FUN_002a6080(param_1,auVar22._8_8_,&cf_subViewModels);

          lVar12 = _objc_retainAutoreleasedReturnValue();

          if ((lVar12 == 0) || (uVar9 = FUN_00293860(lVar12), uVar9 < 2)) {

            _objc_release(lVar12);

            goto LAB_0009b348;

          }

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e5ce0);

          lVar13 = _objc_retainAutoreleasedReturnValue();

          if (lVar13 == 0) {

            _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a8);

            lVar15 = _objc_retainAutoreleasedReturnValue();

            if ((lVar15 != 0) && (fVar19 = (float)FUN_00295480(), 0.0 < fVar19)) {

              fVar19 = (float)FUN_00295480(lVar15);

              dVar23 = (double)fVar19;

              uVar24 = 0;

            }

          }

          else {

            _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc0);

            uVar14 = _objc_retainAutoreleasedReturnValue();

            iVar4 = FUN_002924e0();

            _objc_release(uVar14);

            _objc_getAssociatedObject(param_1,PTR_LOOP_003e6480);

            uVar14 = _objc_retainAutoreleasedReturnValue();

            iVar5 = FUN_002924e0();

            _objc_release(uVar14);

            uVar9 = FUN_002924e0(lVar13);

            _objc_getAssociatedObject(param_1,PTR_LOOP_003e64e8);

            lVar15 = _objc_retainAutoreleasedReturnValue();

            if ((lVar15 == 0) || (fVar19 = (float)FUN_00295480(), fVar19 == 0.0)) {

              puVar3 = PTR_LOOP_003e64e8;

              FUN_002993a0(dVar23,&_OBJC_CLASS___NSNumber);

              uVar14 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(param_1,puVar3,uVar14,1);

              _objc_release(uVar14);

            }

            else {

              fVar19 = (float)FUN_00295480(lVar15);

              dVar23 = (double)fVar19;

              uVar24 = 0;

            }

            dVar20 = DAT_003e7b48;

            if (iVar4 == 0) {

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc8);

              uVar24 = _objc_retainAutoreleasedReturnValue();

              uVar6 = FUN_002924e0();

              _objc_release(uVar24);

              if ((uVar9 & 1) == 0) {

                dVar23 = dVar23 + -10.0;

              }

              else {

                FUN_000a1fe0();

                uVar24 = _objc_retainAutoreleasedReturnValue();

                FUN_002985c0(lVar11);

                auVar22 = _objc_retainAutoreleasedReturnValue();

                iVar4 = FUN_00297820(auVar22._0_8_,auVar22._8_8_,uVar24);

                _objc_release(auVar22._0_8_);

                if ((iVar4 == 0) && (iVar4 = FUN_000a8a64(lVar11), iVar4 != 0)) {

                  _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a0);

                  lVar17 = _objc_retainAutoreleasedReturnValue();

                  if (lVar17 == 0) {

                    uVar7 = 1;

                  }

                  else {

                    uVar7 = FUN_002924e0();

                  }

                  _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cd0);

                  uVar14 = _objc_retainAutoreleasedReturnValue();

                  uVar8 = FUN_002924e0();

                  _objc_release(uVar14);

                  _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a0);

                  lVar18 = _objc_retainAutoreleasedReturnValue();

                  dVar25 = -10.0;

                  if (lVar18 != 0) {

                    dVar25 = -23.0;

                  }

                  dVar21 = -23.0;

                  if (uVar6 == 0) {

                    dVar21 = dVar25;

                  }

                  dVar25 = -10.0;

                  if (((uVar8 & uVar6 & uVar7 | uVar7 ^ 0xffffffff) & 1) == 0) {

                    dVar25 = dVar21;

                  }

                  dVar23 = dVar23 + dVar25;

                  _objc_release();

                  _objc_release(lVar17);

                }

                else {

                  dVar23 = dVar23 + -10.0;

                }

                _objc_release(uVar24);

              }

              dVar23 = dVar23 - dVar20;

              uVar24 = 0;

              if (dVar23 <= 30.0) {

                dVar23 = 30.0;

                uVar24 = 0;

              }

            }

            else if (iVar5 != 0) {

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e64a0);

              lVar17 = _objc_retainAutoreleasedReturnValue();

              if (lVar17 == 0) {

                uVar6 = 1;

              }

              else {

                uVar6 = FUN_002924e0(lVar17);

              }

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cd8);

              uVar14 = _objc_retainAutoreleasedReturnValue();

              iVar4 = FUN_002924e0();

              if (iVar4 == 0) {

                uVar7 = 0;

              }

              else {

                uVar7 = FUN_00192180(param_1);

              }

              _objc_release(uVar14);

              FUN_000a1fe0();

              uVar14 = _objc_retainAutoreleasedReturnValue();

              uVar8 = FUN_000a8a64(lVar11);

              if (((uVar6 | uVar8 ^ 0xffffffff) & 1) == 0) {

                FUN_002985c0(lVar11);

                auVar22 = _objc_retainAutoreleasedReturnValue();

                uVar6 = FUN_00297820(auVar22._0_8_,auVar22._8_8_,uVar14);

                _objc_release(auVar22._0_8_);

                uVar24 = 0;

                if (((uVar6 | uVar7) & 1) == 0) {

                  uVar24 = 0;

                  dVar23 = dVar23 + 13.0;

                }

              }

              if ((uVar7 & 1) == 0) {

                iVar4 = FUN_000a8a64(lVar11);

                pdVar1 = (double *)&DAT_003e6488;

                if (iVar4 == 0) {

                  pdVar1 = (double *)&DAT_003e6490;

                }

                dVar25 = *pdVar1;

                _objc_getAssociatedObject(param_1,PTR_LOOP_003e6498);

                uVar24 = _objc_retainAutoreleasedReturnValue();

                iVar4 = FUN_002924e0();

                _objc_release(uVar24);

                dVar20 = dVar25 * 0.5;

                if (iVar4 == 0) {

                  dVar20 = dVar25;

                }

                dVar23 = dVar23 - dVar20;

                uVar24 = 0;

                if (dVar23 <= 30.0) {

                  dVar23 = 30.0;

                  uVar24 = 0;

                }

              }

              _objc_release(uVar14);

              _objc_release(lVar17);

            }

            puVar3 = PTR_LOOP_003e64a8;

            FUN_002993a0(dVar23,&_OBJC_CLASS___NSNumber);

            uVar14 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(param_1,puVar3,uVar14,1);

            _objc_release(uVar14);

          }

          _objc_release(lVar15);

          _objc_release(lVar13);

        }

        _objc_release(lVar12);

      }

    }

  }

  else {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e64e8);

    lVar11 = _objc_retainAutoreleasedReturnValue();

    if ((lVar11 == 0) || (fVar19 = (float)FUN_00295480(lVar11), 1.0 <= ABS((double)fVar19 - dVar23))

       ) {

      _objc_release(lVar11);

      goto LAB_0009b130;

    }

    fVar19 = (float)FUN_00295480(lVar10);

LAB_0009b304:

    dVar23 = (double)fVar19;

    uVar24 = 0;

  }

LAB_0009b308:

  _objc_release(lVar11);

LAB_0009b314:

  _objc_release(lVar10);

  auVar2._8_8_ = uVar24;

  auVar2._0_8_ = dVar23;

  return auVar2;

}




