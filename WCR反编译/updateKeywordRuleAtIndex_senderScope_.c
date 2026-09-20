// updateKeywordRuleAtIndex:senderScope: @ 01a12d80

/* Function Stack Size: 0x20 bytes */

void WCRefineKeywordAutoReplyListViewController::updateKeywordRuleAtIndex_senderScope_
               (ID param_1,SEL param_2,unsigned_long_long param_3,long_long param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_e8;
  undefined *local_c8;
  cfstringStruct *local_98;
  undefined4 local_8c;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  byte local_49;
  ID local_48;
  long_long local_40;
  unsigned_long_long local_38;
  SEL local_30;
  undefined *local_28;
  
  local_49 = 0;
  bVar1 = true;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  if (param_3 != 0x7fffffffffffffff) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = param_1 <= param_3;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (!bVar1) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_61 = 0;
    local_c8 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_c8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_c8;
    }
    local_61 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_c8;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_79 = 0;
    local_e8 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_e8 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_e8;
    }
    local_79 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_e8;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_28;
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_keywordByStrippingSenderPrefix__026bb7e8);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_sQ_eHe);
      local_8c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,local_88,&cf_keyword);
      if ((local_40 == 1) || (local_40 == 2)) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_senderScope);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_removeObjectForKey__0269d700,&cf_senderScope);
      }
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setObject_atIndexedSubscript__0269e970,puVar2,local_38);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = &cf__hQ__S_a;
      if (local_40 == 1) {
        _objc_storeStrong(0,&local_98,&cf___NNVY_RN);
      }
      else if (local_40 == 2) {
        _objc_storeStrong(0,&local_98,&cf___NNVY_);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_98);
      _objc_storeStrong(&local_98,0);
      local_8c = 0;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
  }
  return;
}

