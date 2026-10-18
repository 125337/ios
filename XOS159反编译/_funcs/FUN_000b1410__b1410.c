// FUN_000b1410 @0xb1410


uint FUN_000b1410(long param_1)



{

  int iVar1;

  uint uVar2;

  long lVar3;

  long lVar4;

  

  _objc_retain();

  if (param_1 == 0) {

    uVar2 = 0;

  }

  else {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc8);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e5cc0);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0 && lVar4 == 0) {

      uVar2 = 0;

    }

    else {

      iVar1 = FUN_002924e0(lVar3);

      if (iVar1 == 0) {

        uVar2 = 1;

      }

      else {

        uVar2 = FUN_002924e0(lVar4);

        uVar2 = uVar2 ^ 1;

      }

    }

    _objc_release(lVar4);

    _objc_release(lVar3);

  }

  _objc_release(param_1);

  return uVar2;

}




