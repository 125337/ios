// FUN_001aa1b4 @0x1aa1b4


void FUN_001aa1b4(undefined8 param_1,long param_2)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  

  _objc_retain();

  if (param_2 == 0) {

    uVar4 = 0;

  }

  else {

    for (lVar1 = _object_getClass(param_1); uVar4 = 0, lVar1 != 0;

        lVar1 = _class_getSuperclass(lVar1)) {

      lVar2 = _class_getInstanceVariable(lVar1,param_2);

      if (lVar2 != 0) {

        _object_getIvar(param_1);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        uVar4 = _objc_opt_class(&_OBJC_CLASS___UIView);

        uVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);

        uVar4 = uVar3;

        if ((uVar5 & 1) == 0) {

          uVar4 = 0;

        }

        _objc_retain(uVar4);

        _objc_release(uVar3);

        break;

      }

    }

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}




