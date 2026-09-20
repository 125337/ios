// resetCurrentGroup @ 01edbcf4

/* Function Stack Size: 0x10 bytes */

void WCRToDoAdjustmentViewController::resetCurrentGroup(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedGroup_026c7d60);
  FUN_01ed943c();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = param_1;
  _memset(auStack_108,0,0x40);
  IVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_130 != 0) {
    lVar3 = *local_f8;
    local_138 = 0;
    do {
      do {
        if (*local_f8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar3,IVar1);
        }
        uVar4 = *(undefined8 *)(local_100 + local_138 * 8);
        local_c8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_tag)
        ;
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        FUN_01edbf44(uVar2);
        FUN_01ebeb78(uVar2);
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadTableData_0269dca8);
  FUN_01ed8490();
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

