// renameChatSinkHistoryItemWithID:name: @ 02022304

/* Function Stack Size: 0x20 bytes */

bool WCRefineConfig::renameChatSinkHistoryItemWithID_name_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID local_78;
  ID local_70;
  ulong local_68;
  byte local_59;
  ID local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  int local_3c;
  undefined8 local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf__g_TTMn_;
    uVar3 = local_38;
    FUN_020216e0(local_38,&cf__g_TTMn_);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_20;
    local_50 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_repeatChatSinkHistoryItems_026b7b90);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_59 = 0;
    local_68 = 0;
    while( true ) {
      uVar1 = local_68;
      IVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      if (IVar4 <= uVar1) break;
      IVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_70 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if ((IVar5 & 1) == 0) {
        local_3c = 4;
      }
      else {
        IVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_mutableCopy_0269d8a0);
        local_78 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf_name);
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,&cf_updatedAt);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        IVar4 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setObject_atIndexedSubscript__0269e970,IVar4,local_68);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        local_59 = 1;
        local_3c = 2;
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_70,0);
      if (local_3c == 2) break;
      local_68 = local_68 + 1;
    }
    if ((local_59 & 1) != 0) {
      IVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setRepeatChatSinkHistoryItems__026ca300);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    local_11 = local_59 & 1;
    local_3c = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

