// FUN_019afe28 @ 019afe28

void FUN_019afe28(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  undefined *local_e0;
  int local_d4;
  ulong local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  uVar1 = param_1 + 0x28;
  local_c8 = param_1;
  _objc_loadWeakRetained();
  local_d0 = uVar1;
  if (uVar1 == 0) {
    local_d4 = 1;
  }
  else {
    puVar2 = PTR_WCRFileManagerState_026cf1c8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_d0;
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_grouped_026ba7b8);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_removeFavorite__026ba510,*(undefined8 *)(param_1 + 0x20));
      puVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_favorites_026ba480);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setPaths__026ba828);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Sm6e);
    }
    else {
      puVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_recents_026ba1c8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e8 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_removeObject__0269d678,*(undefined8 *)(param_1 + 0x20));
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_clearRecents_026ba7a0);
      _memset(auStack_130,0,0x40);
      puVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_reverseObjectEnumerator_0269d220);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_168 != (undefined *)0x0) {
        lVar4 = *local_120;
        local_170 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar4 != 0) {
              _objc_enumerationMutation(*local_120 - lVar4,puVar2);
            }
            local_f0 = *(undefined8 *)(local_128 + (long)local_170 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_pushRecent__026ba548,local_f0);
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_170 = (undefined *)0x0;
        } while (local_168 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_recents_026ba1c8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setPaths__026ba828);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__yd);
      _objc_storeStrong(&local_e8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_rebuild_026ba7e8);
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_d0,0);
  if (local_d4 == 0) {
    local_d4 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

