// customPersonas @ 009aef04

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIStore::customPersonas(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1a0;
  undefined *local_198;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  undefined *local_108;
  undefined4 local_fc;
  undefined *local_f8;
  SEL local_f0;
  ID local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_f0 = param_2;
  local_e8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_f8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_fc = 1;
    local_e0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar2;
    _memset(auStack_150,0,0x40);
    puVar2 = local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
    if (local_198 != (undefined *)0x0) {
      lVar5 = *local_140;
      local_1a0 = (undefined *)0x0;
      do {
        do {
          if (*local_140 - lVar5 != 0) {
            _objc_enumerationMutation(*local_140 - lVar5,puVar2);
          }
          uVar6 = *(ulong *)(local_148 + (long)local_1a0 * 8);
          puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_110 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar6 & 1) != 0) {
            uVar6 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            FUN_009af3fc();
            _objc_retainAutoreleasedReturnValue();
            local_158 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            uVar6 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,PTR_s_objectForKeyedSubscript__0269d098,&cf_prompt);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            FUN_009af3fc();
            _objc_retainAutoreleasedReturnValue();
            local_160 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            uVar6 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
            if ((uVar6 == 0) ||
               (uVar6 = local_160,
               (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
               puVar1 = local_108, uVar6 == 0)) {
              local_fc = 3;
            }
            else {
              local_d8 = &cf_category;
              local_c0 = &cf_bvN;
              local_d0 = &cf_name;
              local_b8 = local_158;
              local_c8 = &cf_prompt;
              local_b0 = local_160;
              puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              local_fc = 0;
            }
            _objc_storeStrong(&local_160);
            _objc_storeStrong(&local_158,0);
          }
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                   0x10);
        local_1a0 = (undefined *)0x0;
      } while (local_198 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_108;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = puVar2;
    local_fc = 1;
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_e0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

