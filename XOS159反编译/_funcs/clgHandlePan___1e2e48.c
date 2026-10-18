// clgHandlePan: @0x1e2e48


/* Function Stack Size: 0x18 bytes */



void XZYCLGHorizontalListSwipeHandler::clgHandlePan_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  bool bVar2;

  int iVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar12;

  long lVar13;

  long lVar14;

  long lVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  double dVar19;

  double in_d2;

  double dVar20;

  undefined8 uVar21;

  undefined1 auVar22 [16];

  undefined *local_290;

  undefined8 local_288;

  code *local_280;

  undefined *puStack_278;

  ID local_270;

  undefined8 local_268;

  undefined8 uStack_260;

  undefined *local_258;

  undefined8 local_250;

  code *local_248;

  undefined *puStack_240;

  undefined8 local_238;

  undefined8 local_230;

  undefined8 uStack_228;

  undefined8 uStack_220;

  undefined8 uStack_218;

  undefined8 local_210;

  undefined8 uStack_208;

  undefined1 auStack_200 [32];

  double local_1e0;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  double local_170;

  undefined8 local_150;

  long lStack_148;

  long *local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  FUN_002a6220(param_3);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = _objc_opt_class(&_OBJC_CLASS___UITableView);

  uVar6 = _objc_opt_isKindOfClass(uVar4,uVar5);

  if ((uVar6 & 1) == 0) goto LAB_001e2f68;

  FUN_002962e0(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(uVar5,&DAT_003ead83);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  uVar8 = _objc_opt_class(&objc::class_t::XZYCLGHorizontalBarView);

  uVar6 = _objc_opt_isKindOfClass(lVar7,uVar8);

  if ((uVar6 & 1) == 0) {

LAB_001e2f34:

    uStack_1c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

    local_1d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

    uStack_1b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

    uStack_1c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

    uStack_1a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

    local_1b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

    FUN_001e38b0(uVar4,&local_1d0);

  }

  else {

    FUN_00299900(lVar7);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    uVar6 = FUN_00293860();

    _objc_release(uVar8);

    if (uVar6 < 2) goto LAB_001e2f34;

    dVar16 = (double)FUN_002a5740(param_3,extraout_x1,uVar4);

    auVar22 = FUN_002a4240(param_3);

    lVar12 = auVar22._0_8_;

    if (lVar12 - 3U < 2) {

      dVar17 = (double)FUN_002a61e0(param_3,auVar22._8_8_,uVar4);

      dVar18 = (double)FUN_002948c0(param_1);

      FUN_002925a0(uVar4);

      dVar20 = dVar16;

      if (1.0 < in_d2) {

        dVar19 = in_d2 * 0.4;

        if (dVar19 < ABS(dVar16)) {

          dVar19 = dVar19 + in_d2 * (1.0 - 1.0 / (((ABS(dVar16) - dVar19) * 0.55) / in_d2 + 1.0));

          dVar20 = -dVar19;

          if (0.0 <= dVar16) {

            dVar20 = dVar19;

          }

        }

      }

      lVar12 = FUN_002a4240(param_3);

      dVar18 = dVar18 + dVar20;

      if (lVar12 == 4) {

        lVar12 = 0;

LAB_001e3570:

        bVar2 = true;

      }

      else {

        FUN_002925a0(uVar4);

        in_d2 = in_d2 * 0.22;

        if (in_d2 <= 64.0) {

          in_d2 = 64.0;

        }

        if ((dVar18 <= -in_d2) || ((dVar17 < -750.0 && (dVar18 < -20.0)))) {

          lVar12 = 1;

LAB_001e3360:

          _objc_retain(lVar7);

          if (lVar7 == 0) {

            lVar12 = 0;

          }

          else {

            FUN_00299900(lVar7);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            uVar6 = FUN_00293860();

            if (uVar6 < 2) {

              lVar12 = 0;

            }

            else {

              FUN_0029c260(lVar7);

              auVar22 = _objc_retainAutoreleasedReturnValue();

              lVar13 = auVar22._0_8_;

              if ((lVar13 == 0) ||

                 (lVar14 = FUN_00296700(uVar8,auVar22._8_8_,lVar13), lVar14 == 0x7fffffffffffffff))

              {

                FUN_002962e0(lVar7);

                uVar9 = _objc_retainAutoreleasedReturnValue();

                FUN_001d31c8();

                uVar11 = _objc_retainAutoreleasedReturnValue();

                _objc_release(uVar9);

                lVar14 = 0;

                while( true ) {

                  auVar22 = FUN_00293860(uVar8);

                  if (auVar22._0_8_ <= lVar14) break;

                  FUN_00299500(uVar8,auVar22._8_8_,lVar14);

                  uVar9 = _objc_retainAutoreleasedReturnValue();

                  FUN_00295de0();

                  auVar22 = _objc_retainAutoreleasedReturnValue();

                  uVar6 = FUN_00297820(auVar22._0_8_,auVar22._8_8_,uVar11);

                  _objc_release(auVar22._0_8_);

                  _objc_release(uVar9);

                  if ((uVar6 & 1) != 0) goto LAB_001e34c4;

                  lVar14 = lVar14 + 1;

                }

                lVar14 = 0x7fffffffffffffff;

LAB_001e34c4:

                _objc_release(uVar11);

              }

              lVar10 = 0;

              if (lVar14 != 0x7fffffffffffffff) {

                lVar10 = lVar14;

              }

              lVar10 = lVar10 + lVar12;

              if (lVar10 < 0) {

                lVar12 = 0;

              }

              else {

                auVar22 = FUN_00293860(uVar8);

                if (lVar10 < auVar22._0_8_) {

                  FUN_00299500(uVar8,auVar22._8_8_,lVar10);

                  lVar12 = _objc_retainAutoreleasedReturnValue();

                }

                else {

                  lVar12 = 0;

                }

              }

              _objc_release(lVar13);

            }

            _objc_release(uVar8);

          }

          _objc_release(lVar7);

          if (lVar12 == 0) goto LAB_001e3570;

          FUN_002a49a0(param_1);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          FUN_00296680();

          _objc_release(uVar8);

          FUN_002995a0(lVar7,extraout_x1_04,lVar12);

          bVar2 = false;

        }

        else {

          if (in_d2 <= dVar18) {

LAB_001e34b8:

            lVar12 = -1;

            goto LAB_001e3360;

          }

          lVar12 = 0;

          bVar2 = true;

          if ((750.0 < dVar17) && (20.0 < dVar18)) goto LAB_001e34b8;

        }

      }

      FUN_00297ee0(uVar4);

      _CGAffineTransformMakeTranslation(&local_1d0,dVar18,0);

      FUN_001e38b0(uVar4,&local_1d0);

      auVar22 = FUN_002a28e0(param_1);

      FUN_002a1440(param_1,auVar22._8_8_,auVar22._0_8_ + 1);

      uVar8 = FUN_002a28e0(param_1);

      bVar1 = bVar2;

      if (ABS(dVar18) <= 1.0) {

        bVar1 = true;

      }

      dVar16 = 0.0;

      if (!bVar1) {

        dVar16 = 10.0;

        if (ABS(dVar17 / dVar18) <= 10.0) {

          dVar16 = ABS(dVar17 / dVar18);

        }

      }

      FUN_002a62e0(uVar4);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      uVar11 = FUN_002937a0();

      _objc_release(uVar9);

      local_290 = PTR___NSConcreteStackBlock_003886f0;

      uVar9 = 0x3fd0a3d70a3d70a4;

      if (!bVar2) {

        uVar9 = 0x3fd3333333333333;

      }

      uVar21 = 0x3fe8f5c28f5c28f6;

      if (!bVar2) {

        uVar21 = 0x3feb333333333333;

      }

      local_258 = PTR___NSConcreteStackBlock_003886f0;

      local_250 = 0xc2000000;

      local_248 = FUN_001e3a0c;

      puStack_240 = &DAT_00388e60;

      _objc_retain(uVar11);

      local_288 = 0xc2000000;

      local_280 = FUN_001e3b3c;

      puStack_278 = &DAT_0038ee68;

      local_270 = param_1;

      local_268 = uVar11;

      uStack_260 = uVar8;

      local_238 = uVar11;

      _objc_retain(uVar11);

      FUN_00291800(uVar9,0,uVar21,dVar16,&_OBJC_CLASS___UIView,extraout_x1_05,6,&local_258,

                   &local_290);

      _objc_release(local_268);

      _objc_release(local_238);

      _objc_release(uVar11);

      _objc_release(lVar12);

    }

    else if (lVar12 == 1) {

      iVar3 = FUN_002976e0(uVar4);

      if (iVar3 != 0) {

        FUN_002935e0(uVar4);

        FUN_0029d700(uVar4,extraout_x1_00,0);

      }

      uStack_128 = 0;

      local_130 = 0;

      uStack_118 = 0;

      uStack_120 = 0;

      lStack_148 = 0;

      local_150 = 0;

      uStack_138 = 0;

      local_140 = (long *)0x0;

      FUN_002a62e0(uVar4);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      uVar8 = auVar22._0_8_;

      lVar12 = FUN_00293880(uVar8,auVar22._8_8_,&local_150,auStack_110,0x10);

      if (lVar12 == 0) {

        dVar16 = 0.0;

      }

      else {

        lVar13 = *local_140;

        dVar16 = 0.0;

        do {

          lVar14 = 0;

          dVar20 = dVar16;

          do {

            if (*local_140 != lVar13) {

              _objc_enumerationMutation(uVar8);

            }

            lVar15 = *(long *)(lStack_148 + lVar14 * 8);

            FUN_00297e40(lVar15);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_0029a540();

            lVar10 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar9);

            if (lVar10 == 0) {

              if (lVar15 == 0) {

                dVar17 = 0.0;

              }

              else {

                FUN_002a56a0(auStack_200,lVar15);

                dVar17 = local_1e0;

              }

            }

            else {

              FUN_002a56a0(&local_1d0,lVar10);

              dVar17 = local_170;

            }

            bVar2 = false;

            if ((dVar17 != 0.0) && (bVar2 = false, !NAN(dVar20))) {

              bVar2 = dVar20 == 0.0;

            }

            dVar16 = dVar17;

            if (!bVar2) {

              dVar16 = dVar20;

            }

            FUN_00297e40(lVar15);

            auVar22 = _objc_retainAutoreleasedReturnValue();

            FUN_0029b260(auVar22._0_8_,auVar22._8_8_,&cf_transform);

            _objc_release(auVar22._0_8_);

            _CGAffineTransformMakeTranslation(&local_230,dVar17,0);

            uStack_1c8 = uStack_228;

            local_1d0 = local_230;

            uStack_1b8 = uStack_218;

            uStack_1c0 = uStack_220;

            uStack_1a8 = uStack_208;

            local_1b0 = local_210;

            FUN_002a21c0(lVar15,extraout_x1_01,&local_1d0);

            _objc_release(lVar10);

            lVar14 = lVar14 + 1;

            dVar20 = dVar16;

          } while (lVar12 != lVar14);

          lVar12 = FUN_00293880(uVar8,extraout_x1_02,&local_150,auStack_110,0x10);

        } while (lVar12 != 0);

      }

      _objc_release(uVar8);

      FUN_0029de40(dVar16,param_1);

      FUN_0029e9c0(param_1,extraout_x1_03,0);

    }

    else if (lVar12 == 2) {

      dVar17 = (double)FUN_002948c0(param_1);

      FUN_002925a0(uVar4);

      dVar20 = dVar16;

      if (1.0 < in_d2) {

        dVar18 = in_d2 * 0.4;

        if (dVar18 < ABS(dVar16)) {

          dVar18 = dVar18 + in_d2 * (1.0 - 1.0 / (((ABS(dVar16) - dVar18) * 0.55) / in_d2 + 1.0));

          dVar20 = -dVar18;

          if (0.0 <= dVar16) {

            dVar20 = dVar18;

          }

        }

      }

      dVar17 = dVar17 + dVar20;

      _CGAffineTransformMakeTranslation(&local_1d0,dVar17,0);

      FUN_001e38b0(uVar4,&local_1d0);

      FUN_002925a0(uVar4);

      in_d2 = in_d2 * 0.22;

      if (in_d2 <= 64.0) {

        in_d2 = 64.0;

      }

      lVar12 = -(ulong)(in_d2 <= dVar17);

      if (dVar17 <= -in_d2) {

        lVar12 = 1;

      }

      auVar22 = FUN_002961a0(param_1);

      if ((lVar12 != auVar22._0_8_) && (FUN_0029e9c0(param_1,auVar22._8_8_,lVar12), lVar12 != 0)) {

        FUN_002961c0(param_1);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_0029c3a0();

        _objc_release(uVar8);

      }

    }

  }

  _objc_release(lVar7);

  _objc_release(uVar5);

LAB_001e2f68:

  _objc_release(uVar4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




