// FUN_015e4ed0 @ 015e4ed0

void FUN_015e4ed0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [12];
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
    puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar3 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar2 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_015e5034;
      local_48 = &DAT_0257be28;
      _objc_copyWeak(auStack_40,param_1 + 0x20);
      _dispatch_async(puVar3,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_34 = 1;
      _objc_destroyWeak(auStack_40);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_restoreAfterScreenCapture_026b11c8);
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

