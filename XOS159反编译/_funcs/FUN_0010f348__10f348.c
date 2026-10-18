// FUN_0010f348 @0x10f348


void FUN_0010f348(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4)



{

  long lVar1;

  long lVar2;

  

  lVar1 = _objc_loadWeakRetained(param_4 + 0x20);

  if (lVar1 != 0) {

    _objc_setAssociatedObject(lVar1,PTR_LOOP_003e6948,0,1);

    FUN_002a6520(lVar1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (((lVar2 != 0) && (FUN_001079e0(), DAT_003e8119 == '\x01')) && (DAT_003e8128 != 0)) {

      FUN_000822c8(lVar1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if ((lVar2 != 0) && (FUN_00295600(lVar2), 0.0 < param_3)) {

        FUN_0010c338(lVar1,lVar2);

      }

      _objc_release(lVar2);

    }

  }

  _objc_release(lVar1);

  return;

}




