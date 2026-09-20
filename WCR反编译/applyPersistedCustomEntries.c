// applyPersistedCustomEntries @ 0177a23c

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginHubManager::applyPersistedCustomEntries(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_containerEnabled_026a6540);
  if ((param_1 & 1) != 0) {
    _memset(auStack_100,0,0x40);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_customEntryDefinitions_026b4448);
    _objc_retainAutoreleasedReturnValue();
    local_120 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_120 != 0) {
      lVar2 = *local_f0;
      local_128 = 0;
      do {
        do {
          if (*local_f0 - lVar2 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar2,IVar1);
          }
          local_c0 = *(undefined8 *)(local_f8 + local_128 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_registerPluginForCustomEntry__026b44a0,local_c0);
          local_128 = local_128 + 1;
        } while (local_128 < local_120);
        local_120 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_128 = 0;
      } while (local_120 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

