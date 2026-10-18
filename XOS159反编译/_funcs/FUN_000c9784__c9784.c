// FUN_000c9784 @0xc9784


uint FUN_000c9784(undefined8 param_1)



{

  bool bVar1;

  uint uVar2;

  long lVar3;

  long lVar4;

  uint uVar5;

  

  _objc_retain();

  if (DAT_003e7d40 != -1) {

    thunk_FUN_000ca37c();

  }

  if (DAT_003e7d48 != 0) {

    FUN_002a4880(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 != 0) {

      uVar5 = 0;

      while (uVar2 = _objc_opt_isKindOfClass(lVar3,DAT_003e7d48), lVar4 = lVar3, (uVar2 & 1) == 0) {

        FUN_002a4880(lVar3);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar3);

        if ((lVar4 == 0) || (bVar1 = 8 < uVar5, uVar5 = uVar5 + 1, lVar3 = lVar4, bVar1)) break;

      }

      _objc_release(lVar4);

      goto LAB_000c9834;

    }

  }

  uVar2 = 0;

LAB_000c9834:

  _objc_release(param_1);

  return uVar2 & 1;

}




