// wcrPersonaNameForPrompt: @ 017e3e7c

/* Function Stack Size: 0x18 bytes */

ID WCRefineAISettingsViewController::wcrPersonaNameForPrompt_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  int local_cc;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar4 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_b0 = (cfstringStruct *)0x0;
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
    local_140 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_140 != (undefined *)0x0) {
      lVar4 = *local_108;
      local_148 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,puVar2);
          }
          pcVar5 = *(cfstringStruct **)(local_110 + (long)local_148 * 8);
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
            local_cc = 1;
            local_b0 = pcVar3;
            goto LAB_017e40f4;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_148 = (undefined *)0x0;
      } while (local_140 != (undefined *)0x0);
    }
    local_cc = 0;
LAB_017e40f4:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_cc == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf__IN;
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

