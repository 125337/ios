// FUN_0010da24 @0x10da24


void FUN_0010da24(uint param_1)



{

  long *plVar1;

  int iVar2;

  long lVar3;

  long lVar4;

  long *plVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  

  if (DAT_003e8120 < 3) {

    if (DAT_003e8120 == 1) goto LAB_0010dc3c;

    if (DAT_003e8120 == 2) {

      uVar8 = 0x3fe3333333333333;

      uVar7 = 0;

    }

    else {

LAB_0010dc4c:

      uVar7 = 0x3fd999999999999a;

      uVar8 = 0x3ff0000000000000;

    }

  }

  else {

    if (DAT_003e8120 != 3) {

      if (DAT_003e8120 != 4) goto LAB_0010dc4c;

      iVar2 = FUN_001331c4();

      if (param_1 == 0) {

        plVar5 = &DAT_003e8110;

        if (iVar2 == 0) {

          plVar5 = &DAT_003e8108;

        }

        lVar6 = *plVar5;

        _objc_retain(lVar6);

        if ((lVar6 == 0) || (lVar3 = FUN_00297fa0(lVar6), lVar3 == 0)) {

          plVar5 = &DAT_003e80d0;

          lVar3 = lVar6;

          goto LAB_0010dbbc;

        }

LAB_0010dbd8:

        lVar4 = FUN_00297fa0(lVar6);

        lVar3 = lVar6;

        if (lVar4 == 0) goto LAB_0010dbe4;

      }

      else {

        plVar5 = &DAT_003e8100;

        if (iVar2 == 0) {

          plVar5 = &DAT_003e80f8;

        }

        lVar6 = *plVar5;

        _objc_retain(lVar6);

        if ((lVar6 != 0) && (lVar3 = FUN_00297fa0(lVar6), lVar3 != 0)) goto LAB_0010dbd8;

        plVar5 = &DAT_003e80c8;

        lVar3 = lVar6;

LAB_0010dbbc:

        lVar6 = *plVar5;

        _objc_retain(lVar6);

        _objc_release(lVar3);

        if (lVar6 != 0) goto LAB_0010dbd8;

LAB_0010dbe4:

        lVar3 = DAT_003e80c0;

        _objc_retain(DAT_003e80c0);

        _objc_release(lVar6);

      }

      FUN_0010e598(lVar3);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      if (lVar6 == 0) {

        FUN_00293060(0x3fd999999999999a,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

        lVar4 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        _objc_retain(lVar6);

        lVar4 = lVar6;

      }

LAB_0010dc90:

      _objc_release(lVar6);

      _objc_release(lVar3);

      goto LAB_0010dca0;

    }

    if (DAT_003eb3c0 == '\x01') {

      iVar2 = FUN_001331c4();

      plVar5 = &DAT_003eb3e0;

      if (param_1 == 0) {

        plVar5 = &DAT_003eb3d0;

      }

      plVar1 = &DAT_003eb3d8;

      if (param_1 == 0) {

        plVar1 = &DAT_003eb3c8;

      }

      if (iVar2 == 0) {

        plVar5 = plVar1;

      }

      lVar3 = *plVar5;

      _objc_retain(lVar3);

      if ((lVar3 != 0) && (lVar6 = FUN_00297fa0(lVar3), lVar6 != 0)) {

        FUN_0010e598(lVar3);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        if (lVar6 != 0) {

          FUN_00292fc0(0x3fe999999999999a,lVar6);

          lVar4 = _objc_retainAutoreleasedReturnValue();

          goto LAB_0010dc90;

        }

      }

      _objc_release(lVar3);

    }

    if ((param_1 & 1) == 0) goto LAB_0010dc4c;

LAB_0010dc3c:

    uVar8 = 0x3fe6666666666666;

    uVar7 = 0x3ff0000000000000;

  }

  FUN_00293060(uVar7,uVar8,&_OBJC_CLASS___UIColor);

  lVar4 = _objc_retainAutoreleasedReturnValue();

LAB_0010dca0:

  _objc_autoreleaseReturnValue(lVar4);

  return;

}




