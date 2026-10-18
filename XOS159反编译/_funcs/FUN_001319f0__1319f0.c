// FUN_001319f0 @0x1319f0


void FUN_001319f0(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

  

  _objc_retain();

  if (param_1 != 0) {

    uVar1 = _object_getClass(param_1);

    lVar2 = _class_getInstanceVariable(uVar1,param_2);

    if (lVar2 != 0) {

      _object_getIvar(param_1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 == 0) {

LAB_00131a74:

        lVar2 = 0;

      }

      else {

        uVar1 = _objc_opt_class(&_OBJC_CLASS___UIView);

        uVar4 = _objc_opt_isKindOfClass(lVar3,uVar1);

        if ((uVar4 & 1) == 0) goto LAB_00131a74;

        _objc_retain(lVar3);

        lVar2 = lVar3;

      }

      _objc_release(lVar3);

      goto LAB_00131a80;

    }

  }

  lVar2 = 0;

LAB_00131a80:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar2);

  return;

}




