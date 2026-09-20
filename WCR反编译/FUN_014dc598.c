// FUN_014dc598 @ 014dc598

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014dc598(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong local_190;
  ulong local_188;
  undefined4 local_14c;
  undefined8 local_148;
  undefined *local_140;
  ulong local_138;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  ulong local_e0;
  undefined *local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined4 local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
  if ((uVar1 == 0) || (local_b8 == 0)) {
    local_bc = 1;
  }
  else {
    uVar1 = local_b8;
    FUN_014dcac4(local_b8,&cf_m_selectView);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = uVar1;
    if (uVar1 == 0) {
      local_bc = 1;
    }
    else {
      FUN_014dcc0c();
      _objc_retainAutoreleasedReturnValue();
      local_d0 = uVar1;
      if ((uVar1 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
         (uVar1 & 1) == 0)) {
        local_bc = 1;
      }
      else {
        local_d8 = PTR_s_switchSelect_atIndexPath_source__026af708;
        uVar1 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_respondsToSelector__026ca818,
                   PTR_s_switchSelect_atIndexPath_source__026af708);
        if ((uVar1 & 1) == 0) {
          local_bc = 1;
        }
        else {
          uVar1 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_methodSignatureForSelector__0269e190,local_d8);
          _objc_retainAutoreleasedReturnValue();
          local_e0 = uVar1;
          if (uVar1 == 0) {
            local_bc = 1;
          }
          else {
            _memset(auStack_128,0,0x40);
            uVar1 = local_b0;
            (*(code *)PTR__objc_retain_02578638)();
            local_188 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                       0x10);
            if (local_188 != 0) {
              lVar4 = *local_118;
              local_190 = 0;
              do {
                do {
                  if (*local_118 - lVar4 != 0) {
                    _objc_enumerationMutation(*local_118 - lVar4,uVar1);
                  }
                  lVar5 = *(long *)(local_120 + local_190 * 8);
                  local_e8 = lVar5;
                  FUN_014dcdb0();
                  _objc_retainAutoreleasedReturnValue();
                  local_130 = lVar5;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
                  if (lVar5 == 0) {
                    local_bc = 3;
                  }
                  else {
                    uVar2 = local_d0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_d0,PTR_s_getContactByName__0269d178,local_130);
                    _objc_retainAutoreleasedReturnValue();
                    local_138 = uVar2;
                    if (uVar2 == 0) {
                      local_bc = 3;
                    }
                    else {
                      puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                                 PTR_s_invocationWithMethodSignature__0269e1a0,local_e0);
                      _objc_retainAutoreleasedReturnValue();
                      local_140 = puVar3;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar3,PTR_s_setTarget__0269e1a8,local_c8);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_140,PTR_s_setSelector__0269e1b0,local_d8);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_140,PTR_s_setArgument_atIndex__0269eae8,&local_138,2);
                      local_148 = 0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_140,PTR_s_setArgument_atIndex__0269eae8,&local_148,3);
                      local_14c = 0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_140,PTR_s_setArgument_atIndex__0269eae8,&local_14c,4);
                      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_invoke_0269e1b8);
                      _objc_storeStrong(&local_148,0);
                      _objc_storeStrong(&local_140,0);
                      local_bc = 0;
                    }
                    _objc_storeStrong(&local_138,0);
                  }
                  _objc_storeStrong(&local_130,0);
                  local_190 = local_190 + 1;
                } while (local_190 < local_188);
                local_188 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,
                           auStack_a8,0x10);
                local_190 = 0;
              } while (local_188 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar1);
            local_bc = 0;
          }
          _objc_storeStrong(&local_e0,0);
        }
      }
      _objc_storeStrong(&local_d0,0);
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

