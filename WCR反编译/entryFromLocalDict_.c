// entryFromLocalDict: @ 01f12954

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoStore::entryFromLocalDict_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  uint local_ec;
  cfstringStruct *local_e8;
  uint local_b4;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  undefined *local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = PTR_WCRefineToDoEntry_026cf6a8;
  _objc_alloc_init();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setBackend__026c81d0,0);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_a0 = &::cf___;
  }
  else {
    local_a0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_a0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setEntryId__026c81d8,local_a0);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_b0 = &::cf___;
  }
  else {
    local_b0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_text)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_b0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setText__026caa88,local_b0);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_done);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDone__026a15a0,pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_daily);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_b4 = 1;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_68 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_starred);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b4 = (uint)pcVar4;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDaily__026c76a0,local_b4 & 1);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
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
    local_e8 = (cfstringStruct *)0x0;
  }
  else {
    local_e8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_note)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_e8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setNote__026c7680,local_e8);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar5 = local_28;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_dueDate);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_dateFromTimestamp__026c81e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDueDate__026c7688);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar5 = local_28;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_startTime);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_dateFromTimestamp__026c81e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setStartTime__026c7690);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar5 = local_28;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_endTime);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_dateFromTimestamp__026c81e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setEndTime__026c7698);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar5 = local_28;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_createdAt);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_dateFromTimestamp__026c81e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCreatedAt__026a58e0);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar5 = local_28;
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_completedAt);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_dateFromTimestamp__026c81e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCompletedAt__026c81e8);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_daily_026c7138);
  bVar1 = false;
  local_ec = 0;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_done_026a1598);
    IVar5 = local_28;
    local_ec = 0;
    if (((ulong)puVar2 & 1) != 0) {
      local_88 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_completedAt_026c81b8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isToday__026c81b0);
      local_ec = (uint)IVar5 ^ 1;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_ec & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDone__026a15a0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCompletedAt__026c81e8,0);
  }
  puVar2 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

