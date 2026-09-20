// saveRecords:forWxid: @ 01511134

/* Function Stack Size: 0x20 bytes */

void WCRefineSponsorSecureStore::saveRecords_forWxid_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_a8;
  cfstringStruct *local_90;
  long local_80;
  ID local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  ID local_48;
  undefined *local_40;
  undefined4 local_34;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resolvedWxid__026a7de8,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_30 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recordsMaskedConfigKey_026b0088);
    _objc_retainAutoreleasedReturnValue();
    if (local_28 == 0) {
      local_80 = *(long *)PTR____NSArray0___02578280;
    }
    else {
      local_80 = local_28;
    }
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_dataWithJSONObject_options_error_026a64a8,local_80,0,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = puVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_90 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_90 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_90;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    IVar2 = local_30;
    FUN_01510c28(local_30,&cf_WCRefineSponsor2024);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_58;
    local_60 = IVar2;
    FUN_0151145c(local_58,IVar2);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_a8 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,local_a8,local_48);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,local_30,
               &cf_sponsorRecordsOwnerWxid);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_40);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

