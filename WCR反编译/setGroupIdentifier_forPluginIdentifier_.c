// setGroupIdentifier:forPluginIdentifier: @ 017767b4

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginHubManager::setGroupIdentifier_forPluginIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  byte local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
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
  local_c9 = 0;
  _memset(auStack_118,0,0x40);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupDefinitions_026b4430);
  _objc_retainAutoreleasedReturnValue();
  local_148 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_148 != 0) {
    lVar3 = *local_108;
    local_150 = 0;
    do {
      do {
        if (*local_108 - lVar3 != 0) {
          _objc_enumerationMutation(*local_108 - lVar3,IVar1);
        }
        uVar4 = *(ulong *)(local_110 + local_150 * 8);
        local_d8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        if ((uVar2 & 1) != 0) {
          local_c9 = 1;
          goto LAB_017769b4;
        }
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
LAB_017769b4:
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_setOverrideValue_key_identifier__026b43c8,local_c0,&cf_groupID,
               local_c8);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

