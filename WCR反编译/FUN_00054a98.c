// FUN_00054a98 @ 00054a98

void FUN_00054a98(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar2 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar1 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      (**(code **)(local_18 + 0x10))();
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

