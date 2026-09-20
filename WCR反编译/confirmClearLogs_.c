// confirmClearLogs: @ 017251e4

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAirDropLogViewController::confirmClearLogs_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_190;
  undefined *local_188;
  undefined *local_160;
  ID local_148;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  ID local_d0;
  undefined *local_c8;
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
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_b0;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_displayLogs_026b3af8);
  _objc_retainAutoreleasedReturnValue();
  local_148 = IVar2;
  if (IVar2 == 0) {
    local_148 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_148;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eSnzzQ_);
    local_d4 = 1;
  }
  else {
    puVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_themeBoxAirDropLogs_026b3aa0);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_160 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_160;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_e8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar3;
    _memset(auStack_138,0,0x40);
    puVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_188 != (undefined *)0x0) {
      lVar4 = *local_128;
      local_190 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar4 != 0) {
            _objc_enumerationMutation(*local_128 - lVar4,puVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + (long)local_190 * 8);
          puVar3 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_containsObject__0269cbb8,local_f8);
          if (((ulong)puVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_f8);
          }
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_190 = (undefined *)0x0;
      } while (local_188 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setThemeBoxAirDropLogs__026b3b78);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_saveConfig_0269e5d0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadData_0269e400);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__nzz);
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

