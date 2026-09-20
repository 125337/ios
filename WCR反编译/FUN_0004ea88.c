// FUN_0004ea88 @ 0004ea88

void FUN_0004ea88(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long local_48 [3];
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  FUN_0004ec20();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar3 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar2 & 1) == 0) {
      local_48[0] = 0;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_sync();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar1 = local_48[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
      local_2c = 1;
      _objc_storeStrong(local_48,0);
    }
    else {
      local_18 = 0;
      local_2c = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_2c = 1;
    local_18 = param_1;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

