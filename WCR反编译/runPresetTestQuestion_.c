// runPresetTestQuestion: @ 017bdebc

/* Function Stack Size: 0x18 bytes */

void WCRefineAIFeatureViewController::runPresetTestQuestion_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_130;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined8 local_90;
  SEL local_88;
  ID local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = 0;
  local_88 = param_2;
  local_80 = param_1;
  _objc_storeStrong(&local_90,param_3);
  pcVar1 = (cfstringStruct *)PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_98 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_currentChatProvider_0269d548);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_98;
  local_a0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_apiKeyForProviderID_kind__0269d488,pcVar1,&cf_chat);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  IVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_activeRequest_026b4af0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WBl_);
  _objc_retainAutoreleasedReturnValue();
  local_58 = &cf_role;
  local_48 = &cf_system;
  local_50 = &cf_content;
  pcVar2 = local_98;
  local_b0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_systemPrompt_0269d0c8);
  _objc_retainAutoreleasedReturnValue();
  local_130 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_130 = &::cf___;
  }
  local_40 = local_130;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_48,&local_58);
  _objc_retainAutoreleasedReturnValue();
  local_78 = &cf_role;
  local_68 = &cf_user;
  local_70 = &cf_content;
  local_60 = local_90;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_68,&local_78,2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_initWeak(auStack_c0,local_80);
  pcVar1 = local_a0;
  pcVar2 = local_a8;
  puVar6 = local_b0;
  puVar5 = local_b8;
  puVar4 = PTR_WCRefineAIClient_026ce080;
  local_f0 = PTR___NSConcreteStackBlock_02578660;
  local_e8 = 0xc2000000;
  local_e4 = 0;
  local_e0 = FUN_017be3d4;
  local_d8 = &DAT_02588fa0;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = puVar6;
  _objc_copyWeak(auStack_c8,auStack_c0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_sendMessages_provider_apiKey_chu_0269d550,puVar5,pcVar1,pcVar2,0,&local_f0
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setActiveRequest__026b4d40);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_destroyWeak(auStack_c8);
  _objc_storeStrong(&local_d0);
  _objc_destroyWeak(auStack_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

