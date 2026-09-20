// restartFromPending @ 00f7651c

/* Function Stack Size: 0x10 bytes */

bool WCRefineFriendRelationChecker::restartFromPending(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_c8;
  cfstringStruct *local_58;
  undefined *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_running_026aca70);
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_pauseWithReason__026acaf0,_kWCRFriendRelationPauseUser);
  }
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pendingUserNames_026acad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_11 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,_kWCRFriendRelationStatusRunning,
               &cf_status);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_pauseReason);
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pendingSourceTitle_026aca90);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_58 = &cf__b;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,&cf_sourceTitle);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pendingUserNames_026acad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar1,&cf_queue);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_cursor);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_currentUserName);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_currentDisplayName)
    ;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setObject_forKeyedSubscript__0269d248);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_startedAt);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_updatedAt);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR_WCRefineFriendRelationStore_026cebd0;
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_snap_026aca78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_resultsFromSnapshot__026acb00);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_c8 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_c8,&cf_results);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_saveSnapshot__026aca60,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setRunning__026acb08,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setRechecking__026acb10,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setHasPendingRangeReplacement__026acae8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setTransportRetryCount__026acb18,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_startNext_026acb20);
    local_11 = 1;
    _objc_storeStrong(&local_30,0);
  }
  return local_11 & 1;
}

