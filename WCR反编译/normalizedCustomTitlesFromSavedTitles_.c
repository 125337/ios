// normalizedCustomTitlesFromSavedTitles: @ 01cc5838

/* Function Stack Size: 0x18 bytes */

ID WCRefineProfileCardActionCatalog::normalizedCustomTitlesFromSavedTitles_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_2f0;
  undefined *local_2e8;
  uint local_2bc;
  uint local_27c;
  undefined *local_250;
  undefined *local_248;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  undefined *local_1d8;
  byte local_1c9;
  ID local_1c8;
  undefined *local_1c0;
  ulong local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined4 local_15c;
  undefined *local_158;
  ID local_150;
  undefined *local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = (undefined *)0x0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  IVar1 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_entryMap_026aed30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_150 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_148;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_158 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    FUN_01cc601c();
    _objc_retainAutoreleasedReturnValue();
    local_15c = 1;
    local_130 = puVar4;
  }
  else {
    _memset(auStack_1a8,0,0x40);
    puVar4 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_248 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_248 != (undefined *)0x0) {
      lVar6 = *local_198;
      local_250 = (undefined *)0x0;
      do {
        do {
          if (*local_198 - lVar6 != 0) {
            _objc_enumerationMutation(*local_198 - lVar6,puVar4);
          }
          local_168 = *(ulong *)(local_1a0 + (long)local_250 * 8);
          puVar2 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_objectForKey__0269e048,local_168);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_168;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1b0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
          puVar2 = local_1b0;
          if ((uVar5 & 1) == 0) {
LAB_01cc5aa4:
            local_15c = 3;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            uVar5 = local_168;
            if (((ulong)puVar2 & 1) == 0) goto LAB_01cc5aa4;
            puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = uVar5;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_1b0;
            puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            uVar5 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0);
            local_1c9 = 0;
            local_27c = 1;
            if (uVar5 != 0) {
              puVar2 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
              local_27c = 1;
              if (puVar2 != (undefined *)0x0) {
                IVar1 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_objectForKeyedSubscript__0269d098,local_1b8);
                _objc_retainAutoreleasedReturnValue();
                local_1c9 = 1;
                local_2bc = 0;
                local_1c8 = IVar1;
                if (IVar1 == 0) {
                  IVar1 = local_138;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_isCustomPageActionID__026b0670,local_1b8);
                  local_2bc = (uint)IVar1 ^ 1;
                }
                local_27c = local_2bc;
              }
            }
            if ((local_1c9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1c8);
            }
            if ((local_27c & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,local_1c0,local_1b8);
              local_15c = 0;
            }
            else {
              local_15c = 3;
            }
            _objc_storeStrong(&local_1c0);
            _objc_storeStrong(&local_1b8,0);
          }
          _objc_storeStrong(&local_1b0,0);
          local_250 = local_250 + 1;
        } while (local_250 < local_248);
        local_248 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_250 = (undefined *)0x0;
      } while (local_248 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)();
    FUN_01cc601c();
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = puVar4;
    _memset(auStack_220,0,0x40);
    puVar4 = local_1d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_2e8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128,0x10);
    if (local_2e8 != (undefined *)0x0) {
      lVar6 = *local_210;
      local_2f0 = (undefined *)0x0;
      do {
        do {
          if (*local_210 - lVar6 != 0) {
            _objc_enumerationMutation(*local_210 - lVar6,puVar4);
          }
          local_1e0 = *(undefined8 *)(local_218 + (long)local_2f0 * 8);
          puVar2 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_1e0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (puVar3 == (undefined *)0x0) {
            puVar2 = local_1d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1d8,PTR_s_objectForKeyedSubscript__0269d098,local_1e0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_1e0);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2e8);
        local_2e8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128,
                   0x10);
        local_2f0 = (undefined *)0x0;
      } while (local_2e8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_copy_0269d150);
    local_15c = 1;
    local_130 = puVar4;
    _objc_storeStrong(&local_1d8,0);
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

