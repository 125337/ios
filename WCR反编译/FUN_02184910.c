// FUN_02184910 @ 02184910

void FUN_02184910(undefined8 param_1,byte param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_4c;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  byte local_29;
  long local_28;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  local_29 = 0;
  local_4c = 1;
  if (lVar1 != 0) {
    FUN_0219dd5c();
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = (uint)lVar1 ^ 1;
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  if ((local_4c & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    FUN_0219da0c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_19 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_18);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObject__0269d678,local_18);
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKey__026ca9e8,local_48,
               &cf_WCRefineEnhancedAdBlockUserDisabledSubKeys);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_38);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  else {
    local_30 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

