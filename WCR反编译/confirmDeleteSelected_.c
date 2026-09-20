// confirmDeleteSelected: @ 01fb312c

/* Function Stack Size: 0x18 bytes */

void WCRefineWatermarkLibraryViewController::confirmDeleteSelected_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong local_150;
  ulong local_148;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_d0;
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
  uVar2 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar4;
  _memset(auStack_118,0,0x40);
  uVar5 = *(ulong *)(local_b0 + (long)_selectedWatermarksForExport);
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_148 != 0) {
    lVar6 = *local_108;
    local_150 = 0;
    do {
      do {
        if (*local_108 - lVar6 != 0) {
          _objc_enumerationMutation(*local_108 - lVar6,uVar5);
        }
        local_d8 = *(undefined8 *)(local_110 + local_150 * 8);
        uVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_d8);
        _objc_retainAutoreleasedReturnValue();
        local_120 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeItemAtPath_error__0269f910,uVar3)
        ;
        _objc_storeStrong(&local_120,0);
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar5);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_b0 + (long)_selectedWatermarksForExport),PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__Rd);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cancelExportSelectMode_026b6588);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_loadWatermarks_026c9d78);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_b0 + (long)_collectionView),PTR_s_reloadData_0269e400);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

