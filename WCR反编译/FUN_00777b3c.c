// FUN_00777b3c @ 00777b3c

void FUN_00777b3c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  dispatch_queue_t pdVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eNNS_u);
    local_28 = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_00778378();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_b);
      local_28 = 1;
    }
    else {
      puVar3 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,
                 &cf_ck_W_eQ_nm_);
      _objc_retainAutoreleasedReturnValue();
      local_30 = puVar3;
      pdVar4 = _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_18;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_00778668;
      local_48 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = local_30;
      local_40 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = puVar3;
      _dispatch_async(pdVar4,&local_60);
      (*(code *)PTR__objc_release_02578630)(pdVar4);
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_40,0);
      _objc_storeStrong(&local_30,0);
      local_28 = 0;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

