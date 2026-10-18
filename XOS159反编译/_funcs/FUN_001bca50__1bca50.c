// FUN_001bca50 @0x1bca50


void FUN_001bca50(long param_1)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  ulong uVar7;

  undefined1 auVar8 [16];

  

  _objc_retain();

  _objc_retain(param_1);

  if (param_1 != 0) {

    uVar7 = 0;

    lVar6 = param_1;

    do {

      auVar8 = _objc_opt_respondsToSelector(lVar6,"getHeadImageView");

      if ((auVar8._0_8_ & 1) != 0) {

        FUN_00299c80(lVar6,auVar8._8_8_,"getHeadImageView");

        uVar2 = _objc_retainAutoreleasedReturnValue();

        uVar3 = _objc_opt_class(&_OBJC_CLASS___UIView);

        uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

        if (((uVar4 & 1) != 0) &&

           (uVar4 = FUN_001bcd0c(param_1,uVar2), lVar5 = lVar6, (uVar4 & 1) != 0))

        goto LAB_001bcb4c;

        _objc_release(uVar2);

      }

      FUN_002a4880(lVar6);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar6);

      uVar2 = 0;

      if ((lVar5 == 0) || (bVar1 = 0xc < uVar7, uVar7 = uVar7 + 1, lVar6 = lVar5, bVar1))

      goto LAB_001bcb4c;

    } while( true );

  }

  uVar2 = 0;

LAB_001bcb54:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

LAB_001bcb4c:

  _objc_release(lVar5);

  goto LAB_001bcb54;

}




