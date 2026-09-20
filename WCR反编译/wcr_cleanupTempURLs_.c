// wcr_cleanupTempURLs: @ 00702a04

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_cleanupTempURLs_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint local_1a4;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0 [3];
  undefined *local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_e0[0] = puVar3;
  _memset(auStack_128,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar5 = *local_118;
    local_170 = 0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,uVar1);
        }
        lVar6 = *(long *)(local_120 + local_170 * 8);
        local_e8 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_path_0269d4d8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar2 = local_e0[0];
        local_1a4 = 0;
        if (lVar4 != 0) {
          lVar4 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8);
          local_1a4 = (uint)puVar2 ^ 1;
          (*(code *)PTR__objc_release_02578630)(lVar4);
        }
        (*(code *)PTR__objc_release_02578630)(lVar6);
        puVar2 = local_e0[0];
        if ((local_1a4 & 1) != 0) {
          lVar4 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(lVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_removeItemAtURL_error__026a7188,local_e8,0);
        }
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(local_e0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

