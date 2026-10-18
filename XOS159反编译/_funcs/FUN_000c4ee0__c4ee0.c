// FUN_000c4ee0 @0xc4ee0


void FUN_000c4ee0(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 undefined8 param_5)



{

  double *pdVar1;

  byte bVar2;

  uint uVar3;

  int iVar4;

  int iVar5;

  int iVar6;

  ulong uVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  dispatch_time_t dVar12;

  long lVar13;

  long lVar14;

  undefined8 uVar15;

  long lVar16;

  ulong uVar17;

  undefined8 uVar18;

  undefined *puVar19;

  undefined8 uVar20;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  double dVar21;

  double dVar22;

  double dVar23;

  undefined1 auVar24 [16];

  undefined *local_f0;

  undefined8 local_e8;

  code *local_e0;

  undefined *puStack_d8;

  undefined1 auStack_d0 [8];

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined1 auStack_a8 [8];

  undefined1 auStack_a0 [16];

  

  uVar7 = _objc_opt_respondsToSelector(param_5,"getHeadImageView");

  if ((uVar7 & 1) == 0) {

    return;

  }

  FUN_00082e7c();

  FUN_002959c0(param_5);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  if (lVar8 == 0) goto LAB_000c5028;

  _objc_getAssociatedObject(lVar8,PTR_LOOP_003e6678);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  uVar7 = FUN_002978a0(lVar8);

  if (((((uVar7 & 1) != 0) || (dVar21 = (double)FUN_002916a0(lVar8), dVar21 < 0.01)) ||

      (FUN_002925a0(lVar8), param_3 < 1.0)) || (FUN_002925a0(lVar8), param_4 < 1.0)) {

    dVar21 = (double)FUN_002916a0(lVar8);

    if ((0.01 <= dVar21) &&

       ((((uVar7 = FUN_002978a0(lVar8), (uVar7 & 1) != 0 || (FUN_002925a0(lVar8), param_3 < 1.0)) ||

         (FUN_002925a0(lVar8), param_4 < 1.0)) &&

        (((DAT_003e74b9 & 1) != 0 && ((DAT_003e74d8 & 1) != 0)))))) {

      FUN_002a6520(param_5);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar10 != 0) {

        _objc_getAssociatedObject(param_5,&DAT_003e7bf0);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        lVar10 = FUN_002974a0();

        _objc_release(uVar11);

        _objc_getAssociatedObject(param_5,&DAT_003e7bf1);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        uVar3 = FUN_002924e0();

        _objc_release(uVar11);

        if (lVar10 < 3 && (uVar3 & 1) == 0) {

          FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1,lVar10 + 1);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_5,&DAT_003e7bf0,uVar11,1);

          _objc_release(uVar11);

          _objc_setAssociatedObject(param_5,&DAT_003e7bf1,PTR____kCFBooleanTrue_00388320,1);

          _objc_initWeak(auStack_a0,param_5);

          dVar12 = _dispatch_time(0,50000000);

          local_c8 = PTR___NSConcreteStackBlock_003886f0;

          local_c0 = 0xc2000000;

          local_b8 = FUN_000c62ec;

          puStack_b0 = &DAT_0038a150;

          _objc_copyWeak(auStack_a8,auStack_a0);

          _dispatch_after(dVar12,PTR___dispatch_main_q_00388740,&local_c8);

          _objc_destroyWeak(auStack_a8);

          _objc_destroyWeak(auStack_a0);

        }

      }

    }

    if (lVar9 != 0) {

      FUN_0029b340(lVar9);

      _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6678,0,1);

      _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6680,0,1);

      _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6688,0,1);

      _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6690,0,1);

    }

  }

  else {

    _objc_setAssociatedObject(param_5,&DAT_003e7bf0,0,1);

    _objc_setAssociatedObject(param_5,&DAT_003e7bf1,0,1);

    if ((DAT_003e74b9 == 1) && ((DAT_003e74d8 & 1) != 0)) {

      FUN_002a6280(param_5);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      if (lVar10 != 0) {

        uVar7 = _objc_opt_respondsToSelector(lVar10,"isSender");

        if (((uVar7 & 1) == 0) || (iVar4 = FUN_00297a80(lVar10), iVar4 == 0)) {

          FUN_00295a20(param_5);

          lVar13 = _objc_retainAutoreleasedReturnValue();

          if (lVar13 == 0) {

            FUN_00295980(param_5);

            lVar13 = _objc_retainAutoreleasedReturnValue();

          }

          iVar4 = 0;

        }

        else {

          FUN_00295a60(param_5);

          lVar13 = _objc_retainAutoreleasedReturnValue();

          if (lVar13 == 0) {

            FUN_00295980(param_5);

            lVar13 = _objc_retainAutoreleasedReturnValue();

          }

          iVar4 = 1;

        }

        _objc_getAssociatedObject(lVar8,PTR_LOOP_003e6680);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        _objc_getAssociatedObject(lVar8,PTR_LOOP_003e6688);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        if (lVar9 == 0) {

LAB_000c5604:

          if (lVar13 != 0) {

            FUN_000a18d8(lVar13);

            lVar16 = _objc_retainAutoreleasedReturnValue();

            if (lVar16 != 0) {

              FUN_002925a0(lVar8);

              FUN_002925a0(lVar8);

              dVar21 = param_3;

              if (param_4 <= param_3) {

                dVar21 = param_4;

              }

              pdVar1 = &DAT_003e63b0;

              if (iVar4 == 0) {

                pdVar1 = &DAT_003e63b8;

              }

              dVar22 = DAT_003e79b0;

              if (DAT_003e79b0 <= 0.0) {

                dVar22 = 100.0;

              }

              if (0.0 < *pdVar1) {

                dVar22 = *pdVar1;

              }

              dVar22 = dVar22 / 100.0;

              dVar21 = (double)FUN_000a1824(dVar21 * dVar22,lVar16);

              FUN_00299b20(lVar13);

              uVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_002984e0();

              uVar18 = _objc_retainAutoreleasedReturnValue();

              _objc_release(uVar15);

              auVar24 = FUN_00297820(uVar18,extraout_x1_02,&cf_gif);

              if ((auVar24._0_8_ & 1) == 0) {

                bVar2 = FUN_00297820(uVar18,auVar24._8_8_,&cf_webp);

              }

              else {

                bVar2 = 1;

              }

              puVar19 = (undefined *)_NSClassFromString(&cf_SDAnimatedImageView);

              if ((puVar19 != (undefined *)0x0 & bVar2) == 0) {

                puVar19 = &_OBJC_CLASS___UIImageView;

              }

              auVar24 = _objc_alloc_init(puVar19);

              uVar15 = auVar24._0_8_;

              FUN_0029ec00(uVar15,auVar24._8_8_,lVar16);

              FUN_0029d6c0(uVar15,extraout_x1_03,1);

              FUN_002a23c0(uVar15,extraout_x1_04,0);

              FUN_0029e5e0((param_3 - dVar21) * 0.5,(param_4 - dVar22) * 0.5,dVar21,dVar22,uVar15);

              FUN_00291380(lVar8,extraout_x1_05,uVar15);

              FUN_002925e0(lVar8,extraout_x1_06,uVar15);

              _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6678,uVar15,1);

              _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6680,lVar13,1);

              puVar19 = PTR_LOOP_003e6688;

              FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_07,iVar4);

              uVar20 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(lVar8,puVar19,uVar20,1);

              _objc_release(uVar20);

              _objc_getAssociatedObject(param_5,&DAT_003e7bf2);

              uVar20 = _objc_retainAutoreleasedReturnValue();

              uVar7 = FUN_002924e0();

              _objc_release(uVar20);

              if ((uVar7 & 1) == 0) {

                _objc_setAssociatedObject(param_5,&DAT_003e7bf2,PTR____kCFBooleanTrue_00388320,1);

                _objc_initWeak(auStack_a0,param_5);

                local_f0 = PTR___NSConcreteStackBlock_003886f0;

                local_e8 = 0xc2000000;

                local_e0 = FUN_000c638c;

                puStack_d8 = &DAT_0038a150;

                _objc_copyWeak(auStack_d0,auStack_a0);

                _dispatch_async(PTR___dispatch_main_q_00388740,&local_f0);

                _objc_destroyWeak(auStack_d0);

                _objc_destroyWeak(auStack_a0);

              }

              _objc_release(uVar15);

              _objc_release(uVar18);

            }

            goto LAB_000c58e8;

          }

        }

        else {

          FUN_002a4880(lVar9);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          lVar16 = auVar24._0_8_;

          if (lVar16 != lVar8) {

LAB_000c5598:

            _objc_release(lVar16);

LAB_000c55a0:

            FUN_0029b340(lVar9);

            _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6678,0,1);

            _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6680,0,1);

            _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6688,0,1);

            _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6690,0,1);

            goto LAB_000c5604;

          }

          iVar5 = FUN_00297820(uVar11,auVar24._8_8_,lVar13);

          iVar6 = 0;

          if (lVar14 != 0) {

            iVar6 = iVar5;

          }

          if (iVar6 != 1) goto LAB_000c5598;

          iVar6 = FUN_002924e0(lVar14);

          _objc_release(lVar16);

          if (iVar4 != iVar6) goto LAB_000c55a0;

          FUN_002a4840(lVar8);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_00297d80();

          lVar16 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          _objc_release(uVar15);

          if (lVar9 != lVar16) {

            FUN_002925e0(lVar8,extraout_x1_00,lVar9);

          }

          FUN_002925a0(lVar8);

          FUN_002925a0(lVar8);

          dVar23 = DAT_003e79b0;

          dVar22 = DAT_003e63b8;

          dVar21 = DAT_003e63b0;

          FUN_00296480(lVar9);

          uVar15 = _objc_retainAutoreleasedReturnValue();

          if (iVar4 == 0) {

            dVar21 = dVar22;

          }

          dVar22 = 100.0;

          if (dVar23 <= 0.0) {

            dVar23 = 100.0;

          }

          if (0.0 < dVar21) {

            dVar23 = dVar21;

          }

          dVar21 = param_3;

          if (param_4 <= param_3) {

            dVar21 = param_4;

          }

          dVar21 = (double)FUN_000a1824(dVar21 * (dVar23 / 100.0));

          _objc_release(uVar15);

          _objc_getAssociatedObject(lVar8,PTR_LOOP_003e6690);

          lVar16 = _objc_retainAutoreleasedReturnValue();

          uVar7 = (long)(param_4 * 100.0) ^ (long)(param_3 * 100.0) << 0x10 ^ (long)(dVar22 * 100.0)

                  ^ (long)(dVar21 * 100.0) << 8;

          if ((lVar16 == 0) || (uVar17 = FUN_002a5a20(lVar16), uVar17 != uVar7)) {

            FUN_0029e5e0((param_3 - dVar21) * 0.5,(param_4 - dVar22) * 0.5,dVar21,dVar22,lVar9);

            puVar19 = PTR_LOOP_003e6690;

            FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_01,uVar7);

            uVar15 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(lVar8,puVar19,uVar15,1);

            _objc_release(uVar15);

          }

LAB_000c58e8:

          _objc_release(lVar16);

        }

        _objc_release(lVar14);

        _objc_release(uVar11);

        _objc_release(lVar13);

      }

      _objc_release(lVar10);

    }

    else if (lVar9 != 0) {

      FUN_0029b340(lVar9);

      _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6678,0,1);

      _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6680,0,1);

      _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6688,0,1);

      _objc_setAssociatedObject(lVar8,PTR_LOOP_003e6690,0,1);

    }

  }

  _objc_release(lVar9);

LAB_000c5028:

  _objc_release(lVar8);

  return;

}




