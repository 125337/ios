// FUN_018dcc28 @ 018dcc28

void FUN_018dcc28(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [12];
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  bVar1 = local_20 != 0;
  local_28 = param_1;
  if (bVar1) {
    FUN_018dcde4(local_20);
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__Tek);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    dVar4 = _dispatch_time(0,350000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_018dd5d0;
    local_48 = &DAT_0257be28;
    _objc_copyWeak(auStack_40,auStack_38);
    _dispatch_after(dVar4,puVar3,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_20,0);
  return;
}

