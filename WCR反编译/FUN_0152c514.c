// FUN_0152c514 @ 0152c514

void FUN_0152c514(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_150;
  undefined *local_148;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c4;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = param_1 + 0x28;
  local_b8 = param_1;
  local_b0 = param_1;
  _objc_loadWeakRetained();
  local_c0 = uVar1;
  if (uVar1 == 0) {
    local_c4 = 1;
  }
  else {
    puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,
               PTR_s_membersInvitedByCurrentUserInclu_026b03c0,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar3;
    _memset(auStack_120,0,0x40);
    puVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_148 != (undefined *)0x0) {
      lVar5 = *local_110;
      local_150 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,puVar2);
          }
          local_e0 = *(undefined8 *)(local_118 + (long)local_150 * 8);
          uVar1 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removedUserNames_026b03c8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar1);
          if ((uVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_150 = (undefined *)0x0;
      } while (local_148 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_groupContact_026b03d0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    FUN_0152c8e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setEntries__026a2ba8);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setHistoryReloadFinished__026b03d8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_wcr_reloadTitle_026b0388);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_wcr_updateEmptyState_026b0390);
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

