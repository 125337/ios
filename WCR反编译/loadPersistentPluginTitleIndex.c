// loadPersistentPluginTitleIndex @ 014c49d4

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchManager::loadPersistentPluginTitleIndex(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *local_370;
  undefined1 *local_368;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  undefined *local_1d8;
  undefined1 *local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  ulong local_188;
  undefined *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined4 local_15c;
  undefined1 *local_158;
  ID local_150 [3];
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentPluginIndexSignature_026af638);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(local_130 + 0x60);
  *(ID *)(local_130 + 0x60) = param_1;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_searchIndexFilePath_026af640);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_150[0] = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithContentsOfFile__026a3348,
             IVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_158 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    local_15c = 1;
    goto LAB_014c5330;
  }
  puVar5 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_version);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_158;
  local_168 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_signature);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = local_158;
  local_170 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_index)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_168;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_178 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)puVar5 & 1) == 0) ||
     (puVar6 = local_168,
     (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_integerValue_026ca750),
     puVar5 = local_170, (dword *)puVar6 != &MACH_HEADER.ncmds)) {
LAB_014c4d54:
    local_15c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)puVar5 & 1) == 0) ||
       (puVar6 = local_170,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_170,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(local_130 + 0x60)),
       puVar5 = local_178, ((ulong)puVar6 & 1) == 0)) goto LAB_014c4d54;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar5 & 1) == 0) goto LAB_014c4d54;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar3;
    _memset(auStack_1c8,0,0x40);
    puVar5 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_2e8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2e8 != (undefined1 *)0x0) {
      lVar8 = *local_1b8;
      local_2f0 = (undefined1 *)0x0;
      do {
        do {
          if (*local_1b8 - lVar8 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar8,puVar5);
          }
          uVar9 = *(ulong *)(local_1c0 + (long)local_2f0 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_188 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar9 & 1) != 0) {
            puVar6 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_objectForKeyedSubscript__0269d098,local_188);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_1d0 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)puVar6 & 1) == 0) {
              local_15c = 4;
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              local_1d8 = puVar3;
              _memset(auStack_220,0,0x40);
              puVar6 = local_1d0;
              (*(code *)PTR__objc_retain_02578638)();
              local_368 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                         auStack_128,0x10);
              if (local_368 != (undefined1 *)0x0) {
                lVar10 = *local_210;
                local_370 = (undefined1 *)0x0;
                do {
                  do {
                    if (*local_210 - lVar10 != 0) {
                      _objc_enumerationMutation(*local_210 - lVar10,puVar6);
                    }
                    uVar9 = *(ulong *)(local_218 + (long)local_370 * 8);
                    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    local_1e0 = uVar9;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
                    if (((uVar9 & 1) != 0) &&
                       (uVar9 = local_1e0,
                       (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0),
                       puVar3 = local_1d8, uVar9 != 0)) {
                      uVar9 = local_1e0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_copy_0269d150);
                      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,uVar9);
                      (*(code *)PTR__objc_release_02578630)(uVar9);
                    }
                    local_370 = local_370 + 1;
                  } while (local_370 < local_368);
                  local_368 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                             auStack_128,0x10);
                  local_370 = (undefined1 *)0x0;
                } while (local_368 != (undefined1 *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar6);
              puVar3 = local_1d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_count_0269cfe0);
              if (puVar3 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_setObject_forKeyedSubscript__0269d248,local_1d8,local_188
                          );
              }
              _objc_storeStrong(&local_1d8,0);
              local_15c = 0;
            }
            _objc_storeStrong(&local_1d0,0);
          }
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2e8);
        local_2e8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,
                   0x10);
        local_2f0 = (undefined1 *)0x0;
      } while (local_2e8 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(local_130 + 0x58,local_180);
    _objc_storeStrong(&local_180,0);
    local_15c = 0;
  }
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_168,0);
LAB_014c5330:
  _objc_storeStrong(&local_158);
  _objc_storeStrong(local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

