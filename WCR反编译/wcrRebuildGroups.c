// wcrRebuildGroups @ 017c4c54

/* Function Stack Size: 0x10 bytes */

void WCRefineAIPersonaLibraryViewController::wcrRebuildGroups(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_478;
  undefined *local_470;
  undefined *local_438;
  undefined *local_430;
  undefined *local_3f8;
  undefined *local_3f0;
  undefined *local_3c8;
  undefined *local_3b0;
  undefined8 local_398;
  undefined1 auStack_388 [8];
  long local_380;
  long *local_378;
  ulong local_348;
  undefined *local_340;
  undefined1 auStack_338 [8];
  long local_330;
  long *local_328;
  undefined8 local_2f8;
  undefined4 local_2ec;
  long local_2e8;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  long local_2a0;
  undefined *local_298;
  byte local_289;
  undefined *local_288;
  byte local_279;
  undefined *local_278;
  undefined *local_270;
  byte local_261;
  undefined *local_260;
  byte local_251;
  undefined *local_250;
  byte local_241;
  undefined *local_240;
  byte local_231;
  undefined *local_230;
  byte local_221;
  undefined *local_220;
  SEL local_218;
  ID local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined1 auStack_1d8 [128];
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_218 = param_2;
  local_210 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_210;
  local_220 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
  puVar1 = local_220;
  local_221 = (byte)IVar2;
  local_58 = &cf_title;
  if ((IVar2 & 1) == 0) {
    local_398 = _WCRAICustomPersonaCategory;
  }
  else {
    local_398 = _WCRAICustomGroupAnalysisCategory;
  }
  local_40 = local_398;
  local_50 = &cf_custom;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  local_48 = &cf_items;
  local_231 = 0;
  local_241 = 0;
  local_251 = 0;
  local_261 = 0;
  local_3b0 = PTR_WCRefineAIStore_026ce048;
  local_38 = puVar3;
  if ((local_221 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_251 = 1;
    local_250 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_261 = 1;
    local_260 = local_3b0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_231 = 1;
    local_230 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_241 = 1;
    local_240 = local_3b0;
  }
  local_30 = local_3b0;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_40,&local_58,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if ((local_261 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_260);
  }
  if ((local_251 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_250);
  }
  if ((local_241 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_240);
  }
  if ((local_231 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_230);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_279 = 0;
  local_289 = 0;
  local_3c8 = PTR_WCRefineAIStore_026ce048;
  if ((local_221 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAIStore_026ce048,PTR_s_personaPresets_026aac50);
    _objc_retainAutoreleasedReturnValue();
    local_289 = 1;
    local_288 = local_3c8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAIStore_026ce048,PTR_s_groupAnalysisPresets_026aac60);
    _objc_retainAutoreleasedReturnValue();
    local_279 = 1;
    local_278 = local_3c8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_270 = local_3c8;
  if ((local_289 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_288);
  }
  if ((local_279 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_278);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_298 = puVar1;
  _memset(auStack_2e0,0,0x40);
  puVar1 = local_270;
  (*(code *)PTR__objc_retain_02578638)();
  local_3f0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_d8,0x10);
  if (local_3f0 != (undefined *)0x0) {
    lVar7 = *local_2d0;
    local_3f8 = (undefined *)0x0;
    do {
      do {
        if (*local_2d0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_2d0 - lVar7,puVar1);
        }
        lVar8 = *(long *)(local_2d8 + (long)local_3f8 * 8);
        local_2a0 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_category);
        _objc_retainAutoreleasedReturnValue();
        local_2e8 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
        if ((lVar8 == 0) ||
           (puVar3 = local_298,
           (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_containsObject__0269cbb8,local_2e8)
           , ((ulong)puVar3 & 1) != 0)) {
          local_2ec = 3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_addObject__0269d180,local_2e8);
          local_2ec = 0;
        }
        _objc_storeStrong(&local_2e8,0);
        local_3f8 = local_3f8 + 1;
      } while (local_3f8 < local_3f0);
      local_3f0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_d8,0x10)
      ;
      local_3f8 = (undefined *)0x0;
    } while (local_3f0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _memset(auStack_338,0,0x40);
  puVar1 = local_298;
  (*(code *)PTR__objc_retain_02578638)();
  local_430 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_158,0x10);
  if (local_430 != (undefined *)0x0) {
    lVar7 = *local_328;
    local_438 = (undefined *)0x0;
    do {
      do {
        if (*local_328 - lVar7 != 0) {
          _objc_enumerationMutation(*local_328 - lVar7,puVar1);
        }
        local_2f8 = *(undefined8 *)(local_330 + (long)local_438 * 8);
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_340 = puVar3;
        _memset(auStack_388,0,0x40);
        puVar3 = local_270;
        (*(code *)PTR__objc_retain_02578638)();
        local_470 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_388,auStack_1d8,
                   0x10);
        if (local_470 != (undefined *)0x0) {
          lVar8 = *local_378;
          local_478 = (undefined *)0x0;
          do {
            do {
              if (*local_378 - lVar8 != 0) {
                _objc_enumerationMutation(*local_378 - lVar8,puVar3);
              }
              uVar9 = *(ulong *)(local_380 + (long)local_478 * 8);
              local_348 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_category);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar9);
              if ((uVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_addObject__0269d180,local_348)
                ;
              }
              local_478 = local_478 + 1;
            } while (local_478 < local_470);
            local_470 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_388,
                       auStack_1d8,0x10);
            local_478 = (undefined *)0x0;
          } while (local_470 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_220;
        local_208 = &cf_title;
        local_1f0 = local_2f8;
        local_200 = &cf_custom;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = &cf_items;
        local_1e0 = local_340;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_1e8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1f0,&local_208,3);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_340,0);
        local_438 = local_438 + 1;
      } while (local_438 < local_430);
      local_430 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_158,0x10
                );
      local_438 = (undefined *)0x0;
    } while (local_430 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setGroups__026abf30,local_220);
  _objc_storeStrong(&local_298);
  _objc_storeStrong(&local_270,0);
  _objc_storeStrong(&local_220,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

