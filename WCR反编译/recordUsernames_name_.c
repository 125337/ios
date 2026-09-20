// recordUsernames:name: @ 00f648b4

/* Function Stack Size: 0x20 bytes */

void WCRefineForwardTargetHistory::recordUsernames_name_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_1c8;
  ulong local_178;
  ulong local_170;
  undefined *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  long local_f8;
  ulong local_f0;
  ulong local_e8;
  long local_e0;
  undefined4 local_d4;
  long local_d0;
  ulong local_c8;
  long local_c0;
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
  lVar6 = local_c0;
  FUN_00f64f08();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_count_0269cfe0);
  if (lVar6 == 0) {
    local_d4 = 1;
  }
  else {
    lVar6 = local_d0;
    FUN_00f651a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_c8;
    local_e0 = lVar6;
    FUN_00f646e4();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar1;
    FUN_00f64200();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = 0;
    local_f0 = uVar1;
    _memset(auStack_140,0,0x40);
    uVar1 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar6 = *local_130;
      local_178 = 0;
      do {
        do {
          if (*local_130 - lVar6 != 0) {
            _objc_enumerationMutation(*local_130 - lVar6,uVar1);
          }
          uVar7 = *(ulong *)(local_138 + local_178 * 8);
          local_100 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_usernames_026ac868);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar7;
          FUN_00f651a0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if ((uVar3 & 1) != 0) {
            _objc_storeStrong(&local_f8,local_100);
            local_d4 = 2;
            goto LAB_00f64b3c;
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    local_d4 = 0;
LAB_00f64b3c:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_f8 == 0) {
      puVar4 = PTR_WCRefineForwardTargetHistoryItem_026cebb0;
      _objc_alloc_init();
      puVar5 = PTR__OBJC_CLASS___NSUUID_026ce668;
      local_148 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setItemId__026a17c0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setUsernames__026ac870,local_d0);
      uVar1 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
        local_1c8 = 0;
      }
      else {
        local_1c8 = local_e8;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setCustomName__026ac890,local_1c8);
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setLastUsedAt__026ac878);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setUseCount__026ac888,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,PTR_s_insertObject_atIndex__0269eac0,local_148,0);
      _objc_storeStrong(&local_148,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_removeObject__0269d678,local_f8);
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setUsernames__026ac870,local_d0);
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setLastUsedAt__026ac878);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      lVar6 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_useCount_026ac880);
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setUseCount__026ac888,lVar6 + 1);
      uVar1 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setCustomName__026ac890,local_e8);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,PTR_s_insertObject_atIndex__0269eac0,local_f8,0);
    }
    FUN_00f65254(local_f0);
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

