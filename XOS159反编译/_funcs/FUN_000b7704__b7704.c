// FUN_000b7704 @0xb7704


bool FUN_000b7704(long param_1)



{

  bool bVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  

  _objc_retain();

  if (param_1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

    if ((uVar3 & 1) != 0) {

      if (DAT_003e7b68 != -1) {

        FUN_0028f050();

      }

      if (DAT_003e7b60 != 0) {

        FUN_00083564(param_1);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        bVar1 = lVar4 != 0;

        _objc_release();

        goto LAB_000b7778;

      }

    }

  }

  bVar1 = false;

LAB_000b7778:

  _objc_release(param_1);

  return bVar1;

}




