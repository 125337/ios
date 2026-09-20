// floatBarPin @ 01f95630

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::floatBarPin(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  byte bVar2;
  ID IVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong local_278;
  ulong local_270;
  uint local_22c;
  ulong local_210;
  ulong local_208;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  long local_1a8;
  byte local_199;
  long local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  long local_150;
  byte local_145;
  undefined4 local_144;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_wcr_selectedItems_026c9980);
  _objc_retainAutoreleasedReturnValue();
  local_140 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_count_0269cfe0);
  if (IVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb);
    local_144 = 1;
  }
  else {
    local_145 = 0;
    _memset(auStack_190,0,0x40);
    IVar3 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_208 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
    if (local_208 != 0) {
      lVar6 = *local_180;
      local_210 = 0;
      do {
        do {
          if (*local_180 - lVar6 != 0) {
            _objc_enumerationMutation(*local_180 - lVar6,IVar3);
          }
          lVar7 = *(long *)(local_188 + local_210 * 8);
          local_150 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_relativePath_026ac370);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar5 = PTR_WCRefineVoicePackStore_026cea20;
          local_199 = 0;
          local_22c = 0;
          if (lVar4 != 0) {
            lVar4 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_relativePath_026ac370);
            _objc_retainAutoreleasedReturnValue();
            local_199 = 1;
            local_198 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isPinnedRelativePath__026ae2d8);
            local_22c = (uint)puVar5 ^ 1;
          }
          if ((local_199 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_198);
          }
          (*(code *)PTR__objc_release_02578630)(lVar7);
          if ((local_22c & 1) != 0) {
            local_145 = 1;
            local_144 = 2;
            goto LAB_01f95938;
          }
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10
                  );
        local_210 = 0;
      } while (local_208 != 0);
    }
    local_144 = 0;
LAB_01f95938:
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _memset(auStack_1e8,0,0x40);
    IVar3 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_270 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,0x10);
    if (local_270 != 0) {
      lVar6 = *local_1d8;
      local_278 = 0;
      do {
        do {
          if (*local_1d8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar6,IVar3);
          }
          lVar7 = *(long *)(local_1e0 + local_278 * 8);
          local_1a8 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_relativePath_026ac370);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar7);
          bVar2 = local_145;
          puVar5 = PTR_WCRefineVoicePackStore_026cea20;
          if (lVar4 != 0) {
            lVar4 = local_1a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_relativePath_026ac370);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_setPinned_forRelativePath__026b0cd8,bVar2 & 1);
            (*(code *)PTR__objc_release_02578630)(lVar4);
          }
          local_278 = local_278 + 1;
        } while (local_278 < local_270);
        local_270 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,
                   0x10);
        local_278 = 0;
      } while (local_270 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectedPaths_026ba4d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setSelecting__026c9978,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_reloadItems_026ae4d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_syncPageSheetTopBar_026c9b10);
    pcVar1 = &cf__n_v;
    if ((local_145 & 1) == 0) {
      pcVar1 = &cf__Smn_v;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
    local_144 = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

