// FUN_01806ba0 @ 01806ba0

void FUN_01806ba0(long param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong local_160;
  ulong local_158;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  cfstringStruct *local_d8;
  uint local_cc;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  lVar3 = param_1 + 0x20;
  local_c0 = param_1;
  _objc_loadWeakRetained();
  local_c8 = lVar3;
  if (lVar3 == 0) {
    local_cc = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = &cf___;
    _memset(auStack_120,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar3 = *local_110;
      local_160 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_118 + local_160 * 8);
          local_e0 = uVar4;
          FUN_01804f2c();
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasSuffix__0269d018,&cf__chatroom);
          if ((uVar4 & 1) == 0) {
            local_cc = 0;
          }
          else {
            _objc_storeStrong(&local_d8,local_128);
            local_cc = 2;
          }
          _objc_storeStrong(&local_128,0);
          if (local_cc != 0) goto LAB_01806db8;
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    local_cc = 0;
LAB_01806db8:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    pcVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setInviteChatRoom__026b5bf0,local_d8);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_reloadTableData_0269dca8);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_b_J);
    }
    local_cc = (uint)(pcVar2 == (cfstringStruct *)0x0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (local_cc == 0) {
    local_cc = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

