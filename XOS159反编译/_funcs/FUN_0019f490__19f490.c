// FUN_0019f490 @0x19f490


void FUN_0019f490(long param_1)



{

  long lVar1;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    FUN_0019f3b8(lVar1);

    _objc_setAssociatedObject(lVar1,PTR_LOOP_003e6ed0,0,1);

  }

  _objc_release(lVar1);

  return;

}




