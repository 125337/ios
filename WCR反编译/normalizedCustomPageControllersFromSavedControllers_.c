// normalizedCustomPageControllersFromSavedControllers: @ 01cc60dc

/* Function Stack Size: 0x18 bytes */

ID WCRefineProfileCardActionCatalog::normalizedCustomPageControllersFromSavedControllers_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  long lVar6;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_238;
  undefined *local_230;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  ulong local_1b0;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  undefined4 local_154;
  undefined *local_150;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_148;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_150 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    FUN_01cc67c4();
    _objc_retainAutoreleasedReturnValue();
    local_154 = 1;
    local_130 = puVar3;
  }
  else {
    _memset(auStack_1a0,0,0x40);
    puVar3 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_230 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_230 != (undefined *)0x0) {
      lVar6 = *local_190;
      local_238 = (undefined *)0x0;
      do {
        do {
          if (*local_190 - lVar6 != 0) {
            _objc_enumerationMutation(*local_190 - lVar6,puVar3);
          }
          local_160 = *(ulong *)(local_198 + (long)local_238 * 8);
          puVar1 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_objectForKey__0269e048,local_160);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_160;
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1a8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          puVar1 = local_1a8;
          if ((uVar4 & 1) == 0) {
LAB_01cc6324:
            local_154 = 3;
          }
          else {
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
            uVar4 = local_160;
            if (((ulong)puVar1 & 1) == 0) goto LAB_01cc6324;
            puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = uVar4;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            puVar1 = local_1a8;
            puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = puVar1;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            IVar5 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_isCustomPageActionID__026b0670,local_1b0);
            if (((IVar5 & 1) == 0) ||
               (puVar1 = local_1b8,
               (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0),
               puVar1 == (undefined *)0x0)) {
              local_154 = 3;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,local_1b8,local_1b0);
              local_154 = 0;
            }
            _objc_storeStrong(&local_1b8);
            _objc_storeStrong(&local_1b0,0);
          }
          _objc_storeStrong(&local_1a8,0);
          local_238 = local_238 + 1;
        } while (local_238 < local_230);
        local_230 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                   0x10);
        local_238 = (undefined *)0x0;
      } while (local_230 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)();
    FUN_01cc67c4();
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = puVar3;
    _memset(auStack_208,0,0x40);
    puVar3 = local_1c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_2c0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,0x10);
    if (local_2c0 != (undefined *)0x0) {
      lVar6 = *local_1f8;
      local_2c8 = (undefined *)0x0;
      do {
        do {
          if (*local_1f8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar6,puVar3);
          }
          local_1c8 = *(undefined8 *)(local_200 + (long)local_2c8 * 8);
          puVar1 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_objectForKeyedSubscript__0269d098,local_1c8);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar1);
          if (puVar2 == (undefined *)0x0) {
            puVar1 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_objectForKeyedSubscript__0269d098,local_1c8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,local_1c8);
            (*(code *)PTR__objc_release_02578630)(puVar1);
          }
          local_2c8 = local_2c8 + 1;
        } while (local_2c8 < local_2c0);
        local_2c0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                   0x10);
        local_2c8 = (undefined *)0x0;
      } while (local_2c0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
    local_154 = 1;
    local_130 = puVar3;
    _objc_storeStrong(&local_1c0,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

