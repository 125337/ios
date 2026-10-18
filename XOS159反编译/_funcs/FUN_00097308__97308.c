// FUN_00097308 @0x97308


void FUN_00097308(undefined8 param_1,undefined8 param_2)



{

  ulong uVar1;

  double *pdVar2;

  bool bVar3;

  int iVar4;

  uint uVar5;

  uint uVar6;

  uint uVar7;

  long lVar8;

  long lVar9;

  ulong uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  long lVar13;

  undefined8 uVar14;

  long lVar15;

  long lVar16;

  long lVar17;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar18;

  undefined8 uVar19;

  long lVar20;

  byte bVar21;

  float fVar22;

  double in_d3;

  double dVar23;

  double dVar24;

  double dVar25;

  undefined1 auVar26 [16];

  long local_150;

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  if (DAT_003eb410 == 1) {

    FUN_000fd208(param_1);

  }

  iVar4 = FUN_000a8840(param_1);

  if (iVar4 != 0) {

    if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

                    /* WARNING: Could not recover jumptable at 0x000973b4. Too many branches */

                    /* WARNING: Treating indirect jump as call */

      (*DAT_003e77e0)(param_1,param_2);

      return;

    }

    goto LAB_00097d90;

  }

  uVar5 = FUN_000a89d8();

  if (uVar5 != 0) {

    FUN_000a8b40(param_1);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar8 != 0) {

      FUN_000a8cc4(lVar8);

    }

    _objc_release(lVar8);

  }

  FUN_002a6280(param_1);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  lVar8 = DAT_003e7a68;

  if (DAT_003e7a68 == 0) {

    lVar8 = _objc_getClass("TextMessageCellView");

    DAT_003e7a68 = lVar8;

    _objc_retain();

    _objc_autorelease(lVar8);

    if (lVar8 != 0) goto LAB_00097444;

  }

  else {

    _objc_retain(DAT_003e7a68);

    _objc_autorelease(lVar8);

LAB_00097444:

    uVar10 = _objc_opt_isKindOfClass(param_1,lVar8);

    if ((uVar10 & 1) != 0) {

      FUN_000a9154(lVar9,param_1);

    }

  }

  if (lVar9 == 0) {

LAB_000974cc:

    local_150 = 0;

    bVar21 = 0;

  }

  else {

    if (DAT_003e76c0 == 0) {

      DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

    }

    lVar8 = DAT_003e76c0;

    _objc_retain(DAT_003e76c0);

    _objc_autorelease(lVar8);

    auVar26 = _objc_opt_isKindOfClass(lVar9,lVar8);

    if ((auVar26._0_8_ & 1) == 0) goto LAB_000974cc;

    FUN_002a6080(lVar9,auVar26._8_8_,&cf_parentModel);

    local_150 = _objc_retainAutoreleasedReturnValue();

    bVar21 = 1;

  }

  if ((lVar9 != 0) && ((DAT_003eb410 & 1) != 0)) {

    _objc_getAssociatedObject(lVar9,PTR_LOOP_003e5cc8);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    uVar6 = FUN_002924e0();

    _objc_release(uVar11);

    _objc_getAssociatedObject(lVar9,PTR_LOOP_003e5cc0);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    uVar7 = FUN_002924e0();

    _objc_release(uVar11);

    _objc_getAssociatedObject(lVar9,PTR_LOOP_003e6478);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    iVar4 = FUN_002924e0();

    _objc_release(uVar11);

    if (local_150 != 0) {

      _objc_getAssociatedObject(local_150,PTR_LOOP_003e5cc8);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_002924e0();

      _objc_release(uVar11);

      _objc_getAssociatedObject(local_150,PTR_LOOP_003e5cc0);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      uVar7 = FUN_002924e0();

      _objc_release(uVar11);

      _objc_getAssociatedObject(local_150,PTR_LOOP_003e6478);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      iVar4 = FUN_002924e0();

      _objc_release(uVar11);

    }

    uVar10 = FUN_000a96c8(lVar9);

    if ((uVar10 & 1) == 0) {

      uVar10 = 2;

      if (iVar4 == 0) {

        uVar10 = 0;

      }

      uVar1 = 3;

      if (uVar7 == 0) {

        uVar1 = uVar10;

      }

      DAT_003eb3b8 = (ulong)(uVar7 & uVar6 ^ 1);

      if (uVar6 == 0) {

        DAT_003eb3b8 = uVar1;

      }

    }

    else {

      DAT_003eb3b8 = 0;

    }

  }

  (*DAT_003e77e0)(param_1,param_2);

  FUN_000a98e4(param_1);

  FUN_002254e4(param_1);

  uVar6 = 0;

  if (lVar9 != 0) {

    uVar6 = uVar5;

  }

  if ((uVar6 & 1) != 0) {

    FUN_000abc94(param_1);

    FUN_002a2920(param_1);

    uVar10 = _objc_opt_respondsToSelector(lVar9,"isSender");

    if ((uVar10 & 1) == 0) {

      uVar5 = 0;

    }

    else {

      uVar5 = FUN_00297a80(lVar9);

    }

    _objc_getAssociatedObject(lVar9,PTR_LOOP_003e5cd0);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    iVar4 = FUN_002924e0();

    _objc_release(uVar11);

    _objc_getAssociatedObject(lVar9,PTR_LOOP_003e5cc0);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    uVar6 = FUN_002924e0();

    _objc_release(uVar11);

    _objc_getAssociatedObject(lVar9,PTR_LOOP_003e5cc8);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    uVar7 = FUN_002924e0();

    _objc_release(uVar11);

    if (local_150 == 0) {

      if (iVar4 != 0) goto LAB_000977a4;

      local_150 = 0;

    }

    else {

      _objc_getAssociatedObject(local_150,PTR_LOOP_003e5cd0);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      uVar10 = FUN_002924e0();

      _objc_release(uVar11);

      _objc_getAssociatedObject(local_150,PTR_LOOP_003e5cc0);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_002924e0();

      _objc_release(uVar11);

      _objc_getAssociatedObject(local_150,PTR_LOOP_003e5cc8);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      uVar7 = FUN_002924e0();

      _objc_release(uVar11);

      if ((uVar10 & 1) != 0) {

LAB_000977a4:

        if ((((uVar5 | uVar7 ^ 0xffffffff) & 1) == 0) && ((uVar6 & 1) == 0)) {

          uStack_118 = 0;

          local_120 = 0;

          uStack_108 = 0;

          uStack_110 = 0;

          lStack_138 = 0;

          local_140 = 0;

          uStack_128 = 0;

          local_130 = (long *)0x0;

          FUN_002a4840(param_1);

          auVar26 = _objc_retainAutoreleasedReturnValue();

          uVar11 = auVar26._0_8_;

          lVar8 = FUN_00293880(uVar11,auVar26._8_8_,&local_140,auStack_100,0x10);

          if (lVar8 != 0) {

            lVar20 = *local_130;

            do {

              lVar18 = 0;

              do {

                if (*local_130 != lVar20) {

                  _objc_enumerationMutation(uVar11);

                }

                uVar19 = *(undefined8 *)(lStack_138 + lVar18 * 8);

                auVar26 = FUN_002a4e60(uVar19);

                uVar12 = auVar26._8_8_;

                if (auVar26._0_8_ != 0x15b31) {

                  auVar26 = FUN_002a4e60(uVar19);

                  uVar12 = auVar26._8_8_;

                  if (auVar26._0_8_ != 0x15b32) {

                    uVar12 = _objc_opt_class(&_OBJC_CLASS___UILabel);

                    auVar26 = _objc_opt_isKindOfClass(uVar19,uVar12);

                    uVar12 = auVar26._8_8_;

                    if ((auVar26._0_8_ & 1) != 0) {

                      _objc_retain(uVar19);

                      FUN_002a5020(uVar19);

                      uVar12 = _objc_retainAutoreleasedReturnValue();

                      lVar13 = FUN_00297fa0();

                      if (lVar13 == 0) {

LAB_000978ec:

                        _objc_release(uVar12);

                      }

                      else {

                        FUN_002a5020(uVar19);

                        uVar14 = _objc_retainAutoreleasedReturnValue();

                        uVar10 = FUN_00297fa0();

                        if (0x1d < uVar10) {

                          _objc_release(uVar14);

                          goto LAB_000978ec;

                        }

                        FUN_002a5020(uVar19);

                        auVar26 = _objc_retainAutoreleasedReturnValue();

                        uVar10 = FUN_00293580(auVar26._0_8_,auVar26._8_8_,&cf__);

                        _objc_release(auVar26._0_8_);

                        _objc_release(uVar14);

                        _objc_release(uVar12);

                        if ((uVar10 & 1) == 0) {

                          FUN_0029e8a0(uVar19,extraout_x1,0);

                          _objc_release(uVar19);

                          goto LAB_00097aa8;

                        }

                      }

                      _objc_release(uVar19);

                      uVar12 = extraout_x1_00;

                    }

                  }

                }

                lVar18 = lVar18 + 1;

              } while (lVar8 != lVar18);

              lVar8 = FUN_00293880(uVar11,uVar12,&local_140,auStack_100,0x10);

            } while (lVar8 != 0);

          }

LAB_00097aa8:

          _objc_release(uVar11);

        }

        else if (uVar6 != 0) {

          FUN_002959c0(param_1);

          lVar8 = _objc_retainAutoreleasedReturnValue();

          if ((lVar8 != 0) && (uVar10 = FUN_002978a0(lVar8), (uVar10 & 1) == 0)) {

            FUN_002925a0(param_1);

            lVar20 = local_150;

            if (local_150 == 0) {

              lVar20 = lVar9;

            }

            _objc_retain(lVar20);

            _objc_getAssociatedObject(lVar20,PTR_LOOP_003e6480);

            uVar11 = _objc_retainAutoreleasedReturnValue();

            uVar6 = FUN_002924e0();

            _objc_release(uVar11);

            if (uVar6 != 0) {

              FUN_000856e8(lVar20);

              lVar18 = _objc_retainAutoreleasedReturnValue();

              if (lVar18 != 0) {

                iVar4 = FUN_000a8a64(lVar18);

                pdVar2 = (double *)&DAT_003e6488;

                if (iVar4 == 0) {

                  pdVar2 = (double *)&DAT_003e6490;

                }

                dVar24 = *pdVar2;

                _objc_getAssociatedObject(lVar20,PTR_LOOP_003e6498);

                uVar11 = _objc_retainAutoreleasedReturnValue();

                iVar4 = FUN_002924e0();

                _objc_release(uVar11);

                dVar23 = dVar24 * 0.5;

                if (iVar4 == 0) {

                  dVar23 = dVar24;

                }

                in_d3 = in_d3 + dVar23;

              }

              _objc_release(lVar18);

            }

            dVar23 = in_d3;

            if (((uVar5 | uVar7) & 1) == 0) {

              FUN_000856e8(lVar20);

              lVar18 = _objc_retainAutoreleasedReturnValue();

              if ((lVar18 != 0) && (iVar4 = FUN_000a8a64(lVar18), iVar4 != 0)) {

                _objc_getAssociatedObject(lVar20,PTR_LOOP_003e64a0);

                lVar13 = _objc_retainAutoreleasedReturnValue();

                if (lVar13 == 0) {

                  dVar23 = in_d3 + -13.0;

                }

                else {

                  uVar10 = FUN_002924e0(lVar13);

                  dVar23 = in_d3 + -13.0;

                  if ((uVar10 & 1) == 0) {

                    dVar23 = in_d3;

                  }

                }

                _objc_release(lVar13);

              }

              _objc_release(lVar18);

            }

            bVar3 = (bool)(bVar21 ^ 1);

            if (local_150 == 0) {

              bVar3 = true;

            }

            if (bVar3) {

LAB_00097b64:

              FUN_000ac078(dVar23,lVar8);

            }

            else {

              _objc_retain(local_150);

              auVar26 = _objc_opt_respondsToSelector(local_150,"subViewModels");

              if ((auVar26._0_8_ & 1) == 0) {

LAB_00097b5c:

                _objc_release(local_150);

                goto LAB_00097b64;

              }

              FUN_002a6080(local_150,auVar26._8_8_,&cf_subViewModels);

              lVar18 = _objc_retainAutoreleasedReturnValue();

              if ((lVar18 == 0) || (uVar10 = FUN_00293860(lVar18), uVar10 < 2)) {

LAB_00097b54:

                _objc_release(lVar18);

                goto LAB_00097b5c;

              }

              FUN_00295440(lVar18);

              lVar13 = _objc_retainAutoreleasedReturnValue();

              if (lVar9 != lVar13) {

                _objc_release(lVar13);

                goto LAB_00097b54;

              }

              _objc_getAssociatedObject(local_150,PTR_LOOP_003e64a8);

              lVar15 = _objc_retainAutoreleasedReturnValue();

              if ((lVar15 == 0) || (fVar22 = (float)FUN_00295480(lVar15), fVar22 <= 0.0)) {

                uVar10 = _objc_opt_respondsToSelector(local_150,"rowHeight");

                if ((uVar10 & 1) != 0) {

                  dVar23 = (double)_objc_msgSend(local_150,"rowHeight");

                  goto LAB_00097c34;

                }

              }

              else {

                fVar22 = (float)FUN_00295480(lVar15);

                dVar23 = (double)fVar22;

LAB_00097c34:

                if ((0.0 < dVar23 & uVar6) == 1) {

                  FUN_000856e8(local_150);

                  lVar16 = _objc_retainAutoreleasedReturnValue();

                  if (lVar16 != 0) {

                    iVar4 = FUN_000a8a64(lVar16);

                    pdVar2 = (double *)&DAT_003e6488;

                    if (iVar4 == 0) {

                      pdVar2 = (double *)&DAT_003e6490;

                    }

                    dVar25 = *pdVar2;

                    _objc_getAssociatedObject(local_150,PTR_LOOP_003e6498);

                    uVar11 = _objc_retainAutoreleasedReturnValue();

                    iVar4 = FUN_002924e0();

                    _objc_release(uVar11);

                    dVar24 = dVar25 * 0.5;

                    if (iVar4 == 0) {

                      dVar24 = dVar25;

                    }

                    dVar23 = dVar23 + dVar24;

                  }

                  _objc_release(lVar16);

                }

                dVar24 = dVar23;

                if (((uVar7 | uVar5) & 1) == 0 && 0.0 < dVar23) {

                  FUN_000856e8(local_150);

                  lVar16 = _objc_retainAutoreleasedReturnValue();

                  if ((lVar16 != 0) && (iVar4 = FUN_000a8a64(lVar16), iVar4 != 0)) {

                    _objc_getAssociatedObject(local_150,PTR_LOOP_003e64a0);

                    lVar17 = _objc_retainAutoreleasedReturnValue();

                    if (lVar17 == 0) {

                      dVar24 = dVar23 + -13.0;

                    }

                    else {

                      uVar10 = FUN_002924e0(lVar17);

                      dVar24 = dVar23 + -13.0;

                      if ((uVar10 & 1) == 0) {

                        dVar24 = dVar23;

                      }

                    }

                    _objc_release(lVar17);

                  }

                  _objc_release(lVar16);

                }

                if (0.0 < dVar24) {

                  FUN_000ac078(dVar24,lVar8);

                }

              }

              _objc_release(lVar15);

              _objc_release(lVar13);

              _objc_release(lVar18);

              _objc_release(local_150);

            }

            _objc_release(lVar20);

          }

          _objc_release(lVar8);

        }

      }

    }

  }

  _objc_release(local_150);

  _objc_release(lVar9);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

LAB_00097d90:

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




