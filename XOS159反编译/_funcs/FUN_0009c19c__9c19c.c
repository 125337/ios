// FUN_0009c19c @0x9c19c


void FUN_0009c19c(long param_1,undefined8 param_2)



{

  double *pdVar1;

  int iVar2;

  int iVar3;

  undefined4 uVar4;

  uint uVar5;

  uint uVar6;

  uint uVar7;

  long lVar8;

  undefined8 uVar9;

  ulong uVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  long lVar15;

  undefined8 uVar16;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar17;

  double dVar18;

  double in_d3;

  double dVar19;

  undefined1 auVar20 [16];

  undefined8 local_190;

  long lStack_188;

  long *local_180;

  undefined8 uStack_178;

  undefined8 local_170;

  undefined8 uStack_168;

  undefined8 uStack_160;

  undefined8 uStack_158;

  undefined *local_150;

  undefined8 local_148;

  code *local_140;

  undefined *puStack_138;

  undefined8 local_130;

  undefined1 auStack_128 [8];

  undefined1 auStack_120 [8];

  undefined4 local_118;

  undefined1 auStack_110 [8];

  undefined1 auStack_108 [8];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e65d8);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  if (lVar8 == 0) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6340);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar8 != 0) goto LAB_0009c20c;

    uVar10 = FUN_0008336c(param_1);

    if ((uVar10 & 1) != 0) goto LAB_0009c210;

  }

  else {

LAB_0009c20c:

    _objc_release();

LAB_0009c210:

    FUN_000b7918(param_1,0);

  }

  FUN_0008459c(param_1);

  (*DAT_003e78c8)(param_1,param_2);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e65d8);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  if (lVar8 == 0) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6340);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar8 != 0) goto LAB_0009c26c;

    uVar10 = FUN_0008336c(param_1);

    if ((uVar10 & 1) != 0) goto LAB_0009c270;

  }

  else {

LAB_0009c26c:

    _objc_release();

LAB_0009c270:

    FUN_000b7918(param_1,0);

  }

  FUN_0008459c(param_1);

  FUN_000b6e80(param_1);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6608);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e6608,PTR____kCFBooleanTrue_00388320,1);

  if ((DAT_003e74dc & 1) == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_002924c0(auVar20._0_8_,auVar20._8_8_,&cf_mesMsgMergeBubbleWrapRefer);

    _objc_release(auVar20._0_8_);

    if (iVar2 != 0) {

      DAT_003e74dc = 1;

      goto LAB_0009c30c;

    }

  }

  else {

LAB_0009c30c:

    iVar2 = FUN_000b7704(param_1);

    if (iVar2 != 0) {

      FUN_000b8984(param_1);

    }

  }

  if (lVar8 == 0) {

    _objc_retain(param_1);

    if (param_1 != 0) {

      FUN_002a6520(param_1);

      lVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar8 != 0) {

        if ((DAT_003e74dc & 1) == 0) {

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          auVar20 = _objc_retainAutoreleasedReturnValue();

          iVar2 = FUN_002924c0(auVar20._0_8_,auVar20._8_8_,&cf_mesMsgMergeBubbleWrapRefer);

          _objc_release(auVar20._0_8_);

          if (iVar2 == 0) goto LAB_0009c770;

          DAT_003e74dc = 1;

        }

        iVar2 = FUN_000b7704(param_1);

        if (iVar2 != 0) {

          _objc_getAssociatedObject(param_1,PTR_LOOP_003e6608);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          uVar10 = FUN_002924e0();

          _objc_release(uVar9);

          if ((uVar10 & 1) != 0) {

            _objc_retain(param_1);

            FUN_000839f4(param_1);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            if (lVar8 != 0) {

              FUN_000a8b40(param_1);

              lVar11 = _objc_retainAutoreleasedReturnValue();

              if (lVar11 != 0) {

                auVar20 = _objc_opt_respondsToSelector(lVar11,"getArrMessageNodeData");

                uVar9 = auVar20._8_8_;

                if ((auVar20._0_8_ & 1) == 0) {

LAB_0009c42c:

                  FUN_002a6080(lVar11,uVar9,&cf_m_arrMessageNodeData);

                  lVar12 = _objc_retainAutoreleasedReturnValue();

                }

                else {

                  FUN_002957a0(lVar11);

                  auVar20 = _objc_retainAutoreleasedReturnValue();

                  uVar9 = auVar20._8_8_;

                  lVar12 = auVar20._0_8_;

                  if (lVar12 == 0) goto LAB_0009c42c;

                }

                lVar13 = FUN_00293860(lVar12);

                if (lVar13 != 0) {

                  FUN_00297d80(lVar12);

                  lVar13 = _objc_retainAutoreleasedReturnValue();

                  if (lVar13 != 0) {

                    if (lVar8 == lVar13) {

                      _objc_release(lVar13);

                      _objc_release(lVar12);

                      _objc_release(lVar11);

                      _objc_release(lVar8);

                      _objc_release(param_1);

                    }

                    else {

                      FUN_000856e8(lVar8);

                      lVar14 = _objc_retainAutoreleasedReturnValue();

                      if (lVar14 == 0) {

                        iVar2 = 0;

                      }

                      else {

                        iVar2 = FUN_00298740(lVar14);

                      }

                      _objc_release(lVar14);

                      FUN_000856e8(lVar13);

                      lVar14 = _objc_retainAutoreleasedReturnValue();

                      if (lVar14 == 0) {

                        iVar3 = 0;

                      }

                      else {

                        iVar3 = FUN_00298740(lVar14);

                      }

                      _objc_release(lVar14);

                      _objc_release(lVar13);

                      _objc_release(lVar12);

                      _objc_release(lVar11);

                      _objc_release(lVar8);

                      _objc_release(param_1);

                      if ((iVar2 == 0) || (iVar2 != iVar3)) goto LAB_0009c770;

                    }

                    FUN_00084b98(param_1);

                    lVar8 = _objc_retainAutoreleasedReturnValue();

                    if ((lVar8 != 0) &&

                       (((uVar10 = FUN_00297780(lVar8), (uVar10 & 1) == 0 &&

                         (uVar10 = FUN_00297b40(lVar8), (uVar10 & 1) == 0)) &&

                        (uVar10 = FUN_002976e0(lVar8), (uVar10 & 1) == 0)))) {

                      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6638);

                      uVar9 = _objc_retainAutoreleasedReturnValue();

                      uVar10 = FUN_002924e0();

                      _objc_release(uVar9);

                      if ((uVar10 & 1) == 0) {

                        _objc_setAssociatedObject

                                  (param_1,PTR_LOOP_003e6638,PTR____kCFBooleanTrue_00388320,1);

                        FUN_000839f4(param_1);

                        uVar9 = _objc_retainAutoreleasedReturnValue();

                        uVar4 = FUN_000b3dcc();

                        _objc_initWeak(auStack_108,param_1);

                        _objc_initWeak(auStack_110,lVar8);

                        local_150 = PTR___NSConcreteStackBlock_003886f0;

                        local_148 = 0xc2000000;

                        local_140 = FUN_000bacdc;

                        puStack_138 = &DAT_0038b2e0;

                        _objc_copyWeak(auStack_128,auStack_108);

                        _objc_copyWeak(auStack_120,auStack_110);

                        local_130 = uVar9;

                        local_118 = uVar4;

                        _objc_retain(uVar9);

                        _dispatch_async(PTR___dispatch_main_q_00388740,&local_150);

                        _objc_release(local_130);

                        _objc_release(uVar9);

                        _objc_destroyWeak(auStack_120);

                        _objc_destroyWeak(auStack_128);

                        _objc_destroyWeak(auStack_110);

                        _objc_destroyWeak(auStack_108);

                      }

                    }

                    _objc_release(lVar8);

                    goto LAB_0009c770;

                  }

                }

                _objc_release(lVar12);

                _objc_release(lVar11);

              }

              _objc_release(lVar8);

            }

            _objc_release(param_1);

          }

        }

      }

    }

