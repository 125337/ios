// FUN_01ac9fcc @ 01ac9fcc

void FUN_01ac9fcc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_b8;
  undefined *local_88;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  long local_50;
  undefined *local_48;
  undefined *local_40;
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
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_88 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_88;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_40;
    FUN_01ac6854(local_40,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_48 = puVar2;
    FUN_01ac6854(local_20,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    local_50 = lVar1;
    FUN_01ac9510(local_48,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setupDataAndNotifyHomeGroups_026be0a0);
    lVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    local_b8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (lVar1 == 0) {
      local_b8 = &cf_N6e__J_nzz;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_stringWithFormat__0269cca8,&cf__OX_);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_b8;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_58);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
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

