// FUN_00167e4c @0x167e4c


uint FUN_00167e4c(long param_1)



{

  uint uVar1;

  ulong uVar2;

  

  _objc_retain();

  uVar2 = FUN_00167c64();

  if (((uVar2 & 1) == 0) || ((DAT_003e8a88 & 1) != 0)) {

    uVar1 = 0;

  }

  else {

    uVar1 = 0;

    if ((param_1 != 0) && ((DAT_003e8a30 != 0 && (DAT_003e8a38 != 0)))) {

      uVar1 = FUN_00167ed4(param_1);

      uVar1 = uVar1 ^ 1;

    }

  }

  _objc_release(param_1);

  return uVar1;

}




