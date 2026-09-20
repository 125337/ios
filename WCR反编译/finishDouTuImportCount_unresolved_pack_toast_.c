// finishDouTuImportCount:unresolved:pack:toast: @ 01b713ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x30 bytes */

void WCRefineLocalEmoticonLibraryViewController::finishDouTuImportCount_unresolved_pack_toast_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5,ID param_6)

{
  ulong uVar1;
  undefined *puVar2;
  long_long lVar3;
  long lVar4;
  ulong uVar5;
  ulong local_188;
  ulong local_180;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong local_c8;
  long_long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_6);
  lVar3 = local_c0;
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  local_e0 = lVar3 + uVar1;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar2;
  _memset(auStack_130,0,0x40);
  uVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_180 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_180 != 0) {
    lVar4 = *local_120;
    local_188 = 0;
    do {
      do {
        if (*local_120 - lVar4 != 0) {
          _objc_enumerationMutation(*local_120 - lVar4,uVar1);
        }
        uVar5 = *(ulong *)(local_128 + local_188 * 8);
        local_f0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_url)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_138 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar5 & 1) != 0) &&
           (uVar5 = local_138,
           (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0), uVar5 != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f0);
        }
        _objc_storeStrong(&local_138,0);
        local_188 = local_188 + 1;
      } while (local_188 < local_180);
      local_180 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_188 = 0;
    } while (local_180 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,local_d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_endImportBatchAndReload_026bfaa8);
    puVar2 = PTR_WCRefineHelper_026ce000;
    lVar3 = local_c0;
    FUN_01b717c8(local_c0,local_e0,local_e0 - local_c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_downloadDouTuMissing_imported_pa_026bfaf8,local_e8,local_c0,local_e0,
               local_d0,local_d8);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

