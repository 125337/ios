// hasVisiblePrivateFriendTab @ 01520468

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramGroupingStore::hasVisiblePrivateFriendTab(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  _memset(auStack_108,0,0x40);
  IVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_tabs_026b01e0);
  _objc_retainAutoreleasedReturnValue();
  local_130 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != 0) {
    lVar4 = *local_f8;
    local_138 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,IVar2);
        }
        uVar5 = *(ulong *)(local_100 + local_138 * 8);
        local_c8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_kind_026a27e8);
        if (((uVar5 == 5) &&
            (uVar5 = local_c8,
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_disabled_026a2c20),
            (uVar5 & 1) == 0)) &&
           (IVar3 = local_b8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_b8,PTR_s_shouldHideTabFromHomeStrip__026b01d0,local_c8),
           (IVar3 & 1) == 0)) {
          local_a9 = 1;
          bVar1 = true;
          goto LAB_01520640;
        }
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  bVar1 = false;
LAB_01520640:
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (!bVar1) {
    local_a9 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

