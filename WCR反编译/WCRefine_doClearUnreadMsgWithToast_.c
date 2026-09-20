// WCRefine_doClearUnreadMsgWithToast: @ 0016d3ec

/* Function Stack Size: 0x18 bytes */

void WCRefineClearUnreadMsgHook::WCRefine_doClearUnreadMsgWithToast_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  ulong uVar7;
  char *local_1e0;
  char *local_1d8;
  undefined *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  byte local_109;
  char *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  cfstringStruct *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  undefined4 local_cc;
  char *local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_s_getService__0269d170;
  local_c8 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_WCRefine_showClearUnreadDoneToas_0269f8b0,local_c0,0);
    local_cc = 1;
  }
  else {
    pcVar2 = "CMessageMgr";
    _objc_getClass("CMessageMgr");
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_performSelector_withObject__026ca7c0,puVar4,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_c8;
    puVar4 = PTR_s_getService__0269d170;
    pcVar2 = "MMNewSessionMgr";
    local_d8 = pcVar1;
    _objc_getClass("MMNewSessionMgr");
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_performSelector_withObject__026ca7c0,puVar4,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = pcVar3;
    if ((local_d8 == (char *)0x0) || (pcVar3 == (char *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_WCRefine_showClearUnreadDoneToas_0269f8b0,local_c0,0);
      local_cc = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_performSelector__026ca7b8,PTR_s_GetUserNamesOnSessionList_0269f7e8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_e8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      pcVar1 = local_e8;
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_WCRefine_showClearUnreadDoneToas_0269f8b0,local_c0,0);
        local_cc = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_f0 = pcVar1;
        pcVar5 = &cf_ClearUnRead_FromID_ToID_;
        _NSSelectorFromString();
        local_fc = 0;
        local_100 = 0xffffffff;
        pcVar1 = local_d8;
        local_f8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_methodSignatureForSelector__0269e190,pcVar5);
        _objc_retainAutoreleasedReturnValue();
        local_109 = false;
        local_108 = pcVar1;
        if (pcVar1 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_numberOfArguments_0269f8b8);
          local_109 = "\f" < pcVar1;
        }
        _memset(auStack_158,0,0x40);
        pcVar1 = local_f0;
        (*(code *)PTR__objc_retain_02578638)();
        local_1d8 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                   0x10);
        if (local_1d8 != (char *)0x0) {
          lVar6 = *local_148;
          local_1e0 = (char *)0x0;
          do {
            do {
              if (*local_148 - lVar6 != 0) {
                _objc_enumerationMutation(*local_148 - lVar6,pcVar1);
              }
              uVar7 = *(ulong *)(local_150 + (long)local_1e0 * 8);
              local_118 = uVar7;
              if ((local_109 & 1) != 0) {
                puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
                if (((uVar7 & 1) != 0) &&
                   (uVar7 = local_118,
                   (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0),
                   uVar7 != 0)) {
                  puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSInvocation_026ce208,
                             PTR_s_invocationWithMethodSignature__0269e1a0,local_108);
                  _objc_retainAutoreleasedReturnValue();
                  local_160 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_d8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_160,PTR_s_setSelector__0269e1b0,local_f8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_160,PTR_s_setArgument_atIndex__0269eae8,&local_118,2);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_160,PTR_s_setArgument_atIndex__0269eae8,&local_fc,3);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_160,PTR_s_setArgument_atIndex__0269eae8,&local_100,4);
                  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_invoke_0269e1b8);
                  _objc_storeStrong(&local_160,0);
                }
              }
              local_1e0 = local_1e0 + 1;
            } while (local_1e0 < local_1d8);
            local_1d8 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8
                       ,0x10);
            local_1e0 = (char *)0x0;
          } while (local_1d8 != (char *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_recountUnReadCount_0269f8c0);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_performSelector__026ca7b8,PTR_s_recountUnReadCount_0269f8c0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_WCRefine_showClearUnreadDoneToas_0269f8b0,local_c0,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
        _objc_storeStrong(&local_108);
        _objc_storeStrong(&local_f0,0);
        local_cc = 0;
      }
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

