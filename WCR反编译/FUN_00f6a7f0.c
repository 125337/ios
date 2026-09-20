// FUN_00f6a7f0 @ 00f6a7f0

void FUN_00f6a7f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong local_160;
  ulong local_158;
  ulong local_140;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  undefined *local_d8;
  int local_cc;
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
  lVar2 = param_1 + 0x20;
  local_c0 = param_1;
  _objc_loadWeakRetained();
  local_c8 = lVar2;
  if (lVar2 == 0) {
    local_cc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    _memset(auStack_120,0,0x40);
    if (local_b8 == 0) {
      local_140 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_140 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
              );
    if (local_158 != 0) {
      lVar2 = *local_110;
      local_160 = 0;
      do {
        do {
          if (*local_110 - lVar2 != 0) {
            _objc_enumerationMutation(*local_110 - lVar2,local_140);
          }
          lVar3 = *(long *)(local_118 + local_160 * 8);
          local_e0 = lVar3;
          FUN_00f694c4();
          _objc_retainAutoreleasedReturnValue();
          local_128 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
          if (lVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_128);
          }
          _objc_storeStrong(&local_128,0);
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_140);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setPickedUsernames__026ac958,local_d8);
    lVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_refreshConfirmState_026ac900);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (local_cc == 0) {
    local_cc = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

