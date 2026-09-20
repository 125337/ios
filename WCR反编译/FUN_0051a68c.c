// FUN_0051a68c @ 0051a68c

void FUN_0051a68c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar3 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar2 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_18;
      local_48 = PTR___NSConcreteStackBlock_02578660;
      local_40 = 0xc2000000;
      local_3c = 0;
      local_38 = FUN_0051af54;
      local_30 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = lVar1;
      _dispatch_async(puVar3,&local_48);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_28,0);
    }
    else {
      FUN_0051a7b8(local_18);
    }
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

