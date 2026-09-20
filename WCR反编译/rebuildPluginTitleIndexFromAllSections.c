// rebuildPluginTitleIndexFromAllSections @ 014c64a8

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchManager::rebuildPluginTitleIndexFromAllSections(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_698;
  undefined *local_690;
  cfstringStruct *local_5f0;
  cfstringStruct *local_5e8;
  undefined *local_500;
  undefined *local_4f8;
  ulong local_468;
  ulong local_460;
  undefined *local_428;
  undefined *local_410;
  undefined *local_408;
  undefined1 auStack_400 [8];
  long local_3f8;
  long *local_3f0;
  undefined8 local_3c0;
  undefined *local_3b0;
  ID local_3a8;
  ID local_3a0;
  ID local_398;
  undefined1 auStack_390 [8];
  long local_388;
  long *local_380;
  undefined8 local_350;
  cfstringStruct *local_348;
  ID local_340;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  undefined1 auStack_328 [8];
  long local_320;
  long *local_318;
  ulong local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined4 local_2cc;
  cfstringStruct *local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  cfstringStruct *local_280;
  undefined *local_278;
  byte local_269;
  undefined *local_268;
  byte local_259;
  undefined *local_258;
  undefined *local_240;
  SEL local_238;
  ID local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_259 = 0;
  local_269 = 0;
  local_238 = param_2;
  local_230 = param_1;
  if (*(long *)(param_1 + 0x58) == 0) {
    local_428 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_269 = 1;
    local_268 = local_428;
  }
  else {
    local_428 = *(undefined **)(param_1 + 0x58);
    (*(code *)PTR__objc_msgSend_02578628)(local_428,PTR_s_mutableCopy_0269d8a0);
    local_259 = 1;
    local_258 = local_428;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_240 = local_428;
  if ((local_269 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_268);
  }
  if ((local_259 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_258);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_278 = puVar1;
  _memset(auStack_2c0,0,0x40);
  uVar2 = *(ulong *)(local_230 + 0x10);
  (*(code *)PTR__objc_retain_02578638)();
  local_460 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_a8,0x10);
  if (local_460 != 0) {
    lVar7 = *local_2b0;
    local_468 = 0;
    do {
      do {
        if (*local_2b0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_2b0 - lVar7,uVar2);
        }
        pcVar8 = *(cfstringStruct **)(local_2b8 + local_468 * 8);
        local_280 = pcVar8;
        if (pcVar8 != (cfstringStruct *)0x0) {
          _objc_getAssociatedObject(pcVar8,"pluginSourceClass");
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_2c8 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((((ulong)pcVar8 & 1) == 0) ||
             (pcVar8 = local_2c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_length_0269cca0),
             pcVar8 == (cfstringStruct *)0x0)) {
            local_2cc = 4;
          }
          else {
            puVar1 = local_278;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_278,PTR_s_objectForKeyedSubscript__0269d098,local_2c8);
            _objc_retainAutoreleasedReturnValue();
            local_2d8 = puVar1;
            if (puVar1 == (undefined *)0x0) {
              puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = local_2d8;
              local_2d8 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar1);
              puVar1 = local_240;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_240,PTR_s_objectForKeyedSubscript__0269d098,local_2c8);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              local_2e0 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((ulong)puVar1 & 1) != 0) {
                _memset(auStack_328,0,0x40);
                puVar1 = local_2e0;
                (*(code *)PTR__objc_retain_02578638)();
                local_4f8 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,
                           auStack_128,0x10);
                if (local_4f8 != (undefined *)0x0) {
                  lVar9 = *local_318;
                  local_500 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_318 - lVar9 != 0) {
                        _objc_enumerationMutation(*local_318 - lVar9,puVar1);
                      }
                      uVar10 = *(ulong *)(local_320 + (long)local_500 * 8);
                      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      local_2e8 = uVar10;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar10,PTR_s_isKindOfClass__0269cd68,puVar3);
                      if (((uVar10 & 1) != 0) &&
                         (uVar10 = local_2e8,
                         (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_length_0269cca0),
                         puVar3 = local_2d8, uVar10 != 0)) {
                        uVar10 = local_2e8;
                        (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_copy_0269d150);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar3,PTR_s_addObject__0269d180,uVar10);
                        (*(code *)PTR__objc_release_02578630)(uVar10);
                      }
                      local_500 = local_500 + 1;
                    } while (local_500 < local_4f8);
                    local_4f8 = puVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_328,
                               auStack_128,0x10);
                    local_500 = (undefined *)0x0;
                  } while (local_4f8 != (undefined *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(puVar1);
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_278,PTR_s_setObject_forKeyedSubscript__0269d248,local_2d8,local_2c8);
              _objc_storeStrong(&local_2e0,0);
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_330 = &::cf___;
            pcVar8 = local_280;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_280,PTR_s_respondsToSelector__026ca818,PTR_s_headerTitle_026af648);
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar4 = local_280;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_280,PTR_s_performSelector__026ca7b8,PTR_s_headerTitle_026af648);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_338 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
              pcVar8 = local_338;
              if (((ulong)pcVar4 & 1) != 0) {
                puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                           PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = local_330;
                local_330 = pcVar8;
                (*(code *)PTR__objc_release_02578630)(pcVar4);
                (*(code *)PTR__objc_release_02578630)(puVar1);
              }
              _objc_storeStrong(&local_338,0);
            }
            IVar5 = local_230;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_230,PTR_s_getViewControllerFriendlyName__026aa500,local_2c8);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_340 = IVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((IVar5 & 1) == 0) {
              _objc_storeStrong(&local_340,&::cf___);
            }
            local_348 = (cfstringStruct *)0x0;
            pcVar8 = local_280;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_280,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar4 = local_280;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_280,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
              _objc_retainAutoreleasedReturnValue();
              pcVar8 = local_348;
              local_348 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar8);
            }
            _memset(auStack_390,0,0x40);
            pcVar8 = local_348;
            (*(code *)PTR__objc_retain_02578638)();
            local_5e8 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_390,
                       auStack_1a8,0x10);
            if (local_5e8 != (cfstringStruct *)0x0) {
              lVar9 = *local_380;
              local_5f0 = (cfstringStruct *)0x0;
              do {
                do {
                  if (*local_380 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_380 - lVar9,pcVar8);
                  }
                  local_350 = *(undefined8 *)(local_388 + (long)local_5f0 * 8);
                  IVar5 = local_230;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_230,PTR_s_getTitleFromCellManager__026af650,local_350);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                  local_398 = IVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                  _objc_retainAutoreleasedReturnValue();
                  local_3a0 = IVar5;
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                  IVar5 = local_3a0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_length_0269cca0);
                  if (IVar5 == 0) {
                    local_2cc = 9;
                  }
                  else {
                    IVar5 = local_3a0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_lowercaseString_0269d9c0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    local_3a8 = IVar5;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                               &cf____C___C__);
                    _objc_retainAutoreleasedReturnValue();
                    local_3b0 = puVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2d8,PTR_s_addObject__0269d180,puVar1);
                    _objc_storeStrong(&local_3b0);
                    _objc_storeStrong(&local_3a8,0);
                    local_2cc = 0;
                  }
                  _objc_storeStrong(&local_3a0);
                  _objc_storeStrong(&local_398,0);
                  local_5f0 = (cfstringStruct *)((long)&local_5f0->field0_0x0 + 1);
                } while (local_5f0 < local_5e8);
                local_5e8 = pcVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_390,
                           auStack_1a8,0x10);
                local_5f0 = (cfstringStruct *)0x0;
              } while (local_5e8 != (cfstringStruct *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            _objc_storeStrong(&local_348);
            _objc_storeStrong(&local_340,0);
            _objc_storeStrong(&local_330,0);
            _objc_storeStrong(&local_2d8,0);
            local_2cc = 0;
          }
          _objc_storeStrong(&local_2c8,0);
        }
        local_468 = local_468 + 1;
      } while (local_468 < local_460);
      local_460 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_a8,0x10);
      local_468 = 0;
    } while (local_460 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _memset(auStack_400,0,0x40);
  puVar1 = local_278;
  (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  local_690 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_690 != (undefined *)0x0) {
    lVar7 = *local_3f0;
    local_698 = (undefined *)0x0;
    do {
      do {
        if (*local_3f0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_3f0 - lVar7,puVar1);
        }
        local_3c0 = *(undefined8 *)(local_3f8 + (long)local_698 * 8);
        puVar3 = local_278;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_278,PTR_s_objectForKeyedSubscript__0269d098,local_3c0);
        _objc_retainAutoreleasedReturnValue();
        local_408 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_allObjects_0269d228);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_410 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_410;
        (*(code *)PTR__objc_msgSend_02578628)(local_410,PTR_s_count_0269cfe0);
        if (puVar3 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_240,PTR_s_setObject_forKeyedSubscript__0269d248,local_410,local_3c0);
        }
        _objc_storeStrong(&local_410);
        _objc_storeStrong(&local_408,0);
        local_698 = local_698 + 1;
      } while (local_698 < local_690);
      local_690 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_228,0x10
                );
      local_698 = (undefined *)0x0;
    } while (local_690 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(local_230 + 0x58,local_240);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineAutoFunctionViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineFriendRelationCheckViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineGeneralFunctionViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineKeywordAlertViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineDoNotDisturbSettingsViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineChatRoomFunctionViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineMessageSyncRuleViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineScheduledTaskViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineEmoticonFunctionViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineEmoticonGroupManageViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineGroupManagementViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineTelegramGroupingViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineTelegramGroupingTabsViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineChatAttachmentViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineLongPressMenuViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineTextReplaceViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineTextPlaceholderViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineWeChatHomeTextViewController);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_230,PTR_s_applySupplementIndexTitlesForPlu_026af600,
             &cf_WCRefineMomentsViewController);
  _objc_storeStrong(&local_278);
  _objc_storeStrong(&local_240,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

