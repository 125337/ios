// FUN_0016cb00 @0x16cb00


void FUN_0016cb00(void)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  ulong uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  

  FUN_00182fa0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029bac0();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    _objc_release(uVar2);

  }

  else {

    lVar9 = 0x20;

    do {

      FUN_0029a560(lVar3);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if ((lVar4 == 0) || (uVar5 = FUN_00297620(lVar4), (uVar5 & 1) != 0)) {

        uVar6 = _objc_opt_class(&_OBJC_CLASS___UINavigationController);

        uVar5 = _objc_opt_isKindOfClass(lVar3,uVar6);

        if ((uVar5 & 1) != 0) {

          FUN_002a6340(lVar3);

          lVar7 = _objc_retainAutoreleasedReturnValue();

          if ((lVar7 != 0) && (lVar7 != lVar3)) goto LAB_0016cbf4;

          _objc_release(lVar7);

        }

        uVar6 = _objc_opt_class(&_OBJC_CLASS___UITabBarController);

        uVar5 = _objc_opt_isKindOfClass(lVar3,uVar6);

        if ((uVar5 & 1) != 0) {

          FUN_0029c340(lVar3);

          lVar7 = _objc_retainAutoreleasedReturnValue();

          if ((lVar7 != 0) && (lVar7 != lVar3)) goto LAB_0016cbf4;

          _objc_release(lVar7);

        }

        _objc_release(lVar4);

        lVar7 = lVar3;

        break;

      }

      _objc_retain(lVar4);

      lVar7 = lVar4;

LAB_0016cbf4:

      _objc_release(lVar3);

      _objc_release(lVar4);

      lVar9 = lVar9 + -1;

      lVar3 = lVar7;

    } while (lVar9 != 0);

    _objc_release(uVar2);

    do {

      uVar5 = FUN_00297620(lVar7);

      if ((uVar5 & 1) == 0) {

        FUN_002a6220(lVar7);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        FUN_002a6520();

        uVar6 = _objc_retainAutoreleasedReturnValue();

        iVar1 = FUN_002978a0();

        if (iVar1 == 0) {

          FUN_002a6220(lVar7);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          FUN_002a6520();

          lVar3 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          _objc_release(uVar8);

          _objc_release(uVar6);

          _objc_release(uVar2);

          if (lVar3 != 0) goto LAB_0016cd20;

        }

        else {

          _objc_release(uVar6);

          _objc_release(uVar2);

        }

      }

      FUN_0029a580(lVar7);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar7);

      lVar7 = lVar3;

    } while (lVar3 != 0);

  }

  FUN_00182fa0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029bac0();

  lVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

LAB_0016cd20:

  _objc_autoreleaseReturnValue(lVar7);

  return;

}




