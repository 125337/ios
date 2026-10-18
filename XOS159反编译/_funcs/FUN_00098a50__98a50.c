// FUN_00098a50 @0x98a50


void FUN_00098a50(undefined8 param_1)



{

  dispatch_time_t dVar1;

  undefined *local_50;

  undefined8 local_48;

  code *local_40;

  undefined *puStack_38;

  undefined1 auStack_30 [8];

  undefined1 auStack_28 [8];

  

  (*DAT_003e7838)();

  _objc_initWeak(auStack_28,param_1);

  dVar1 = _dispatch_time(0,300000000);

  local_50 = PTR___NSConcreteStackBlock_003886f0;

  local_48 = 0xc2000000;

  local_40 = FUN_000b548c;

  puStack_38 = &DAT_0038a150;

  _objc_copyWeak(auStack_30,auStack_28);

  _dispatch_after(dVar1,PTR___dispatch_main_q_00388740,&local_50);

  _objc_destroyWeak(auStack_30);

  _objc_destroyWeak(auStack_28);

  return;

}




