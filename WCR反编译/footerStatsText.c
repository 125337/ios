// footerStatsText @ 0198d5b0

/* Function Stack Size: 0x10 bytes */

ID WCRefineFileManagerViewController::footerStatsText(ID param_1,SEL param_2)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  byte local_d1;
  long local_d0;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayEntries_026ba498);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = 0;
  local_d1 = 0;
  local_c8 = param_1;
  _memset(auStack_120,0,0x40);
  IVar3 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_148 != 0) {
    lVar5 = *local_110;
    local_150 = 0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,IVar3);
        }
        uVar6 = *(ulong *)(local_118 + local_150 * 8);
        local_e0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_isDir);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar6);
        uVar6 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_sizeKnown);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar6);
        if (((uVar1 & 1) == 0) || ((uVar2 & 1) != 0)) {
          uVar1 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_d0 = local_d0 + uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        else {
          local_d1 = 1;
        }
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isSearching_026ba468);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((IVar3 & 1) == 0) {
    if ((local_d1 & 1) == 0) {
      lVar5 = local_d0;
      FUN_0198a97c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__Y__);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(lVar5);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__Y__);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar4;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__b0R);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar4;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

