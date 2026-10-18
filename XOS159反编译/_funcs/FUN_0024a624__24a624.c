// FUN_0024a624 @0x24a624


void FUN_0024a624(long param_1)



{

  long lVar1;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    _objc_setAssociatedObject(lVar1,PTR_LOOP_003e72f0,0,1);

    FUN_0023d46c(lVar1);

  }

  _objc_release(lVar1);

  return;

}




