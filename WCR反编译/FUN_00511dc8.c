// FUN_00511dc8 @ 00511dc8

void FUN_00511dc8(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined *local_1b0;
  undefined *local_1a8;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  cfstringStruct *local_e8;
  undefined *local_e0;
  byte local_d1;
  undefined *local_d0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_d1 = 0;
  local_b8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_momentsAutoCommentUseCustom_026a4738);
  bVar2 = false;
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_momentsAutoCommentTexts_026a4740);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = puVar3 != (undefined *)0x0;
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  if (bVar2) {
    puVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_momentsAutoCommentTexts_026a4740);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _memset(auStack_128,0,0x40);
    puVar3 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_1a8 != (undefined *)0x0) {
      lVar7 = *local_118;
      local_1b0 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar7 != 0) {
            _objc_enumerationMutation(*local_118 - lVar7,puVar3);
          }
          pcVar8 = *(cfstringStruct **)(local_120 + (long)local_1b0 * 8);
          puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_e8 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_130 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          pcVar6 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          pcVar8 = local_130;
          bVar2 = pcVar6 != (cfstringStruct *)0x0;
          if (bVar2) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar8;
          }
          _objc_storeStrong(bVar2,&local_130,0);
          bVar1 = true;
          if (bVar2) goto LAB_005122dc;
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_1b0 = (undefined *)0x0;
      } while (local_1a8 != (undefined *)0x0);
    }
    bVar1 = false;
LAB_005122dc:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (!bVar1) {
      bVar1 = false;
    }
    _objc_storeStrong(&local_e0,0);
    if (bVar1) goto LAB_00512370;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = &cf__;
LAB_00512370:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

