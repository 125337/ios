// entryFromOfficialCompletedMeta:remindId: @ 01f155f0

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoStore::entryFromOfficialCompletedMeta_remindId_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  cfstringStruct *local_168;
  cfstringStruct *local_d0;
  uint local_b4;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = PTR_WCRefineToDoEntry_026cf6a8;
  _objc_alloc_init();
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setBackend__026c81d0,1);
  if (local_40 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  else {
    local_a0 = local_40;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setEntryId__026c81d8,local_a0);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_textSnapshot);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_b0 = &cf__e_R;
  }
  else {
    local_b0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_textSnapshot);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_b0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setText__026caa88,local_b0);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDone__026a15a0,1);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_daily);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_b4 = 1;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_60 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_starred);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b4 = (uint)pcVar4;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDaily__026c76a0,local_b4 & 1);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_note);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_d0 = (cfstringStruct *)0x0;
  }
  else {
    local_d0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_note)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_d0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setNote__026c7680,local_d0);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar5 = local_28;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_dueDate);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_dateFromTimestamp__026c81e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDueDate__026c7688);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar5 = local_28;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_startTime);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_dateFromTimestamp__026c81e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setStartTime__026c7690);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar5 = local_28;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_endTime);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_dateFromTimestamp__026c81e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setEndTime__026c7698);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar5 = local_28;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_dateFromTimestamp__026c81e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCreatedAt__026a58e0);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar5 = local_28;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_completedAt);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_dateFromTimestamp__026c81e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCompletedAt__026c81e8);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_168 = (cfstringStruct *)0x0;
  }
  else {
    local_168 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_168;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setMessageSessionUserName__026c8228,local_168);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMessageLocalID__026c8230,pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMessageServerID__026c8238,pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

