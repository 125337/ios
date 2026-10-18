// FUN_000c93cc @0xc93cc


undefined8 FUN_000c93cc(undefined8 param_1)



{

  bool bVar1;

  long lVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  uint uVar6;

  

  _objc_retain();

  if (DAT_003e7d40 != -1) {

    thunk_FUN_000ca37c();

  }

  FUN_002a4880(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    uVar5 = 0;

  }

  else {

    uVar6 = 0;

    while ((uVar3 = _objc_opt_isKindOfClass(lVar2,DAT_003e7d30), (uVar3 & 1) == 0 &&

           ((DAT_003e7d38 == 0 || (uVar3 = _objc_opt_isKindOfClass(lVar2), (uVar3 & 1) == 0))))) {

      FUN_002a4880(lVar2);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar2);

      uVar5 = 0;

      if ((lVar4 == 0) || (bVar1 = 10 < uVar6, uVar6 = uVar6 + 1, lVar2 = lVar4, bVar1))

      goto LAB_000c9484;

    }

    uVar5 = 1;

    lVar4 = lVar2;

LAB_000c9484:

    _objc_release(lVar4);

  }

  _objc_release(param_1);

  return uVar5;

}




