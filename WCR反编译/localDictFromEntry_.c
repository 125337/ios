// localDictFromEntry: @ 01f13318

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoStore::localDictFromEntry_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_38;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_entryId_026c7430);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_70 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_newLocalId_026c81f0);
    local_58 = local_70;
  }
  else {
    local_70 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_entryId_026c7430);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_70;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,local_70,&cf_id);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_80 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,local_80,&cf_text);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_done_026a1598);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithBool__0269ce60,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_done);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_daily_026c7138);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithBool__0269ce60,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_daily);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_note_026c7618);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_note_026c7618);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar2,&cf_note);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dueDate_026c74b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dueDate_026c74b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_dueDate);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startTime_026c74b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startTime_026c74b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_startTime);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_endTime_026c74c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_endTime_026c74c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_endTime);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_createdAt_026c81f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_createdAt_026c81f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_createdAt);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_completedAt_026c81b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_completedAt_026c81b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_completedAt);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

