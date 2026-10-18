// FUN_00239d80 @0x239d80


void FUN_00239d80(ulong param_1,undefined8 param_2)



{

  bool bVar1;

  int iVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  long lVar15;

  undefined8 uVar16;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  cfstringStruct *pcVar17;

  undefined8 uVar18;

  cfstringStruct *pcVar19;

  long lVar20;

  long lVar21;

  double dVar22;

  undefined1 auVar23 [16];

  undefined1 auVar24 [16];

  ulong local_2f8;

  long local_2e8;

  undefined8 local_2e0;

  long lStack_2d8;

  long *local_2d0;

  undefined8 uStack_2c8;

  undefined8 local_2c0;

  undefined8 uStack_2b8;

  undefined8 uStack_2b0;

  undefined8 uStack_2a8;

  undefined8 local_2a0;

  long lStack_298;

  long *local_290;

  undefined8 uStack_288;

  undefined8 local_280;

  undefined8 uStack_278;

  undefined8 uStack_270;

  undefined8 uStack_268;

  undefined8 local_260;

  long lStack_258;

  long *local_250;

  undefined8 uStack_248;

  undefined8 local_240;

  undefined8 uStack_238;

  undefined8 uStack_230;

  undefined8 uStack_228;

  cfstringStruct *local_220;

  cfstringStruct *local_218;

  cfstringStruct *pcStack_210;

  undefined8 local_208;

  undefined1 auStack_200 [128];

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  if (param_1 == 0xffffffffffffffff) {

    uVar16 = 0;

    goto LAB_0023a828;

  }

  if (param_1 < 4) {

    FUN_002435a8(param_2,param_1);

    auVar23 = _objc_retainAutoreleasedReturnValue();

    pcVar19 = auVar23._0_8_;

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar23._8_8_,&cf_tab_ld);

    auVar23 = _objc_retainAutoreleasedReturnValue();

    pcVar17 = auVar23._0_8_;

    if (pcVar19 == (cfstringStruct *)0x0) {

LAB_00239f10:

      uVar16 = 0;

    }

    else {

      local_220 = &cf_text;

      local_218 = &cf_source;

      if (pcVar17 != (cfstringStruct *)0x0) goto LAB_0023a7d0;

      pcStack_210 = pcVar19;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar23._8_8_,&cf__ld);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      pcVar17 = (cfstringStruct *)0x0;

      bVar1 = true;

LAB_0023a7d4:

      local_208 = auVar23._0_8_;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar23._8_8_,&pcStack_210,&local_220,2);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      if (bVar1) {

        _objc_release(auVar23._0_8_);

      }

    }

  }

  else {

    if (param_1 != 0xfffffffffffffff6) {

      pcVar17 = (cfstringStruct *)0x0;

      pcVar19 = (cfstringStruct *)0x0;

      goto LAB_00239f10;

    }

    _objc_retain(param_2);

    dVar22 = (double)FUN_002a5220(&_OBJC_CLASS___NSDate);

    uVar16 = extraout_x1;

    if (DAT_003eb190 == 0) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      lVar15 = DAT_003eb190;

      DAT_003eb190 = lVar3;

      _objc_release(lVar15);

      uVar16 = extraout_x1_00;

    }

    if (1.0 <= dVar22 - DAT_003eb288) {

      DAT_003eb288 = dVar22;

      FUN_002992c0(&_OBJC_CLASS___NSNull);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      FUN_002a00a0(DAT_003eb190,auVar23._8_8_,auVar23._0_8_,

                   &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0058);

      _objc_release(auVar23._0_8_);

      FUN_002318f4(param_2);

      lVar15 = _objc_retainAutoreleasedReturnValue();

      if (lVar15 == 0) {

LAB_00239f94:

        pcVar19 = (cfstringStruct *)0x0;

      }

      else {

        FUN_002a6260(lVar15);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        uVar5 = FUN_00293860();

        _objc_release(uVar16);

        if (uVar5 < 3) goto LAB_00239f94;

        FUN_002a6260(lVar15);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        FUN_00299500(auVar23._0_8_,auVar23._8_8_,2);

        uVar16 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar23._0_8_);

        uVar6 = _objc_opt_class(&_OBJC_CLASS___UINavigationController);

        uVar5 = _objc_opt_isKindOfClass(uVar16,uVar6);

        if ((uVar5 & 1) != 0) {

          FUN_002a6260(uVar16);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_00295440();

          uVar7 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar16);

          _objc_release(uVar6);

          uVar16 = uVar7;

        }

        iVar2 = FUN_00297b80();

        if (iVar2 == 0) {

          pcVar19 = (cfstringStruct *)0x0;

        }

        else {

          FUN_002a6220(uVar16);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          FUN_00291dc0(&_OBJC_CLASS___NSMutableArray,auVar23._8_8_,auVar23._0_8_);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar23._0_8_);

          for (local_2e8 = 0x9c4; (lVar3 = FUN_00293860(uVar6), lVar3 != 0 && (local_2e8 != 0));

              local_2e8 = local_2e8 + -1) {

            FUN_00295440(uVar6);

            auVar23 = _objc_retainAutoreleasedReturnValue();

            lVar3 = auVar23._0_8_;

            FUN_0029b480(uVar6,auVar23._8_8_,0);

            uVar5 = FUN_002978a0(lVar3);

            if (((uVar5 & 1) == 0) && (dVar22 = (double)FUN_002916a0(lVar3), 0.1 < dVar22)) {

              uVar7 = _objc_opt_class(&_OBJC_CLASS___UILabel);

              uVar5 = _objc_opt_isKindOfClass(lVar3,uVar7);

              if ((uVar5 & 1) != 0) {

                FUN_002a5020(lVar3);

                auVar23 = _objc_retainAutoreleasedReturnValue();

                uVar7 = auVar23._0_8_;

                iVar2 = FUN_00293560(&PTR__OBJC_CLASS___NSConstantArray_003bee90,auVar23._8_8_,uVar7

                                    );

                if (iVar2 != 0) {

                  FUN_002a4880(lVar3);

                  lVar8 = _objc_retainAutoreleasedReturnValue();

                  if (lVar8 != 0) {

                    local_2f8 = 0;

                    do {

                      _objc_retain(lVar8);

                      _objc_retain(lVar3);

                      uVar5 = FUN_002978a0(lVar8);

                      if (((uVar5 & 1) != 0) ||

                         (dVar22 = (double)FUN_002916a0(lVar8), dVar22 <= 0.1)) {

                        pcVar19 = (cfstringStruct *)0x0;

                      }

                      else {

                        auVar23 = _NSClassFromString(&cf_MMBadgeView);

                        FUN_00291dc0(&_OBJC_CLASS___NSMutableArray,auVar23._8_8_,lVar8);

                        uVar9 = _objc_retainAutoreleasedReturnValue();

                        lVar20 = 0x15e;

LAB_0023a1d4:

                        lVar10 = FUN_00293860(uVar9);

                        if (lVar10 != 0) {

                          pcVar19 = (cfstringStruct *)0x0;

                          if (lVar20 == 0) goto LAB_0023a33c;

                          FUN_00295440(uVar9);

                          auVar24 = _objc_retainAutoreleasedReturnValue();

                          lVar10 = auVar24._0_8_;

                          FUN_0029b480(uVar9,auVar24._8_8_,0);

                          if (((lVar10 == lVar3) || (uVar5 = FUN_002978a0(lVar10), (uVar5 & 1) != 0)

                              ) || (dVar22 = (double)FUN_002916a0(lVar10), dVar22 <= 0.1))

                          goto LAB_0023a320;

                          _objc_opt_class(lVar10);

                          _NSStringFromClass();

                          auVar24 = _objc_retainAutoreleasedReturnValue();

                          uVar13 = auVar24._8_8_;

                          uVar11 = auVar24._0_8_;

                          if (auVar23._0_8_ == 0) {

LAB_0023a258:

                            lVar12 = FUN_0029abc0(uVar11,uVar13,&cf_Badge,1);

                            if (lVar12 == 0x7fffffffffffffff) {

                              uStack_278 = 0;

                              local_280 = 0;

                              uStack_268 = 0;

                              uStack_270 = 0;

                              lStack_298 = 0;

                              local_2a0 = 0;

                              uStack_288 = 0;

                              local_290 = (long *)0x0;

                              FUN_002a4840(lVar10);

                              auVar24 = _objc_retainAutoreleasedReturnValue();

                              uVar13 = auVar24._0_8_;

                              auVar24 = FUN_00293880(uVar13,auVar24._8_8_,&local_2a0,auStack_180,

                                                     0x10);

                              if (auVar24._0_8_ != 0) {

                                lVar12 = *local_290;

                                do {

                                  uVar14 = auVar24._8_8_;

                                  lVar21 = 0;

                                  do {

                                    if (*local_290 != lVar12) {

                                      _objc_enumerationMutation(uVar13);

                                      uVar14 = extraout_x1_01;

                                    }

                                    FUN_00291240(uVar9,uVar14,

                                                 *(undefined8 *)(lStack_298 + lVar21 * 8));

                                    lVar21 = lVar21 + 1;

                                    uVar14 = extraout_x1_02;

                                  } while (auVar24._0_8_ != lVar21);

                                  auVar24 = FUN_00293880(uVar13,extraout_x1_02,&local_2a0,

                                                         auStack_180,0x10);

                                } while (auVar24._0_8_ != 0);

                              }

                              _objc_release(uVar13);

                              _objc_release(uVar11);

                              goto LAB_0023a320;

                            }

                          }

                          else {

                            auVar24 = _objc_opt_isKindOfClass(lVar10,auVar23._0_8_);

                            uVar13 = auVar24._8_8_;

                            if ((auVar24._0_8_ & 1) == 0) goto LAB_0023a258;

                          }

                          FUN_00242cbc(lVar10);

                          auVar23 = _objc_opt_respondsToSelector(lVar10,"badgeLabel");

                          if ((auVar23._0_8_ & 1) != 0) {

                            FUN_002a6080(lVar10,auVar23._8_8_,&cf_badgeLabel);

                            uVar13 = _objc_retainAutoreleasedReturnValue();

                            uVar14 = _objc_opt_class(&_OBJC_CLASS___UILabel);

                            uVar5 = _objc_opt_isKindOfClass(uVar13,uVar14);

                            if ((uVar5 & 1) == 0) {

                              _objc_release(uVar13);

                            }

                            else {

                              FUN_002a5020(uVar13);

                              pcVar17 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                              _objc_release(uVar13);

                              if (pcVar17 != (cfstringStruct *)0x0) goto LAB_0023a4e8;

                            }

                          }

                          uStack_238 = 0;

                          local_240 = 0;

                          uStack_228 = 0;

                          uStack_230 = 0;

                          lStack_258 = 0;

                          local_260 = 0;

                          uStack_248 = 0;

                          local_250 = (long *)0x0;

                          FUN_002a4840(lVar10);

                          auVar23 = _objc_retainAutoreleasedReturnValue();

                          uVar13 = auVar23._0_8_;

                          lVar20 = FUN_00293880(uVar13,auVar23._8_8_,&local_260,auStack_100,0x10);

                          pcVar17 = (cfstringStruct *)0x0;

                          if (lVar20 != 0) {

                            lVar12 = *local_250;

                            do {

                              lVar21 = 0;

                              do {

                                if (*local_250 != lVar12) {

                                  _objc_enumerationMutation(uVar13);

                                }

                                uVar18 = *(undefined8 *)(lStack_258 + lVar21 * 8);

                                uVar14 = _objc_opt_class(&_OBJC_CLASS___UILabel);

                                auVar23 = _objc_opt_isKindOfClass(uVar18,uVar14);

                                if ((auVar23._0_8_ & 1) != 0) {

                                  FUN_002a5020(uVar18);

                                  pcVar17 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                                  goto LAB_0023a4e0;

                                }

                                lVar21 = lVar21 + 1;

                              } while (lVar20 != lVar21);

                              lVar20 = FUN_00293880(uVar13,auVar23._8_8_,&local_260,auStack_100,0x10

                                                   );

                            } while (lVar20 != 0);

                            pcVar17 = (cfstringStruct *)0x0;

                          }

LAB_0023a4e0:

                          _objc_release(uVar13);

LAB_0023a4e8:

                          pcVar19 = &cf__;

                          if (pcVar17 != (cfstringStruct *)0x0) {

                            pcVar19 = pcVar17;

                          }

                          FUN_0023898c(pcVar19);

                          pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

                          pcVar19 = &cf___;

                          if (pcVar4 != (cfstringStruct *)0x0) {

                            pcVar19 = pcVar4;

                          }

                          _objc_retain(pcVar19);

                          _objc_release(pcVar4);

                          _objc_release(pcVar17);

                          _objc_release(uVar11);

                          _objc_release(lVar10);

                          goto LAB_0023a33c;

                        }

                        pcVar19 = (cfstringStruct *)0x0;

LAB_0023a33c:

                        _objc_release(uVar9);

                      }

                      _objc_release(lVar3);

                      _objc_release(lVar8);

                      if (pcVar19 != (cfstringStruct *)0x0) {

                        auVar23 = FUN_00297fa0(pcVar19);

                        pcVar17 = &cf___;

                        if (auVar23._0_8_ != 0) {

                          pcVar17 = pcVar19;

                        }

                        FUN_002a00a0(DAT_003eb190,auVar23._8_8_,pcVar17,

                                     &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0058);

                        _objc_release(lVar8);

                        _objc_release(uVar7);

                        _objc_release(lVar3);

                        goto LAB_0023a698;

                      }

                      FUN_002a4880(lVar8);

                      lVar20 = _objc_retainAutoreleasedReturnValue();

                      _objc_release(lVar8);

                    } while ((lVar20 != 0) &&

                            (bVar1 = local_2f8 < 4, lVar8 = lVar20, local_2f8 = local_2f8 + 1, bVar1

                            ));

                    _objc_release(lVar20);

                  }

                }

                _objc_release(uVar7);

              }

              uStack_2b8 = 0;

              local_2c0 = 0;

              uStack_2a8 = 0;

              uStack_2b0 = 0;

              lStack_2d8 = 0;

              local_2e0 = 0;

              uStack_2c8 = 0;

              local_2d0 = (long *)0x0;

              FUN_002a4840(lVar3);

              auVar23 = _objc_retainAutoreleasedReturnValue();

              uVar7 = auVar23._0_8_;

              auVar23 = FUN_00293880(uVar7,auVar23._8_8_,&local_2e0,auStack_200,0x10);

              if (auVar23._0_8_ != 0) {

                lVar8 = *local_2d0;

                do {

                  uVar9 = auVar23._8_8_;

                  lVar20 = 0;

                  do {

                    if (*local_2d0 != lVar8) {

                      _objc_enumerationMutation(uVar7);

                      uVar9 = extraout_x1_03;

                    }

                    FUN_00291240(uVar6,uVar9,*(undefined8 *)(lStack_2d8 + lVar20 * 8));

                    lVar20 = lVar20 + 1;

                    uVar9 = extraout_x1_04;

                  } while (auVar23._0_8_ != lVar20);

                  auVar23 = FUN_00293880(uVar7,extraout_x1_04,&local_2e0,auStack_200,0x10);

                } while (auVar23._0_8_ != 0);

              }

              _objc_release(uVar7);

            }

            _objc_release(lVar3);

          }

          pcVar19 = (cfstringStruct *)0x0;

