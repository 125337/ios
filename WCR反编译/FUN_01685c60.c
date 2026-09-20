// FUN_01685c60 @ 01685c60

void FUN_01685c60(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  ppuVar1 = &PTR___NSConcreteGlobalBlock_02587c20;
  local_28 = param_1;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_30 = ppuVar1;
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
    (*(code *)local_30[2])();
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}

