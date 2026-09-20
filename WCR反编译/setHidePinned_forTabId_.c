// setHidePinned:forTabId: @ 0151d720

/* Function Stack Size: 0x1c bytes */

void WCRefineTelegramGroupingStore::setHidePinned_forTabId_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  byte local_d5;
  undefined4 local_d4;
  ID local_d0;
  undefined8 local_c8;
  byte local_b9;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b9 = (byte)param_3;
  local_c8 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c8,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_ensureTabsLoaded_026b01d8);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tabForId__026a8278,local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = IVar1;
  if (IVar1 == 0) {
    local_d4 = 1;
  }
  else {
    local_d5 = 0;
    _memset(auStack_120,0,0x40);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cachedTabs_026b0180);
    _objc_retainAutoreleasedReturnValue();
    local_140 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar2 = *local_110;
      local_148 = 0;
      do {
        do {
          if (*local_110 - lVar2 != 0) {
            _objc_enumerationMutation(*local_110 - lVar2,IVar1);
          }
          uVar3 = *(undefined8 *)(local_118 + local_148 * 8);
          local_e0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hidePinned_026a30d0);
          if ((uint)uVar3 != (local_b9 & 1)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_setHidePinned__026b0120,local_b9 & 1);
            local_d5 = 1;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((local_d5 & 1) == 0) {
      local_d4 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_persistTabsWithReason_persistSel_026b0228,&cf_tabs,0);
      local_d4 = 0;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

