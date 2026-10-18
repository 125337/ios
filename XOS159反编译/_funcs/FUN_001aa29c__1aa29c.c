// FUN_001aa29c @0x1aa29c


uint FUN_001aa29c(undefined8 param_1)



{

  uint uVar1;

  ulong uVar2;

  

  _objc_retain();

  if (DAT_003e96a8 != -1) {

    FUN_0028f7d8();

  }

  if ((DAT_003e9698 == 0) || (uVar2 = _objc_opt_isKindOfClass(param_1), (uVar2 & 1) == 0)) {

    if (DAT_003e96a0 == 0) {

      uVar1 = 0;

    }

    else {

      uVar1 = _objc_opt_isKindOfClass(param_1);

    }

  }

  else {

    uVar1 = 1;

  }

  _objc_release(param_1);

  return uVar1 & 1;

}




