// FUN_0024d524 @0x24d524


void FUN_0024d524(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  

  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();

  uVar1 = _objc_loadWeakRetained(param_1 + 0x28);

  FUN_0024d010();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 != 0) {

    FUN_0023d46c(lVar2);

  }

  DAT_003eb2f0 = 0;

  _objc_release(lVar2);

  _objc_release(uVar1);

  return;

}




