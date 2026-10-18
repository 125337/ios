// FUN_00155de0 @0x155de0


void FUN_00155de0(void)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  

  lVar1 = FUN_00138258();

  if (lVar1 < 10) {

    uVar5 = 0;

  }

  else {

    FUN_00167d7c();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    auVar6 = FUN_00293860();

    if (lVar1 + -10 < auVar6._0_8_) {

      FUN_00299500(uVar2,auVar6._8_8_,lVar1 + -10);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar5 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

      uVar4 = _objc_opt_isKindOfClass(uVar3,uVar5);

      uVar5 = uVar3;

      if ((uVar4 & 1) == 0) {

        uVar5 = 0;

      }

      _objc_retain(uVar5);

      _objc_release(uVar3);

    }

    else {

      uVar5 = 0;

    }

    _objc_release(uVar2);

  }

  _objc_autoreleaseReturnValue(uVar5);

  return;

}




