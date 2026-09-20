// floatBarSelectAll @ 01f9519c

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::floatBarSelectAll(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  byte local_d9;
  ID local_d8;
  byte local_c9;
  ID local_c8;
  byte local_b9;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedPaths_026ba4d0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_c9 = 0;
  local_d9 = 0;
  bVar1 = false;
  if (IVar3 != 0) {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedPaths_026ba4d0);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar4 <= IVar3;
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_b0;
  local_b9 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedPaths_026ba4d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_b9 & 1) == 0) {
    _memset(auStack_128,0,0x40);
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_178 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_178 != 0) {
      lVar6 = *local_118;
      local_180 = 0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,IVar2);
          }
          lVar7 = *(long *)(local_120 + local_180 * 8);
          local_e8 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_absolutePath_026ae300);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar7);
          if (lVar5 != 0) {
            IVar3 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedPaths_026ba4d0);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_absolutePath_026ae300);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(lVar5);
            (*(code *)PTR__objc_release_02578630)(IVar3);
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rebuildListSections_026ba410);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

