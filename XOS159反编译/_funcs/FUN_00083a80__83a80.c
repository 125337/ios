// FUN_00083a80 @0x83a80


void FUN_00083a80(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5

                 )



{

  bool bVar1;

  bool bVar2;

  int iVar3;

  long lVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  double dVar13;

  double local_a8;

  undefined1 uStack_99;

  double local_98;

  

  dVar11 = param_3;

  dVar12 = param_4;

  _objc_retain();

  if ((param_3 <= 0.0) || (param_4 <= 0.0)) {

    _objc_setAssociatedObject(param_5,PTR_LOOP_003e6340,0,1);

    FUN_000822c8(param_5);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e6400);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(uVar6,PTR_LOOP_003e6310,lVar4,1);

  }

  else {

    lVar4 = _objc_getClass("VoiceMessageCellView");

    if ((lVar4 == 0) || (uVar5 = _objc_opt_isKindOfClass(param_5), (uVar5 & 1) == 0)) {

      bVar2 = false;

      bVar1 = false;

    }

    else {

      uVar6 = _objc_opt_class(&_OBJC_CLASS___UIView);

      uVar5 = _objc_opt_isKindOfClass(param_5,uVar6);

      uVar6 = param_5;

      if ((uVar5 & 1) == 0) {

        uVar6 = 0;

      }

      _objc_retain(uVar6);

      FUN_002925a0(uVar6);

      local_98 = 0.0;

      dVar13 = dVar11;

      iVar3 = FUN_000b2180(uVar6,&local_98,&uStack_99);

      dVar9 = ABS(local_98) + 2.0;

      local_a8 = 0.0;

      if (iVar3 == 0) {

        dVar9 = 0.0;

      }

      if (dVar11 <= 0.5) {

        bVar1 = true;

      }

      else {

        if (-1.0 - dVar9 <= param_1) {

          dVar12 = param_4;

          dVar10 = (double)_CGRectGetMaxX(param_1,param_2,param_3,param_4);

          local_a8 = dVar11 + 1.0;

          dVar13 = local_a8 + dVar9;

          if (dVar10 <= dVar13) {

            bVar1 = param_3 <= local_a8;

            goto LAB_00083c20;

          }

        }

        bVar1 = false;

      }

LAB_00083c20:

      _objc_getAssociatedObject(param_5,PTR_LOOP_003e6408);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 == 0) {

        dVar11 = *(double *)PTR__CGRectZero_00388bf0;

        local_a8 = *(double *)(PTR__CGRectZero_00388bf0 + 8);

        dVar13 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

        dVar12 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

      }

      else {

        dVar11 = (double)FUN_00290aa0(lVar4);

      }

      FUN_000839f4(param_5);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_getAssociatedObject(uVar7,PTR_LOOP_003e6540);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_002924e0();

      _objc_release(uVar8);

      if ((uVar5 & 1) == 0) {

        iVar3 = FUN_000b16e0(param_5);

      }

      else {

        iVar3 = 1;

      }

      bVar2 = false;

      if ((((iVar3 != 0) && (0.5 < dVar13)) && (bVar2 = true, param_3 <= dVar13 + 12.0)) &&

         (dVar11 + -6.0 <= param_1)) {

        dVar9 = (double)_CGRectGetMaxX(param_1,param_2,param_3,param_4);

        dVar12 = (double)_CGRectGetMaxX(dVar11,local_a8,dVar13,dVar12);

        bVar2 = dVar12 + 6.0 < dVar9;

      }

      if (!(bool)(0.5 < dVar13 & (bVar1 ^ 1U | bVar2))) {

        dVar13 = param_3;

        dVar11 = param_1;

      }

      param_1 = dVar11;

      bVar1 = (bool)(bVar1 & (bVar2 ^ 1U));

      _objc_release(uVar7);

      _objc_release(lVar4);

      _objc_release(uVar6);

      bVar2 = true;

      param_3 = dVar13;

    }

    FUN_002a6100(param_1,param_2,param_3,param_4,&_OBJC_CLASS___NSValue);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_5,PTR_LOOP_003e6340,uVar6,1);

    if (!bVar2) goto LAB_00083e0c;

    FUN_000822c8(param_5);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 != 0) {

      _objc_setAssociatedObject(lVar4,PTR_LOOP_003e6310,uVar6,1);

    }

    if (bVar1) {

      _objc_setAssociatedObject(param_5,PTR_LOOP_003e6408,uVar6,1);

    }

  }

  _objc_release(lVar4);

LAB_00083e0c:

  _objc_release(uVar6);

  _objc_release(param_5);

  return;

}




