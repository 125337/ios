// FUN_00126f38 @0x126f38


void FUN_00126f38(undefined8 param_1)



{

  int iVar1;

  int iVar2;

  long lVar3;

  ulong uVar4;

  undefined8 uVar5;

  long lVar6;

  double dVar7;

  double dVar8;

  double dVar9;

  undefined8 uVar10;

  double dVar11;

  double dVar12;

  double local_80;

  double local_78;

  

  _objc_retain();

  FUN_0011a908(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if ((lVar3 != 0) && (uVar4 = FUN_002978a0(lVar3), (uVar4 & 1) == 0)) {

    FUN_00295600(lVar3);

    uVar4 = _CGRectIsEmpty();

    if ((uVar4 & 1) == 0) {

      FUN_002a5020(lVar3);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      lVar6 = FUN_00297fa0();

      if (lVar6 == 0) {

        FUN_00291ee0(lVar3);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        lVar6 = FUN_00297fa0();

        _objc_release(uVar10);

        _objc_release(uVar5);

        if (lVar6 == 0) goto LAB_001271f0;

      }

      else {

        _objc_release(uVar5);

      }

      dVar7 = (double)FUN_001910c8(param_1);

      _objc_getAssociatedObject(lVar3,&DAT_003e8484);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      local_78 = 0.0;

      iVar1 = FUN_00191fd0(param_1,&local_78);

      dVar8 = (double)FUN_00127924(param_1,lVar3);

      local_80 = dVar8;

      iVar2 = FUN_00127530(param_1,&local_80);

      if (iVar2 == 0) {

        if (iVar1 == 0) {

          dVar9 = dVar8 + local_78;

          dVar11 = 0.0;

        }

        else {

          dVar9 = (double)FUN_00127838(dVar8,lVar3);

          dVar12 = local_78;

          dVar11 = (double)FUN_0018db40(param_1);

          dVar9 = dVar9 + dVar12;

        }

        dVar9 = dVar9 + dVar11;

      }

      else {

        _objc_setAssociatedObject(lVar3,&DAT_003e8485,0,1);

        dVar9 = (double)FUN_0018db40(param_1);

        dVar9 = dVar9 + local_80;

      }

      FUN_002a4880(lVar3);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      uVar10 = FUN_00123e80(dVar9,param_1,uVar5);

      _objc_release(uVar5);

      if (((0.001 <= ABS(dVar7)) || (lVar6 != 0)) || (0.5 < ABS(dVar8 - dVar9))) {

        FUN_00295600(lVar3);

        dVar11 = (double)FUN_00127a34(lVar3);

        dVar12 = (double)FUN_00295600(lVar3);

        dVar7 = dVar7 + dVar11;

        if ((0.5 < ABS(dVar12 - dVar7)) || (0.5 < ABS(dVar8 - dVar9))) {

          FUN_00295600(lVar3);

          FUN_0029e5e0(dVar7,uVar10,lVar3);

        }

        FUN_002993a0(dVar7,&_OBJC_CLASS___NSNumber);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(lVar3,&DAT_003e8486,uVar5,1);

        _objc_release(uVar5);

        FUN_002993a0(dVar9,&_OBJC_CLASS___NSNumber);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(lVar3,&DAT_003e8487,uVar5,1);

        _objc_release(uVar5);

        FUN_0018ee10(param_1);

      }

      else {

        FUN_0018ee10(param_1);

      }

      _objc_release(lVar6);

    }

  }

LAB_001271f0:

  _objc_release(lVar3);

  _objc_release(param_1);

  return;

}




