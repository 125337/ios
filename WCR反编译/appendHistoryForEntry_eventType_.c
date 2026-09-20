// appendHistoryForEntry:eventType: @ 01f16a60

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoStore::appendHistoryForEntry_eventType_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  undefined1 *local_a0;
  ID local_98;
  ID local_90;
  byte local_82;
  bool local_81;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_64;
  long local_60;
  cfstringStruct *local_58;
  SEL local_50;
  ID local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  local_58 = (cfstringStruct *)0x0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  if ((local_58 == (cfstringStruct *)0x0) ||
     (lVar1 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_64 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSUUID_026ce668;
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_id);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_entryId_026c7430);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_d8 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_d8,&cf_entryId);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_81 = false;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_e8 = &cf__g_TT_R;
    }
    else {
      local_e8 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_e8;
    }
    local_81 = pcVar5 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_e8,&cf_text);
    if ((local_81 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,&cf_eventType);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_timeIntervalSince1970_0269cfc8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_eventAt);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_backend_026c7148);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_backend);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_82 = 0;
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dueDate_026c74b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    IVar6 = local_48;
    if (pcVar4 != (cfstringStruct *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_startOfDay__026c7648);
      _objc_retainAutoreleasedReturnValue();
      local_90 = IVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar6 = local_48;
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dueDate_026c74b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_startOfDay__026c7648);
      _objc_retainAutoreleasedReturnValue();
      local_98 = IVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      IVar6 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_compare__0269cd10,local_90);
      local_82 = IVar6 == 0xffffffffffffffff;
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_82 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_wasOverdue);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_daily_026c7138);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithBool__0269ce60,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_daily);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_note_026c7618);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (pcVar5 != (cfstringStruct *)0x0) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_note_026c7618);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar4,&cf_note);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dueDate_026c74b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (pcVar4 != (cfstringStruct *)0x0) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dueDate_026c74b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_dueDate);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_startTime_026c74b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (pcVar4 != (cfstringStruct *)0x0) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_startTime_026c74b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_startTime);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_endTime_026c74c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (pcVar4 != (cfstringStruct *)0x0) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_endTime_026c74c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_endTime);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_createdAt_026c81f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (pcVar4 != (cfstringStruct *)0x0) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_createdAt_026c81f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_createdAt);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageSessionUserName_026c8240);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (pcVar5 != (cfstringStruct *)0x0) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageSessionUserName_026c8240);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar4,&cf_sessionUserName);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageLocalID_026c8288);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (0 < (long)pcVar4) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageLocalID_026c8288);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_localID);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageServerID_026c8248);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (0 < (long)pcVar4) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageServerID_026c8248);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithLongLong__0269d808,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_mesSvrID);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a0 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar7 = local_a0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar7 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_a0;
      local_a0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    puVar7 = local_a0;
    puVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_insertObject_atIndex__0269eac0,puVar2,0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar8 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
    puVar7 = local_a0;
    if (&section_00000798.reloff < puVar8) {
      puVar8 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
      local_40 = puVar8 + -2000;
      local_38 = 2000;
      local_30 = 2000;
      local_28 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_removeObjectsInRange__0269dad0,2000,local_40);
    }
    puVar7 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_copy_0269d150);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  return;
}

