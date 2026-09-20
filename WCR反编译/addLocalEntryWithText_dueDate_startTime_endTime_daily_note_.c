// addLocalEntryWithText:dueDate:startTime:endTime:daily:note: @ 01f195b4

/* Function Stack Size: 0x3c bytes */

ID WCRefineToDoStore::addLocalEntryWithText_dueDate_startTime_endTime_daily_note_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7,
             ID param_8)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *local_b0;
  ID local_70;
  undefined *local_68;
  undefined8 local_60;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_51 = (byte)param_7;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  puVar1 = PTR_WCRefineToDoEntry_026cf6a8;
  _objc_alloc_init();
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setBackend__026c81d0,0);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_newLocalId_026c81f0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setEntryId__026c81d8);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (local_38 == (cfstringStruct *)0x0) {
    local_b0 = &::cf___;
  }
  else {
    local_b0 = local_38;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setText__026caa88,local_b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setDone__026a15a0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setDueDate__026c7688,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setStartTime__026c7690,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setEndTime__026c7698,local_50);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setDaily__026c76a0,local_51 & 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setNote__026c7680,local_60);
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setCreatedAt__026a58e0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableLocalItems_026c82d0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_70 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localDictFromEntry__026c82d8,local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saveLocalItems__026c82e0,local_70);
  puVar1 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

