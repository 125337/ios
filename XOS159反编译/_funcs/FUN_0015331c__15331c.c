// FUN_0015331c @0x15331c


void FUN_0015331c(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  

  iVar1 = FUN_00297b80();

  if (iVar1 != 0) {

    FUN_002a6220(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6520();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar2);

    if (lVar3 != 0) {

      FUN_002990e0(param_1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        FUN_002990e0(param_1);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        FUN_002a5520();

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        _objc_release(uVar2);

        _objc_release(lVar3);

        if (lVar4 != param_1) {

          return;

        }

      }

      FUN_0029a560(param_1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar3 == 0) {

        FUN_00292720(param_1);

        return;

      }

    }

  }

  return;

}




