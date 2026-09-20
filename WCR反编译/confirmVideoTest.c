// confirmVideoTest @ 017e80d0

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::confirmVideoTest(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  uint local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
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
  local_38 = IVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPresetTestAlert__026b5548,0);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (IVar1 != 0) {
    puVar5 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_currentVideoProvider_0269d498);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_48;
    local_50 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_providerID_0269d480);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_apiKeyForProviderID_kind__0269d488,puVar5,&cf_video);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presetTestRequest_026b5568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar5 = PTR_WCRefineAIStore_026ce048;
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_videoDurationSeconds_0269d4a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_resolvedVideoDurationSeconds_for_0269d4a8,puVar3,local_50);
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_ck_WubbGr_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showStickyStatusText__0269d4b0);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_initWeak(auStack_68,local_28);
    IVar2 = local_38;
    puVar6 = local_50;
    puVar5 = local_58;
    puVar3 = PTR_WCRefineAIClient_026ce080;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_017e863c;
    local_78 = &DAT_02589020;
    _objc_copyWeak(auStack_70,auStack_68);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_generateVideoWithPrompt_provider_0269d4c0,IVar2,puVar6,puVar5,
               &PTR___NSConcreteGlobalBlock_02589248,&local_90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPresetTestRequest__026b5578);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQc_y);
  }
  local_3c = (uint)(IVar1 == 0);
  _objc_storeStrong(&local_38,0);
  return;
}

