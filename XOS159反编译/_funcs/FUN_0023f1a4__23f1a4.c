// FUN_0023f1a4 @0x23f1a4


void FUN_0023f1a4(undefined8 param_1,long param_2)



{

  char cVar1;

  int iVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  ulong uVar12;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar13;

  long lVar14;

  undefined8 unaff_x24;

  long lVar15;

  undefined8 uVar16;

  double dVar17;

  double dVar18;

  double dVar19;

  double dVar20;

  double dVar21;

  double dVar22;

  undefined1 auVar23 [16];

  undefined8 local_240;

  long lStack_238;

  long *local_230;

  undefined8 uStack_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 uStack_210;

  undefined8 uStack_208;

  undefined8 local_200;

  long lStack_1f8;

  long *local_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 uStack_1d8;

  undefined8 uStack_1d0;

  undefined8 uStack_1c8;

  undefined1 auStack_1b8 [128];

  undefined1 auStack_138 [128];

  undefined8 local_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  long local_a0;

  

  local_a0 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  if (param_2 != 0) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e7258);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 != 0) {

      iVar2 = FUN_0023d2c4(param_1);

      if (iVar2 == 0) {

        FUN_0023ae90(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        lVar11 = FUN_00293860();

        _objc_release(uVar5);

        FUN_002925a0(param_1);

        dVar17 = (double)_CGRectGetWidth();

        dVar17 = dVar17 + -36.0;

        if (dVar17 <= 160.0) {

          dVar17 = 160.0;

        }

        dVar18 = 210.0;

        if (dVar17 <= 210.0) {

          dVar18 = dVar17;

        }

        iVar2 = FUN_0023cfb8(param_1);

        dVar17 = (double)lVar11 * 52.0 + 16.0;

        if (iVar2 == 0) {

          FUN_00295600(lVar3);

          dVar22 = (double)_CGRectGetMaxX();

          FUN_002925a0(param_1);

          dVar21 = (double)_CGRectGetWidth();

          dVar19 = (dVar21 - dVar18) + -18.0;

          dVar21 = dVar22 - dVar18;

          if (dVar19 <= dVar22 - dVar18) {

            dVar21 = dVar19;

          }

          FUN_00295600(lVar3);

          dVar22 = (double)_CGRectGetMinY();

          dVar22 = (dVar22 - dVar17) + -10.0;

        }

        else {

          FUN_00295600(lVar3);

          dVar21 = (double)_CGRectGetMidX();

          FUN_00295600(lVar3);

          dVar22 = (double)_CGRectGetMinY();

          FUN_002925a0(param_1);

          dVar19 = (double)_CGRectGetWidth();

          dVar21 = dVar21 + dVar18 * -0.5;

          dVar22 = (dVar22 - dVar17) + -8.0;

          dVar19 = (dVar19 - dVar18) + -18.0;

          if (dVar19 <= dVar21) {

            dVar21 = dVar19;

          }

        }

        FUN_00249a50(dVar21,dVar22,dVar18,dVar17,param_1,param_2);

        uStack_218 = 0;

        local_220 = 0;

        uStack_208 = 0;

        uStack_210 = 0;

        lStack_238 = 0;

        local_240 = 0;

        uStack_228 = 0;

        local_230 = (long *)0x0;

        FUN_002a4840(param_2);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar23._0_8_;

        lVar11 = FUN_00293880(uVar5,auVar23._8_8_,&local_240,auStack_1b8,0x10);

        if (lVar11 != 0) {

          lVar4 = *local_230;

          do {

            lVar8 = 0;

            do {

              if (*local_230 != lVar4) {

                _objc_enumerationMutation(uVar5);

              }

              uVar7 = *(undefined8 *)(lStack_238 + lVar8 * 8);

              FUN_00295600(uVar7);

              FUN_0029e5e0(uVar7);

              uVar6 = _objc_opt_class(&objc::class_t::XZYHomeDockButton);

              uVar12 = _objc_opt_isKindOfClass(uVar7,uVar6);

              if ((uVar12 & 1) == 0) {

                FUN_002392b4(uVar7,0);

                uVar6 = extraout_x1_02;

              }

              else {

                _objc_retain(uVar7);

                cVar1 = DAT_003e7268;

                if (DAT_003e7268 == '\x01') {

                  uVar6 = FUN_002a6860(uVar7);

                  FUN_00239d20(uVar6,param_1);

                  uVar6 = _objc_retainAutoreleasedReturnValue();

                  unaff_x24 = uVar6;

                }

                else {

                  uVar6 = 0;

                }

                FUN_0023966c(uVar7,uVar6,0);

                if (cVar1 != '\0') {

                  _objc_release(unaff_x24);

                }

                _objc_release(uVar7);

                uVar6 = extraout_x1_03;

              }

              lVar8 = lVar8 + 1;

            } while (lVar11 != lVar8);

            lVar11 = FUN_00293880(uVar5,uVar6,&local_240,auStack_1b8,0x10);

          } while (lVar11 != 0);

        }

        _objc_release(uVar5);

        FUN_002a4880(param_2);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        FUN_002925e0(auVar23._0_8_,auVar23._8_8_,param_2);

        _objc_release(auVar23._0_8_);

      }

      else {

        _objc_retain(param_1);

        _objc_retain(param_2);

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e7258);

        auVar23 = _objc_retainAutoreleasedReturnValue();

        lVar11 = auVar23._0_8_;

        FUN_002a62a0(lVar11,auVar23._8_8_,&DAT_00002455);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        if ((lVar11 != 0) && (lVar4 != 0)) {

          FUN_002925a0(param_1);

          dVar17 = (double)_CGRectGetWidth();

          FUN_002925a0(param_1);

          dVar18 = (double)_CGRectGetHeight();

          dVar21 = -152.0;

          FUN_00249a50(0,0xc063000000000000,dVar17,dVar18 + 152.0,param_1,param_2);

          FUN_0029d4a0(param_2,extraout_x1,0);

          FUN_002a4880(lVar4);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_00292ae0(lVar4);

          dVar18 = (double)FUN_002936e0(uVar5,extraout_x1_00,param_2);

          _objc_release(uVar5);

          FUN_002a60e0(0xc054000000000000,0xc053800000000000,&_OBJC_CLASS___NSValue);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          local_b8 = uVar5;

          FUN_002a60e0(0,0xc05c000000000000,&_OBJC_CLASS___NSValue);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          local_b0 = uVar6;

          FUN_002a60e0(0x4054000000000000,0xc053800000000000,&_OBJC_CLASS___NSValue);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          local_a8 = auVar23._0_8_;

          FUN_00291e00(&_OBJC_CLASS___NSArray,auVar23._8_8_,&local_b8,3);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar23._0_8_);

          _objc_release(uVar6);

          _objc_release(uVar5);

          uStack_1d8 = 0;

          local_1e0 = 0;

          uStack_1c8 = 0;

          uStack_1d0 = 0;

          lStack_1f8 = 0;

          local_200 = 0;

          uStack_1e8 = 0;

          local_1f0 = (long *)0x0;

          FUN_002a4840(param_2);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          uVar5 = auVar23._0_8_;

          lVar8 = FUN_00293880(uVar5,auVar23._8_8_,&local_200,auStack_138,0x10);

          if (lVar8 != 0) {

            lVar15 = 0;

            lVar14 = *local_1f0;

            dVar22 = -16.0;

            dVar17 = dVar17 + -28.0 + -16.0;

            do {

              lVar13 = 0;

              do {

                if (*local_1f0 != lVar14) {

                  _objc_enumerationMutation(uVar5);

                }

                uVar16 = *(undefined8 *)(lStack_1f8 + lVar13 * 8);

                uVar6 = _objc_opt_class(&objc::class_t::XZYHomeDockButton);

                auVar23 = _objc_opt_isKindOfClass(uVar16,uVar6);

                uVar6 = auVar23._8_8_;

                if ((auVar23._0_8_ & 1) != 0) {

                  auVar23 = FUN_00293860(uVar7);

                  if (lVar15 < auVar23._0_8_) {

                    FUN_00299500(uVar7,auVar23._8_8_,lVar15);

                    uVar6 = _objc_retainAutoreleasedReturnValue();

                    dVar19 = (double)FUN_00290a80();

                    _objc_release(uVar6);

                  }

                  else {

                    dVar19 = 0.0;

                    dVar22 = -112.0;

                  }

                  dVar20 = dVar18 + dVar19;

                  if (dVar17 <= dVar18 + dVar19) {

                    dVar20 = dVar17;

                  }

                  if (dVar20 <= 44.0) {

                    dVar20 = 44.0;

                  }

                  dVar22 = dVar21 + dVar22 + -28.0;

                  FUN_0029e5e0(dVar20 + -28.0,dVar22,0x404c000000000000,0x404c000000000000,uVar16);

                  uVar6 = FUN_002a6860(uVar16);

                  FUN_00297be0(param_1);

                  uVar9 = _objc_retainAutoreleasedReturnValue();

                  uVar10 = FUN_00293860();

                  FUN_002491f0(uVar16,param_1,uVar6,uVar10);

                  _objc_release(uVar9);

                  lVar15 = lVar15 + 1;

                  uVar6 = extraout_x1_01;

                }

                lVar13 = lVar13 + 1;

              } while (lVar8 != lVar13);

              lVar8 = FUN_00293880(uVar5,uVar6,&local_200,auStack_138,0x10);

            } while (lVar8 != 0);

          }

          _objc_release(uVar5);

          _objc_release(uVar7);

        }

        _objc_release(lVar4);

        _objc_release(lVar11);

        _objc_release(param_2);

        _objc_release(param_1);

      }

    }

    _objc_release(lVar3);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_a0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




