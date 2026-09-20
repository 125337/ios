// preselectChatSinkSessions:inSessionSelectController: @ 01b4c018

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineLayoutFunctionViewController::preselectChatSinkSessions_inSessionSelectController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong local_198;
  ulong local_190;
  undefined4 local_15c;
  undefined8 local_158;
  undefined *local_150;
  ulong local_148;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  ulong local_f0;
  undefined *local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_cc;
  ulong local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if ((uVar1 == 0) || (local_c8 == 0)) {
    local_cc = 1;
  }
  else {
    uVar1 = local_c8;
    FUN_01b4c54c(local_c8,&cf_m_selectView);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    if (uVar1 == 0) {
      local_cc = 1;
    }
    else {
      FUN_01b4c694();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = uVar1;
      if ((uVar1 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
         (uVar1 & 1) == 0)) {
        local_cc = 1;
      }
      else {
        local_e8 = PTR_s_switchSelect_atIndexPath_source__026af708;
        uVar1 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_respondsToSelector__026ca818,
                   PTR_s_switchSelect_atIndexPath_source__026af708);
        if ((uVar1 & 1) == 0) {
          local_cc = 1;
        }
        else {
          uVar1 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_methodSignatureForSelector__0269e190,local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = uVar1;
          if (uVar1 == 0) {
            local_cc = 1;
          }
          else {
            _memset(auStack_138,0,0x40);
            uVar1 = local_c0;
            (*(code *)PTR__objc_retain_02578638)();
            local_190 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                       0x10);
            if (local_190 != 0) {
              lVar4 = *local_128;
              local_198 = 0;
              do {
                do {
                  if (*local_128 - lVar4 != 0) {
                    _objc_enumerationMutation(*local_128 - lVar4,uVar1);
                  }
                  lVar5 = *(long *)(local_130 + local_198 * 8);
                  local_f8 = lVar5;
                  FUN_01b4bb24();
                  _objc_retainAutoreleasedReturnValue();
                  local_140 = lVar5;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
                  if (lVar5 == 0) {
                    local_cc = 3;
                  }
                  else {
                    uVar2 = local_e0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e0,PTR_s_getContactByName__0269d178,local_140);
                    _objc_retainAutoreleasedReturnValue();
                    local_148 = uVar2;
                    if (uVar2 == 0) {
                      local_cc = 3;
                    }
                    else {
                      puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                                 PTR_s_invocationWithMethodSignature__0269e1a0,local_f0);
                      _objc_retainAutoreleasedReturnValue();
                      local_150 = puVar3;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar3,PTR_s_setTarget__0269e1a8,local_d8);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_150,PTR_s_setSelector__0269e1b0,local_e8);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_150,PTR_s_setArgument_atIndex__0269eae8,&local_148,2);
                      local_158 = 0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_150,PTR_s_setArgument_atIndex__0269eae8,&local_158,3);
                      local_15c = 1;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_150,PTR_s_setArgument_atIndex__0269eae8,&local_15c,4);
                      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_invoke_0269e1b8);
                      _objc_storeStrong(&local_158,0);
                      _objc_storeStrong(&local_150,0);
                      local_cc = 0;
                    }
                    _objc_storeStrong(&local_148,0);
                  }
                  _objc_storeStrong(&local_140,0);
                  local_198 = local_198 + 1;
                } while (local_198 < local_190);
                local_190 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,
                           auStack_a8,0x10);
                local_198 = 0;
              } while (local_190 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar1);
            local_cc = 0;
          }
          _objc_storeStrong(&local_f0,0);
        }
      }
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

