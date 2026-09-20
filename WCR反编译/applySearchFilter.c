// applySearchFilter @ 01fa77d0

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::applySearchFilter(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_158;
  ulong local_150;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = *(long *)(param_1 + (long)_searchBar);
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = lVar5;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,&cf___WCR_WM_NONE_ITEM__);
  if ((local_c0 == 0) ||
     (lVar5 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar5 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_addObjectsFromArray__0269d540,
               *(undefined8 *)(local_b0 + (long)_watermarkPaths));
    puVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
    uVar3 = *(undefined8 *)(local_b0 + (long)_displayPaths);
    *(undefined8 *)(local_b0 + (long)_displayPaths) = puVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar4 = *(ulong *)(local_b0 + (long)_watermarkPaths);
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar5 = *local_108;
      local_158 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,uVar4);
          }
          uVar6 = *(ulong *)(local_110 + local_158 * 8);
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_120 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_localizedCaseInsensitiveContains_0269efb0,local_c0);
          if ((uVar6 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d8);
          }
          _objc_storeStrong(&local_120,0);
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
    uVar3 = *(undefined8 *)(local_b0 + (long)_displayPaths);
    *(undefined8 *)(local_b0 + (long)_displayPaths) = puVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

