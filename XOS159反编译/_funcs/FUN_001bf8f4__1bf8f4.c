// FUN_001bf8f4 @0x1bf8f4


ulong FUN_001bf8f4(long param_1)



{

  bool bVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  ulong uVar6;

  

  _objc_retain();

  _objc_retain(param_1);

  if (param_1 == 0) {

    uVar3 = 0;

  }

  else {

    uVar6 = 0;

    lVar5 = param_1;

    while( true ) {

      _objc_opt_class(lVar5);

      _NSStringFromClass();

      uVar2 = _objc_retainAutoreleasedReturnValue();

      uVar3 = FUN_001bcde0();

      _objc_release(uVar2);

      lVar4 = lVar5;

      if ((uVar3 & 1) != 0) break;

      FUN_002a4880(lVar5);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar5);

      if ((lVar4 == 0) || (bVar1 = 8 < uVar6, uVar6 = uVar6 + 1, lVar5 = lVar4, bVar1)) break;

    }

    _objc_release(lVar4);

  }

  _objc_release(param_1);

  return uVar3;

}




