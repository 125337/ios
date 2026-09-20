// FUN_01ac8778 @ 01ac8778

void FUN_01ac8778(long param_1)

{
  long lVar1;
  undefined *puVar2;
  cfstringStruct *local_80;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  int local_34;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setupDataAndNotifyHomeGroups_026be0a0);
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    local_80 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (lVar1 == 0) {
      local_80 = &cf__nzz;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringWithFormat__0269cca8,&cf__OX_);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_80;
    }
    local_49 = lVar1 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_80;
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_40);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

