// FUN_0025528c @0x25528c


void FUN_0025528c(long param_1)



{

  bool bVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

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

  long lVar8;

  ulong uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  long lVar12;

  long lVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  undefined8 uVar19;

  double dVar20;

  double dVar21;

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  long local_308;

  long local_2f8;

  undefined8 local_2f0;

  long lStack_2e8;

  long *local_2e0;

  undefined8 uStack_2d8;

  undefined8 local_2d0;

  undefined8 uStack_2c8;

  undefined8 uStack_2c0;

  undefined8 uStack_2b8;

  undefined8 local_2b0;

  long lStack_2a8;

  long *local_2a0;

  undefined8 uStack_298;

  undefined8 local_290;

  undefined8 uStack_288;

  undefined8 uStack_280;

  undefined8 uStack_278;

  undefined8 local_270;

  long lStack_268;

  long *local_260;

  undefined8 uStack_258;

  undefined8 local_250;

  undefined8 uStack_248;

  undefined8 uStack_240;

  undefined8 uStack_238;

  undefined1 auStack_230 [128];

  undefined1 auStack_1b0 [128];

  undefined1 auStack_130 [128];

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  lStack_268 = 0;

  local_270 = 0;

  uStack_258 = 0;

  local_260 = (long *)0x0;

  uStack_248 = 0;

  local_250 = 0;

  uStack_238 = 0;

  uStack_240 = 0;

  FUN_002a4840(*(undefined8 *)(param_1 + 0x20));

  auVar22 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar22._0_8_;

  local_308 = FUN_00293880(uVar3,auVar22._8_8_,&local_270,auStack_130,0x10);

  if (local_308 != 0) {

    lVar8 = *local_260;

    do {

      local_2f8 = 0;

      do {

        if (*local_260 != lVar8) {

          _objc_enumerationMutation(uVar3);

        }

        uVar11 = *(undefined8 *)(lStack_268 + local_2f8 * 8);

        uVar4 = _objc_opt_class(&objc::class_t::XZYHomeDockButton);

        auVar22 = _objc_opt_isKindOfClass(uVar11,uVar4);

        uVar4 = auVar22._8_8_;

        if ((auVar22._0_8_ & 1) != 0) {

          _objc_retain(uVar11);

          lStack_2a8 = 0;

          local_2b0 = 0;

          uStack_298 = 0;

          local_2a0 = (long *)0x0;

          uStack_288 = 0;

          local_290 = 0;

          uStack_278 = 0;

          uStack_280 = 0;

          uVar4 = *(undefined8 *)(param_1 + 0x28);

          _objc_retain(uVar4);

          auVar22 = FUN_00293880(uVar4,extraout_x1,&local_2b0,auStack_1b0,0x10);

          if (auVar22._0_8_ != 0) {

            lVar12 = *local_2a0;

            do {

              uVar5 = auVar22._8_8_;

              lVar13 = 0;

              do {

                if (*local_2a0 != lVar12) {

                  _objc_enumerationMutation(uVar4);

                  uVar5 = extraout_x1_00;

                }

                uVar10 = *(undefined8 *)(lStack_2a8 + lVar13 * 8);

                FUN_00299540(uVar10,uVar5,&cf_type);

                auVar23 = _objc_retainAutoreleasedReturnValue();

                uVar5 = auVar23._0_8_;

                iVar2 = FUN_00297820(uVar5,auVar23._8_8_,&cf_tabButton);

                if (iVar2 == 0) {

                  FUN_00299540(uVar10,extraout_x1_01,&cf_type);

                  auVar23 = _objc_retainAutoreleasedReturnValue();

                  uVar9 = FUN_00297820(auVar23._0_8_,auVar23._8_8_,&cf_sideButton);

                  _objc_release(auVar23._0_8_);

                  _objc_release(uVar5);

                  uVar5 = extraout_x1_03;

                  if ((uVar9 & 1) != 0) goto LAB_0025544c;

                }

                else {

                  _objc_release(uVar5);

                  uVar5 = extraout_x1_02;

LAB_0025544c:

                  FUN_00299540(uVar10,uVar5,&cf_tabIndex);

                  uVar5 = _objc_retainAutoreleasedReturnValue();

                  lVar6 = FUN_002974a0();

                  lVar7 = FUN_002a6860(uVar11);

                  _objc_release(uVar5);

                  uVar5 = extraout_x1_04;

                  if (lVar6 == lVar7) {

                    FUN_00299540(uVar10,extraout_x1_04,&cf_x);

                    uVar5 = _objc_retainAutoreleasedReturnValue();

                    uVar19 = FUN_00294860();

                    _objc_release(uVar5);

                    FUN_00299540(uVar10,extraout_x1_05,&cf_y);

                    uVar5 = _objc_retainAutoreleasedReturnValue();

                    uVar14 = FUN_00294860();

                    _objc_release(uVar5);

                    FUN_00299540(uVar10,extraout_x1_06,&cf_w);

                    uVar5 = _objc_retainAutoreleasedReturnValue();

                    uVar15 = FUN_00294860();

                    _objc_release(uVar5);

                    FUN_00299540(uVar10,extraout_x1_07,&cf_h);

                    uVar5 = _objc_retainAutoreleasedReturnValue();

                    uVar10 = FUN_00294860();

                    _objc_release(uVar5);

                    FUN_0029e5e0(uVar19,uVar14,uVar15,uVar10,uVar11);

                    goto LAB_00255580;

                  }

                }

                lVar13 = lVar13 + 1;

              } while (auVar22._0_8_ != lVar13);

              auVar22 = FUN_00293880(uVar4,uVar5,&local_2b0,auStack_1b0,0x10);

            } while (auVar22._0_8_ != 0);

          }

LAB_00255580:

          _objc_release(uVar4);

          _objc_release(uVar11);

          uVar4 = extraout_x1_08;

        }

        if (*(char *)(param_1 + 0x48) == '\x01') {

          auVar22 = FUN_002a4e60(uVar11);

          uVar4 = auVar22._8_8_;

          if (auVar22._0_8_ == 0x18574) {

            dVar21 = *(double *)(param_1 + 0x30);

            uVar9 = *(ulong *)(param_1 + 0x38);

            if ((long)uVar9 < 2) {

              uVar9 = 1;

            }

            lStack_2e8 = 0;

            local_2f0 = 0;

            uStack_2d8 = 0;

            local_2e0 = (long *)0x0;

            uStack_2c8 = 0;

            local_2d0 = 0;

            uStack_2b8 = 0;

            uStack_2c0 = 0;

            uVar4 = *(undefined8 *)(param_1 + 0x28);

            _objc_retain(uVar4);

            auVar22 = FUN_00293880(uVar4,extraout_x1_09,&local_2f0,auStack_230,0x10);

            dVar18 = 0.0;

            if (auVar22._0_8_ != 0) {

              lVar12 = *local_2e0;

              do {

                uVar5 = auVar22._8_8_;

                lVar13 = 0;

                do {

                  if (*local_2e0 != lVar12) {

                    _objc_enumerationMutation(uVar4);

                    uVar5 = extraout_x1_10;

                  }

                  uVar10 = *(undefined8 *)(lStack_2e8 + lVar13 * 8);

                  FUN_00299540(uVar10,uVar5,&cf_type);

                  auVar23 = _objc_retainAutoreleasedReturnValue();

                  iVar2 = FUN_00297820(auVar23._0_8_,auVar23._8_8_,&cf_slideIndicator);

                  _objc_release(auVar23._0_8_);

                  if (iVar2 != 0) {

                    FUN_00299540(uVar10,extraout_x1_11,&cf_h);

                    uVar5 = _objc_retainAutoreleasedReturnValue();

                    dVar17 = (double)FUN_00294860();

                    _objc_release(uVar5);

                    FUN_00299540(uVar10,extraout_x1_12,&cf_y);

                    uVar5 = _objc_retainAutoreleasedReturnValue();

                    uVar19 = FUN_00294860();

                    _objc_release(uVar5);

                    FUN_00299540(uVar10,extraout_x1_13,&cf_margin);

                    uVar5 = _objc_retainAutoreleasedReturnValue();

                    dVar20 = (double)FUN_00294860();

                    _objc_release(uVar5);

                    FUN_00299540(uVar10,extraout_x1_14,&cf_widthRatio);

                    lVar12 = _objc_retainAutoreleasedReturnValue();

                    bVar1 = lVar12 != 0;

                    if (lVar12 == 0) {

                      dVar18 = 0.0;

                    }

                    else {

                      dVar18 = (double)FUN_00294860(lVar12);

                    }

                    _objc_release(lVar12);

                    goto LAB_00255768;

                  }

                  lVar13 = lVar13 + 1;

                  uVar5 = extraout_x1_11;

                } while (auVar22._0_8_ != lVar13);

                auVar22 = FUN_00293880(uVar4,extraout_x1_11,&local_2f0,auStack_230,0x10);

              } while (auVar22._0_8_ != 0);

            }

            bVar1 = false;

            uVar19 = 0;

            dVar17 = 0.0;

            dVar20 = 0.0;

LAB_00255768:

            _objc_release(uVar4);

            dVar21 = dVar21 / (double)uVar9;

            dVar16 = dVar21 + dVar20 * -2.0;

            if ((bool)(bVar1 & (dVar18 <= 1.0 && 0.0 < dVar18))) {

              dVar16 = dVar18 * dVar16;

              dVar20 = (dVar21 - dVar16) * 0.5 + (double)*(long *)(param_1 + 0x40) * dVar21;

            }

            else {

              dVar20 = dVar20 + (double)*(long *)(param_1 + 0x40) * dVar21;

            }

            FUN_0029e5e0(dVar20,uVar19,dVar16,dVar17,uVar11);

            _objc_getAssociatedObject(uVar11,"xzyDockGradientLayer");

            lVar12 = _objc_retainAutoreleasedReturnValue();

            if (lVar12 != 0) {

              FUN_00292180(&_OBJC_CLASS___CATransaction);

              FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_15,1);

              FUN_002925a0(uVar11);

              FUN_0029e5e0(lVar12);

              _objc_getAssociatedObject(uVar11,"xzyDockPillShape");

              lVar13 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              if (lVar13 != 0) {

                FUN_0029d820(dVar17 * 0.5,lVar12);

              }

              FUN_002930a0(&_OBJC_CLASS___CATransaction);

            }

            _objc_release(lVar12);

            uVar4 = extraout_x1_16;

          }

        }

        local_2f8 = local_2f8 + 1;

      } while (local_2f8 != local_308);

      local_308 = FUN_00293880(uVar3,uVar4,&local_270,auStack_130,0x10);

    } while (local_308 != 0);

  }

  _objc_release(uVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




