// FUN_0012e47c @0x12e47c


void FUN_0012e47c(undefined8 param_1,undefined8 param_2)



{

  undefined8 *puVar1;

  undefined8 *puVar2;

  int iVar3;

  int iVar4;

  ulong uVar5;

  long lVar6;

  long lVar7;

  cfstringStruct *pcVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  undefined8 extraout_x1;

  cfstringStruct *pcVar13;

  bool bVar14;

  undefined1 auVar15 [16];

  

  uVar5 = FUN_0012ec24();

  if (((uVar5 & 1) != 0) && ((FUN_0012da64(), (DAT_003eb3c0 & 1) != 0 || ((DAT_003e85d8 & 1) != 0)))

     ) {

    FUN_002a4880(param_1);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if (DAT_003e8748 != -1) {

      FUN_0028f474();

    }

    if (DAT_003e8738 != 0) {

      while (lVar6 != 0) {

        if ((DAT_003e8740 != 0) && (uVar5 = _objc_opt_isKindOfClass(lVar6), (uVar5 & 1) != 0)) {

          (*DAT_003e85a8)(param_1,param_2);

          pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

LAB_0012e6a0:

          _objc_release(lVar6);

          goto LAB_0012e570;

        }

        uVar5 = _objc_opt_isKindOfClass(lVar6,DAT_003e8738);

        if ((uVar5 & 1) != 0) {

          _objc_retain(lVar6);

          iVar3 = FUN_00130124(lVar6);

          if (iVar3 == 0) {

            if (DAT_003e8768 != -1) {

              FUN_0028f488();

            }

            if ((((DAT_003e8750 == 0) || (uVar5 = _objc_opt_isKindOfClass(lVar6), (uVar5 & 1) == 0))

                && ((DAT_003e8758 == 0 || (uVar5 = _objc_opt_isKindOfClass(lVar6), (uVar5 & 1) == 0)

                    ))) &&

               ((DAT_003e8760 == 0 || (uVar5 = _objc_opt_isKindOfClass(lVar6), (uVar5 & 1) == 0))))

            {

              if ((DAT_003e8778 & 1) == 0) {

                DAT_003e8778 = 1;

                DAT_003e8770 = _objc_getClass("MultiReaderMessageCellView");

              }

              if ((DAT_003e8770 == 0) || (uVar5 = _objc_opt_isKindOfClass(lVar6), (uVar5 & 1) == 0))

              {

                FUN_001319f0(lVar6,"m_translateView");

                auVar15 = _objc_retainAutoreleasedReturnValue();

                lVar7 = auVar15._0_8_;

                if ((lVar7 == 0) || (iVar3 = FUN_00297700(param_1,auVar15._8_8_,lVar7), iVar3 == 0))

                {

                  FUN_001319f0(lVar6,"m_voiceTransView");

                  auVar15 = _objc_retainAutoreleasedReturnValue();

                  lVar9 = auVar15._0_8_;

                  if ((lVar9 == 0) ||

                     (iVar3 = FUN_00297700(param_1,auVar15._8_8_,lVar9), iVar3 == 0)) {

                    FUN_001319f0(lVar6,"m_voiceTransTextView");

                    auVar15 = _objc_retainAutoreleasedReturnValue();

                    lVar10 = auVar15._0_8_;

                    if ((lVar10 == 0) ||

                       (iVar3 = FUN_00297700(param_1,auVar15._8_8_,lVar10), iVar3 == 0)) {

                      uVar5 = _objc_opt_respondsToSelector(lVar6,"viewModel");

                      if ((uVar5 & 1) == 0) {

                        iVar3 = 0;

                      }

                      else {

                        FUN_002a6280(lVar6);

                        uVar11 = _objc_retainAutoreleasedReturnValue();

                        uVar5 = _objc_opt_respondsToSelector(uVar11,"isSender");

                        if ((uVar5 & 1) == 0) {

                          iVar3 = 0;

                        }

                        else {

                          iVar3 = FUN_00297a80(uVar11);

                        }

                        _objc_release(uVar11);

                      }

                      iVar4 = FUN_001331c4();

                      if (DAT_003e85d8 == 1) {

                        puVar2 = &DAT_003e8528;

                        if (iVar4 == 0) {

                          puVar2 = &DAT_003e8520;

                        }

                        puVar1 = &DAT_003e8538;

                        if (iVar4 == 0) {

                          puVar1 = &DAT_003e8530;

                        }

                        if (iVar3 == 0) {

                          puVar2 = puVar1;

                        }

                        pcVar13 = (cfstringStruct *)*puVar2;

                        _objc_retain(pcVar13);

                        if ((pcVar13 == (cfstringStruct *)0x0) ||

                           (lVar12 = FUN_00297fa0(pcVar13), lVar12 == 0)) {

                          _objc_release(pcVar13);

                          pcVar13 = &cf__000000;

                        }

                        lVar12 = FUN_00297fa0(pcVar13);

                        if ((lVar12 == 0) && (pcVar8 = pcVar13, (DAT_003e85da & 1) == 0)) {

LAB_0012e92c:

                          puVar2 = &DAT_003eb3e0;

                          if (iVar4 == 0) {

                            puVar2 = &DAT_003eb3d8;

                          }

                          puVar1 = &DAT_003eb3d0;

                          if (iVar4 == 0) {

                            puVar1 = &DAT_003eb3c8;

                          }

                          if (iVar3 == 0) {

                            puVar2 = puVar1;

                          }

                          pcVar13 = (cfstringStruct *)*puVar2;

                          _objc_retain(pcVar13);

                          _objc_release(pcVar8);

                          pcVar8 = pcVar13;

                          if (pcVar13 == (cfstringStruct *)0x0) goto LAB_0012e9d0;

                        }

                        lVar12 = FUN_00297fa0(pcVar13);

                        pcVar8 = pcVar13;

                        if (lVar12 != 0) {

                          FUN_0012dd08(pcVar13);

                          lVar12 = _objc_retainAutoreleasedReturnValue();

                          if (lVar12 != 0) {

                            _objc_setAssociatedObject

                                      (lVar6,PTR_LOOP_003e6ab8,PTR____kCFBooleanTrue_00388320,1);

                            FUN_002a0020(param_1,extraout_x1,lVar12);

                          }

                          _objc_release(lVar12);

                        }

                      }

                      else {

                        pcVar8 = (cfstringStruct *)0x0;

                        if ((DAT_003e85da & 1) == 0) goto LAB_0012e92c;

                      }

LAB_0012e9d0:

                      _objc_release(pcVar8);

                      bVar14 = true;

                    }

                    else {

                      (*DAT_003e85a8)(param_1,param_2);

                      pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                      bVar14 = false;

                    }

                    _objc_release(lVar10);

                    _objc_release(lVar9);

                    _objc_release(lVar7);

                    _objc_release(lVar6);

                    if (!bVar14) goto LAB_0012e6a0;

                    break;

                  }

                  (*DAT_003e85a8)(param_1,param_2);

                  pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                  _objc_release(lVar9);

                }

                else {

                  (*DAT_003e85a8)(param_1,param_2);

                  pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                }

                _objc_release(lVar7);

              }

              else {

                (*DAT_003e85a8)(param_1,param_2);

                pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              }

            }

            else {

              (*DAT_003e85a8)(param_1,param_2);

              pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            }

          }

          else {

            _objc_setAssociatedObject(param_1,&DAT_0030e549,0,1);

            (*DAT_003e85a8)(param_1,param_2);

            pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          }

          _objc_release(lVar6);

          goto LAB_0012e6a0;

        }

        FUN_002a4880(lVar6);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar6);

        lVar6 = lVar7;

      }

    }

    _objc_release(lVar6);

  }

  (*DAT_003e85a8)(param_1,param_2);

  pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

LAB_0012e570:

  _objc_autoreleaseReturnValue(pcVar8);

  return;

}




