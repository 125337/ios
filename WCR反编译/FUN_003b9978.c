// FUN_003b9978 @ 003b9978

void FUN_003b9978(undefined8 param_1,byte param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *local_28;
  undefined4 local_20;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_20 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
    FUN_003b4c6c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObject__0269d678,local_18);
    if ((local_19 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_insertObject_atIndex__0269eac0,local_18,0);
    }
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_removeObjectForKey__0269d700,&cf_homeGroupingSuperPinnedSessions);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,local_30,
                 &cf_homeGroupingSuperPinnedSessions);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_28);
    FUN_00393164();
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
    local_20 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

