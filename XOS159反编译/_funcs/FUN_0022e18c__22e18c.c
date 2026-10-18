// FUN_0022e18c @0x22e18c


undefined8

FUN_0022e18c(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

            long param_5,long param_6)



{

  long lVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar6;

  float fVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  double dVar12;

  double dVar13;

  undefined1 auVar14 [16];

  

  _objc_retain();

  _objc_retain(param_6);

  uVar6 = 0;

  if ((((param_5 == 0) || (param_6 == 0)) || (uVar6 = 0, DAT_003eaf98 != '\x01')) ||

     ((DAT_003eafb0 & 1) == 0)) goto LAB_0022e3fc;

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e7170);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 == 0) {

LAB_0022e25c:

    uVar6 = 0;

  }

  else {

    fVar7 = (float)FUN_00295480(lVar1);

    uVar10 = 0x3f000000;

    if (fVar7 <= 0.5) goto LAB_0022e25c;

    FUN_00298440(param_6,extraout_x1,param_5);

    _objc_retain(param_5);

    uVar2 = FUN_0022b224(param_5);

    if ((uVar2 & 1) == 0) {

      FUN_000822c8(param_5);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if ((lVar3 == 0) || (uVar2 = FUN_002978a0(lVar3), (uVar2 & 1) != 0)) {

LAB_0022e3e0:

        uVar6 = 0;

      }

      else {

        FUN_002a4880(lVar3);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        if (auVar14._0_8_ == 0) goto LAB_0022e3e0;

        uVar2 = FUN_00297700(lVar3,auVar14._8_8_,param_5);

        _objc_release(auVar14._0_8_);

        if ((uVar2 & 1) == 0) goto LAB_0022e3e0;

        FUN_002a4880(lVar3);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_00295600(lVar3);

        uVar8 = FUN_00293720(uVar6,extraout_x1_00,param_5);

        uVar11 = uVar10;

        dVar12 = param_3;

        dVar13 = param_4;

        _objc_release(uVar6);

        uVar6 = 0;

        if ((0.0 < param_3) && (0.0 < param_4)) {

          if (DAT_003eb090 != -1) {

            FUN_0028fba8();

          }

          if (DAT_003eb088 == 0) {

            lVar4 = 0;

LAB_0022e440:

            _CGRectInset(uVar8,uVar10,param_3,param_4,0xc024000000000000,0xc024000000000000);

            uVar6 = _CGRectContainsPoint();

          }

          else {

            FUN_00083134(param_5);

            lVar4 = _objc_retainAutoreleasedReturnValue();

            if (lVar4 == 0) goto LAB_0022e440;

            FUN_002a4880(lVar4);

            lVar5 = _objc_retainAutoreleasedReturnValue();

            if (lVar5 == 0) goto LAB_0022e440;

            uVar2 = FUN_002978a0(lVar4);

            _objc_release(lVar5);

            if ((uVar2 & 1) != 0) goto LAB_0022e440;

            FUN_002a4880(lVar4);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            FUN_00295600(lVar4);

            uVar9 = FUN_00293720(uVar6,extraout_x1_01,param_5);

            _objc_release(uVar6);

            _CGRectInset(uVar9,uVar11,dVar12,dVar13,0xc018000000000000,0xc018000000000000);

            uVar2 = _CGRectContainsPoint();

            if ((uVar2 & 1) == 0) goto LAB_0022e440;

            uVar6 = 0;

          }

          _objc_release(lVar4);

        }

      }

      _objc_release(lVar3);

    }

    else {

      uVar6 = 0;

    }

    _objc_release(param_5);

  }

  _objc_release(lVar1);

LAB_0022e3fc:

  _objc_release(param_6);

  _objc_release(param_5);

  return uVar6;

}




