// FUN_002249d4 @0x2249d4


uint FUN_002249d4(long param_1)



{

  uint uVar1;

  undefined8 uVar2;

  ulong uVar3;

  

  _objc_retain();

  uVar1 = 0;

  if (((param_1 != 0) && ((DAT_003eaf98 & 1) != 0)) && ((DAT_003eafb0 & 1) != 0)) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

    if ((uVar3 & 1) == 0) {

      uVar1 = 0;

    }

    else {

      uVar1 = FUN_0022531c(param_1);

      uVar1 = uVar1 ^ 1;

    }

  }

  _objc_release(param_1);

  return uVar1;

}




