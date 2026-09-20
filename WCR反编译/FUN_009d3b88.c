// FUN_009d3b88 @ 009d3b88

void FUN_009d3b88(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_progressTimer_026aae88);
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setProgressTimer__026aae90,0);
  if (local_20 == 0) {
    local_24 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar3 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar2 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_20;
      local_50 = PTR___NSConcreteStackBlock_02578660;
      local_48 = 0xc2000000;
      local_44 = 0;
      local_40 = FUN_009d4018;
      local_38 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = lVar1;
      _dispatch_async(puVar3,&local_50);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_30,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_invalidate_026ca758);
    }
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

