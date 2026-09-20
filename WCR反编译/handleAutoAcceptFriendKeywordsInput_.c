// handleAutoAcceptFriendKeywordsInput: @ 01a5a258

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::handleAutoAcceptFriendKeywordsInput_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_150;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined1 *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)0x0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  pcVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_150 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_150 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_150;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,&::cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c8;
  local_d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_d8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar3;
  _memset(auStack_128,0,0x40);
  pcVar2 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_178 != (cfstringStruct *)0x0) {
    lVar5 = *local_118;
    local_180 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,pcVar2);
        }
        lVar6 = *(long *)(local_120 + (long)local_180 * 8);
        puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        local_e8 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_130 = lVar6;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        lVar6 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
        if (lVar6 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_130);
        }
        puVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
        bVar1 = &segment_command_00000020.flags <= puVar4;
        puVar4 = puVar4 + -100;
        if (bVar1) {
          puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
        }
        _objc_storeStrong(puVar4,&local_130,0);
        if (bVar1) goto LAB_01a5a5b4;
        local_180 = (cfstringStruct *)((long)&local_180->field0_0x0 + 1);
      } while (local_180 < local_178);
      local_178 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      local_180 = (cfstringStruct *)0x0;
    } while (local_178 != (cfstringStruct *)0x0);
  }
LAB_01a5a5b4:
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar4 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

