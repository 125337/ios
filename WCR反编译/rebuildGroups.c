// rebuildGroups @ 01ea06f8

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHistoryViewController::rebuildGroups(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *local_2e8;
  undefined *local_2e0;
  cfstringStruct *local_290;
  ulong local_248;
  ulong local_240;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  undefined *local_1d0;
  cfstringStruct *local_1c8;
  undefined *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  undefined8 local_178;
  cfstringStruct *local_170;
  undefined *local_168;
  undefined *local_160;
  SEL local_158;
  ID local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_158 = param_2;
  local_150 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_160 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  local_168 = puVar2;
  _objc_alloc_init();
  puVar1 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  local_170 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_zh_CN);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_dd);
  _memset(auStack_1b8,0,0x40);
  IVar4 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  local_240 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_240 != 0) {
    lVar10 = *local_1a8;
    local_248 = 0;
    do {
      do {
        if (*local_1a8 - lVar10 != 0) {
          _objc_enumerationMutation(*local_1a8 - lVar10,IVar4);
        }
        IVar6 = local_150;
        uVar11 = *(undefined8 *)(local_1b0 + local_248 * 8);
        IVar5 = local_150;
        local_178 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_filter_026c4d50);
        (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_item_matchesFilter__026c7458,uVar11,IVar5)
        ;
        puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
        if ((IVar6 & 1) != 0) {
          uVar11 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_objectForKeyedSubscript__0269d098,&cf_eventAt);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
          _objc_retainAutoreleasedReturnValue();
          local_1c0 = puVar1;
          (*(code *)PTR__objc_release_02578630)(uVar11);
          pcVar3 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_stringFromDate__0269d1d8,local_1c0);
          _objc_retainAutoreleasedReturnValue();
          local_290 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_290 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1c8 = local_290;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          puVar1 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_objectForKeyedSubscript__0269d098,local_1c8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar1 == (undefined *)0x0) {
            puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,local_1c8);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_1c8);
          }
          puVar1 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_objectForKeyedSubscript__0269d098,local_1c8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar1);
          _objc_storeStrong(&local_1c8);
          _objc_storeStrong(&local_1c0,0);
        }
        local_248 = local_248 + 1;
      } while (local_248 < local_240);
      local_240 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
      local_248 = 0;
    } while (local_240 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = puVar1;
  _memset(auStack_218,0,0x40);
  puVar1 = local_160;
  (*(code *)PTR__objc_retain_02578638)();
  local_2e0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,0x10);
  if (local_2e0 != (undefined *)0x0) {
    lVar10 = *local_208;
    local_2e8 = (undefined *)0x0;
    do {
      do {
        if (*local_208 - lVar10 != 0) {
          _objc_enumerationMutation(*local_208 - lVar10,puVar1);
        }
        puVar2 = local_1d0;
        local_1d8 = *(undefined8 *)(local_210 + (long)local_2e8 * 8);
        local_148 = &cf_day;
        local_140 = &cf_items;
        puVar7 = local_168;
        local_138 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_168,PTR_s_objectForKeyedSubscript__0269d098,local_1d8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_130 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_138,&local_148,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        local_2e8 = local_2e8 + 1;
      } while (local_2e8 < local_2e0);
      local_2e0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,0x10
                );
      local_2e8 = (undefined *)0x0;
    } while (local_2e0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_1d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setGroups__026abf30);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar4 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_groups_026a1048);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar6 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_emptyLabel_026a2668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_1d0);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

