// rawLongPressDiscoveredItems @ 010fc76c

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginIconCatalog::rawLongPressDiscoveredItems(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *local_268;
  undefined *local_218;
  undefined *local_210;
  bool local_1c9;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1b8;
  undefined *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  cfstringStruct *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined4 local_13c;
  undefined *local_138;
  SEL local_130;
  ID local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_130 = param_2;
  local_128 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_138;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_13c = 1;
    local_120 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_148 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_150 = puVar1;
    _memset(auStack_198,0,0x40);
    puVar2 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_210 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
    if (local_210 != (undefined *)0x0) {
      lVar8 = *local_188;
      local_218 = (undefined *)0x0;
      do {
        do {
          if (*local_188 - lVar8 != 0) {
            _objc_enumerationMutation(*local_188 - lVar8,puVar2);
          }
          pcVar9 = *(cfstringStruct **)(local_190 + (long)local_218 * 8);
          puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_158 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((ulong)pcVar9 & 1) != 0) {
            pcVar9 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar9;
            FUN_010f4f48();
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar9);
            pcVar9 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar9;
            FUN_010f4f48();
            _objc_retainAutoreleasedReturnValue();
            local_1a8 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar9);
            pcVar9 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
            if (((pcVar9 == (cfstringStruct *)0x0) ||
                (pcVar9 = local_1a8,
                (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0),
                pcVar9 == (cfstringStruct *)0x0)) ||
               (puVar1 = local_150,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_150,PTR_s_containsObject__0269cbb8,local_1a0),
               ((ulong)puVar1 & 1) != 0)) {
              local_13c = 3;
            }
            else {
              pcVar9 = local_1a0;
              _WCRLongPressMenuItemIsNative();
              if ((((ulong)pcVar9 & 1) == 0) &&
                 (pcVar9 = local_1a0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_1a0,PTR_s_hasPrefix__0269d320,&cf_plugin_title_),
                 ((ulong)pcVar9 & 1) == 0)) {
                local_13c = 3;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1a0)
                ;
                local_118 = &cf_id;
                local_e0 = local_1a0;
                local_110 = &cf_title;
                local_d8 = local_1a8;
                local_108 = &cf_icon;
                pcVar9 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_objectForKeyedSubscript__0269d098);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = pcVar9;
                FUN_010f4f48();
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = pcVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                if (pcVar4 == (cfstringStruct *)0x0) {
                  local_268 = &cf_icons_outlined_more_circle;
                }
                else {
                  local_1b8 = local_158;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
                  _objc_retainAutoreleasedReturnValue();
                  local_268 = local_1b8;
                  FUN_010f4f48();
                  _objc_retainAutoreleasedReturnValue();
                  local_1c8 = local_268;
                }
                local_1c9 = pcVar4 != (cfstringStruct *)0x0;
                local_d0 = local_268;
                local_100 = &cf_detail;
                pcVar4 = local_1a0;
                _WCRLongPressMenuItemIsNative();
                local_c8 = &cf__eUS;
                if (((ulong)pcVar4 & 1) == 0) {
                  local_c8 = &cf___Ne_;
                }
                local_f8 = &cf_category;
                puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
                _objc_retainAutoreleasedReturnValue();
                local_f0 = &cf_supports_sort;
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_c0 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                local_e8 = &cf_kind;
                pcVar4 = local_1a0;
                local_b8 = puVar5;
                _WCRLongPressMenuItemIsNative();
                local_b0 = &cf_native;
                if (((ulong)pcVar4 & 1) == 0) {
                  local_b0 = &cf_plugin;
                }
                puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e0,&local_118,7);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_1b0 = puVar7;
                (*(code *)PTR__objc_release_02578630)(puVar6);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                (*(code *)PTR__objc_release_02578630)(puVar1);
                if (local_1c9) {
                  (*(code *)PTR__objc_release_02578630)(local_1c8);
                  (*(code *)PTR__objc_release_02578630)(local_1b8);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                (*(code *)PTR__objc_release_02578630)(pcVar9);
                pcVar9 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_menuType);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_release_02578630)();
                if (pcVar9 != (cfstringStruct *)0x0) {
                  pcVar9 = local_158;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_158,PTR_s_objectForKeyedSubscript__0269d098);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b0,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar9,
                             &cf_menuType);
                  (*(code *)PTR__objc_release_02578630)(pcVar9);
                }
                puVar1 = local_148;
                puVar5 = local_1b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_copy_0269d150);
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                _objc_storeStrong(&local_1b0,0);
                local_13c = 0;
              }
            }
            _objc_storeStrong(&local_1a8);
            _objc_storeStrong(&local_1a0,0);
          }
          local_218 = local_218 + 1;
        } while (local_218 < local_210);
        local_210 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                   0x10);
        local_218 = (undefined *)0x0;
      } while (local_210 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_copy_0269d150);
    local_13c = 1;
    local_120 = puVar2;
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_120;
}

