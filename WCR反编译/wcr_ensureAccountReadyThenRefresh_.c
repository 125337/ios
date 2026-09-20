// wcr_ensureAccountReadyThenRefresh: @ 01ac4860

/* Function Stack Size: 0x18 bytes */

void WCRefineGroupManagementViewController::wcr_ensureAccountReadyThenRefresh_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  long_long local_48;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    if ((long)local_28 < 1) {
      local_34 = 1;
    }
    else {
      _objc_initWeak(local_28,auStack_40,local_18);
      dVar4 = _dispatch_time(0,300000000);
      puVar1 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_01ac4a60;
      local_58 = &DAT_025799c0;
      _objc_copyWeak(auStack_50,auStack_40);
      local_48 = local_28;
      _dispatch_after(dVar4,puVar1,&local_70);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_40);
      local_34 = 0;
    }
  }
  else {
    FUN_00ab7d7c(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupData_026b7c20);
    local_34 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

