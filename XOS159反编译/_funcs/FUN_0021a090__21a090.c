// FUN_0021a090 @0x21a090


void FUN_0021a090(long param_1)



{

  long lVar1;

  long lVar2;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    if ((DAT_003ead50 & 1) == 0) {

      FUN_002a6520(lVar1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 != 0) {

        FUN_00217f1c(lVar1);

      }

    }

    _objc_setAssociatedObject(lVar1,&DAT_003eaef2,0,1);

  }

  _objc_release(lVar1);

  return;

}




