// groupDefinitions @ 01771ec0

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginHubManager::groupDefinitions(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_298;
  undefined *local_240;
  undefined *local_238;
  undefined *local_1f8;
  undefined *local_1e8;
  undefined *local_1d8;
  undefined *local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  undefined *local_168;
  undefined *local_160;
  SEL local_158;
  ID local_150;
  undefined *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_158 = param_2;
  local_150 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_160 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_160;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_168 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar1 & 1) != 0) {
    _memset(auStack_1b0,0,0x40);
    puVar1 = local_160;
    (*(code *)PTR__objc_retain_02578638)();
    local_238 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10);
    if (local_238 != (undefined *)0x0) {
      lVar5 = *local_1a0;
      local_240 = (undefined *)0x0;
      do {
        do {
          if (*local_1a0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar5,puVar1);
          }
          uVar6 = *(ulong *)(local_1a8 + (long)local_240 * 8);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_170 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar6 & 1) != 0) {
            uVar6 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar6;
            FUN_0176d368();
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            uVar6 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar6;
            FUN_0176d368();
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            uVar6 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0);
            if ((uVar6 != 0) &&
               (uVar6 = local_1c0,
               (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0),
               puVar2 = local_168, uVar6 != 0)) {
              local_c8 = &cf_id;
              local_b8 = local_1b8;
              local_c0 = &cf_title;
              local_b0 = local_1c0;
              puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            _objc_storeStrong(&local_1c0);
            _objc_storeStrong(&local_1b8,0);
          }
          local_240 = local_240 + 1;
        } while (local_240 < local_238);
        local_238 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                   0x10);
        local_240 = (undefined *)0x0;
      } while (local_238 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    local_100 = &cf_id;
    local_f0 = &cf_appearance;
    local_f8 = &cf_title;
    local_e8 = &cf__S;
    local_1c8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f0,&local_100);
    _objc_retainAutoreleasedReturnValue();
    local_120 = &cf_id;
    local_110 = &cf_functions;
    local_118 = &cf_title;
    local_108 = &::cf_R;
    local_1d8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_e0 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_110,&local_120,2);
    _objc_retainAutoreleasedReturnValue();
    local_140 = &cf_id;
    local_130 = &cf_custom;
    local_138 = &cf_title;
    local_128 = &cf__6R;
    local_1e8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_d8 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_130,&local_140,2);
    _objc_retainAutoreleasedReturnValue();
    local_298 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d0 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = local_298;
  }
  else {
    local_298 = local_168;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = local_298;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_1f8);
    (*(code *)PTR__objc_release_02578630)(local_1e8);
    (*(code *)PTR__objc_release_02578630)(local_1d8);
    (*(code *)PTR__objc_release_02578630)(local_1c8);
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_148;
}

