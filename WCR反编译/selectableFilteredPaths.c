// selectableFilteredPaths @ 019cfd7c

/* Function Stack Size: 0x10 bytes */

ID WCRefineFontListViewController::selectableFilteredPaths(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_168;
  ulong local_140;
  ulong local_138;
  ulong local_120;
  cfstringStruct *local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  cfstringStruct *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  _memset(auStack_108,0,0x40);
  local_120 = *(ulong *)(local_b0 + (long)_filtered);
  if (local_120 == 0) {
    local_120 = *(ulong *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_120,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_138 != 0) {
    lVar2 = *local_f8;
    local_140 = 0;
    do {
      do {
        if (*local_f8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar2,local_120);
        }
        pcVar3 = *(cfstringStruct **)(local_100 + local_140 * 8);
        local_c8 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
        _objc_retainAutoreleasedReturnValue();
        local_168 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_168 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_110 = local_168;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
        if (pcVar3 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_110);
        }
        _objc_storeStrong(&local_110,0);
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                 0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_120);
  puVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

