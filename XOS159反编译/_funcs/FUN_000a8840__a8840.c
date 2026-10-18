// FUN_000a8840 @0xa8840


undefined8 FUN_000a8840(undefined8 param_1)



{

  undefined8 uVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  

  _objc_retain();

  uVar1 = _object_getClass(param_1);

  if (DAT_003e7a00 == 0) {

    DAT_003e7a00 = _CFDictionaryCreateMutable(0,0,0,0);

  }

  else {

    lVar2 = _CFDictionaryGetValue(DAT_003e7a00,uVar1);

    if (lVar2 == 1) {

      uVar5 = 1;

      goto LAB_000a8940;

    }

    if (lVar2 == 2) {

      uVar5 = 0;

      goto LAB_000a8940;

    }

  }

  uVar3 = _objc_opt_respondsToSelector(param_1,"viewModel");

  if (((uVar3 & 1) == 0) ||

     (uVar3 = _objc_opt_respondsToSelector(param_1,"getHeadImageView"), (uVar3 & 1) == 0)) {

LAB_000a8924:

    uVar5 = 1;

    uVar4 = 1;

  }

  else {

    if (DAT_003e7a20 != -1) {

      FUN_0028efdc();

    }

    if ((((DAT_003e7a08 != 0) && (uVar3 = _objc_opt_isKindOfClass(param_1), (uVar3 & 1) != 0)) ||

        ((DAT_003e7a10 != 0 && (uVar3 = _objc_opt_isKindOfClass(param_1), (uVar3 & 1) != 0)))) ||

       ((DAT_003e7a18 != 0 && (uVar3 = _objc_opt_isKindOfClass(param_1), (uVar3 & 1) != 0))))

    goto LAB_000a8924;

    uVar5 = 0;

    uVar4 = 2;

  }

  _CFDictionarySetValue(DAT_003e7a00,uVar1,uVar4);

LAB_000a8940:

  _objc_release(param_1);

  return uVar5;

}




