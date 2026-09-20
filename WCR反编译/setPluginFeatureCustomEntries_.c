// setPluginFeatureCustomEntries: @ 02048878

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setPluginFeatureCustomEntries_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  SEL SVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *local_270;
  cfstringStruct *local_250;
  cfstringStruct *local_238;
  cfstringStruct *local_220;
  cfstringStruct *local_208;
  cfstringStruct *local_1f0;
  ulong local_1c0;
  ulong local_1b8;
  undefined *local_198;
  undefined4 local_190;
  bool local_189;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  bool local_171;
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
  ID local_c8;
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
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar4;
  _memset(auStack_118,0,0x40);
  uVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_1b8 != 0) {
    lVar8 = *local_108;
    local_1c0 = 0;
    do {
      do {
        if (*local_108 - lVar8 != 0) {
          _objc_enumerationMutation(*local_108 - lVar8,uVar2);
        }
        pcVar9 = *(cfstringStruct **)(local_110 + local_1c0 * 8);
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d8 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)pcVar9 & 1) != 0) {
          pcVar9 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_129 = false;
          bVar1 = ((ulong)pcVar5 & 1) == 0;
          if (bVar1) {
            local_1f0 = &::cf___;
          }
          else {
            local_1f0 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_128 = local_1f0;
          }
          local_129 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_1f0;
          if ((local_129 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          pcVar9 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_141 = false;
          bVar1 = ((ulong)pcVar5 & 1) == 0;
          if (bVar1) {
            local_208 = &::cf___;
          }
          else {
            local_208 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            local_140 = local_208;
          }
          local_141 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = local_208;
          if ((local_141 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_140);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          pcVar9 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_controller);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_159 = false;
          bVar1 = ((ulong)pcVar5 & 1) == 0;
          if (bVar1) {
            local_220 = &::cf___;
          }
          else {
            local_220 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKey__0269e048,&cf_controller);
            _objc_retainAutoreleasedReturnValue();
            local_158 = local_220;
          }
          local_159 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_150 = local_220;
          if ((local_159 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_158);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          pcVar9 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKey__0269e048,&cf_selector);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_171 = false;
          bVar1 = ((ulong)pcVar5 & 1) == 0;
          if (bVar1) {
            local_238 = &::cf___;
          }
          else {
            local_238 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKey__0269e048,&cf_selector);
            _objc_retainAutoreleasedReturnValue();
            local_170 = local_238;
          }
          local_171 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_168 = local_238;
          if ((local_171 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_170);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          pcVar9 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKey__0269e048,&cf_source_plugin);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_189 = false;
          bVar1 = ((ulong)pcVar5 & 1) == 0;
          if (bVar1) {
            local_250 = &::cf___;
          }
          else {
            local_250 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKey__0269e048,&cf_source_plugin);
            _objc_retainAutoreleasedReturnValue();
            local_188 = local_250;
          }
          local_189 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_180 = local_250;
          if ((local_189 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_188);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          pcVar9 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
          if (((pcVar9 == (cfstringStruct *)0x0) ||
              (pcVar9 = local_138,
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
              pcVar9 == (cfstringStruct *)0x0)) ||
             (pcVar9 = local_150,
             (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0),
             pcVar9 == (cfstringStruct *)0x0)) {
            local_190 = 3;
          }
          else {
            puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
            _objc_retainAutoreleasedReturnValue();
            local_198 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_setObject_forKey__026ca9e8,local_120,&cf_id);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_198,PTR_s_setObject_forKey__026ca9e8,local_138,&cf_title);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_198,PTR_s_setObject_forKey__026ca9e8,local_150,&cf_controller);
            puVar4 = local_198;
            pcVar9 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
            if (pcVar9 == (cfstringStruct *)0x0) {
              local_270 = &cf_openCustomPluginFeature_;
            }
            else {
              local_270 = local_168;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_setObject_forKey__026ca9e8,local_270,&cf_selector);
            pcVar9 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
            if (pcVar9 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKey__026ca9e8,local_180,&cf_source_plugin);
            }
            puVar4 = local_d0;
            puVar6 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_copy_0269d150);
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            _objc_storeStrong(&local_198,0);
            local_190 = 0;
          }
          _objc_storeStrong(&local_180);
          _objc_storeStrong(&local_168,0);
          _objc_storeStrong(&local_150,0);
          _objc_storeStrong(&local_138,0);
          _objc_storeStrong(&local_120,0);
        }
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_1b8);
      local_1b8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_1c0 = 0;
    } while (local_1b8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  IVar3 = local_c8;
  if (puVar4 == (undefined *)0x0) {
    SVar7 = local_b8;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(SVar7);
  }
  else {
    puVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    SVar7 = local_b8;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setObject_forKey__026ca9e8,puVar4);
    (*(code *)PTR__objc_release_02578630)(SVar7);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

