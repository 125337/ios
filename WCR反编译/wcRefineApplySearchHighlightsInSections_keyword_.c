// wcRefineApplySearchHighlightsInSections:keyword: @ 014cc2ac

/* Function Stack Size: 0x20 bytes */

void WCRefineSearchManager::wcRefineApplySearchHighlightsInSections_keyword_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong local_278;
  ulong local_270;
  ulong local_238;
  ulong local_230;
  ID local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  undefined4 local_154;
  long local_150;
  long local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_wcRefineRestoreSearchHighlights_026af4f0);
  lVar4 = local_148;
  FUN_014bdccc();
  _objc_retainAutoreleasedReturnValue();
  local_150 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_154 = 1;
  }
  else {
    _memset(auStack_1a0,0,0x40);
    uVar1 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_230 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
    if (local_230 != 0) {
      lVar4 = *local_190;
      local_238 = 0;
      do {
        do {
          if (*local_190 - lVar4 != 0) {
            _objc_enumerationMutation(*local_190 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_198 + local_238 * 8);
          local_1a8 = 0;
          local_160 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
          if ((uVar5 & 1) != 0) {
            uVar2 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_1a8;
            local_1a8 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          _memset(auStack_1f0,0,0x40);
          uVar5 = local_1a8;
          (*(code *)PTR__objc_retain_02578638)();
          local_270 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                     0x10);
          if (local_270 != 0) {
            lVar6 = *local_1e0;
            local_278 = 0;
            do {
              do {
                if (*local_1e0 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_1e0 - lVar6,uVar5);
                }
                local_1b0 = *(undefined8 *)(local_1e8 + local_278 * 8);
                IVar3 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_130,PTR_s_getTitleFromCellManager__026af650,local_1b0);
                _objc_retainAutoreleasedReturnValue();
                local_1f8 = IVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar3,PTR_s_rangeOfString_options__0269d118,local_150,1);
                if (IVar3 != 0x7fffffffffffffff) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_130,PTR_s_wcRefineApplySearchHighlightToCe_026af6b0,local_1b0,
                             local_150);
                }
                _objc_storeStrong(&local_1f8,0);
                local_278 = local_278 + 1;
              } while (local_278 < local_270);
              local_270 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                         auStack_128,0x10);
              local_278 = 0;
            } while (local_270 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar5);
          _objc_storeStrong(&local_1a8,0);
          local_238 = local_238 + 1;
        } while (local_238 < local_230);
        local_230 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10
                  );
        local_238 = 0;
      } while (local_230 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_154 = 0;
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

