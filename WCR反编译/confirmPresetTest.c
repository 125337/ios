// confirmPresetTest @ 017e6af0

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::confirmPresetTest(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *local_138;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  ID local_c8;
  undefined *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined4 local_94;
  ID local_90;
  SEL local_88;
  ID local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  ID local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = param_2;
  local_80 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_presetTestAlert_026b5560);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_90 = IVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setPresetTestAlert__026b5548,0);
  IVar1 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQKm);
    local_94 = 1;
  }
  else {
    pcVar5 = (cfstringStruct *)PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_currentChatProvider_0269d548);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = local_a0;
    local_a8 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_providerID_0269d480);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_apiKeyForProviderID_kind__0269d488,pcVar5,&cf_chat);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    IVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_presetTestRequest_026b5568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WBl_);
    _objc_retainAutoreleasedReturnValue();
    local_58 = &cf_role;
    local_48 = &cf_system;
    local_50 = &cf_content;
    pcVar6 = local_a0;
    local_b8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_systemPrompt_0269d0c8);
    _objc_retainAutoreleasedReturnValue();
    local_138 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_138 = &::cf___;
    }
    local_40 = local_138;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_58);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf_role;
    local_68 = &cf_user;
    local_70 = &cf_content;
    local_60 = local_90;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_68,&local_78,2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    pcVar5 = local_a8;
    pcVar6 = local_b0;
    puVar8 = local_b8;
    puVar7 = local_c0;
    puVar3 = PTR_WCRefineAIClient_026ce080;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_017e7100;
    local_d8 = &DAT_02589218;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_80;
    local_d0 = puVar8;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_sendMessages_provider_apiKey_chu_0269d550,puVar7,pcVar5,pcVar6,0,
               &local_f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setPresetTestRequest__026b5578);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    local_94 = 0;
  }
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

