// wcrGroupAnalysisPresetName @ 017c0af0

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIFeatureViewController::wcrGroupAnalysisPresetName(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineAIStore_026ce048;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_resolvedGroupChatAnalysisPrompt_0269d210);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  _memset(auStack_118,0,0x40);
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_allGroupAnalysisPersonas_026aac78);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_140 != (undefined *)0x0) {
    lVar5 = *local_108;
    local_148 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar5 != 0) {
          _objc_enumerationMutation(*local_108 - lVar5,puVar2);
        }
        pcVar6 = *(cfstringStruct **)(local_110 + (long)local_148 * 8);
        local_d8 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_prompt);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar3 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_b0 = pcVar3;
          goto LAB_017c0d34;
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_148 = (undefined *)0x0;
    } while (local_140 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_017c0d34:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (!bVar1) {
    puVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_groupChatAnalysisPrompt_026aad58);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar3 = &cf__IN;
    if (puVar4 == (undefined *)0x0) {
      pcVar3 = &cf_pR__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

