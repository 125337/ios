// FUN_000b0edc @0xb0edc


bool FUN_000b0edc(undefined1 param_1 [16],undefined8 param_2,double param_3,double param_4,

                 undefined8 param_5)



{

  uint uVar1;

  long lVar2;

  uint uVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  bool bVar9;

  double dVar10;

  double dVar11;

  undefined8 uVar12;

  double dVar13;

  undefined8 uVar14;

  double dVar15;

  long local_98;

  

  _objc_retain();

  uVar4 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar5 = _objc_opt_isKindOfClass(param_5,uVar4);

  if ((uVar5 & 1) == 0) {

    bVar9 = false;

    goto LAB_000b10f4;

  }

  local_98 = 0;

  uVar3 = FUN_000b3234(param_5,&local_98);

  lVar2 = local_98;

  _objc_retain(local_98);

  uVar1 = 0;

  if (lVar2 != 0) {

    uVar1 = uVar3;

  }

  if ((uVar1 & 1) == 0) {

    bVar9 = false;

  }

  else {

    _objc_getAssociatedObject(lVar2,PTR_LOOP_003e6578);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if (lVar6 == 0) {

      bVar9 = false;

    }

    else {

      dVar10 = (double)FUN_00290aa0(lVar6);

      bVar9 = false;

      if ((0.0 < param_3) && (0.0 < param_4)) {

        dVar15 = param_3;

        FUN_000822c8(param_5);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        if ((lVar7 == 0) || (uVar5 = FUN_002978a0(lVar7), (uVar5 & 1) != 0)) {

LAB_000b10d8:

          bVar9 = false;

        }

        else {

          FUN_002a4880(lVar7);

          lVar8 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar8 == 0) goto LAB_000b10d8;

          _objc_retain(param_5);

          FUN_002a4880(lVar7);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          FUN_00295600(lVar7);

          dVar11 = (double)FUN_00293720(uVar4,extraout_x1,param_5);

          dVar13 = (double)NEON_fminnm(dVar15,param_4);

          bVar9 = 0.0 < dVar13;

          if (0.0 < dVar13) {

            if ((0.5 < ABS(dVar10 - dVar11)) || (0.5 < ABS(param_3 - dVar15))) {

              uVar14 = param_2;

              dVar15 = param_3;

              dVar11 = param_4;

              uVar12 = FUN_00293720(dVar10,param_2,param_3,param_4,param_5,extraout_x1_00,uVar4);

              FUN_00292180(&_OBJC_CLASS___CATransaction);

              FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_01,1);

              FUN_0029e5e0(uVar12,uVar14,dVar15,dVar11,lVar7);

              FUN_002930a0(&_OBJC_CLASS___CATransaction);

              FUN_00083a80(dVar10,param_2,param_3,param_4,param_5);

            }

            else {

              FUN_00083a80(dVar10,param_2,param_3,param_4,param_5);

            }

          }

          _objc_release(uVar4);

          _objc_release(param_5);

        }

        _objc_release(lVar7);

      }

    }

    _objc_release(lVar6);

  }

  _objc_release(lVar2);

LAB_000b10f4:

  _objc_release(param_5);

  return bVar9;

}




