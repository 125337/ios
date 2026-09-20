// FUN_008f2d30 @ 008f2d30

void FUN_008f2d30(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_78;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = PTR___dispatch_main_q_02578680;
    local_20 = &cf___;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_sync();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_20 == (cfstringStruct *)0x0) {
      local_78 = &cf___;
    }
    else {
      local_78 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    _objc_storeStrong(&local_20,0);
  }
  else {
    FUN_008f3a68();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

