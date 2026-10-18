// FUN_001bcba4 @0x1bcba4


void FUN_001bcba4(long param_1)



{

  bool bVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  ulong uVar7;

  

  _objc_retain();

  _objc_retain(param_1);

  if (param_1 == 0) {

    lVar4 = 0;

    lVar6 = param_1;

  }

  else {

    uVar7 = 0;

    lVar5 = param_1;

    while( true ) {

      _objc_opt_class(lVar5);

      _NSStringFromClass();

      uVar2 = _objc_retainAutoreleasedReturnValue();

      uVar3 = FUN_001bcde0();

      _objc_release(uVar2);

      lVar6 = lVar5;

      lVar4 = lVar5;

      if ((uVar3 & 1) != 0) break;

      FUN_002a4880(lVar5);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar5);

      lVar6 = param_1;

      if ((lVar4 == 0) || (bVar1 = 6 < uVar7, uVar7 = uVar7 + 1, lVar5 = lVar4, bVar1)) break;

    }

  }

  _objc_retain(lVar6);

  _objc_release(lVar4);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar6);

  return;

}




