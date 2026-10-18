// FUN_002254e4 @0x2254e4


void FUN_002254e4(long param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  

  _objc_retain();

  if (param_1 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar2 = _objc_opt_isKindOfClass(param_1,uVar1);

    if ((uVar2 & 1) != 0) {

      _objc_retain(param_1);

      uVar2 = FUN_002249d4(param_1);

      if ((uVar2 & 1) == 0) {

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e7168);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar3 != 0) {

          FUN_00224a64(param_1);

          _objc_setAssociatedObject(param_1,PTR_LOOP_003e7168,0,1);

        }

      }

      else {

        if (DAT_003eafc0 != -1) {

          FUN_0028fb80();

        }

        if (DAT_003eafb8 == 0) {

          FUN_00224a64(param_1);

        }

        else {

          FUN_00083134(param_1);

          lVar3 = _objc_retainAutoreleasedReturnValue();

          if (lVar3 == 0) {

            uVar2 = FUN_00224b5c(param_1);

            if ((uVar2 & 1) == 0) {

              FUN_00224a64(param_1);

              _objc_setAssociatedObject(param_1,PTR_LOOP_003e7168,0,1);

              _objc_setAssociatedObject(param_1,PTR_LOOP_003e7170,0,1);

            }

          }

          else {

            FUN_00225690(param_1,lVar3);

          }

          _objc_release(lVar3);

        }

      }

      _objc_release(param_1);

    }

  }

  _objc_release(param_1);

  return;

}




