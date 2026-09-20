// locateCompletedOfficialItem: @ 01ea35bc

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHistoryViewController::locateCompletedOfficialItem_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *local_130;
  char *local_110;
  cfstringStruct *local_c8;
  undefined *local_b8;
  undefined *local_b0;
  char *local_a8;
  bool local_99;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  undefined4 local_64;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  undefined *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_49 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_c8 = &::cf___;
  }
  else {
    local_c8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_c8;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_c8;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  local_58 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_40;
  local_60 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     ((pcVar2 = local_58, (long)local_58 < 1 && (pcVar2 = local_60, (long)local_60 < 1)))) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_age_RlgOX_Smo_el_MO);
    local_64 = 1;
  }
  else {
    pcVar5 = "MMServiceCenter";
    _objc_getClass(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = "CMessageMgr";
    local_70 = pcVar5;
    _objc_getClass("CMessageMgr");
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_getService__0269d170,pcVar6);
    _objc_retainAutoreleasedReturnValue();
    local_80 = (char *)0x0;
    local_78 = pcVar5;
    if ((0 < (long)local_58) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
       ((ulong)pcVar5 & 1) != 0)) {
      pcVar6 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_GetMsg_LocalID__0269d5e8,local_40,local_58);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_80;
      local_80 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    if (((local_80 == (char *)0x0) && (0 < (long)local_60)) &&
       (pcVar5 = local_78,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_n64SvrID__0269d5f0),
       ((ulong)pcVar5 & 1) != 0)) {
      pcVar6 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_GetMsg_n64SvrID__0269d5f0,local_40,local_60);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_80;
      local_80 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    pcVar5 = local_70;
    if (local_80 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__bN0RS_Rmo_S_KbRRd)
      ;
      local_64 = 1;
    }
    else {
      pcVar6 = "CContactMgr";
      _objc_getClass("CContactMgr");
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_getService__0269d170,pcVar6);
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
      local_99 = false;
      bVar1 = ((ulong)pcVar5 & 1) == 0;
      if (bVar1) {
        local_110 = (char *)0x0;
      }
      else {
        local_110 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_getContactByName__0269d178,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_110;
      }
      local_99 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_110;
      if ((local_99 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      pcVar6 = local_70;
      pcVar5 = "QuickReplyMsgMgr";
      _objc_getClass("QuickReplyMsgMgr");
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_getService__0269d170,pcVar5);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = PTR_s_showPageSheetSession_fromViewCon_026a2508;
      puVar3 = PTR_WCRefineHelper_026ce000;
      local_a8 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_130 = local_28;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = local_130;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (((local_90 == (char *)0x0) || (local_a8 == (char *)0x0)) ||
         (pcVar5 = local_a8,
         (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_respondsToSelector__026ca818,local_b0)
         , ((ulong)pcVar5 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRelJSO_Sb);
        local_64 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,local_b0,local_90,local_b8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_attemptLocateMessage_session_rem_026c7488,local_80,local_40,0x19);
        local_64 = 0;
      }
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

