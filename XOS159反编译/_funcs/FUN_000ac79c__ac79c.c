// FUN_000ac79c @0xac79c


void FUN_000ac79c(long param_1)



{

  long lVar1;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    _objc_setAssociatedObject(lVar1,PTR_LOOP_003e64c0,0,1);

    FUN_000a8cc4(lVar1);

  }

  _objc_release(lVar1);

  return;

}




