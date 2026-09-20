// previewAtMentionNotificationSession: @ 018a8398

/* Function Stack Size: 0x18 bytes */

void WCRefineChatRoomFunctionViewController::previewAtMentionNotificationSession_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  ID IVar7;
  uint local_e4;
  ID local_80;
  char *local_70;
  char *local_68;
  char *local_60 [3];
  char *local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    _objc_storeStrong(&local_40,&cf_filehelper);
  }
  pcVar4 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = "CContactMgr";
  local_48 = pcVar4;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getService__0269d170,pcVar5);
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getContactByName__0269d178,local_40);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = local_48;
  pcVar5 = "MMMsgLogicManager";
  local_68 = pcVar4;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_getService__0269d170,pcVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
  bVar1 = false;
  local_e4 = 1;
  local_70 = pcVar6;
  if ((local_68 != (char *)0x0) && (local_e4 = 1, pcVar6 != (char *)0x0)) {
    local_80 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_e4 = 1;
    if (local_80 != 0) {
      pcVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,puVar2);
      local_e4 = (uint)pcVar4 ^ 1;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  pcVar5 = local_68;
  pcVar4 = local_70;
  if ((local_e4 & 1) == 0) {
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar2,pcVar5,IVar7,1);
    (*(code *)PTR__objc_release_02578630)(IVar7);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0RwJ_Y);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

