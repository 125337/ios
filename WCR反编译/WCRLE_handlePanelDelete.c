// WCRLE_handlePanelDelete @ 0043be40

/* Function Stack Size: 0x10 bytes */

void WCRLEPanelSheetProxy::WCRLE_handlePanelDelete(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_168;
  ulong local_160;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  long local_d8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  FUN_0043c204();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_d8 = 0;
  _memset(auStack_120,0,0x40);
  IVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar4 = *local_110;
    local_168 = 0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,IVar2);
        }
        local_e0 = *(undefined8 *)(local_118 + local_168 * 8);
        local_128 = 0;
        local_130 = 0;
        puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_deleteRelativePath_error__026a3a78,
                   local_e0,&local_130);
        _objc_storeStrong(&local_128,local_130);
        if (((ulong)puVar3 & 1) != 0) {
          local_d8 = local_d8 + 1;
        }
        _objc_storeStrong(&local_128,0);
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  FUN_0043c270();
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_header_026a3a80);
  _objc_retainAutoreleasedReturnValue();
  FUN_0043c2a4();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  pcVar1 = &cf__Rd;
  if (local_d8 < 1) {
    pcVar1 = &cf_Rd1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

