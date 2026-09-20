// hideStickyStatus @ 00f9ba70

/* Function Stack Size: 0x10 bytes */

void WCRefineHelper::hideStickyStatus(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar2 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_48 = PTR___NSConcreteStackBlock_02578660;
    local_40 = 0xc0000000;
    local_3c = 0;
    local_38 = FUN_00f9bba0;
    local_30 = &DAT_02578c00;
    local_28 = local_18;
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    FUN_00f9b33c();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_viewWithTag__026cabe0,0x57435253);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_50,0);
  }
  return;
}

