// FUN_003532c4 @ 003532c4

void FUN_003532c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *local_148;
  char *local_138;
  char *local_118;
  char *local_108;
  char *local_f8;
  long local_e0;
  byte local_d1;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  byte local_b1;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  undefined *local_98;
  byte local_89;
  char *local_88;
  char *local_80;
  byte local_71;
  char *local_70;
  char *local_68;
  byte local_59;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  int local_34;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_30 == 0)) {
    local_34 = 1;
    goto LAB_0035398c;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = "MMServiceCenter";
  _objc_getClass();
  pcVar3 = "CContactMgr";
  local_40 = pcVar2;
  _objc_getClass();
  local_59 = 0;
  local_48 = pcVar3;
  if ((local_40 == (char *)0x0) ||
     (pcVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar2 & 1) == 0)) {
    local_f8 = (char *)0x0;
  }
  else {
    local_f8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_f8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_f8;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  local_71 = 0;
  if ((local_50 == (char *)0x0) || (local_48 == (char *)0x0)) {
    local_108 = (char *)0x0;
  }
  else {
    local_108 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = local_108;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_108;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  local_89 = 0;
  if ((local_68 == (char *)0x0) ||
     (pcVar2 = local_68,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar2 & 1) == 0)) {
    local_118 = (char *)0x0;
  }
  else {
    local_118 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getContactByName__0269d178,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = local_118;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_118;
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if (local_80 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__bN0RT_N);
    local_34 = 1;
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = puVar5 + -1;
    local_98 = puVar5;
    if (puVar4 == (undefined *)0x0) {
      pcVar2 = "QuickReplyMsgMgr";
      _objc_getClass(0);
      local_b1 = 0;
      local_a0 = pcVar2;
      if ((local_50 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
        local_138 = (char *)0x0;
      }
      else {
        local_138 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        local_b1 = 1;
        local_b0 = local_138;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = local_138;
      if ((local_b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      if ((local_a8 == (char *)0x0) ||
         (pcVar2 = local_a8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_a8,PTR_s_respondsToSelector__026ca818,
                    PTR_s_showPageSheetSession_fromViewCon_026a2508), ((ulong)pcVar2 & 1) == 0)) {
        local_34 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_showPageSheetSession_fromViewCon_026a2508,local_80,local_30);
        local_34 = 1;
      }
      _objc_storeStrong(&local_a8,0);
      if (local_34 != 0) goto LAB_00353960;
      puVar4 = (undefined *)0x0;
    }
    pcVar2 = "MMMsgLogicManager";
    _objc_getClass(puVar4);
    local_d1 = 0;
    local_c0 = pcVar2;
    if ((local_50 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
      local_148 = (char *)0x0;
    }
    else {
      local_148 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = local_148;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_148;
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = lVar1;
    if (((local_c8 == (char *)0x0) || (lVar1 == 0)) ||
       (pcVar2 = local_c8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_c8,PTR_s_respondsToSelector__026ca818,
                  PTR_s_PushOtherBaseMsgControllerByCont_0269d640), ((ulong)pcVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
      local_34 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_PushOtherBaseMsgControllerByCont_0269d640,local_80,local_e0,1);
      local_34 = 1;
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_c8,0);
  }
LAB_00353960:
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
LAB_0035398c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

