// prefetchFolderStats @ 01f89c54

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::prefetchFolderStats(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  ulong uVar4;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  _memset(auStack_100,0,0x40);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  local_120 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_120 != 0) {
    lVar3 = *local_f0;
    local_128 = 0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,IVar2);
        }
        uVar4 = *(ulong *)(local_f8 + local_128 * 8);
        local_c0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isDirectory_026b0ba0);
        IVar1 = local_b0;
        if ((uVar4 & 1) != 0) {
          uVar4 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_absolutePath_026ae300);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_requestFolderStatsIfNeededForPat_026c99d8);
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        local_128 = local_128 + 1;
      } while (local_128 < local_120);
      local_120 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_128 = 0;
    } while (local_120 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

