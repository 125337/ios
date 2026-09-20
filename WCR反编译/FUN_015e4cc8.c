// FUN_015e4cc8 @ 015e4cc8

void FUN_015e4cc8(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined **local_40;
  int local_34;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    ppuVar2 = &local_68;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_015e4e48;
    local_50 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = lVar1;
    _objc_retainBlock();
    puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_40 = ppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar4 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      (*(code *)local_40[2])();
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_48,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

