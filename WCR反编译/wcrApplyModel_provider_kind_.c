// wcrApplyModel:provider:kind: @ 017da214

/* Function Stack Size: 0x28 bytes */

void WCRefineAISettingsViewController::wcrApplyModel_provider_kind_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  cfstringStruct *local_68;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  puVar2 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if ((uVar3 & 1) == 0) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_video);
    local_68 = &cf_videoModel;
    if ((uVar3 & 1) == 0) {
      local_68 = &cf_chatModel;
    }
  }
  else {
    local_68 = &cf_imageModel;
  }
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = local_28;
  puVar2 = local_40;
  local_48 = local_68;
  uVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setValue_forField_providerID__026b5368,uVar5,local_68);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if ((uVar3 & 1) == 0) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_video);
    if ((uVar3 & 1) == 0) {
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_providerID_0269d480);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCurrentChatProviderID__026b5318);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    else {
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_providerID_0269d480);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCurrentVideoProviderID__026b5328);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
  }
  else {
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_providerID_0269d480);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCurrentImageProviderID__026b5320);
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  uVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingProviderID__026b5218);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  puVar2 = local_40;
  uVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_apiKeyForProviderID_kind__0269d488,uVar5,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  puVar6 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  puVar1 = local_40;
  puVar2 = local_50;
  if (puVar6 != (undefined *)0x0) {
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_providerID_0269d480);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setAPIKey_providerID_kind__026b5370,puVar2,uVar5,local_38);
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

