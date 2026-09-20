// FUN_018b58c4 @ 018b58c4

void FUN_018b58c4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  _memset(auStack_100,0,0x40);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_128 != 0) {
    lVar2 = *local_f0;
    local_130 = 0;
    do {
      do {
        if (*local_f0 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar2,uVar1);
        }
        local_c0 = *(undefined8 *)(local_f8 + local_130 * 8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_resetAutoKickHitsForRoom__026b7b08,
                   local_c0);
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
      local_128 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_130 = 0;
    } while (local_128 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__nzzc___kpe);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

