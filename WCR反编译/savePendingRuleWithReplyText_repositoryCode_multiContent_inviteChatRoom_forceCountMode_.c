// savePendingRuleWithReplyText:repositoryCode:multiContent:inviteChatRoom:forceCountMode: @ 01a158c8

/* Function Stack Size: 0x38 bytes */

void WCRefineKeywordAutoReplyListViewController::
     savePendingRuleWithReplyText_repositoryCode_multiContent_inviteChatRoom_forceCountMode_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7
               )

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *local_1a0;
  undefined1 *local_150;
  undefined1 *local_120;
  undefined *local_d8;
  ulong local_d0;
  long local_c8;
  long local_c0;
  byte local_b1;
  undefined1 *local_b0;
  byte local_a1;
  undefined1 *local_a0;
  byte local_91;
  undefined1 *local_90;
  undefined1 *local_88;
  byte local_7a;
  byte local_79;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 local_64;
  undefined1 *local_60;
  long_long local_58;
  ulong local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  SEL local_30;
  undefined1 *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (undefined1 *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  puVar2 = local_28;
  local_58 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingKeyword_026bb6c8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (puVar2 == (undefined1 *)0x0) {
    local_64 = 1;
  }
  else {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_79 = 0;
    local_120 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      local_120 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_120;
    }
    local_79 = puVar3 == (undefined1 *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_120;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRuleIndex_026bb7d8);
    local_7a = false;
    if (puVar2 != (undefined1 *)0x7fffffffffffffff) {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRuleIndex_026bb7d8);
      puVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
      local_7a = puVar2 < puVar3;
    }
    if (((bool)local_7a == false) &&
       (puVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0),
       puVar8 = PTR_WCRefineHelper_026ce000, &segment_command_00000020.flags <= puVar2)) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_64 = 1;
    }
    else {
      local_150 = local_70;
      local_91 = 0;
      local_a1 = 0;
      local_b1 = 0;
      if ((local_7a & 1) == 0) {
        local_150 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_b1 = 1;
        local_b0 = local_150;
      }
      else {
        puVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRuleIndex_026bb7d8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_objectAtIndexedSubscript__0269cc78,puVar2);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a1 = 1;
        local_a0 = local_150;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_150;
      if ((local_b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      if ((local_a1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,&cf_keyword);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_removeObjectForKey__0269d700,&cf_replyText);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_removeObjectForKey__0269d700,&cf_repositoryCode);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_removeObjectForKey__0269d700,&cf_inviteChatRoom);
      lVar5 = local_38;
      FUN_01a08fe8();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = local_40;
      local_c0 = lVar5;
      FUN_01a08fe8();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_50;
      local_c8 = lVar6;
      FUN_01a08fe8();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_WCRefineHelper_026ce000;
      local_d0 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_autoReplyNormalizedMultiItems__0269efa0,local_48)
      ;
      _objc_retainAutoreleasedReturnValue();
      bVar1 = local_58 == 1;
      uVar7 = local_d0;
      local_d8 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      if ((uVar7 == 0) ||
         (uVar7 = local_d0,
         (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_hasSuffix__0269d018,&cf__chatroom),
         (uVar7 & 1) == 0)) {
        if ((bVar1) ||
           (puVar8 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
           puVar8 != (undefined *)0x0)) {
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,puVar8,&cf_countMode);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          if (local_d8 == (undefined *)0x0) {
            local_1a0 = *(undefined **)PTR____NSArray0___02578280;
          }
          else {
            local_1a0 = local_d8;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_1a0,&cf_multiItems);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_removeObjectForKey__0269d700,&cf_multiContent);
          puVar2 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_objectForKeyedSubscript__0269d098,&cf_randomOneFromMulti);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar2 == (undefined1 *)0x0) {
            puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,puVar8,
                       &cf_randomOneFromMulti);
            (*(code *)PTR__objc_release_02578630)(puVar8);
          }
        }
        else {
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,puVar8,&cf_countMode);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          lVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
          if (lVar5 == 0) {
            lVar5 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
            if (lVar5 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_c8,
                         &cf_repositoryCode);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_c0,&cf_replyText);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_removeObjectForKey__0269d700,&cf_multiContent);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_removeObjectForKey__0269d700,&cf_multiItems);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_d0,&cf_inviteChatRoom)
        ;
        puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,puVar8,&cf_countMode);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_removeObjectForKey__0269d700,&cf_multiContent);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_removeObjectForKey__0269d700,&cf_multiItems);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_removeObjectForKey__0269d700,&cf_randomOneFromMulti);
      }
      puVar2 = local_70;
      if ((local_7a & 1) == 0) {
        puVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      else {
        puVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_copy_0269d150);
        puVar2 = local_70;
        puVar9 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRuleIndex_026bb7d8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setObject_atIndexedSubscript__0269e970,puVar3,puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_copy_0269d150);
      puVar8 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setPendingRuleIndex__026bb750,DAT_02339e98);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingKeyword__026bb6d8,&::cf___);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_88,0);
      local_64 = 0;
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

