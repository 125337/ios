// FUN_01bf5ca0 @ 01bf5ca0

void FUN_01bf5ca0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *local_48;
  undefined8 local_40;
  long local_38;
  undefined4 local_2c;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_28 = param_1;
  _WCRMomentsScheduledCreateTaskFromDraft(uVar1,local_20);
  if ((uVar1 & 1) == 0) {
    local_2c = 1;
  }
  else {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_38 = lVar4;
    if (lVar4 != 0x7fffffffffffffff) {
      puVar5 = PTR_WCRefineMomentsDraftManager_026ce740;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsDraftManager_026ce740,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    uVar6 = local_20;
    _WCRMomentsScheduledFormatFireDate();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ReQ_eNR_);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_WCRefineConfig_026cdf58;
    local_48 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    if (((ulong)puVar5 & 1) == 0) {
      puVar7 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_stringByAppendingString__0269d398,&cf_format_s_);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_48;
      local_48 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_48);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

