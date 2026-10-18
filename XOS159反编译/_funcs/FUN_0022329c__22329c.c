// FUN_0022329c @0x22329c


void FUN_0022329c(long param_1)



{

  long lVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    _objc_getAssociatedObject(lVar1,&DAT_003eae52);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) {

      uVar3 = FUN_00294ea0(lVar2);

      if ((uVar3 & 1) == 0) {

        FUN_00222ee8(lVar1,1);

      }

      else {

        uVar4 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

        uVar3 = _objc_opt_isKindOfClass(lVar1,uVar4);

        if ((uVar3 & 1) == 0) {

          uVar4 = 0;

        }

        else {

          FUN_002a4d40(lVar1);

          uVar4 = _objc_retainAutoreleasedReturnValue();

        }

        FUN_002a4d20(uVar4);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar5 != 0) {

          FUN_002a4d20(uVar4);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_0023fafc();

          _objc_release(uVar6);

        }

        _objc_release(uVar4);

      }

    }

    _objc_release(lVar2);

  }

  _objc_release(lVar1);

  return;

}




