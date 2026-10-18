// FUN_0022a5d8 @0x22a5d8


void FUN_0022a5d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  uint uVar1;

  uint uVar2;

  uint uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  ulong uVar6;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_1);

  FUN_00291900(param_3);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e7230);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = FUN_002924e0();

  _objc_release(uVar5);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e7240);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_002924e0();

  _objc_release(uVar5);

  uVar3 = FUN_0022e74c(param_1,uVar4);

  if (((uVar1 | uVar3) & 1) == 0) {

    (*DAT_003eb030)(param_1,param_2,param_3,param_4);

  }

  else {

    FUN_0022eba8(param_1);

    if (((uVar2 | uVar3 ^ 0xffffffff) & 1) == 0) {

      _objc_retain(param_1);

      if (param_1 != 0) {

        uVar6 = _objc_opt_respondsToSelector(param_1,"responseUserClick");

        if ((uVar6 & 1) == 0) {

          uVar6 = _objc_opt_respondsToSelector(param_1,"responseUserClick:");

          if ((uVar6 & 1) == 0) {

            uVar6 = _objc_opt_respondsToSelector(param_1,"onTouchUpInside");

            if ((uVar6 & 1) != 0) {

              _objc_msgSend(param_1,"onTouchUpInside");

            }

          }

          else {

            _objc_msgSend(param_1,"responseUserClick:",0);

          }

        }

        else {

          _objc_msgSend(param_1,"responseUserClick");

        }

      }

      _objc_release(param_1);

      FUN_00224678(param_1);

    }

  }

  _objc_release(uVar4);

  _objc_release(param_1);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




