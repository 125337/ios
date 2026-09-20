// mergeExtractedPluginTitles:forPluginClass: @ 014c5b00

/* Function Stack Size: 0x20 bytes */

void WCRefineSearchManager::mergeExtractedPluginTitles_forPluginClass_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_2f8;
  ulong local_2f0;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_268;
  undefined *local_240;
  undefined *local_238;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined *local_190;
  undefined *local_188;
  byte local_179;
  undefined *local_178;
  byte local_169;
  undefined *local_168;
  undefined *local_160;
  ID local_158;
  undefined4 local_14c;
  ulong local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  uVar6 = local_140;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar6 & 1) == 0) ||
     (uVar2 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0),
     uVar6 = local_148, uVar2 == 0)) {
    local_14c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
       uVar6 == 0)) {
      local_14c = 1;
    }
    else {
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_getViewControllerFriendlyName__026aa500,local_148);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_158 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((IVar3 & 1) == 0) {
        _objc_storeStrong(&local_158,&::cf___);
      }
      local_169 = 0;
      local_179 = 0;
      if (*(long *)(local_130 + 0x58) == 0) {
        local_268 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_179 = 1;
        local_178 = local_268;
      }
      else {
        local_268 = *(undefined **)(local_130 + 0x58);
        (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_mutableCopy_0269d8a0);
        local_169 = 1;
        local_168 = local_268;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = local_268;
      if ((local_179 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_178);
      }
      if ((local_169 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_168);
      }
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_160;
      local_188 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_objectForKeyedSubscript__0269d098,local_148);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_190 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)puVar4 & 1) != 0) {
        _memset(auStack_1d8,0,0x40);
        puVar1 = local_190;
        (*(code *)PTR__objc_retain_02578638)();
        local_298 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,
                   0x10);
        if (local_298 != (undefined *)0x0) {
          lVar5 = *local_1c8;
          local_2a0 = (undefined *)0x0;
          do {
            do {
              if (*local_1c8 - lVar5 != 0) {
                _objc_enumerationMutation(*local_1c8 - lVar5,puVar1);
              }
              uVar6 = *(ulong *)(local_1d0 + (long)local_2a0 * 8);
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_198 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
              if (((uVar6 & 1) != 0) &&
                 (uVar6 = local_198,
                 (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0),
                 puVar4 = local_188, uVar6 != 0)) {
                uVar6 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_copy_0269d150);
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(uVar6);
              }
              local_2a0 = local_2a0 + 1;
            } while (local_2a0 < local_298);
            local_298 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8
                       ,0x10);
            local_2a0 = (undefined *)0x0;
          } while (local_298 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      _memset(auStack_220,0,0x40);
      uVar6 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_2f0 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128,0x10)
      ;
      if (local_2f0 != 0) {
        lVar5 = *local_210;
        local_2f8 = 0;
        do {
          do {
            if (*local_210 - lVar5 != 0) {
              _objc_enumerationMutation(*local_210 - lVar5,uVar6);
            }
            uVar7 = *(ulong *)(local_218 + local_2f8 * 8);
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1e0 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar1);
            uVar2 = local_1e0;
            if ((uVar7 & 1) != 0) {
              puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_228 = uVar2;
              (*(code *)PTR__objc_release_02578630)(puVar1);
              uVar2 = local_228;
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_length_0269cca0);
              if (uVar2 == 0) {
                local_14c = 5;
              }
              else {
                uVar2 = local_228;
                (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_lowercaseString_0269d9c0);
                _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_230 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf____C___C__);
                _objc_retainAutoreleasedReturnValue();
                local_238 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_addObject__0269d180,puVar1);
                _objc_storeStrong(&local_238);
                _objc_storeStrong(&local_230,0);
                local_14c = 0;
              }
              _objc_storeStrong(&local_228,0);
            }
            local_2f8 = local_2f8 + 1;
          } while (local_2f8 < local_2f0);
          local_2f0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128,
                     0x10);
          local_2f8 = 0;
        } while (local_2f0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      puVar1 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0);
      if (puVar1 != (undefined *)0x0) {
        puVar1 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_allObjects_0269d228);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_240 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,local_240,local_148);
        _objc_storeStrong(local_130 + 0x58,local_160);
        _objc_storeStrong(&local_240,0);
      }
      _objc_storeStrong(&local_190);
      _objc_storeStrong(&local_188,0);
      _objc_storeStrong(&local_160,0);
      _objc_storeStrong(&local_158,0);
      local_14c = 0;
    }
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

