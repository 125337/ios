// FUN_000c8110 @0xc8110


bool FUN_000c8110(long param_1)



{

  bool bVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  

  _objc_retain();

  lVar2 = FUN_002a4e60(param_1);

  if (lVar2 == 0x68) {

    bVar1 = true;

  }

  else {

    _objc_retain(param_1);

    lVar2 = param_1;

    while (lVar2 != 0) {

      uVar3 = _objc_opt_class(&_OBJC_CLASS___UIControl);

      uVar4 = _objc_opt_isKindOfClass(lVar2,uVar3);

      if ((uVar4 & 1) != 0) goto LAB_000c8270;

      uVar3 = _objc_opt_class(&_OBJC_CLASS___UINavigationBar);

      uVar4 = _objc_opt_isKindOfClass(lVar2,uVar3);

      if ((uVar4 & 1) != 0) {

        _objc_retain(lVar2);

        lVar5 = lVar2;

        goto LAB_000c8234;

      }

      FUN_002a4880(lVar2);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar2);

      lVar2 = lVar5;

    }

    lVar2 = FUN_002a4e60(param_1);

    if (lVar2 == 0x68) {

      FUN_00299220(param_1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      while (lVar2 != 0) {

        uVar3 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

        uVar4 = _objc_opt_isKindOfClass(lVar2,uVar3);

        if ((uVar4 & 1) != 0) {

          _objc_retain(lVar2);

          uVar3 = _objc_getClass("NewMainFrameViewController");

          uVar4 = _objc_opt_isKindOfClass(lVar2,uVar3);

          lVar6 = lVar2;

          if ((uVar4 & 1) == 0) {

            bVar1 = false;

          }

          else {

            FUN_002990e0(lVar2);

            lVar5 = _objc_retainAutoreleasedReturnValue();

            if (lVar5 == 0) {

              bVar1 = true;

            }

            else {

              FUN_002990e0(lVar2);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              FUN_002a5520();

              lVar9 = _objc_retainAutoreleasedReturnValue();

              bVar1 = lVar9 == lVar2;

LAB_000c8354:

              _objc_release(lVar9);

LAB_000c8368:

              _objc_release(uVar8);

            }

            _objc_release(lVar5);

          }

          _objc_release(lVar6);

          goto LAB_000c838c;

        }

        FUN_00299220(lVar2);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar2);

        lVar2 = lVar5;

      }

    }

    bVar1 = false;

  }

LAB_000c8394:

  _objc_release(param_1);

  return bVar1;

  while( true ) {

    FUN_00299220(lVar5);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar5);

    lVar5 = lVar6;

    if (lVar6 == 0) break;

LAB_000c8234:

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UINavigationController);

    uVar4 = _objc_opt_isKindOfClass(lVar5,uVar3);

    if ((uVar4 & 1) != 0) {

      _objc_retain(lVar5);

      FUN_002a5520(lVar5);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      uVar3 = _objc_getClass("NewMainFrameViewController");

      uVar4 = _objc_opt_isKindOfClass(uVar8,uVar3);

      lVar6 = lVar5;

      if ((uVar4 & 1) != 0) {

        FUN_002a5500(lVar2);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_00299140(uVar8);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        bVar1 = lVar9 == lVar7;

        _objc_release();

        goto LAB_000c8354;

      }

      bVar1 = false;

      goto LAB_000c8368;

    }

  }

LAB_000c8270:

  bVar1 = false;

LAB_000c838c:

  _objc_release(lVar2);

  goto LAB_000c8394;

}




