// FUN_0022442c @ 0022442c

void FUN_0022442c(double param_1,undefined8 param_2)

{
  bool bVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  double local_50;
  undefined1 auStack_48 [24];
  double local_30;
  uint local_24;
  double local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  bVar1 = local_18 != 0;
  local_20 = param_1;
  if (bVar1) {
    FUN_00223ce4(local_18);
    local_30 = param_1;
    _objc_initWeak(auStack_48,local_18);
    dVar2 = _dispatch_time(0,(long)(local_20 * 1000000000.0));
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00224fd4;
    local_60 = &DAT_02579bb0;
    _objc_copyWeak(auStack_58,auStack_48);
    local_50 = local_30;
    _dispatch_after(dVar2,puVar3,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  local_24 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

