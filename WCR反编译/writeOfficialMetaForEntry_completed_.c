// writeOfficialMetaForEntry:completed: @ 01f1a264

/* Function Stack Size: 0x1c bytes */

void WCRefineToDoStore::writeOfficialMetaForEntry_completed_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  cfstringStruct *local_e0;
  cfstringStruct *local_c8;
  cfstringStruct *local_58;
  ID local_50;
  ID local_48;
  undefined4 local_40;
  byte local_39;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_entryId_026c7430);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_40 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableOfficialMeta_026c82f0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_metaEntryForEntry_inMeta__026c82f8,local_38,IVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar1 = local_38;
    local_50 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_daily_026c7138);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithBool__0269ce60,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_daily);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_note_026c7618);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectForKey__0269d700,&cf_note);
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_note_026c7618);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar1,&cf_note);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if ((local_39 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeObjectForKey__0269d700,&cf_completed);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeObjectForKey__0269d700,&cf_completedAt);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeObjectForKey__0269d700,&cf_textSnapshot);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_completed);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_completedAt_026c81b8);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_58 = (cfstringStruct *)PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_c8 = local_58;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_timeIntervalSince1970_0269cfc8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_completedAt);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (pcVar1 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_e0 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,local_e0,&cf_textSnapshot);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dueDate_026c74b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectForKey__0269d700,&cf_dueDate)
      ;
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dueDate_026c74b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_dueDate);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startTime_026c74b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeObjectForKey__0269d700,&cf_startTime);
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startTime_026c74b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_startTime);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_endTime_026c74c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectForKey__0269d700,&cf_endTime)
      ;
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_endTime_026c74c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_endTime);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_createdAt_026c81f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_createdAt_026c81f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_createdAt);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_messageSessionUserName_026c8240);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeObjectForKey__0269d700,&cf_sessionUserName);
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_messageSessionUserName_026c8240);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar1,&cf_sessionUserName);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_messageLocalID_026c8288);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((long)pcVar1 < 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectForKey__0269d700,&cf_localID)
      ;
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_messageLocalID_026c8288);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInteger__0269e080,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_localID);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_messageServerID_026c8248);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((long)pcVar1 < 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeObjectForKey__0269d700,&cf_mesSvrID);
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_messageServerID_026c8248);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithLongLong__0269d808,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_mesSvrID);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saveOfficialMeta__026c8300,local_48);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

