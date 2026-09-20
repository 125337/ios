// confirmExportSelected @ 01b740e4

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::confirmExportSelected(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = *(long *)(param_1 + (long)_selectedExportRels);
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar2;
    _memset(auStack_108,0,0x40);
    uVar3 = *(ulong *)(local_b0 + (long)_items);
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
    if (local_128 != 0) {
      lVar1 = *local_f8;
      local_130 = 0;
      do {
        do {
          if (*local_f8 - lVar1 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar1,uVar3);
          }
          uVar4 = *(undefined8 *)(local_100 + local_130 * 8);
          uVar5 = *(ulong *)(local_b0 + (long)_selectedExportRels);
          local_c8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_relativePath_026ac370);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsObject__0269cbb8);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_c8);
          }
          local_130 = local_130 + 1;
        } while (local_130 < local_128);
        local_128 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_130 = 0;
      } while (local_128 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_exportItems__026bfa28,local_c0);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

