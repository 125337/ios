// FUN_00211340 @0x211340


void FUN_00211340(long param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  

  _objc_retain();

  uVar3 = 0;

  if ((param_1 != 0) && ((DAT_003eaa30 & 1) != 0)) {

    if (5 < DAT_003eaac8 || (1L << (DAT_003eaac8 & 0x3f) & 0x26U) == 0) {

      _objc_getAssociatedObject(param_1,&DAT_003ead86);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar1 = FUN_002924e0();

      _objc_release(uVar3);

      if ((uVar1 & 1) != 0) {

        _objc_getAssociatedObject(param_1,&DAT_003ead85);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        uVar1 = FUN_00211450();

        if ((uVar1 & 1) == 0) {

          uVar3 = 0;

        }

        else {

          _objc_retain(uVar2);

          uVar3 = uVar2;

        }

        _objc_release(uVar2);

        goto LAB_00211394;

      }

    }

    uVar3 = 0;

  }

LAB_00211394:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar3);

  return;

}




