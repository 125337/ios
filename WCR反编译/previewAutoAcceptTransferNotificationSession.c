// previewAutoAcceptTransferNotificationSession @ 01a635f4

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::previewAutoAcceptTransferNotificationSession
               (ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  uint local_84;
  cfstringStruct *local_78;
  ID local_60;
  cfstringStruct *local_50;
  uint local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_78 = &cf_filehelper;
  }
  else {
    local_78 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  pcVar3 = &cf_CContactMgr;
  FUN_01a6397c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = (cfstringStruct *)0x0;
  local_38 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getContactByName__0269d178,local_30);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_40;
    local_40 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  if (local_40 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_b0RwO);
    local_44 = 1;
  }
  else {
    pcVar3 = &cf_MMMsgLogicManager;
    FUN_01a6397c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
    bVar1 = false;
    local_84 = 1;
    local_50 = pcVar3;
    if (pcVar3 != (cfstringStruct *)0x0) {
      local_60 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_84 = 1;
      if (local_60 != 0) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,puVar2);
        local_84 = (uint)pcVar3 ^ 1;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    pcVar4 = local_40;
    pcVar3 = local_50;
    bVar1 = (local_84 & 1) == 0;
    if (bVar1) {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,pcVar4,IVar5,1);
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    }
    local_44 = (uint)!bVar1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

