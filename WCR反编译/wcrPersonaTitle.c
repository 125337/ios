// wcrPersonaTitle @ 017ce6b0

/* Function Stack Size: 0x10 bytes */

ID WCRefineAISessionSettingsViewController::wcrPersonaTitle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_188;
  undefined *local_150;
  undefined *local_148;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  int local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrString_fallback__026b50a0,_WCRAISessionPreset,&::cf___);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &::cf__;
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    puVar1 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_148 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_148 != (undefined *)0x0) {
      lVar4 = *local_108;
      local_150 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,puVar2);
          }
          pcVar5 = *(cfstringStruct **)(local_110 + (long)local_150 * 8);
          local_d8 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_prompt);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          if (((ulong)pcVar3 & 1) != 0) {
            pcVar3 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            local_188 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_188 = &cf__INN;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = local_188;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            local_cc = 1;
            goto LAB_017ce9b8;
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_150 = (undefined *)0x0;
      } while (local_148 != (undefined *)0x0);
    }
    local_cc = 0;
LAB_017ce9b8:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_cc == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf__INN;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

