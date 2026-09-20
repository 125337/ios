// FUN_0036820c @ 0036820c

void FUN_0036820c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long local_210;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1c8;
  long local_158;
  long local_148;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  pcVar2 = "CMessageMgr";
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "MMNewSessionMgr";
  local_c0 = pcVar2;
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "ChatBoxMgr";
  local_c8 = pcVar3;
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_ClearUnRead_FromID_ToID_;
  local_d0 = pcVar2;
  _NSSelectorFromString();
  pcVar5 = &cf_ChangeSessionUnReadCount_to_;
  local_d8 = pcVar4;
  _NSSelectorFromString();
  pcVar4 = &cf_clearAtMeCount_;
  local_e0 = pcVar5;
  _NSSelectorFromString();
  pcVar5 = &cf_onNewSyncClearUnread_;
  local_e8 = pcVar4;
  _NSSelectorFromString();
  local_f0 = pcVar5;
  _memset(auStack_138,0,0x40);
  if (local_b8 == 0) {
    local_1c8 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_1c8 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1e0 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1c8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_1e0 != 0) {
    lVar8 = *local_128;
    local_1e8 = 0;
    do {
      do {
        if (*local_128 - lVar8 != 0) {
          _objc_enumerationMutation(*local_128 - lVar8,local_1c8);
        }
        lVar9 = *(long *)(local_130 + local_1e8 * 8);
        local_f8 = lVar9;
        (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        local_210 = lVar9;
        if (lVar9 == 0) {
          local_148 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_session_0269d000);
          _objc_retainAutoreleasedReturnValue();
          local_158 = local_148;
          FUN_00366324();
          _objc_retainAutoreleasedReturnValue();
          local_210 = local_158;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_140 = local_210;
        if (lVar9 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_158);
          (*(code *)PTR__objc_release_02578630)(local_148);
        }
        (*(code *)PTR__objc_release_02578630)(lVar9);
        lVar9 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
        if ((lVar9 != 0) &&
           (pcVar2 = local_c0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c0,PTR_s_respondsToSelector__026ca818,local_d8),
           ((ulong)pcVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,local_d8,local_140,0,0xffffffff);
        }
        lVar9 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
        if ((lVar9 != 0) &&
           (pcVar2 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c8,PTR_s_respondsToSelector__026ca818,local_e0),
           ((ulong)pcVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_e0,local_140,0);
        }
        lVar9 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
        if ((lVar9 != 0) &&
           (pcVar2 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c8,PTR_s_respondsToSelector__026ca818,local_e8),
           ((ulong)pcVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_e8,local_140);
        }
        lVar9 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
        if ((lVar9 != 0) &&
           (pcVar2 = local_d0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_d0,PTR_s_respondsToSelector__026ca818,local_f0),
           ((ulong)pcVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_f0,local_140);
        }
        lVar9 = local_140;
        lVar6 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_session_0269d000);
        _objc_retainAutoreleasedReturnValue();
        FUN_003668c8();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setSession__0269d2e0);
        (*(code *)PTR__objc_release_02578630)(lVar9);
        (*(code *)PTR__objc_release_02578630)(lVar6);
        lVar9 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_session_0269d000);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
        _objc_retainAutoreleasedReturnValue();
        FUN_00367110(lVar9,&cf_m_uUnReadCount);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(lVar9);
        lVar9 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_session_0269d000);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_00367110(lVar9,&cf_m_bShowUnReadAsRedDot);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(lVar9);
        FUN_003694c4(local_f8);
        uVar1 = local_b0;
        lVar9 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_session_0269d000);
        _objc_retainAutoreleasedReturnValue();
        FUN_003b7208(uVar1,lVar9,local_140,&cf_markRead);
        (*(code *)PTR__objc_release_02578630)(lVar9);
        _objc_storeStrong(&local_140,0);
        local_1e8 = local_1e8 + 1;
      } while (local_1e8 < local_1e0);
      local_1e0 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                 0x10);
      local_1e8 = 0;
    } while (local_1e0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_1c8);
  pcVar4 = &cf_recountUnReadCountAndFireExtension;
  _NSSelectorFromString();
  pcVar5 = &cf_recountUnReadCount;
  _NSSelectorFromString();
  pcVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,pcVar4);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,pcVar5);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,pcVar5);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,pcVar4);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

