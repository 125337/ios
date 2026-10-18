// FUN_001b48dc @0x1b48dc


void FUN_001b48dc(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  long local_38;

  

  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002995c0();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(uVar1);

  if (lVar2 != 0) {

    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);

    FUN_002995c0();

    lVar2 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar2 + 0x10))();

    _objc_release(lVar2);

    _objc_release(uVar1);

  }

  lVar2 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar2 != 0) {

    local_58 = PTR___NSConcreteStackBlock_003886f0;

    local_50 = 0xc2000000;

    local_48 = FUN_001b49c0;

    puStack_40 = &DAT_0038e500;

    local_38 = lVar2;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

  }

  _objc_release(lVar2);

  return;

}




