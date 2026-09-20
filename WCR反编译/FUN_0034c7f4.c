// FUN_0034c7f4 @ 0034c7f4

void FUN_0034c7f4(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  uint local_2c;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar2 = PTR_WCRefineHomeAvatarStripHook_026ce560;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHomeAvatarStripHook_026ce560,PTR_s_tryInstall_026a2310);
  bVar1 = ((ulong)puVar2 & 1) == 0;
  if (bVar1) {
    dVar3 = _dispatch_time(0,1000000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_0034c958;
    local_40 = &DAT_0257c428;
    local_38 = *(undefined8 *)(param_1 + 0x20);
    _dispatch_after(dVar3,puVar2,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_20,0);
  return;
}

