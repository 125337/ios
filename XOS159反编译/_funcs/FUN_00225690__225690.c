// FUN_00225690 @0x225690


void FUN_00225690(undefined1 param_1 [16],double param_2,double param_3,double param_4,

                 undefined8 param_5,long param_6)



{

  bool bVar1;

  int iVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 uVar9;

  double dVar10;

  double dVar11;

  undefined8 uVar12;

  double dVar13;

  double dVar14;

  double dVar15;

  undefined1 auVar16 [16];

  undefined8 local_c8;

  double local_c0;

  double local_b8;

  undefined8 local_b0;

  double dStack_a8;

  double local_a0;

  double dStack_98;

  

  _objc_retain();

  _objc_retain(param_6);

  if ((param_6 == 0) || (uVar3 = FUN_002978a0(param_6), (uVar3 & 1) != 0)) goto LAB_00225cc0;

  iVar2 = FUN_0022531c(param_5);

  if (iVar2 != 0) {

    _objc_setAssociatedObject(param_5,PTR_LOOP_003e7170,0,1);

    goto LAB_00225cc0;

  }

  FUN_000822c8(param_5);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if ((lVar4 != 0) && (uVar3 = FUN_002978a0(lVar4), (uVar3 & 1) == 0)) {

    FUN_002a4880(param_6);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4880(lVar4);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if ((lVar5 != 0) && (lVar6 != 0)) {

      FUN_00295600(param_6);

      uVar9 = FUN_00293720(lVar5,extraout_x1,param_5);

      dVar13 = param_2;

      local_b8 = param_3;

      local_c0 = param_4;

      FUN_00295600(lVar4);

      local_c8 = FUN_00293720(lVar6,extraout_x1_00,param_5);

      if ((((0.0 < param_3) && (0.0 < param_4)) && (0.0 < local_b8)) && (0.0 < local_c0)) {

        iVar2 = FUN_00084e3c();

        dStack_a8 = *(double *)(PTR__CGRectZero_00388bf0 + 8);

        local_b0 = *(undefined8 *)PTR__CGRectZero_00388bf0;

        dStack_98 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

        local_a0 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

        if (iVar2 != 0) {

          iVar2 = FUN_00083ee4(param_5,&local_b0);

          if ((iVar2 != 0) && (dStack_a8 + -0.5 <= param_2)) {

            dVar10 = (double)_CGRectGetMaxY(local_b0,dStack_a8,local_a0,dStack_98);

            dVar11 = (double)_CGRectGetMaxY(uVar9,param_2,param_3,param_4);

            if (dVar11 <= dVar10 + 0.5) {

              auVar16 = _CGRectEqualToRect(local_c8,dVar13,local_b8,local_c0,local_b0,dStack_a8,

                                           local_a0,dStack_98);

              if ((auVar16._0_8_ & 1) == 0) {

                dVar13 = dStack_a8;

                dVar10 = local_a0;

                dVar11 = dStack_98;

                uVar12 = FUN_00293720(local_b0,dStack_a8,local_a0,dStack_98,param_5,auVar16._8_8_,

                                      lVar6);

                FUN_00292180(&_OBJC_CLASS___CATransaction);

                FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_01,1);

                FUN_0029e5e0(uVar12,dVar13,dVar10,dVar11,lVar4);

                FUN_002930a0(&_OBJC_CLASS___CATransaction);

                local_b8 = local_a0;

                local_c8 = local_b0;

                local_c0 = dStack_98;

                dVar13 = dStack_a8;

              }

            }

          }

          if (dVar13 + -0.5 <= param_2) {

            dVar10 = (double)_CGRectGetMaxY(local_c8,dVar13,local_b8,local_c0);

            dVar11 = (double)_CGRectGetMaxY(uVar9,param_2,param_3,param_4);

            if (dVar11 <= dVar10 + 0.5) {

              dVar10 = (double)_CGRectGetMaxY(uVar9,param_2,param_3,param_4);

              FUN_00084dd4(param_5);

              lVar7 = _objc_retainAutoreleasedReturnValue();

              dVar11 = 0.0;

              if ((lVar7 != 0) && (uVar3 = FUN_002978a0(lVar7), (uVar3 & 1) == 0)) {

                FUN_002a4880(lVar7);

                lVar8 = _objc_retainAutoreleasedReturnValue();

                dVar11 = 0.0;

                if (lVar8 != 0) {

                  dVar11 = 6.0;

                }

                _objc_release();

              }

              dVar11 = param_4 + dVar11;

              FUN_0022b334(dVar11,param_5);

              FUN_00292180(&_OBJC_CLASS___CATransaction);

              FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_05,1);

              if (dVar13 + local_c0 * 0.5 + 0.5 < dVar10) {

                dVar14 = dVar13 + 6.0;

                dVar10 = param_3;

                dVar15 = param_4;

                uVar12 = FUN_00293720(uVar9,dVar14,param_3,param_5,extraout_x1_06,lVar5);

                FUN_00295600(param_6);

                uVar3 = _CGRectEqualToRect();

                if ((uVar3 & 1) == 0) {

                  FUN_0029e5e0(uVar12,dVar14,dVar10,dVar15,param_6);

                }

              }

              FUN_0022b3dc(local_c8,dVar13,local_b8,local_c0,uVar9,param_2,param_3,param_4,param_5,

                           param_6,lVar4);

              FUN_0022b760(dVar11,lVar4,param_6,lVar7);

              FUN_00224c70(dVar11,param_5,param_6,lVar4,lVar7,0);

              FUN_002930a0(&_OBJC_CLASS___CATransaction);

              _objc_release(lVar7);

              goto LAB_00225ca8;

            }

          }

        }

        if (param_2 <= dVar13 + 0.5) {

          dVar10 = (double)_CGRectGetMaxY(uVar9,param_2,param_3,param_4);

          bVar1 = dVar10 + -0.5 <= dVar13;

        }

        else {

          bVar1 = false;

        }

        dVar11 = (double)_CGRectGetMaxY(local_c8,dVar13,local_b8,local_c0);

        dVar10 = 0.0;

        if (0.0 <= param_2 - dVar11) {

          dVar10 = param_2 - dVar11;

        }

        dVar10 = param_4 + dVar10;

        if (bVar1) {

          _objc_getAssociatedObject(param_5,PTR_LOOP_003e7168);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          dVar11 = (double)FUN_00294860();

          if (0.5 < dVar11) {

            dVar10 = (double)FUN_00294860(uVar12);

          }

          _objc_release(uVar12);

        }

        FUN_0022b334(dVar10,param_5);

        if (bVar1) {

          FUN_00224c70(dVar10,param_5,param_6,lVar4,0,1);

        }

        else {

          FUN_00292180(&_OBJC_CLASS___CATransaction);

          FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_02,1);

          dVar11 = dVar13;

          dVar15 = param_3;

          dVar14 = param_4;

          uVar12 = FUN_00293720(uVar9,dVar13,param_3,param_4,param_5,extraout_x1_03,lVar5);

          FUN_00295600(param_6);

          uVar3 = _CGRectEqualToRect();

          if ((uVar3 & 1) == 0) {

            FUN_0029e5e0(uVar12,dVar11,dVar15,dVar14,param_6);

          }

          dVar11 = dVar13;

          dVar15 = local_b8;

          dVar14 = local_c0;

          _CGRectOffset(local_c8,dVar13,local_b8,local_c0,0,dVar10);

          uVar12 = FUN_00293720(param_5,extraout_x1_04,lVar6);

          FUN_00295600(lVar4);

          uVar3 = _CGRectEqualToRect();

          if ((uVar3 & 1) == 0) {

            FUN_0029e5e0(uVar12,dVar11,dVar15,dVar14,lVar4);

          }

          FUN_0022b3dc(local_c8,dVar13,local_b8,local_c0,uVar9,param_2,param_3,param_4,param_5,

                       param_6,lVar4);

          FUN_00224c70(dVar10,param_5,param_6,lVar4,0,1);

          FUN_002930a0(&_OBJC_CLASS___CATransaction);

          FUN_0029ff40(lVar4);

        }

      }

    }

LAB_00225ca8:

    _objc_release(lVar6);

    _objc_release(lVar5);

  }

  _objc_release(lVar4);

LAB_00225cc0:

  _objc_release(param_6);

  _objc_release(param_5);

  return;

}