LAB_0009c770:

    _objc_release(param_1);

  }

  iVar2 = FUN_000a89d8();

  if (iVar2 == 0) goto LAB_0009cbdc;

  FUN_002a6280(param_1);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  if (lVar8 != 0) {

    _objc_getAssociatedObject(lVar8,PTR_LOOP_003e5cd0);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    uVar10 = FUN_002924e0();

    _objc_release(uVar9);

    if ((uVar10 & 1) == 0) {

      iVar2 = FUN_00004f4c(lVar8);

      if (iVar2 != 0) {

        uVar10 = _objc_opt_respondsToSelector(param_1,"updateQuickTransTipButtonPosition");

        if ((uVar10 & 1) != 0) {

          FUN_002a5d60(param_1);

        }

        uVar10 = _objc_opt_respondsToSelector(param_1,"updateResumePlayButtonPosition");

        if ((uVar10 & 1) != 0) {

          FUN_002a5d80(param_1);

        }

        uVar10 = _objc_opt_respondsToSelector(param_1,"updatePlayRateButtonPosition");

        if ((uVar10 & 1) != 0) {

          FUN_002a5cc0(param_1);

        }

        FUN_00224678(param_1);

      }

    }

    else {

      _objc_getAssociatedObject(lVar8,PTR_LOOP_003e5cc0);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_002924e0();

      _objc_release(uVar9);

      _objc_getAssociatedObject(lVar8,PTR_LOOP_003e5cc8);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_002924e0();

      _objc_release(uVar9);

      uVar10 = _objc_opt_respondsToSelector(lVar8,"isSender");

      if ((uVar10 & 1) == 0) {

        uVar7 = 0;

      }

      else {

        uVar7 = FUN_00297a80(lVar8);

      }

      if (((uVar7 | uVar6 ^ 0xffffffff | uVar5) & 1) == 0) {

        uStack_168 = 0;

        local_170 = 0;

        uStack_158 = 0;

        uStack_160 = 0;

        lStack_188 = 0;

        local_190 = 0;

        uStack_178 = 0;

        local_180 = (long *)0x0;

        FUN_002a4840(param_1);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        lVar11 = auVar20._0_8_;

        lVar12 = FUN_00293880(lVar11,auVar20._8_8_,&local_190,auStack_100,0x10);

        if (lVar12 != 0) {

          lVar13 = *local_180;

          do {

            lVar14 = 0;

            do {

              if (*local_180 != lVar13) {

                _objc_enumerationMutation(lVar11);

              }

              uVar17 = *(undefined8 *)(lStack_188 + lVar14 * 8);

              uVar9 = _objc_opt_class(&_OBJC_CLASS___UILabel);

              auVar20 = _objc_opt_isKindOfClass(uVar17,uVar9);

              uVar9 = auVar20._8_8_;

              if ((auVar20._0_8_ & 1) != 0) {

                _objc_retain(uVar17);

                FUN_002a5020(uVar17);

                uVar9 = _objc_retainAutoreleasedReturnValue();

                lVar15 = FUN_00297fa0();

                if (lVar15 == 0) {

LAB_0009cb4c:

                  _objc_release(uVar9);

                }

                else {

                  FUN_002a5020(uVar17);

                  uVar16 = _objc_retainAutoreleasedReturnValue();

                  uVar10 = FUN_00297fa0();

                  if (0x1d < uVar10) {

                    _objc_release(uVar16);

                    goto LAB_0009cb4c;

                  }

                  FUN_002a5020(uVar17);

                  auVar20 = _objc_retainAutoreleasedReturnValue();

                  uVar10 = FUN_00293580(auVar20._0_8_,auVar20._8_8_,&cf__);

                  _objc_release(auVar20._0_8_);

                  _objc_release(uVar16);

                  _objc_release(uVar9);

                  if ((uVar10 & 1) == 0) {

                    FUN_0029e8a0(uVar17,extraout_x1,0);

                    _objc_release(uVar17);

                    goto LAB_0009cbcc;

                  }

                }

                _objc_release(uVar17);

                uVar9 = extraout_x1_00;

              }

              lVar14 = lVar14 + 1;

            } while (lVar12 != lVar14);

            lVar12 = FUN_00293880(lVar11,uVar9,&local_190,auStack_100,0x10);

          } while (lVar12 != 0);

        }

      }

      else {

        if (uVar5 == 0) goto LAB_0009cbd4;

        auVar20 = _objc_opt_respondsToSelector(param_1,"getHeadImageView");

        if ((auVar20._0_8_ & 1) == 0) {

          lVar11 = 0;

        }

        else {

          FUN_00299c80(param_1,auVar20._8_8_,"getHeadImageView");

          lVar11 = _objc_retainAutoreleasedReturnValue();

          if ((lVar11 != 0) && (uVar10 = FUN_002978a0(lVar11), (uVar10 & 1) == 0)) {

            FUN_002925a0(param_1);

            _objc_getAssociatedObject(lVar8,PTR_LOOP_003e6480);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            iVar2 = FUN_002924e0();

            _objc_release(uVar9);

            if (iVar2 != 0) {

              FUN_000856e8(lVar8);

              lVar12 = _objc_retainAutoreleasedReturnValue();

              if (lVar12 != 0) {

                iVar2 = FUN_000a8a64(lVar12);

                pdVar1 = (double *)&DAT_003e6488;

                if (iVar2 == 0) {

                  pdVar1 = (double *)&DAT_003e6490;

                }

                dVar19 = *pdVar1;

                _objc_getAssociatedObject(lVar8,PTR_LOOP_003e6498);

                uVar9 = _objc_retainAutoreleasedReturnValue();

                iVar2 = FUN_002924e0();

                _objc_release(uVar9);

                dVar18 = dVar19 * 0.5;

                if (iVar2 == 0) {

                  dVar18 = dVar19;

                }

                in_d3 = in_d3 + dVar18;

              }

              _objc_release(lVar12);

            }

            dVar18 = in_d3;

            if (((uVar7 | uVar6) & 1) == 0) {

              FUN_000856e8(lVar8);

              lVar12 = _objc_retainAutoreleasedReturnValue();

              if ((lVar12 != 0) && (iVar2 = FUN_000a8a64(lVar12), iVar2 != 0)) {

                _objc_getAssociatedObject(lVar8,PTR_LOOP_003e64a0);

                lVar13 = _objc_retainAutoreleasedReturnValue();

                if (lVar13 == 0) {

                  dVar18 = in_d3 + -13.0;

                }

                else {

                  uVar10 = FUN_002924e0(lVar13);

                  dVar18 = in_d3 + -13.0;

                  if ((uVar10 & 1) == 0) {

                    dVar18 = in_d3;

                  }

                }

                _objc_release(lVar13);

              }

              _objc_release(lVar12);

            }

            FUN_000ac078(dVar18,lVar11);

          }

        }

      }

LAB_0009cbcc:

      _objc_release(lVar11);

    }

  }

LAB_0009cbd4:

  _objc_release(lVar8);

LAB_0009cbdc:

  if (*(long *)PTR____stack_chk_guard_00388738 != local_80) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




