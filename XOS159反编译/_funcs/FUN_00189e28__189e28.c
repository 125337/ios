// FUN_00189e28 @0x189e28


void FUN_00189e28(long param_1)



{

  long lVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  uint uVar5;

  

  (*DAT_003e8e08)();

  if ((DAT_003e8db8 & 1) == 0) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6e58);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar1 == 0) {

      return;

    }

  }

  FUN_002a4880(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    if (DAT_003e8e40 != -1) {

      FUN_0028f730();

    }

    if (DAT_003e8e38 != 0) {

      _objc_retain(lVar1);

      uVar5 = 0;

      lVar4 = lVar1;

      while (uVar2 = _objc_opt_isKindOfClass(lVar4,DAT_003e8e38), (uVar2 & 1) == 0) {

        FUN_002a4880(lVar4);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar4);

        if ((1 < uVar5) || (uVar5 = uVar5 + 1, lVar4 = lVar3, lVar3 == 0)) goto LAB_00189f48;

      }

      FUN_000822c8(lVar4);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 == param_1) {

        FUN_00189fa0(lVar4);

      }

      _objc_release(lVar3);

      lVar3 = lVar4;

LAB_00189f48:

      _objc_release(lVar3);

    }

  }

  _objc_release(lVar1);

  return;

}




