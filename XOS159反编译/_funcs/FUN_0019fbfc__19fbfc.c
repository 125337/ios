// FUN_0019fbfc @0x19fbfc


void FUN_0019fbfc(undefined1 param_1 [16],undefined8 param_2,double param_3,double param_4,

                 long param_5)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  double dVar12;

  double dVar13;

  undefined8 uVar14;

  double dVar15;

  double dVar16;

  undefined1 auVar17 [16];

  char local_a1;

  

  _objc_retain();

  if (param_5 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar3 = _objc_opt_isKindOfClass(param_5,uVar2);

    if (((uVar3 & 1) != 0) && (iVar1 = FUN_001aa29c(param_5), iVar1 != 0)) {

      _objc_retain(param_5);

      if (DAT_003e96b8 != -1) {

        FUN_0028f79c();

      }

      if (DAT_003e96b0 == 0) {

        _objc_release(param_5);

      }

      else {

        uVar3 = _objc_opt_isKindOfClass(param_5);

        _objc_release(param_5);

        if ((uVar3 & 1) != 0) goto LAB_0019fd6c;

      }

      FUN_0018da3c();

      if (DAT_003e95c8 == '\x01') {

        _objc_retain(param_5);

        iVar1 = FUN_001aa29c(param_5);

        lVar6 = param_5;

        if (iVar1 != 0) {

          lVar9 = 0;

          do {

            FUN_001aa1b4(param_5,*(undefined8 *)((long)&PTR_s_m_translateView_0038e2a0 + lVar9));

            lVar4 = _objc_retainAutoreleasedReturnValue();

            _objc_retain();

            if (lVar4 != 0) {

              FUN_002a4880(lVar4);

              lVar5 = _objc_retainAutoreleasedReturnValue();

              if (lVar5 == 0) {

                _objc_release(lVar4);

                _objc_release(lVar4);

              }

              else {

                uVar3 = FUN_001a90ec(lVar4);

                _objc_release(lVar5);

                _objc_release(lVar4);

                _objc_release(lVar4);

                if ((uVar3 & 1) != 0) {

                  _objc_release(param_5);

                  auVar17 = _objc_opt_respondsToSelector(param_5,"viewModel");

                  if ((auVar17._0_8_ & 1) == 0) goto LAB_0019fd6c;

                  FUN_00299c80(param_5,auVar17._8_8_,"viewModel");

                  lVar6 = _objc_retainAutoreleasedReturnValue();

                  if ((lVar6 != 0) && (uVar3 = FUN_00191434(lVar6), (uVar3 & 1) != 0)) {

                    uVar2 = FUN_00191330(lVar6);

                    local_a1 = '\0';

                    uVar11 = FUN_001a4248(param_5,uVar2,&local_a1);

                    if ((local_a1 == '\x01') &&

                       (uVar14 = param_2, dVar15 = param_3, dVar16 = param_4,

                       uVar3 = _CGRectIsNull(), (uVar3 & 1) == 0)) {

                      FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

                      lVar4 = _objc_retainAutoreleasedReturnValue();

                      FUN_00292180(&_OBJC_CLASS___CATransaction);

                      FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

                      lVar9 = 0;

                      do {

                        FUN_001aa1b4(param_5,(&PTR_s_m_translateView_0038e2a0)[lVar9]);

                        lVar5 = _objc_retainAutoreleasedReturnValue();

                        _objc_retain(param_5);

                        _objc_retain(lVar5);

                        _objc_retain(lVar4);

                        if (((lVar5 != 0) && (uVar3 = FUN_002978a0(lVar5), (uVar3 & 1) == 0)) &&

                           (dVar12 = (double)FUN_002916a0(lVar5), 0.01 <= dVar12)) {

                          FUN_002a4880(lVar5);

                          lVar7 = _objc_retainAutoreleasedReturnValue();

                          _objc_release();

                          if (((lVar7 != 0) &&

                              (iVar1 = FUN_00297700(lVar5,extraout_x1_00,param_5), iVar1 != 0)) &&

                             ((FUN_00295600(lVar5), 1.0 < dVar15 &&

                              (FUN_00295600(lVar5), 1.0 < dVar16)))) {

                            _objc_retain(lVar5);

                            _objc_retain(param_5);

                            _objc_retain(lVar4);

                            lVar7 = FUN_00293860(lVar4);

                            uVar10 = uVar14;

                            dVar12 = dVar15;

                            dVar13 = dVar16;

                            if (lVar7 != 0) {

                              FUN_002a4880(lVar5);

                              auVar17 = _objc_retainAutoreleasedReturnValue();

                              lVar7 = auVar17._0_8_;

                              while ((lVar7 != 0 && (lVar7 != param_5))) {

                                uVar10 = auVar17._0_8_;

                                uVar3 = FUN_00293560(lVar4,auVar17._8_8_,uVar10);

                                if ((uVar3 & 1) != 0) {

                                  _objc_release(uVar10);

                                  _objc_release(lVar4);

                                  _objc_release(param_5);

                                  _objc_release(lVar5);

                                  goto LAB_001a00c8;

                                }

                                FUN_002a4880(uVar10);

                                lVar7 = _objc_retainAutoreleasedReturnValue();

                                _objc_release(uVar10);

                                auVar17._8_8_ = extraout_x1_01;

                                auVar17._0_8_ = lVar7;

                              }

                              _objc_release(lVar7);

                              uVar10 = uVar14;

                              dVar12 = dVar15;

                              dVar13 = dVar16;

                            }

                            _objc_release(lVar4);

                            _objc_release(param_5);

                            _objc_release(lVar5);

                            FUN_002a4880(lVar5);

                            uVar8 = _objc_retainAutoreleasedReturnValue();

                            FUN_00295600(lVar5);

                            FUN_00293720(uVar8,extraout_x1_02,param_5);

                            uVar14 = uVar10;

                            dVar15 = dVar12;

                            dVar16 = dVar13;

                            _objc_release(uVar8);

                            if ((1.0 < dVar12) && (1.0 < dVar13)) {

                              if ((int)uVar2 == 0) {

                                dVar15 = param_3;

                                dVar16 = param_4;

                                dVar13 = (double)_CGRectGetMinX(uVar11,param_2);

                              }

                              else {

                                dVar15 = param_3;

                                dVar16 = param_4;

                                dVar13 = (double)_CGRectGetMaxX(uVar11,param_2);

                                dVar13 = dVar13 - dVar12;

                              }

                              FUN_002a4880(lVar5);

                              auVar17 = _objc_retainAutoreleasedReturnValue();

                              dVar12 = (double)FUN_002936e0(dVar13,uVar10,param_5,auVar17._8_8_,

                                                            auVar17._0_8_);

                              _objc_release(auVar17._0_8_);

                              dVar13 = (double)FUN_00295600(lVar5);

                              uVar8 = extraout_x1_03;

                              uVar14 = uVar10;

                              if (0.5 < ABS(dVar13 - dVar12)) {

                                FUN_0029e5e0(dVar12,lVar5);

                                uVar8 = extraout_x1_04;

                                uVar14 = uVar10;

                              }

                              if (lVar4 != 0) {

                                FUN_00291240(lVar4,uVar8,lVar5);

                              }

                            }

                          }

                        }

LAB_001a00c8:

                        _objc_release(lVar4);

                        _objc_release(lVar5);

                        _objc_release(param_5);

                        _objc_release(lVar5);

                        lVar9 = lVar9 + 1;

                      } while (lVar9 != 6);

                      FUN_002930a0(&_OBJC_CLASS___CATransaction);

                      _objc_release(lVar4);

                    }

                  }

                  break;

                }

              }

            }

            lVar9 = lVar9 + 8;

          } while (lVar9 != 0x30);

        }

        _objc_release(lVar6);

      }

    }

  }

LAB_0019fd6c:

  _objc_release(param_5);

  return;

}




