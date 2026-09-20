// preselectFriends:inSessionSelectController: @ 01de5808

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineSmallSignalSettingsViewController::preselectFriends_inSessionSelectController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_1a0;
  ulong local_198;
  undefined4 local_164;
  undefined8 local_160;
  undefined *local_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
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
    FUN_01de5db0(local_c8,&cf_m_selectView);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    if (uVar1 == 0) {
      local_cc = 1;
    }
    else {
      FUN_01de5ef8();
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
            local_198 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                       0x10);
            if (local_198 != 0) {
              lVar3 = *local_128;
              local_1a0 = 0;
              do {
                do {
                  if (*local_128 - lVar3 != 0) {
                    _objc_enumerationMutation(*local_128 - lVar3,uVar1);
                  }
                  uVar4 = *(ulong *)(local_130 + local_1a0 * 8);
                  local_f8 = uVar4;
                  FUN_01dde6c0();
                  _objc_retainAutoreleasedReturnValue();
                  local_140 = uVar4;
                  FUN_01de5318();
                  if ((uVar4 & 1) == 0) {
                    local_cc = 3;
                  }
                  else {
                    uVar4 = local_e0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e0,PTR_s_getContactByName__0269d178,local_140);
                    _objc_retainAutoreleasedReturnValue();
                    local_148 = uVar4;
                    if (uVar4 == 0) {
                      local_cc = 3;
                    }
                    else {
                      FUN_01de60ac();
                      _objc_retainAutoreleasedReturnValue();
                      local_150 = uVar4;
                      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
                      if ((uVar4 == 0) ||
                         (uVar4 = local_150,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_150,PTR_s_hasSuffix__0269d018,&cf__chatroom),
                         (uVar4 & 1) != 0)) {
                        local_cc = 3;
                      }
                      else {
                        puVar2 = PTR__OBJC_CLASS___NSInvocation_026ce208;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSInvocation_026ce208,
                                   PTR_s_invocationWithMethodSignature__0269e1a0,local_f0);
                        _objc_retainAutoreleasedReturnValue();
                        local_158 = puVar2;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar2,PTR_s_setTarget__0269e1a8,local_d8);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_158,PTR_s_setSelector__0269e1b0,local_e8);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_158,PTR_s_setArgument_atIndex__0269eae8,&local_148,2);
                        local_160 = 0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_158,PTR_s_setArgument_atIndex__0269eae8,&local_160,3);
                        local_164 = 1;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_158,PTR_s_setArgument_atIndex__0269eae8,&local_164,4);
                        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_invoke_0269e1b8);
                        _objc_storeStrong(&local_160,0);
                        _objc_storeStrong(&local_158,0);
                        local_cc = 0;
                      }
                      _objc_storeStrong(&local_150,0);
                    }
                    _objc_storeStrong(&local_148,0);
                  }
                  _objc_storeStrong(&local_140,0);
                  local_1a0 = local_1a0 + 1;
                } while (local_1a0 < local_198);
                local_198 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,
                           auStack_a8,0x10);
                local_1a0 = 0;
              } while (local_198 != 0);
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

