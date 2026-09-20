// toggleTypeKey:switchOn: @ 01ba9488

/* Function Stack Size: 0x1c bytes */

void WCRefineMessageBlockSettingsViewController::toggleTypeKey_switchOn_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_160;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  byte local_e1;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  byte local_c1;
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
  local_c1 = (byte)param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  lVar4 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_c8 = 1;
  }
  else {
    puVar1 = PTR_WCRefineMessageBlockSupport_026ce0f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_allTypeKeys_026ae488);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_d0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e1 = 0;
    local_160 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_160 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_160;
    }
    local_e1 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_160;
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_mutableCopy_0269d8a0);
      puVar1 = local_d8;
      local_d8 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if ((local_c1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeObject__0269d678,local_c0);
    }
    else {
      puVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,local_c0);
      if (((ulong)puVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_c0);
      }
    }
    puVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    if (puVar1 < puVar2) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar1;
      _memset(auStack_138,0,0x40);
      puVar1 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      if (local_1a8 != (undefined *)0x0) {
        lVar4 = *local_128;
        local_1b0 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar4 != 0) {
              _objc_enumerationMutation(*local_128 - lVar4,puVar1);
            }
            local_f8 = *(undefined8 *)(local_130 + (long)local_1b0 * 8);
            puVar2 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,local_f8);
            if (((ulong)puVar2 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_f8);
            }
            local_1b0 = local_1b0 + 1;
          } while (local_1b0 < local_1a8);
          local_1a8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1b0 = (undefined *)0x0;
        } while (local_1a8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_f0,0);
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
    local_c8 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

