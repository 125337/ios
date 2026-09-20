// FUN_0025ac90 @ 0025ac90

void FUN_0025ac90(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_1d0;
  undefined *local_1a0;
  undefined *local_198;
  cfstringStruct *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  cfstringStruct *local_d0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_selectedFilterGroupId_026a0fe8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_ungroupedDisplayName_026a1040);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_dataGeneration_026a0ff0);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_showChipCount_026a0fe0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_stringWithFormat__0269cca8,&cf________ld_cnt__d_);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _memset(auStack_110,0,0x40);
  puVar3 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_groups_026a1048);
  _objc_retainAutoreleasedReturnValue();
  local_198 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_198 != (undefined *)0x0) {
    lVar4 = *local_100;
    local_1a0 = (undefined *)0x0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,puVar3);
        }
        pcVar5 = *(cfstringStruct **)(local_108 + (long)local_1a0 * 8);
        local_d0 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_objectForKeyedSubscript__0269d098,_WCREmoticonGroupIdKey);
        _objc_retainAutoreleasedReturnValue();
        local_1d0 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_1d0 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = local_1d0;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        puVar1 = local_b8;
        pcVar5 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,_WCREmoticonGroupNameKey);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&cf_______);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_showChipCount_026a0fe0);
        puVar1 = local_b8;
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineEmoticonGroupStore_026ce420,
                     PTR_s_displayCountForGroupId_amongWrap_026a1050,local_118,local_b0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&cf_n_ld_);
        }
        _objc_storeStrong(&local_118,0);
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_1a0 = (undefined *)0x0;
    } while (local_198 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_showChipCount_026a0fe0);
  puVar3 = local_b8;
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,
               PTR_s_displayCountForGroupId_amongWrap_026a1050,_WCREmoticonGroupAllId,local_b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,
               PTR_s_displayCountForGroupId_amongWrap_026a1050,_WCREmoticonGroupUngroupedId,local_b0
              );
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf_all_ld_ung_ld_);
  }
  puVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar3);
  return;
}

