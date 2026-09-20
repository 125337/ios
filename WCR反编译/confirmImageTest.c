// confirmImageTest @ 017e75f4

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::confirmImageTest(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
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
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPresetTestAlert__026b5548,0);
  IVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (IVar3 != 0) {
    puVar7 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_currentImageProvider_0269d478);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_48;
    local_50 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_providerID_0269d480);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_apiKeyForProviderID_kind__0269d488,puVar7,&cf_image);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presetTestRequest_026b5568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WubVGr_
              );
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar5;
    _objc_initWeak(auStack_68,local_28);
    IVar4 = local_38;
    puVar2 = local_50;
    puVar1 = local_58;
    puVar7 = local_60;
    puVar5 = PTR_WCRefineAIClient_026ce080;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_017e7a84;
    local_80 = &DAT_02588fd0;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar7;
    _objc_copyWeak(auStack_70,auStack_68);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_generateImageWithPrompt_provider_0269d490,IVar4,puVar2,puVar1,&local_98)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPresetTestRequest__026b5578);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_destroyWeak(auStack_70);
    _objc_storeStrong(&local_78);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQc_y);
  }
  local_3c = (uint)(IVar3 == 0);
  _objc_storeStrong(&local_38,0);
  return;
}

