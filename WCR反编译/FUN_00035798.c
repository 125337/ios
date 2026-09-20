// FUN_00035798 @ 00035798

void FUN_00035798(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **local_18;
  
  ppuVar1 = &PTR___NSConcreteGlobalBlock_02579330;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_18 = ppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    (*(code *)local_18[2])();
  }
  _objc_storeStrong(&local_18,0);
  return;
}

