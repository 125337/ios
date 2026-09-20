// wcRefineRestoreSearchHighlights @ 014cc0c4

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchManager::wcRefineRestoreSearchHighlights(ID param_1,SEL param_2)

{
  ulong uVar1;
  long lVar2;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = *(ulong *)(param_1 + 0x68);
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_copy_0269d150);
  local_c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_b0 + 0x68),PTR_s_removeAllObjects_0269d508);
  _memset(auStack_108,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_128 != 0) {
    lVar2 = *local_f8;
    local_130 = 0;
    do {
      do {
        if (*local_f8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar2,uVar1);
        }
        local_c8 = *(undefined8 *)(local_100 + local_130 * 8);
        _objc_setAssociatedObject(local_c8,&DAT_028e3690,0,0);
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
      local_128 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_130 = 0;
    } while (local_128 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

