// FUN_0016c5e8 @ 0016c5e8

void FUN_0016c5e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  dispatch_time_t dVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  long local_40;
  int local_34;
  undefined *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = (undefined *)(param_1 + 0x20);
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineClearSessionHook_026ce348;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineClearSessionHook_026ce348,PTR_s_mainFrameViewController_0269f7f0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    local_34 = 1;
  }
  else {
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    if (lVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gbO);
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineClearSessionHook_026ce348,PTR_s_setPendingUserNames_onHost__0269f878,
                 local_20,local_30);
      dVar4 = _dispatch_time(0,350000000);
      puVar1 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_0016c864;
      local_50 = &DAT_0257a7a0;
      (*(code *)PTR__objc_retain_02578638)();
      lVar3 = local_20;
      local_48 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = lVar3;
      _dispatch_after(dVar4,puVar1,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_48,0);
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

