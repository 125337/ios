// FUN_0022b224 @0x22b224


uint FUN_0022b224(long param_1)



{

  uint uVar1;

  

  _objc_retain();

  if (param_1 != 0) {

    if (DAT_003eb060 != -1) {

      FUN_0028fb94();

    }

    if (DAT_003eb058 != 0) {

      uVar1 = _objc_opt_isKindOfClass(param_1);

      goto LAB_0022b26c;

    }

  }

  uVar1 = 0;

LAB_0022b26c:

  _objc_release(param_1);

  return uVar1 & 1;

}




