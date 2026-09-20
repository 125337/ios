// FUN_01fb4ce0 @ 01fb4ce0

void FUN_01fb4ce0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_1a8;
  ulong local_1a0;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0 [4];
  ulong local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    local_c0 = 0;
    uVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_valueForKey__0269d128,&cf_m_operateLogic);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_c0;
    local_c0 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_c0 == 0) {
      local_b4 = 1;
    }
    else {
      uVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_valueForKey__0269d128,&cf_m_operationInfo);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_e0[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_e0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_allValues_0269dae8);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = uVar1;
        _memset(auStack_130,0,0x40);
        uVar1 = local_e8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1a0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        if (local_1a0 != 0) {
          lVar3 = *local_120;
          local_1a8 = 0;
          do {
            do {
              if (*local_120 - lVar3 != 0) {
                _objc_enumerationMutation(*local_120 - lVar3,uVar1);
              }
              uVar4 = *(ulong *)(local_128 + local_1a8 * 8);
              local_f0 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_setIsOperating__026c9e80);
              if ((uVar4 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setIsOperating__026c9e80,0);
              }
              uVar4 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f0,PTR_s_respondsToSelector__026ca818,PTR_s_setRetryCount__026c9e88);
              if ((uVar4 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setRetryCount__026c9e88,0);
              }
              local_1a8 = local_1a8 + 1;
            } while (local_1a8 < local_1a0);
            local_1a0 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                       0x10);
            local_1a8 = 0;
          } while (local_1a0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        _objc_storeStrong(&local_e8,0);
      }
      _objc_storeStrong(local_e0,0);
      uVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_saveData_026c9e90);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_saveData_026c9e90);
      }
      uVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_runAllOperation_026c9e98);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_runAllOperation_026c9e98);
      }
      local_b4 = 0;
    }
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

