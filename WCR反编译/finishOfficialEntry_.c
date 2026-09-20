// finishOfficialEntry: @ 01f1ae40

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoStore::finishOfficialEntry_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entryId_026c7430);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_appendHistoryForEntry_eventType__026c8308,local_28,&cf_completed);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_removeOfficialItemForEntry__026c8310,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDone__026a15a0,1);
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCompletedAt__026c81e8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOfficialItem__026c8220,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_writeOfficialMetaForEntry_comple_026c8318,local_28,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

