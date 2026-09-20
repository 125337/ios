// setKeywordAlertKeywords: @ 01fe33b4

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setKeywordAlertKeywords_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  SEL SVar5;
  long lVar6;
  long lVar7;
  long local_308;
  undefined *local_2e0;
  undefined *local_2d8;
  long local_2b0;
  undefined1 *local_288;
  undefined1 *local_280;
  long local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  long local_1f0;
  undefined *local_1e8;
  long local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  long local_198;
  undefined *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined *local_168;
  undefined8 local_160;
  SEL local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = 0;
  local_158 = param_2;
  local_150 = (undefined *)param_1;
  _objc_storeStrong(&local_160,param_3);
  puVar2 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_168 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_keywordAlertManagedKeywordsFromL_026ca2e8,local_160);
  _objc_retainAutoreleasedReturnValue();
  local_170 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
  if (&segment_command_00000020.flags < puVar3) {
    local_140 = 0;
    local_148 = 100;
    local_138 = 0;
    local_130 = 100;
    local_180 = 0;
    local_178 = 100;
    puVar4 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_subarrayWithRange__0269d848,0,100);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_170;
    local_170 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar4 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0);
  puVar2 = local_168;
  puVar1 = local_170;
  if (puVar4 == (undefined1 *)0x0) {
    SVar5 = local_158;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(SVar5);
  }
  else {
    SVar5 = local_158;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setObject_forKey__026ca9e8,puVar1);
    (*(code *)PTR__objc_release_02578630)(SVar5);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar2 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_keywordAlertDisabledKeywords_026a3768);
  _objc_retainAutoreleasedReturnValue();
  local_188 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar2;
    _memset(auStack_1d8,0,0x40);
    puVar1 = local_170;
    (*(code *)PTR__objc_retain_02578638)();
    local_280 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,0x10);
    if (local_280 != (undefined1 *)0x0) {
      lVar6 = *local_1c8;
      local_288 = (undefined1 *)0x0;
      do {
        do {
          if (*local_1c8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1c8 - lVar6,puVar1);
          }
          lVar7 = *(long *)(local_1d0 + (long)local_288 * 8);
          local_198 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          local_2b0 = lVar7;
          if (lVar7 == 0) {
            local_2b0 = local_198;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1e0 = local_2b0;
          (*(code *)PTR__objc_release_02578630)(lVar7);
          lVar7 = local_1e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0);
          if (lVar7 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_addObject__0269d180,local_1e0);
          }
          _objc_storeStrong(&local_1e0,0);
          local_288 = local_288 + 1;
        } while (local_288 < local_280);
        local_280 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,
                   0x10);
        local_288 = (undefined1 *)0x0;
      } while (local_280 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = puVar2;
    _memset(auStack_230,0,0x40);
    puVar2 = local_188;
    (*(code *)PTR__objc_retain_02578638)();
    local_2d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,0x10);
    if (local_2d8 != (undefined *)0x0) {
      lVar6 = *local_220;
      local_2e0 = (undefined *)0x0;
      do {
        do {
          if (*local_220 - lVar6 != 0) {
            _objc_enumerationMutation(*local_220 - lVar6,puVar2);
          }
          lVar7 = *(long *)(local_228 + (long)local_2e0 * 8);
          local_1f0 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          local_308 = lVar7;
          if (lVar7 == 0) {
            local_308 = local_1f0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_238 = local_308;
          (*(code *)PTR__objc_release_02578630)(lVar7);
          lVar7 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_length_0269cca0);
          if ((lVar7 != 0) &&
             (puVar3 = local_190,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_190,PTR_s_containsObject__0269cbb8,local_238),
             ((ulong)puVar3 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_addObject__0269d180,local_1f0);
          }
          _objc_storeStrong(&local_238,0);
          local_2e0 = local_2e0 + 1;
        } while (local_2e0 < local_2d8);
        local_2d8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,
                   0x10);
        local_2e0 = (undefined *)0x0;
      } while (local_2d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
    puVar3 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0);
    if (puVar2 != puVar3) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_150,PTR_s_setKeywordAlertDisabledKeywords__026bef68,local_1e8);
    }
    _objc_storeStrong(&local_1e8);
    _objc_storeStrong(&local_190,0);
  }
  _objc_storeStrong(&local_188);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

