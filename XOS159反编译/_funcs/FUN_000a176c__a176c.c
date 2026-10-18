// FUN_000a176c @0xa176c


bool FUN_000a176c(long param_1)



{

  bool bVar1;

  long lVar2;

  long lVar3;

  

  _objc_retain();

  _objc_retain(param_1);

  lVar3 = param_1;

  if (param_1 == 0) {

    bVar1 = false;

  }

  else {

    do {

      lVar2 = FUN_002a4e60(lVar3);

      bVar1 = lVar2 - 0x1e14U < 99;

      lVar2 = lVar3;

      if (bVar1) break;

      FUN_002a4880(lVar3);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar3);

      lVar3 = lVar2;

    } while (lVar2 != 0);

    _objc_release(lVar2);

  }

  _objc_release(param_1);

  return bVar1;

}




