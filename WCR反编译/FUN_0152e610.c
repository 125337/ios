// FUN_0152e610 @ 0152e610

void FUN_0152e610(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_160;
  ulong local_158;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  undefined1 local_b9;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_removeInvitedMember_fromRoom_rea_026ab710
             ,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),&cf_DeaSRh);
  local_b9 = SUB81(puVar1,0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_yQ1Y_);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__yQ);
    uVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    local_c8 = uVar2;
    if (uVar2 == 0) {
      local_cc = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_removedUserNames_026b03c8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar1;
      _memset(auStack_120,0,0x40);
      uVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_entries_026a25d0);
      _objc_retainAutoreleasedReturnValue();
      local_158 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_158 != 0) {
        lVar5 = *local_110;
        local_160 = 0;
        do {
          do {
            if (*local_110 - lVar5 != 0) {
              _objc_enumerationMutation(*local_110 - lVar5,uVar2);
            }
            uVar6 = *(ulong *)(local_118 + local_160 * 8);
            local_e0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_memberUserName);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            FUN_01528c84();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar3);
            (*(code *)PTR__objc_release_02578630)(uVar6);
            if ((uVar4 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
            }
            local_160 = local_160 + 1;
          } while (local_160 < local_158);
          local_158 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_160 = 0;
        } while (local_158 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setEntries__026a2ba8);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_wcr_reloadTitle_026b0388);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_wcr_updateEmptyState_026b0390);
      uVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_groupContact_026b03d0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_0152eb20();
      _objc_retainAutoreleasedReturnValue();
      local_128 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        FUN_0152ecd8(uVar2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      _objc_storeStrong(&local_128);
      _objc_storeStrong(&local_d8,0);
      local_cc = 0;
    }
    _objc_storeStrong(&local_c8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

