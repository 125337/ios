// FUN_0019f2ec @0x19f2ec


void FUN_0019f2ec(long param_1)



{

  long lVar1;

  dispatch_time_t dVar2;

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  undefined1 auStack_38 [8];

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    FUN_0019f3b8(lVar1);

  }

  dVar2 = _dispatch_time(0,60000000);

  local_58 = PTR___NSConcreteStackBlock_003886f0;

  local_50 = 0xc2000000;

  local_48 = FUN_0019f490;

  puStack_40 = &DAT_0038a150;

  _objc_copyWeak(auStack_38,param_1 + 0x20);

  _dispatch_after(dVar2,PTR___dispatch_main_q_00388740,&local_58);

  _objc_destroyWeak(auStack_38);

  _objc_release(lVar1);

  return;

}




