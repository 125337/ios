// updateKeywordRuleAtIndex:countMode:randomOne: @ 01a13e3c

/* Function Stack Size: 0x24 bytes */

void WCRefineKeywordAutoReplyListViewController::updateKeywordRuleAtIndex_countMode_randomOne_
               (ID param_1,SEL param_2,unsigned_long_long param_3,long_long param_4,bool param_5)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_100;
  undefined *local_e0;
  cfstringStruct *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  byte local_51;
  ID local_50;
  byte local_41;
  long_long local_40;
  unsigned_long_long local_38;
  SEL local_30;
  undefined *local_28;
  
  local_41 = (byte)param_5;
  local_51 = 0;
  bVar2 = true;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  if (param_3 != 0x7fffffffffffffff) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = param_1 <= param_3;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (!bVar2) {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_69 = 0;
    local_e0 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_e0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_e0;
    }
    local_69 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e0;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_81 = 0;
    local_100 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_100 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_100;
    }
    local_81 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_100;
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,local_40 == 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_countMode);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_41 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_randomOneFromMulti);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_40 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_removeObjectForKey__0269d700,&cf_inviteChatRoom);
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_autoReplyMultiItemsForRule__026bb760,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_78;
        local_98 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_replyText);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        FUN_01a08fe8();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar3 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        FUN_01a08fe8();
        _objc_retainAutoreleasedReturnValue();
        local_a8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
        if (puVar3 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addObject__0269d180,local_a0);
        }
        puVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
        if (puVar3 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addObject__0269d180,local_a8);
        }
        puVar3 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
        if (puVar3 != (undefined *)0x0) {
          puVar3 = PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_autoReplySanitizedMultiItems__026a3620,
                     local_98);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_multiItems);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_removeObjectForKey__0269d700,&cf_multiContent);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_removeObjectForKey__0269d700,&cf_replyText);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_removeObjectForKey__0269d700,&cf_repositoryCode);
        }
        _objc_storeStrong(&local_a8);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_98,0);
      }
      _objc_storeStrong(&local_90,0);
    }
    puVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_atIndexedSubscript__0269e970,puVar3,local_38);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___NUSagVY;
    if (local_40 == 1) {
      pcVar1 = &cf___NYag_g;
      if ((local_41 & 1) == 0) {
        pcVar1 = &cf___NSVYYag;
      }
      _objc_storeStrong(&local_b0,pcVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_b0);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_60,0);
  }
  return;
}

