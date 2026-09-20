// persistItems @ 01a0963c

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordMultiReplyEditorViewController::persistItems(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *local_110;
  undefined1 *local_d0;
  undefined1 *local_a0;
  undefined1 *local_70;
  byte local_61;
  undefined1 *local_60;
  undefined *local_58;
  byte local_49;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined *local_38;
  SEL local_30;
  undefined1 *local_28;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_30 = param_2;
  local_28 = (undefined1 *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoReplySanitizedMultiItems__026a3620);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rules_026a44d8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_49 = 0;
  local_a0 = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    local_a0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_a0;
  }
  local_49 = puVar4 == (undefined1 *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a0;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_58 = (undefined *)0x0;
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ruleIndex_026bb6c0);
  if (puVar3 == (undefined1 *)0x7fffffffffffffff) {
LAB_01a0994c:
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingKeyword_026bb6c8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_01a08fe8();
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (puVar3 == (undefined1 *)0x0) {
      bVar1 = true;
    }
    else {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      puVar2 = PTR_WCRefineHelper_026ce000;
      if (puVar3 < &segment_command_00000020.flags) {
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_58;
        local_58 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setObject_forKeyedSubscript__0269d248,local_70,&cf_keyword);
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRuleIndex__026bb6d0,puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_addObject__0269d180,*(undefined8 *)PTR____NSDictionary0___02578288
                  );
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingKeyword__026bb6d8,&::cf___);
        bVar1 = false;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        bVar1 = true;
      }
    }
    _objc_storeStrong(&local_70,0);
    if (bVar1) goto LAB_01a09e38;
  }
  else {
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ruleIndex_026bb6c0);
    puVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    puVar3 = local_40;
    if (puVar5 <= puVar4) goto LAB_01a0994c;
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ruleIndex_026bb6c0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectAtIndexedSubscript__0269cc78,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_61 = 0;
    local_d0 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      local_d0 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_d0;
    }
    local_61 = puVar4 == (undefined1 *)0x0;
    _objc_storeStrong(&local_58,local_d0);
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_countMode);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_randomOneFromMulti);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_randomOneFromMulti);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (local_38 == (undefined *)0x0) {
    local_110 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    local_110 = local_38;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_setObject_forKeyedSubscript__0269d248,local_110,&cf_multiItems);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_removeObjectForKey__0269d700,&cf_multiContent);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeObjectForKey__0269d700,&cf_replyText);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_removeObjectForKey__0269d700,&cf_repositoryCode);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_removeObjectForKey__0269d700,&cf_inviteChatRoom);
  puVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
  puVar3 = local_40;
  puVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ruleIndex_026bb6c0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_setObject_atIndexedSubscript__0269e970,puVar2,puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
LAB_01a09e38:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

