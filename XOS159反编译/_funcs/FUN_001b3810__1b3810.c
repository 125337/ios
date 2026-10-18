// FUN_001b3810 @0x1b3810


void FUN_001b3810(long param_1)



{

  long lVar1;

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  long local_28;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    local_48 = PTR___NSConcreteStackBlock_003886f0;

    local_40 = 0xc2000000;

    local_38 = FUN_001b3888;

    puStack_30 = &DAT_0038e500;

    local_28 = lVar1;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_48);

  }

  _objc_release(lVar1);

  return;

}




