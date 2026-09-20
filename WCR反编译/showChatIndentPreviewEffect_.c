// showChatIndentPreviewEffect: @ 01b4874c

/* Function Stack Size: 0x18 bytes */

void WCRefineLayoutFunctionViewController::showChatIndentPreviewEffect_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  ID IVar6;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88 [3];
  char *local_70;
  char *local_68;
  char *local_60;
  uint local_54;
  char *local_50;
  char *local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
  local_40 = (undefined *)0x0;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_40 == (undefined *)0x0) ||
       (puVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       puVar1 == (undefined *)0x0)) {
      pcVar4 = "WCUIAlertView";
      _objc_getClass();
      local_60 = pcVar4;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_nx_,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
      local_54 = 1;
      _objc_storeStrong(&local_68,0);
      goto LAB_01b48ce4;
    }
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_40;
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_40 == (undefined *)0x0) ||
       (puVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       puVar1 == (undefined *)0x0)) {
      pcVar4 = "WCUIAlertView";
      _objc_getClass();
      local_48 = pcVar4;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_nx_,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
      local_54 = 1;
      _objc_storeStrong(&local_50,0);
      goto LAB_01b48ce4;
    }
  }
  pcVar4 = "MMServiceCenter";
  _objc_getClass();
  local_70 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_88[0] = pcVar4;
  if (pcVar4 == (char *)0x0) {
    local_54 = 1;
  }
  else {
    pcVar4 = "CContactMgr";
    _objc_getClass();
    pcVar5 = local_88[0];
    local_90 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88[0],PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
               pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getContactByName__0269d178,
                 local_40);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        local_54 = 1;
      }
      else {
        pcVar4 = "MMMsgLogicManager";
        _objc_getClass();
        pcVar5 = local_88[0];
        local_a8 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88[0],PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170
                   ,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_a0;
        puVar1 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
        local_b0 = pcVar5;
        if (pcVar5 != (char *)0x0) {
          IVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar1,pcVar4,IVar6,1);
          (*(code *)PTR__objc_release_02578630)(IVar6);
        }
        local_54 = (uint)(pcVar5 == (char *)0x0);
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_a0,0);
    }
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(local_88,0);
  if (local_54 == 0) {
    local_54 = 0;
  }
LAB_01b48ce4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

