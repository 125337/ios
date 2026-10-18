// FUN_0020167c @0x20167c


void FUN_0020167c(undefined1 param_1 [16],double param_2,undefined8 param_3,undefined8 param_4,

                 long param_5)



{

  uint uVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  uint uVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  double dVar13;

  double dVar14;

  double dVar15;

  double dVar16;

  double dVar17;

  double local_c0;

  double dStack_b8;

  double local_b0;

  double dStack_a8;

  double local_a0;

  double dStack_98;

  double local_90;

  double dStack_88;

  

  _objc_retain(param_5);

  (*DAT_003eabe0)(param_3,param_4,param_5);

  if ((DAT_003eaa30 != '\x01') || (1 < DAT_003eaac8 - 5U)) goto LAB_002019d0;

  FUN_002a6080(param_3,extraout_x1,&cf_m_tableView);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if ((lVar2 != 0) && (param_5 == lVar2)) {

    FUN_0021a71c(lVar2);

    _objc_getAssociatedObject(param_3,&DAT_003ead83);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 != 0) {

      _objc_getAssociatedObject(param_3,&DAT_003eae52);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_getAssociatedObject(param_3,&DAT_003eaef7);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 != 0) {

        FUN_00295600(lVar2);

        dVar9 = (double)_CGRectGetMinY();

        dVar10 = (double)FUN_00294860(lVar5);

        FUN_002935e0(param_5);

        dStack_b8 = *(double *)(PTR__CGRectZero_00388bf0 + 8);

        local_c0 = *(double *)PTR__CGRectZero_00388bf0;

        dStack_a8 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

        local_b0 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

        local_a0 = local_c0;

        dStack_98 = dStack_b8;

        local_90 = local_b0;

        dStack_88 = dStack_a8;

        FUN_0021a964((dVar9 + dVar10) - param_2,param_3,lVar2,&local_a0,&local_c0);

        dVar17 = dStack_88;

        dVar15 = local_90;

        dVar10 = dStack_98;

        dVar9 = local_a0;

        dVar14 = local_90;

        dVar16 = dStack_88;

        dVar11 = (double)_CGRectGetMaxY(local_a0,dStack_98);

        FUN_00295600(lVar2);

        dVar12 = (double)_CGRectGetMinY();

        dVar13 = -50.0;

        if (dVar11 < dVar12 + -50.0) {

LAB_0020184c:

          uVar8 = 1;

        }

        else {

          dVar14 = dVar15;

          dVar16 = dVar17;

          dVar11 = (double)_CGRectGetMinY(dVar9,dVar10);

          FUN_00295600(lVar2);

          dVar12 = (double)_CGRectGetMaxY();

          dVar13 = 50.0;

          if (dVar12 + 50.0 < dVar11) goto LAB_0020184c;

          FUN_00299900(lVar3);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          lVar7 = FUN_00293860();

          uVar8 = (uint)(lVar7 == 0);

          _objc_release(uVar6);

        }

        uVar1 = FUN_002978a0(lVar3);

        if (uVar8 != uVar1) {

          FUN_0029e8a0(lVar3,extraout_x1_00,uVar8);

        }

        if ((uVar8 == 0) &&

           ((((dVar11 = (double)FUN_00295600(lVar3), 0.5 <= ABS(dVar11 - dVar9) ||

              (0.5 <= ABS(dVar13 - dVar10))) || (0.5 <= ABS(dVar14 - dVar15))) ||

            (dVar13 = ABS(dVar16 - dVar17), 0.5 <= ABS(dVar16 - dVar17))))) {

          FUN_00292180(&_OBJC_CLASS___CATransaction);

          FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_01,1);

          FUN_0029e5e0(dVar9,lVar3);

          FUN_002930a0(&_OBJC_CLASS___CATransaction);

          dVar13 = dVar10;

          dVar14 = dVar15;

          dVar16 = dVar17;

        }

        if (lVar4 != 0) {

          uVar1 = FUN_002978a0(lVar4);

          if (uVar8 != uVar1) {

            FUN_0029e8a0(lVar4,extraout_x1_02,uVar8);

          }

          if ((uVar8 == 0) &&

             (((dVar11 = (double)FUN_00295600(lVar4), dVar17 = dStack_a8, dVar15 = local_b0,

               dVar10 = dStack_b8, dVar9 = local_c0, 0.5 <= ABS(dVar11 - local_c0) ||

               (0.5 <= ABS(dVar13 - dStack_b8))) ||

              ((0.5 <= ABS(dVar14 - local_b0) || (0.5 <= ABS(dVar16 - dStack_a8))))))) {

            FUN_00292180(&_OBJC_CLASS___CATransaction);

            FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_03,1);

            FUN_0029e5e0(dVar9,dVar10,dVar15,dVar17,lVar4);

            FUN_002930a0(&_OBJC_CLASS___CATransaction);

          }

        }

      }

      _objc_release(lVar5);

      _objc_release(lVar4);

    }

    _objc_release(lVar3);

  }

  _objc_release(lVar2);

LAB_002019d0:

  _objc_release(param_5);

  return;

}




