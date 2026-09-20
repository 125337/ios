// handleDeleteSelected: @ 01b73dc8

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::handleDeleteSelected_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_150;
  ulong local_148;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  long local_d0;
  ulong local_c8 [2];
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8[1] = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(local_c8 + 1,param_3);
  uVar2 = *(ulong *)(local_b0 + (long)_selectedExportRels);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_allObjects_0269d228);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = 0;
  local_c8[0] = uVar2;
  _memset(auStack_118,0,0x40);
  uVar2 = local_c8[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_148 != 0) {
    lVar4 = *local_108;
    local_150 = 0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,uVar2);
        }
        local_d8 = *(undefined8 *)(local_110 + local_150 * 8);
        local_120 = 0;
        local_128 = 0;
        puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_deleteRelativePath_error__026a3a78,
                   local_d8,&local_128);
        _objc_storeStrong(&local_120,local_128);
        if (((ulong)puVar3 & 1) != 0) {
          local_d0 = local_d0 + 1;
        }
        _objc_storeStrong(&local_120,0);
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  *(undefined1 *)(local_b0 + (long)_exportSelectMode) = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_b0 + (long)_selectedExportRels),PTR_s_removeAllObjects_0269d508);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_refreshRightButtons_026bf9d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadItems_026ae4d8);
  pcVar1 = &cf__Rd;
  if (local_d0 < 1) {
    pcVar1 = &cf_Rd1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  _objc_storeStrong(local_c8);
  _objc_storeStrong(local_c8 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

