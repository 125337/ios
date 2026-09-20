// normalizedCustomFeatureEntriesFromConfig: @ 01c8bb24

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginFeatureManagementViewController::normalizedCustomFeatureEntriesFromConfig_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_270;
  cfstringStruct *local_258;
  cfstringStruct *local_240;
  cfstringStruct *local_228;
  cfstringStruct *local_210;
  cfstringStruct *local_1f8;
  ulong local_1c8;
  ulong local_1c0;
  undefined *local_1a0;
  undefined4 local_198;
  bool local_191;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  bool local_179;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  bool local_159;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  bool local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  bool local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  undefined *local_d0;
  ulong local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_pluginFeatureCustomEntries_026a8400);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  _memset(auStack_118,0,0x40);
  uVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_1c0 != 0) {
    lVar6 = *local_108;
    local_1c8 = 0;
    do {
      do {
        if (*local_108 - lVar6 != 0) {
          _objc_enumerationMutation(*local_108 - lVar6,uVar2);
        }
        pcVar7 = *(cfstringStruct **)(local_110 + local_1c8 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d8 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar7 & 1) != 0) {
          pcVar7 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar4 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_129 = false;
          bVar1 = ((ulong)pcVar4 & 1) == 0;
          if (bVar1) {
            local_1f8 = &::cf___;
          }
          else {
            local_1f8 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            local_128 = local_1f8;
          }
          local_129 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_1f8;
          if ((local_129 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          pcVar7 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar4 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_141 = false;
          bVar1 = ((ulong)pcVar4 & 1) == 0;
          if (bVar1) {
            local_210 = &::cf___;
          }
          else {
            local_210 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
            _objc_retainAutoreleasedReturnValue();
            local_140 = local_210;
          }
          local_141 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = local_210;
          if ((local_141 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_140);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          pcVar7 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar4 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_159 = false;
          bVar1 = ((ulong)pcVar4 & 1) == 0;
          if (bVar1) {
            local_228 = &::cf___;
          }
          else {
            local_228 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_158 = local_228;
          }
          local_159 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_150 = local_228;
          if ((local_159 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_158);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          pcVar7 = local_150;
          FUN_01c8c5e8(local_150,local_138);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_d8;
          local_168 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_selector);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar7 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_179 = false;
          bVar1 = ((ulong)pcVar7 & 1) == 0;
          if (bVar1) {
            local_240 = &::cf___;
          }
          else {
            local_240 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_selector);
            _objc_retainAutoreleasedReturnValue();
            local_178 = local_240;
          }
          local_179 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_170 = local_240;
          if ((local_179 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_178);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar7 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_source_plugin);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar4 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_191 = false;
          bVar1 = ((ulong)pcVar4 & 1) == 0;
          if (bVar1) {
            local_258 = &::cf___;
          }
          else {
            local_258 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_source_plugin);
            _objc_retainAutoreleasedReturnValue();
            local_190 = local_258;
          }
          local_191 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_188 = local_258;
          if ((local_191 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_190);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          pcVar7 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
          if (((pcVar7 == (cfstringStruct *)0x0) ||
              (pcVar7 = local_120,
              (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0),
              pcVar7 == (cfstringStruct *)0x0)) ||
             (pcVar7 = local_138,
             (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
             pcVar7 == (cfstringStruct *)0x0)) {
            local_198 = 3;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_168,&cf_id);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_120,&cf_title);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_138,
                       &cf_controller);
            pcVar7 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
            if (pcVar7 == (cfstringStruct *)0x0) {
              local_270 = &cf_openCustomPluginFeature_;
            }
            else {
              local_270 = local_170;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_270,&cf_selector)
            ;
            pcVar7 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
            if (pcVar7 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_188,
                         &cf_source_plugin);
            }
            puVar3 = local_d0;
            puVar5 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_copy_0269d150);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            _objc_storeStrong(&local_1a0,0);
            local_198 = 0;
          }
          _objc_storeStrong(&local_188);
          _objc_storeStrong(&local_170,0);
          _objc_storeStrong(&local_168,0);
          _objc_storeStrong(&local_150,0);
          _objc_storeStrong(&local_138,0);
          _objc_storeStrong(&local_120,0);
        }
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < local_1c0);
      local_1c0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_1c8 = 0;
    } while (local_1c0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
  local_198 = 1;
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

