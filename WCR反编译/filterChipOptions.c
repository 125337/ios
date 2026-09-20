// filterChipOptions @ 010881b0

/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonStore::filterChipOptions(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_258;
  cfstringStruct *local_238;
  ulong local_210;
  ulong local_208;
  cfstringStruct *local_188;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  cfstringStruct *local_128;
  undefined *local_120;
  SEL local_118;
  ID local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined1 auStack_e8 [128];
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_118 = param_2;
  local_110 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_110;
  local_120 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_showsAllChip_026a3ad0);
  puVar1 = local_120;
  if ((IVar2 & 1) != 0) {
    local_48 = &cf_id;
    local_38 = &cf___all__;
    local_40 = &cf_name;
    IVar2 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_allDisplayName_026a3e20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_showsUngroupedChip_026a3ae8);
  puVar1 = local_120;
  if ((IVar2 & 1) != 0) {
    local_68 = &cf_id;
    local_58 = &cf___ungrouped__;
    local_60 = &cf_name;
    IVar2 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_ungroupedDisplayName_026a1040);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_50 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_68,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _memset(auStack_168,0,0x40);
  IVar2 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_listPacksSortMode__026ac360,0);
  _objc_retainAutoreleasedReturnValue();
  local_208 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_208 != 0) {
    lVar5 = *local_158;
    local_210 = 0;
    do {
      do {
        if (*local_158 - lVar5 != 0) {
          _objc_enumerationMutation(*local_158 - lVar5,IVar2);
        }
        pcVar6 = *(cfstringStruct **)(local_160 + local_210 * 8);
        local_128 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_238 = local_128;
        if (pcVar4 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_relativePath_026ac370);
          _objc_retainAutoreleasedReturnValue();
          local_188 = local_238;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_displayName_026ac378);
          _objc_retainAutoreleasedReturnValue();
          local_178 = local_238;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_170 = local_238;
        if (pcVar4 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_188);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_178);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        puVar1 = local_120;
        local_108 = &cf_id;
        pcVar4 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_relativePath_026ac370);
        _objc_retainAutoreleasedReturnValue();
        local_258 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_258 = &::cf___;
        }
        local_f8 = local_258;
        local_100 = &cf_name;
        local_f0 = local_170;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f8,&local_108,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        _objc_storeStrong(&local_170,0);
        local_210 = local_210 + 1;
      } while (local_210 < local_208);
      local_208 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_e8,0x10);
      local_210 = 0;
    } while (local_208 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_120;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_120,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