LAB_0023a698:

          _objc_release(uVar6);

        }

        _objc_release(uVar16);

      }

      _objc_release(lVar15);

    }

    else {

      FUN_00299540(DAT_003eb190,uVar16,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0058);

      pcVar17 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      FUN_002992c0(&_OBJC_CLASS___NSNull);

      pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar19 = (cfstringStruct *)0x0;

      if (pcVar17 != pcVar4) {

        pcVar19 = pcVar17;

      }

      _objc_retain(pcVar19);

      _objc_release(pcVar4);

      _objc_release(pcVar17);

    }

    _objc_release(param_2);

    if ((DAT_003eb1c0 == 0) ||

       (dVar22 = (double)FUN_002a5220(&_OBJC_CLASS___NSDate), 0.3 <= dVar22 - DAT_003eb280)) {

      FUN_002435a8(param_2,2);

      pcVar17 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_00299540(DAT_003eb1c0,extraout_x1_05,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003c00e8);

      pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      if (pcVar4 == (cfstringStruct *)0x0) {

LAB_0023a764:

        pcVar17 = (cfstringStruct *)0x0;

      }

      else {

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        pcVar17 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (pcVar4 == pcVar17) goto LAB_0023a764;

        _objc_retain(pcVar4);

        pcVar17 = pcVar4;

      }

      _objc_release(pcVar4);

    }

    if ((pcVar19 == (cfstringStruct *)0x0) ||

       ((lVar15 = FUN_00297fa0(pcVar19), lVar15 == 0 &&

        (lVar15 = FUN_00297fa0(pcVar17), lVar15 != 0)))) {

      _objc_retain(pcVar17);

      _objc_release(pcVar19);

      pcVar19 = pcVar17;

    }

    _objc_release(pcVar17);

    if (pcVar19 != (cfstringStruct *)0x0) {

      auVar23._8_8_ = extraout_x1_06;

      auVar23._0_8_ = &cf_moment;

LAB_0023a7d0:

      pcVar17 = auVar23._0_8_;

      local_218 = &cf_source;

      local_220 = &cf_text;

      bVar1 = false;

      pcStack_210 = pcVar19;

      goto LAB_0023a7d4;

    }

    uVar16 = 0;

    pcVar17 = &cf_moment;

  }

  _objc_release(pcVar17);

  _objc_release(pcVar19);

LAB_0023a828:

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    _objc_autoreleaseReturnValue(uVar16);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

LAB_0023a320:

  _objc_release(lVar10);

  lVar20 = lVar20 + -1;

  goto LAB_0023a1d4;

}




