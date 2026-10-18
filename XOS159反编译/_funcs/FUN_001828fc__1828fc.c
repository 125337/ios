// FUN_001828fc @0x1828fc


void FUN_001828fc(long param_1)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x28);

  if (lVar1 != 0) {

    FUN_0029a580(lVar1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) {

      FUN_002a6220(lVar1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6520();

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar3);

      if (lVar2 == 0) {

        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();

      }

    }

    else {

      _objc_release();

    }

  }

  _objc_release(lVar1);

  return;

}




