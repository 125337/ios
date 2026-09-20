// customEntryDefinitions @ 017775c8

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginHubManager::customEntryDefinitions(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_2b0;
  undefined *local_260;
  undefined *local_258;
  undefined *local_220;
  ulong local_218;
  ulong local_210;
  ulong local_208;
  byte local_1f9;
  undefined *local_1f8;
  byte local_1e9;
  undefined *local_1e8;
  byte local_1d9;
  ulong local_1d8;
  undefined *local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  undefined *local_168;
  int local_15c;
  undefined *local_158;
  SEL local_150;
  ID local_148;
  undefined *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  ulong local_110;
  ulong local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_150 = param_2;
  local_148 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_158;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_15c = 1;
    local_140 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar2;
    _memset(auStack_1b0,0,0x40);
    puVar2 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_258 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10);
    if (local_258 != (undefined *)0x0) {
      lVar5 = *local_1a0;
      local_260 = (undefined *)0x0;
      do {
        do {
          if (*local_1a0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar5,puVar2);
          }
          uVar6 = *(ulong *)(local_1a8 + (long)local_260 * 8);
          puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_170 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar3 = local_170;
          if ((uVar6 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1b8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            FUN_0176d368();
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            uVar3 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            FUN_0176d368();
            _objc_retainAutoreleasedReturnValue();
            local_1c8 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            uVar3 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
            _objc_retainAutoreleasedReturnValue();
            local_2b0 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_1d9 = 0;
            local_1e9 = 0;
            local_1f9 = 0;
            if (uVar3 == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              local_1f9 = 1;
              local_1f8 = local_2b0;
            }
            else {
              uVar6 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
              _objc_retainAutoreleasedReturnValue();
              local_1d9 = 1;
              local_1d8 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_numberWithBool__0269ce60,uVar6);
              _objc_retainAutoreleasedReturnValue();
              local_1e9 = 1;
              local_1e8 = local_2b0;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_1d0 = local_2b0;
            if ((local_1f9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1f8);
            }
            if ((local_1e9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1e8);
            }
            if ((local_1d9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1d8);
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            uVar3 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_isEqualToString__0269ccc8,&cf_controller);
            if ((uVar3 & 1) == 0) {
              uVar3 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_isEqualToString__0269ccc8,&cf_switch);
              if ((uVar3 & 1) != 0) {
                uVar3 = local_1b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar3;
                FUN_0176d368();
                _objc_retainAutoreleasedReturnValue();
                local_210 = uVar6;
                (*(code *)PTR__objc_release_02578630)(uVar3);
                uVar3 = local_1c8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
                if ((uVar3 == 0) ||
                   (uVar3 = local_210,
                   (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_length_0269cca0),
                   uVar3 == 0)) {
                  local_15c = 3;
                }
                else {
                  uVar3 = local_1b8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar3;
                  FUN_0176f7a0();
                  _objc_retainAutoreleasedReturnValue();
                  local_218 = uVar6;
                  (*(code *)PTR__objc_release_02578630)(uVar3);
                  local_138 = &cf_kind;
                  local_118 = &cf_switch;
                  local_130 = &cf_title;
                  local_110 = local_1c8;
                  local_128 = &cf_key;
                  local_108 = local_210;
                  local_120 = &cf_enabled;
                  local_100 = local_1d0;
                  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,
                             PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_118,&local_138,4
                            );
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_220 = puVar4;
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                  uVar3 = local_218;
                  (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_length_0269cca0);
                  if (uVar3 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_220,PTR_s_setObject_forKeyedSubscript__0269d248,local_218,
                               &cf_storage);
                  }
                  puVar1 = local_168;
                  puVar4 = local_220;
                  (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_copy_0269d150);
                  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  _objc_storeStrong(&local_220);
                  _objc_storeStrong(&local_218,0);
                  local_15c = 0;
                }
                _objc_storeStrong(&local_210,0);
                if (local_15c != 0) goto LAB_01777f70;
              }
LAB_01777f68:
              local_15c = 0;
            }
            else {
              uVar3 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar3;
              FUN_0176d368();
              _objc_retainAutoreleasedReturnValue();
              local_208 = uVar6;
              (*(code *)PTR__objc_release_02578630)(uVar3);
              uVar3 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
              if ((uVar3 == 0) ||
                 (uVar3 = local_208,
                 (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_length_0269cca0),
                 puVar1 = local_168, uVar3 == 0)) {
                local_15c = 3;
              }
              else {
                local_f8 = &cf_kind;
                local_d0 = &cf_controller;
                local_f0 = &cf_title;
                local_c8 = local_1c8;
                local_e8 = &cf_version;
                uVar3 = local_1b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_objectForKeyedSubscript__0269d098);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar3;
                FUN_0176d368();
                _objc_retainAutoreleasedReturnValue();
                local_e0 = &cf_controller;
                local_b8 = local_208;
                local_d8 = &cf_enabled;
                local_b0 = local_1d0;
                puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_c0 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar4);
                (*(code *)PTR__objc_release_02578630)(uVar6);
                (*(code *)PTR__objc_release_02578630)(uVar3);
                local_15c = 0;
              }
              _objc_storeStrong(&local_208,0);
              if (local_15c == 0) goto LAB_01777f68;
            }
LAB_01777f70:
            _objc_storeStrong(&local_1d0);
            _objc_storeStrong(&local_1c8,0);
            _objc_storeStrong(&local_1c0,0);
            _objc_storeStrong(&local_1b8,0);
          }
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                   0x10);
        local_260 = (undefined *)0x0;
      } while (local_258 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_168;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = puVar2;
    local_15c = 1;
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_140;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

