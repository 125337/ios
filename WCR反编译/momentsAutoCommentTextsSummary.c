// momentsAutoCommentTextsSummary @ 01c09028

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsViewController::momentsAutoCommentTextsSummary(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  undefined *local_178;
  undefined *local_170;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  cfstringStruct *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  int local_cc;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf__gn_;
    local_cc = 1;
  }
  else {
    puVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_128,0,0x40);
    puVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_170 != (undefined *)0x0) {
      lVar4 = *local_118;
      local_178 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,puVar1);
          }
          pcVar5 = *(cfstringStruct **)(local_120 + (long)local_178 * 8);
          puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_e8 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_130 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          pcVar5 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_cc = 0;
            uVar6 = 0;
          }
          else {
            pcVar3 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            pcVar5 = local_130;
            if (pcVar3 < (cfstringStruct *)0xb) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar5;
              uVar6 = 1;
              local_cc = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_substringToIndex__0269d6c0,10);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_b0 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              uVar6 = 1;
              local_cc = 1;
            }
          }
          _objc_storeStrong(uVar6,&local_130,0);
          if (local_cc != 0) goto LAB_01c09428;
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_178 = (undefined *)0x0;
      } while (local_170 != (undefined *)0x0);
    }
    local_cc = 0;
LAB_01c09428:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_cc == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf__gn_;
      local_cc = 1;
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

