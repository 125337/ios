// FUN_0012f0a0 @0x12f0a0


void FUN_0012f0a0(long param_1,ulong param_2)



{

  long *plVar1;

  undefined8 *puVar2;

  undefined8 *puVar3;

  bool bVar4;

  undefined *puVar5;

  int iVar6;

  int iVar7;

  ulong uVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

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

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  long lVar18;

  cfstringStruct *pcVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  cfstringStruct *local_138;

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  FUN_0012da64();

  if (((((DAT_003e8561 & 1) == 0) && ((DAT_003e85d8 & 1) == 0)) && ((DAT_003e85d9 & 1) == 0)) &&

     (((DAT_003eb3c0 & 1) == 0 && ((DAT_003eb3e8 & 1) == 0)))) goto LAB_0012fc8c;

  if ((param_2 & 1) == 0) {

    if (DAT_003e8680 != -1) {

      FUN_0028f4b0();

    }

    if ((((DAT_003e8668 != 0) && (uVar8 = _objc_opt_isKindOfClass(param_1), (uVar8 & 1) != 0)) ||

        ((DAT_003e8670 != 0 && (uVar8 = _objc_opt_isKindOfClass(param_1), (uVar8 & 1) != 0)))) ||

       ((DAT_003e8678 != 0 && (uVar8 = _objc_opt_isKindOfClass(param_1), (uVar8 & 1) != 0))))

    goto LAB_0012f180;

    bVar4 = false;

  }

  else {

LAB_0012f180:

    bVar4 = true;

  }

  _objc_retain(param_1);

  if (DAT_003e8561 == 1) {

    iVar6 = FUN_001331c4();

    FUN_00130cb4(param_1);

    lVar9 = _objc_retainAutoreleasedReturnValue();

    if (lVar9 != 0) {

      plVar1 = &DAT_003e8518;

      if (iVar6 == 0) {

        plVar1 = &DAT_003e8510;

      }

      lVar18 = *plVar1;

      _objc_retain(lVar18);

      if ((lVar18 != 0) && (lVar10 = FUN_00297fa0(lVar18), lVar10 != 0)) {

        FUN_0012dd08(lVar18);

        lVar10 = _objc_retainAutoreleasedReturnValue();

        if (lVar10 != 0) {

          FUN_001311b4(lVar9);

          auVar22 = _objc_retainAutoreleasedReturnValue();

          uVar8 = FUN_002977c0(auVar22._0_8_,auVar22._8_8_,lVar10);

          _objc_release(auVar22._0_8_);

          if ((uVar8 & 1) == 0) {

            FUN_002a1da0(lVar9,extraout_x1,lVar10);

            FUN_00291ee0(lVar9);

            uVar11 = _objc_retainAutoreleasedReturnValue();

            lVar12 = FUN_00297fa0();

            _objc_release(uVar11);

            if (lVar12 != 0) {

              FUN_00291ee0(lVar9);

              uVar11 = _objc_retainAutoreleasedReturnValue();

              uVar13 = FUN_00299020();

              _objc_release(uVar11);

              auVar22 = FUN_00297fa0(uVar13);

              FUN_00291060(uVar13,auVar22._8_8_,

                           *(undefined8 *)PTR__NSForegroundColorAttributeName_00388360,lVar10,0,

                           auVar22._0_8_);

              FUN_0029cd60(lVar9,extraout_x1_00,uVar13);

              _objc_release(uVar13);

            }

            _objc_setAssociatedObject(lVar9,&DAT_0030e54a,lVar10,1);

            if (((DAT_003e8688 & 1) == 0) && (DAT_003e8688 = 1, DAT_003e86a0 != -1)) {

              FUN_0028f4c4();

            }

          }

        }

        _objc_release(lVar10);

      }

      _objc_release(lVar18);

    }

    _objc_release(lVar9);

  }

  _objc_release(param_1);

  if (bVar4) {

    _objc_retain(param_1);

    if (((DAT_003eb3e8 & 1) != 0) || ((DAT_003e85d9 & 1) != 0)) {

      uVar8 = _objc_opt_respondsToSelector(param_1,"viewModel");

      if ((uVar8 & 1) == 0) {

        iVar6 = 0;

      }

      else {

        FUN_002a6280(param_1);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        uVar8 = _objc_opt_respondsToSelector(uVar11,"isSender");

        if ((uVar8 & 1) == 0) {

          iVar6 = 0;

        }

        else {

          iVar6 = FUN_00297a80(uVar11);

        }

        _objc_release(uVar11);

      }

      iVar7 = FUN_001331c4();

      if (DAT_003e85d9 == 1) {

        puVar3 = &DAT_003e8548;

        if (iVar6 == 0) {

          puVar3 = &DAT_003e8558;

        }

        puVar2 = &DAT_003e8540;

        if (iVar6 == 0) {

          puVar2 = &DAT_003e8550;

        }

        if (iVar7 == 0) {

          puVar3 = puVar2;

        }

        local_138 = (cfstringStruct *)*puVar3;

        _objc_retain(local_138);

        if ((local_138 == (cfstringStruct *)0x0) || (lVar9 = FUN_00297fa0(local_138), lVar9 == 0)) {

          _objc_release(local_138);

          local_138 = &cf__000000;

        }

        lVar9 = FUN_00297fa0(local_138);

        if ((lVar9 == 0) && ((DAT_003e85da & 1) == 0)) {

LAB_0012f534:

          if (DAT_003eb3e8 == 1) {

            puVar3 = &DAT_003eb408;

            if (iVar6 == 0) {

              puVar3 = &DAT_003eb3f8;

            }

            puVar2 = &DAT_003eb400;

            if (iVar6 == 0) {

              puVar2 = &DAT_003eb3f0;

            }

            if (iVar7 == 0) {

              puVar3 = puVar2;

            }

            pcVar19 = (cfstringStruct *)*puVar3;

            _objc_retain(pcVar19);

            _objc_release(local_138);

            local_138 = pcVar19;

            if (pcVar19 != (cfstringStruct *)0x0) goto LAB_0012f590;

            local_138 = (cfstringStruct *)0x0;

          }

        }

        else {

LAB_0012f590:

          lVar9 = FUN_00297fa0(local_138);

          if (lVar9 != 0) {

            FUN_0012dd08(local_138);

            lVar9 = _objc_retainAutoreleasedReturnValue();

            if (lVar9 != 0) {

              FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

              uVar11 = _objc_retainAutoreleasedReturnValue();

              FUN_001316d4(param_1);

              FUN_00130cb4(param_1);

              uVar13 = _objc_retainAutoreleasedReturnValue();

              FUN_001317ec(param_1,uVar13,uVar11);

              uVar14 = _objc_retainAutoreleasedReturnValue();

              uStack_108 = 0;

              local_110 = 0;

              uStack_f8 = 0;

              uStack_100 = 0;

              lStack_128 = 0;

              local_130 = 0;

              uStack_118 = 0;

              local_120 = (long *)0x0;

              _objc_retain();

              auVar22 = FUN_00293880(uVar14,extraout_x1_01,&local_130,auStack_f0,0x10);

              if (auVar22._0_8_ != 0) {

                lVar18 = *local_120;

                uVar20 = *(undefined8 *)PTR__NSForegroundColorAttributeName_00388360;

                do {

                  uVar15 = auVar22._8_8_;

                  lVar10 = 0;

                  do {

                    if (*local_120 != lVar18) {

                      _objc_enumerationMutation(uVar14);

                      uVar15 = extraout_x1_02;

                    }

                    uVar21 = *(undefined8 *)(lStack_128 + lVar10 * 8);

                    FUN_002a1da0(uVar21,uVar15,lVar9);

                    FUN_00291ee0(uVar21);

                    uVar15 = _objc_retainAutoreleasedReturnValue();

                    lVar12 = FUN_00297fa0();

                    _objc_release(uVar15);

                    uVar15 = extraout_x1_03;

                    if (lVar12 != 0) {

                      FUN_00291ee0(uVar21);

                      uVar15 = _objc_retainAutoreleasedReturnValue();

                      uVar16 = FUN_00299020();

                      _objc_release(uVar15);

                      auVar23 = FUN_00297fa0(uVar16);

                      FUN_00291060(uVar16,auVar23._8_8_,uVar20,lVar9,0,auVar23._0_8_);

                      FUN_0029cd60(uVar21,extraout_x1_04,uVar16);

                      _objc_release(uVar16);

                      uVar15 = extraout_x1_05;

                    }

                    lVar10 = lVar10 + 1;

                  } while (auVar22._0_8_ != lVar10);

                  auVar22 = FUN_00293880(uVar14,uVar15,&local_130,auStack_f0,0x10);

                } while (auVar22._0_8_ != 0);

              }

              _objc_release(uVar14);

              _objc_release(uVar14);

              _objc_release(uVar13);

              _objc_release(uVar11);

            }

            _objc_release(lVar9);

          }

        }

      }

      else {

        local_138 = (cfstringStruct *)0x0;

        if ((DAT_003e85da & 1) == 0) goto LAB_0012f534;

      }

      _objc_release(local_138);

    }

    _objc_release(param_1);

    goto LAB_0012fc8c;

  }

  _objc_retain(param_1);

  if (((DAT_003eb3c0 & 1) != 0) || ((DAT_003e85d8 & 1) != 0)) {

    iVar6 = FUN_00130124(param_1);

    if (iVar6 == 0) {

      if ((DAT_003e86e0 & 1) == 0) {

        DAT_003e86e0 = 1;

        DAT_003e86d8 = _objc_getClass("MultiReaderMessageCellView");

      }

      if ((DAT_003e86d8 == 0) || (uVar8 = _objc_opt_isKindOfClass(param_1), (uVar8 & 1) == 0)) {

        uVar8 = _objc_opt_respondsToSelector(param_1,"viewModel");

        if ((uVar8 & 1) == 0) {

          iVar6 = 0;

        }

        else {

          FUN_002a6280(param_1);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          uVar8 = _objc_opt_respondsToSelector(uVar11,"isSender");

          if ((uVar8 & 1) == 0) {

            iVar6 = 0;

          }

          else {

            iVar6 = FUN_00297a80(uVar11);

          }

          _objc_release(uVar11);

        }

        iVar7 = FUN_001331c4();

        if (DAT_003e85d8 == 1) {

          puVar3 = &DAT_003e8528;

          if (iVar6 == 0) {

            puVar3 = &DAT_003e8538;

          }

          puVar2 = &DAT_003e8520;

          if (iVar6 == 0) {

            puVar2 = &DAT_003e8530;

          }

          if (iVar7 == 0) {

            puVar3 = puVar2;

          }

          local_138 = (cfstringStruct *)*puVar3;

          _objc_retain(local_138);

          if ((local_138 == (cfstringStruct *)0x0) || (lVar9 = FUN_00297fa0(local_138), lVar9 == 0))

          {

            _objc_release(local_138);

            local_138 = &cf__000000;

          }

          lVar9 = FUN_00297fa0(local_138);

          if ((lVar9 == 0) && ((DAT_003e85da & 1) == 0)) {

LAB_0012f828:

            if (DAT_003eb3c0 == 1) {

              puVar3 = &DAT_003eb3e0;

              if (iVar6 == 0) {

                puVar3 = &DAT_003eb3d0;

              }

              puVar2 = &DAT_003eb3d8;

              if (iVar6 == 0) {

                puVar2 = &DAT_003eb3c8;

              }

              if (iVar7 == 0) {

                puVar3 = puVar2;

              }

              pcVar19 = (cfstringStruct *)*puVar3;

              _objc_retain(pcVar19);

              _objc_release(local_138);

              local_138 = pcVar19;

              if (pcVar19 != (cfstringStruct *)0x0) goto LAB_0012f884;

              local_138 = (cfstringStruct *)0x0;

            }

          }

          else {

LAB_0012f884:

            lVar9 = FUN_00297fa0(local_138);

            if (lVar9 != 0) {

              FUN_0012dd08(local_138);

              lVar9 = _objc_retainAutoreleasedReturnValue();

              if (lVar9 != 0) {

                _objc_setAssociatedObject

                          (param_1,PTR_LOOP_003e6ab8,PTR____kCFBooleanTrue_00388320,1);

                FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

                uVar11 = _objc_retainAutoreleasedReturnValue();

                FUN_001316d4(param_1,uVar11);

                _objc_retain(param_1);

                _objc_retain(lVar9);

                _objc_retain(uVar11);

                if (param_1 != 0) {

                  _objc_retain(param_1);

                  _objc_retain(uVar11);

                  lVar18 = FUN_00131ac4(param_1,0x25);

                  lVar10 = FUN_00131c60(uVar11,0x13);

                  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6ad8);

                  lVar12 = _objc_retainAutoreleasedReturnValue();

                  if ((lVar12 == 0) || (lVar17 = FUN_002a5a20(lVar12), lVar17 != lVar10 + lVar18)) {

LAB_0012f98c:

                    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

                    uVar13 = _objc_retainAutoreleasedReturnValue();

                    FUN_001328d8(param_1,uVar13,uVar11,0);

                    lVar17 = FUN_002937a0(uVar13);

                    _objc_setAssociatedObject(param_1,PTR_LOOP_003e6ae0,lVar17,1);

                    puVar5 = PTR_LOOP_003e6ad8;

                    FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_06,lVar10 + lVar18);

                    uVar14 = _objc_retainAutoreleasedReturnValue();

                    _objc_setAssociatedObject(param_1,puVar5,uVar14,1);

                    _objc_release(uVar14);

                    _objc_release(uVar13);

                  }

                  else {

                    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6ae0);

                    lVar17 = _objc_retainAutoreleasedReturnValue();

                    if (lVar17 == 0) goto LAB_0012f98c;

                  }

                  _objc_release(lVar12);

                  _objc_release(uVar11);

                  _objc_release(param_1);

                  uStack_108 = 0;

                  local_110 = 0;

                  uStack_f8 = 0;

                  uStack_100 = 0;

                  lStack_128 = 0;

                  local_130 = 0;

                  uStack_118 = 0;

                  local_120 = (long *)0x0;

                  _objc_retain(lVar17);

                  lVar18 = FUN_00293880(lVar17,extraout_x1_07,&local_130,auStack_f0,0x10);

                  if (lVar18 != 0) {

                    lVar10 = *local_120;

                    do {

                      lVar12 = 0;

                      do {

                        if (*local_120 != lVar10) {

                          _objc_enumerationMutation(lVar17);

                        }

                        uVar13 = *(undefined8 *)(lStack_128 + lVar12 * 8);

                        _objc_getAssociatedObject(uVar13,&DAT_0030e549);

                        auVar22 = _objc_retainAutoreleasedReturnValue();

                        uVar8 = FUN_002977c0(auVar22._0_8_,auVar22._8_8_,lVar9);

                        if ((uVar8 & 1) == 0) {

                          auVar23 = _objc_opt_respondsToSelector(uVar13,"setOTextColor:");

                          if ((auVar23._0_8_ & 1) != 0) {

                            FUN_002a0020(uVar13,auVar23._8_8_,lVar9);

                          }

                          _objc_setAssociatedObject(uVar13,&DAT_0030e549,lVar9,1);

                          FUN_0029ff20(uVar13);

                        }

                        _objc_release(auVar22._0_8_);

                        lVar12 = lVar12 + 1;

                      } while (lVar18 != lVar12);

                      lVar18 = FUN_00293880(lVar17,extraout_x1_08,&local_130,auStack_f0,0x10);

                    } while (lVar18 != 0);

                  }

                  _objc_release(lVar17);

                  _objc_release(lVar17);

                }

                _objc_release(uVar11);

                _objc_release(lVar9);

                _objc_release(param_1);

                FUN_00130cb4(param_1);

                uVar13 = _objc_retainAutoreleasedReturnValue();

                FUN_001317ec(param_1,uVar13,uVar11);

                uVar14 = _objc_retainAutoreleasedReturnValue();

                lVar18 = FUN_00293860();

                if ((lVar18 != 0) && (DAT_003e86a0 != -1)) {

                  FUN_0028f4d8();

                }

                uStack_108 = 0;

                local_110 = 0;

                uStack_f8 = 0;

                uStack_100 = 0;

                lStack_128 = 0;

                local_130 = 0;

                uStack_118 = 0;

                local_120 = (long *)0x0;

                _objc_retain(uVar14);

                lVar18 = FUN_00293880(uVar14,extraout_x1_09,&local_130,auStack_f0,0x10);

                if (lVar18 != 0) {

                  lVar10 = *local_120;

                  do {

                    lVar12 = 0;

                    do {

                      if (*local_120 != lVar10) {

                        _objc_enumerationMutation(uVar14);

                      }

                      FUN_0013222c(*(undefined8 *)(lStack_128 + lVar12 * 8),lVar9);

                      lVar12 = lVar12 + 1;

                    } while (lVar18 != lVar12);

                    lVar18 = FUN_00293880(uVar14,extraout_x1_10,&local_130,auStack_f0,0x10);

                  } while (lVar18 != 0);

                }

                _objc_release(uVar14);

                iVar6 = FUN_0012ec80(param_1);

                if (iVar6 != 0) {

                  FUN_00132488(param_1,lVar9,uVar13,uVar11);

                }

                _objc_release(uVar14);

                _objc_release(uVar13);

                _objc_release(uVar11);

              }

              _objc_release(lVar9);

            }

          }

        }

        else {

          local_138 = (cfstringStruct *)0x0;

          if ((DAT_003e85da & 1) == 0) goto LAB_0012f828;

        }

        _objc_release(local_138);

      }

    }

    else {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6ab8);

      lVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar9 != 0) {

        FUN_00130354(param_1,0);

      }

    }

  }

  _objc_release(param_1);

LAB_0012fc8c:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




