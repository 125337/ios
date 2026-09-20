// setThemeBoxAirDropThemeItems: @ 02119f28

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setThemeBoxAirDropThemeItems_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_238;
  ulong local_1c8;
  ulong local_1c0;
  undefined *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  cfstringStruct *local_118;
  undefined *local_110;
  ID local_108;
  ulong local_100;
  SEL local_f8;
  ID local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = 0;
  local_f8 = param_2;
  local_f0 = param_1;
  _objc_storeStrong(&local_100,param_3);
  IVar2 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_108 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar3;
  _memset(auStack_158,0,0x40);
  uVar1 = local_100;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
  if (local_1c0 != 0) {
    lVar7 = *local_148;
    local_1c8 = 0;
    do {
      do {
        if (*local_148 - lVar7 != 0) {
          _objc_enumerationMutation(*local_148 - lVar7,uVar1);
        }
        pcVar8 = *(cfstringStruct **)(local_150 + local_1c8 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_118 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        pcVar4 = local_118;
        if (((ulong)pcVar8 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_160 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_160;
          local_168 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_codes);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_160;
          local_170 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_valid);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_160;
          local_178 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_160;
          local_180 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_linkedMsgRepoCode);
          _objc_retainAutoreleasedReturnValue();
          local_188 = pcVar4;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar4 = local_188;
          local_190 = &::cf___;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          pcVar8 = local_188;
          if (((ulong)pcVar4 & 1) != 0) {
            puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_190;
            local_190 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          pcVar4 = local_168;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar4 & 1) == 0) {
            _objc_storeStrong(&local_168,&::cf___);
          }
          pcVar4 = local_170;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar4 & 1) == 0) {
            _objc_storeStrong(&local_170,&::cf___);
          }
          pcVar4 = local_178;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar4 & 1) == 0) {
            pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_178;
            local_178 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          pcVar4 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_180,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
          if (((ulong)pcVar4 & 1) == 0) {
            local_238 = (cfstringStruct *)0x0;
          }
          else {
            local_238 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_integerValue_026ca750);
          }
          local_198 = local_238;
          if (((long)local_238 < 0) || (3 < (long)local_238)) {
            local_198 = (cfstringStruct *)0x0;
          }
          local_e8 = &cf_name;
          local_c8 = local_168;
          local_e0 = &cf_codes;
          local_c0 = local_170;
          local_d8 = &cf_valid;
          local_b8 = local_178;
          local_d0 = &cf_provider;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_198
                    );
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_b0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c8,&local_e8,4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1a0 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          pcVar4 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
          if (pcVar4 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_190,
                       &cf_linkedMsgRepoCode);
          }
          puVar3 = local_110;
          puVar5 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_copy_0269d150);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _objc_storeStrong(&local_1a0);
          _objc_storeStrong(&local_190,0);
          _objc_storeStrong(&local_188,0);
          _objc_storeStrong(&local_180,0);
          _objc_storeStrong(&local_178,0);
          _objc_storeStrong(&local_170,0);
          _objc_storeStrong(&local_168,0);
          _objc_storeStrong(&local_160,0);
        }
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < local_1c0);
      local_1c0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
      local_1c8 = 0;
    } while (local_1c0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_108,PTR_s_setObject_forKey__026ca9e8,local_110,&cf_themeBoxAirDropThemeItems);
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

