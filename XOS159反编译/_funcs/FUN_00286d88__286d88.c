// FUN_00286d88 @0x286d88


void FUN_00286d88(undefined8 param_1)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  

  _objc_retain();

  lVar1 = _NSClassFromString(param_1);

  if (lVar1 != 0) {

    uVar2 = _objc_opt_respondsToSelector(lVar1,"layer");

    if ((uVar2 & 1) != 0) {

      _objc_msgSend(lVar1,"layer");

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar4 = _objc_opt_class(&_OBJC_CLASS___CALayer);

      uVar2 = _objc_opt_isKindOfClass(uVar3,uVar4);

      uVar4 = uVar3;

      if ((uVar2 & 1) == 0) {

        uVar4 = 0;

      }

      _objc_retain(uVar4);

      _objc_release(uVar3);

      goto LAB_00286e24;

    }

  }

  uVar4 = 0;

LAB_00286e24:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}




