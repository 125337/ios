// FUN_001a0964 @0x1a0964


undefined8

FUN_001a0964(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,

            long param_5,long param_6,undefined8 param_7,undefined8 param_8,double *param_9)



{

  double *pdVar1;

  undefined *puVar2;

  bool bVar3;

  long lVar4;

  ulong uVar5;

  long lVar6;

  undefined8 uVar7;

  float fVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  double dVar13;

  

  _objc_retain();

  _objc_retain(param_6);

  _objc_retain(param_8);

  uVar7 = 0;

  if ((param_5 != 0) && (param_6 != 0)) {

    FUN_002a4880(param_6);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    uVar7 = 0;

    if (lVar4 != 0) {

      uVar5 = FUN_002978a0(param_6);

      _objc_release(lVar4);

      if ((uVar5 & 1) == 0) {

        dVar9 = (double)FUN_00295600(param_6);

        _objc_getAssociatedObject(param_6,PTR_LOOP_003e6ec8);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_getAssociatedObject(param_6,PTR_LOOP_003e6ef8);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        if (lVar4 == 0) {

          if (lVar6 == 0) {

            dVar13 = 0.0;

          }

          else {

            fVar8 = (float)FUN_00295480(lVar6);

            dVar13 = (double)fVar8;

          }

          puVar2 = PTR_LOOP_003e6ec8;

          dVar13 = dVar9 - dVar13;

          FUN_002993a0(dVar13,&_OBJC_CLASS___NSNumber);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_6,puVar2,uVar7,1);

          _objc_release(uVar7);

        }

        else {

          fVar8 = (float)FUN_00295480(lVar4);

          dVar13 = (double)fVar8;

        }

        dVar10 = (double)FUN_0019156c(param_5,param_6,param_7,param_8);

        bVar3 = (int)param_7 == 0;

        pdVar1 = (double *)&DAT_003e9638;

        if (bVar3) {

          pdVar1 = (double *)&DAT_003e9630;

        }

        dVar12 = -2.0;

        if (bVar3) {

          dVar12 = 2.0;

        }

        dVar11 = *pdVar1 - dVar10;

        if (bVar3) {

          dVar11 = -(*pdVar1 - dVar10);

        }

        dVar12 = dVar12 + dVar11;

        if (0.5 < ABS(dVar9 - (dVar13 + dVar12))) {

          FUN_0029e5e0(dVar13 + dVar12,param_2,param_3,param_4,param_6);

        }

        puVar2 = PTR_LOOP_003e6ef8;

        FUN_002993a0(dVar12,&_OBJC_CLASS___NSNumber);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_6,puVar2,uVar7,1);

        _objc_release(uVar7);

        *param_9 = dVar12;

        _objc_release(lVar6);

        _objc_release(lVar4);

        uVar7 = 1;

      }

      else {

        uVar7 = 0;

      }

    }

  }

  _objc_release(param_8);

  _objc_release(param_6);

  _objc_release(param_5);

  return uVar7;

}




