// openOfficialTargetChatForSchedule @ 01ec81c4

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListSettingsViewController::openOfficialTargetChatForSchedule
               (ID param_1,SEL param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ID IVar5;
  char *pcVar6;
  ID IVar7;
  uint local_c4;
  char *local_b8;
  cfstringStruct *local_a0;
  char *local_88;
  byte local_79;
  ID local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  byte local_51;
  char *local_50;
  char *local_48;
  char *local_40;
  ID local_38;
  int local_2c;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = local_a0;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQkXQ_J);
    local_2c = 1;
    goto LAB_01ec87ac;
  }
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_officialContactForUserName__026c7b08,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar5;
  if (IVar5 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__bN0Rub);
    local_2c = 1;
  }
  else {
    pcVar6 = "MMServiceCenter";
    _objc_getClass();
    local_51 = 0;
    local_40 = pcVar6;
    if ((pcVar6 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar6 & 1) == 0)) {
      local_b8 = (char *)0x0;
    }
    else {
      local_b8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_b8;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    pcVar6 = "QuickReplyMsgMgr";
    _objc_getClass();
    local_60 = pcVar6;
    if (((local_48 == (char *)0x0) || (pcVar6 == (char *)0x0)) ||
       (pcVar6 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar6 & 1) == 0)) {
LAB_01ec8574:
      pcVar6 = "MMMsgLogicManager";
      _objc_getClass();
      local_79 = 0;
      local_c4 = 0;
      local_70 = pcVar6;
      if ((local_48 != (char *)0x0) && (local_c4 = 0, pcVar6 != (char *)0x0)) {
        IVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_c4 = 0;
        local_78 = IVar5;
        if (IVar5 != 0) {
          pcVar6 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
          local_c4 = (uint)pcVar6;
        }
      }
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if ((local_c4 & 1) != 0) {
        pcVar6 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getService__0269d170,local_70);
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar6;
        if ((pcVar6 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_respondsToSelector__026ca818,
                       PTR_s_PushOtherBaseMsgControllerByCont_0269d640), IVar5 = local_38,
           pcVar1 = local_88, puVar4 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640,
           ((ulong)pcVar6 & 1) == 0)) {
          local_2c = 0;
        }
        else {
          IVar7 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar4,IVar5,IVar7,1);
          (*(code *)PTR__objc_release_02578630)(IVar7);
          local_2c = 1;
        }
        _objc_storeStrong(&local_88,0);
        if (local_2c != 0) goto LAB_01ec878c;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_2c = 0;
    }
    else {
      pcVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getService__0269d170,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar6;
      if ((pcVar6 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_respondsToSelector__026ca818,
                     PTR_s_showPageSheetSession_fromViewCon_026a2508), ((ulong)pcVar6 & 1) == 0)) {
        local_2c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_showPageSheetSession_fromViewCon_026a2508,local_38,local_18);
        local_2c = 1;
      }
      _objc_storeStrong(&local_68,0);
      if (local_2c == 0) goto LAB_01ec8574;
    }
LAB_01ec878c:
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
LAB_01ec87ac:
  _objc_storeStrong(&local_28,0);
  return;
}

