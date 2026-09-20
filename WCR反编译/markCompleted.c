// markCompleted @ 00f77754

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationChecker::markCompleted(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setRunning__026acb08,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRechecking__026acb10,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cancelPendingWork_026acb28);
  puVar1 = PTR_WCRefineFriendRelationStore_026cebd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_mutableSnapshot_026aca58);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setObject_forKeyedSubscript__0269d248,_kWCRFriendRelationStatusCompleted,
             &cf_status);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_pauseReason);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_currentUserName);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_currentDisplayName);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_updatedAt);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_saveSnapshot__026aca60,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

