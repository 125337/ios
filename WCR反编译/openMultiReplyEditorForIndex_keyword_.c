// openMultiReplyEditorForIndex:keyword: @ 01a11848

/* Function Stack Size: 0x20 bytes */

void WCRefineKeywordAutoReplyListViewController::openMultiReplyEditorForIndex_keyword_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *local_248;
  undefined1 *local_1e0;
  undefined1 *local_1c0;
  undefined1 *local_150;
  undefined *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined *local_108;
  undefined1 *local_100;
  byte local_f1;
  undefined1 *local_f0;
  undefined1 *local_e8;
  byte local_d9;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined *local_c8;
  byte local_b9;
  undefined1 *local_b8;
  undefined1 *local_b0;
  uint local_a8;
  byte local_a1;
  undefined1 *local_a0;
  undefined1 *local_98;
  long local_90;
  long local_88;
  undefined1 *local_80;
  SEL local_78;
  undefined1 *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  local_80 = (undefined1 *)param_3;
  local_78 = param_2;
  local_70 = (undefined1 *)param_1;
  _objc_storeStrong(&local_88,param_4);
  lVar2 = local_88;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_80;
  local_98 = local_80;
  local_a1 = 0;
  bVar1 = true;
  local_90 = lVar2;
  if (local_80 != (undefined1 *)0x7fffffffffffffff) {
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar3 <= puVar6;
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  if (bVar1) {
    lVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_sQ_eHe);
      local_a8 = 1;
      goto LAB_01a12608;
    }
    puVar6 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b9 = 0;
    local_150 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      local_150 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_150;
    }
    local_b9 = puVar3 == (undefined1 *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_150;
    if ((local_b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
    puVar7 = PTR_WCRefineHelper_026ce000;
    bVar1 = puVar6 < &segment_command_00000020.flags;
    if (bVar1) {
      local_68 = &cf_keyword;
      local_48 = local_90;
      local_60 = &cf_countMode;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
      _objc_retainAutoreleasedReturnValue();
      local_58 = &cf_randomOneFromMulti;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_40 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = &cf_multiItems;
      local_30 = *(undefined8 *)PTR____NSArray0___02578280;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_38 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addObject__0269d180,local_c8);
      puVar6 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_copy_0269d150);
      puVar7 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
      local_98 = puVar6 + -1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setPendingRuleIndex__026bb750,DAT_02339e98);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setPendingKeyword__026bb6d8,&::cf___);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_reloadTableData_0269dca8);
      _objc_storeStrong(&local_c8,0);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_a8 = (uint)!bVar1;
    _objc_storeStrong(&local_b0,0);
    if (local_a8 != 0) goto LAB_01a12608;
  }
  else {
    puVar6 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_d9 = 0;
    local_1c0 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      local_1c0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_1c0;
    }
    local_d9 = puVar3 == (undefined1 *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_1c0;
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_98);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f1 = 0;
    local_1e0 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      local_1e0 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_1e0;
    }
    local_f1 = puVar3 == (undefined1 *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_1e0;
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,&cf_countMode);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar6 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_randomOneFromMulti);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar6 == (undefined1 *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,&cf_randomOneFromMulti)
      ;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_removeObjectForKey__0269d700,&cf_inviteChatRoom);
    puVar6 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_multiItems);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    puVar3 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (((ulong)puVar3 & 1) == 0) {
      puVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_autoReplyMultiItemsForRule__026bb760,local_e8);
      _objc_retainAutoreleasedReturnValue();
      local_100 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_count_0269cfe0);
      if (puVar6 == (undefined1 *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_e8;
        local_108 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_replyText);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar6;
        FUN_01a08fe8();
        _objc_retainAutoreleasedReturnValue();
        local_110 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        puVar6 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar6;
        FUN_01a08fe8();
        _objc_retainAutoreleasedReturnValue();
        local_118 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        puVar6 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
        if (puVar6 != (undefined1 *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,local_110);
        }
        puVar6 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
        if (puVar6 != (undefined1 *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,local_118);
        }
        puVar7 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_autoReplySanitizedMultiItems__026a3620,
                   local_108);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_100;
        local_100 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_110,0);
        _objc_storeStrong(&local_108,0);
      }
      if (local_100 == (undefined1 *)0x0) {
        local_248 = *(undefined1 **)PTR____NSArray0___02578280;
      }
      else {
        local_248 = local_100;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,local_248,&cf_multiItems);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_removeObjectForKey__0269d700,&cf_multiContent);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_removeObjectForKey__0269d700,&cf_replyText);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_removeObjectForKey__0269d700,&cf_repositoryCode);
      _objc_storeStrong(&local_100,0);
    }
    puVar6 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setObject_atIndexedSubscript__0269e970,puVar6,local_98);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    puVar7 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_d0,0);
  }
  puVar7 = PTR_WCRefineKeywordMultiReplyEditorViewController_026cf260;
  _objc_alloc_init();
  local_120 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setRuleIndex__026bb6d0,local_98);
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setPendingKeyword__026bb6d8,&::cf___);
  puVar6 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  _objc_storeStrong(&local_120,0);
  local_a8 = 0;
LAB_01a12608:
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

