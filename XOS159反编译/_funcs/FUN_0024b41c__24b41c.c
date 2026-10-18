// FUN_0024b41c @0x24b41c


void FUN_0024b41c(long param_1,long param_2)



{

  long lVar1;

  

  if (param_2 == 1) {

    lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

    if (lVar1 != 0) {

      FUN_0024aa48(lVar1);

    }

    _objc_release(lVar1);

    return;

  }

  return;

}




