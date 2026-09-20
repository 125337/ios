// sessionBelongsToBoundCustomTab:username: @ 0152139c

/* Function Stack Size: 0x20 bytes */

bool WCRefineTelegramGroupingStore::sessionBelongsToBoundCustomTab_username_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  int local_d4;
  long local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  lVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_a9 = 0;
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_visibleTabs_026a8350);
    _objc_retainAutoreleasedReturnValue();
    local_148 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_148 != 0) {
      lVar4 = *local_110;
      local_150 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,IVar1);
          }
          lVar5 = *(long *)(local_118 + local_150 * 8);
          local_e0 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_kind_026a27e8);
          if ((lVar5 == 2) &&
             (IVar2 = local_b8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b8,PTR_s_session_matchesCustomTab_usernam_026b0290,local_c8,local_e0,
                        local_d0), (IVar2 & 1) != 0)) {
            local_a9 = 1;
            local_d4 = 1;
            goto LAB_01521624;
          }
          lVar5 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_kind_026a27e8);
          if ((lVar5 == 5) &&
             (puVar3 = PTR_WCRefinePrivateFriendManager_026ce160,
             (*(code *)PTR__objc_msgSend_02578628)
                       (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isSelectedUsername__026afed0
                        ,local_d0), ((ulong)puVar3 & 1) != 0)) {
            local_a9 = 1;
            local_d4 = 1;
            goto LAB_01521624;
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    local_d4 = 0;
LAB_01521624:
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_d4 == 0) {
      local_a9 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

