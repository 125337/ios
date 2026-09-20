// startNext @ 00f781c4

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationChecker::startNext(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_f0;
  undefined8 local_d8;
  undefined *local_c8;
  undefined *local_68;
  undefined *local_60;
  int local_54;
  ID local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_running_026aca70);
  if ((param_1 & 1) != 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeQueue_026acb98);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    local_38 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeCursor_026acba0);
    local_40 = IVar2;
    FUN_00f75634();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    do {
      IVar1 = local_40;
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if (IVar2 <= IVar1) break;
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      FUN_00f73814();
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_48;
      FUN_00f757d8(local_48,local_50);
      if ((IVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_skipCurrentNonFriendUserName__026acba8,local_50);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeQueue_026acb98);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_38;
        local_38 = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar1);
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeCursor_026acba0);
        local_54 = 0;
        local_40 = IVar1;
      }
      else {
        local_54 = 3;
      }
      _objc_storeStrong(&local_50,0);
    } while (local_54 == 0);
    IVar1 = local_40;
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if (IVar1 < IVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTransportRetryCount__026acb18,0);
      IVar1 = local_28;
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_fireCgiForUserName__026acbb0);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_54 = 0;
    }
    else {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rechecking_026aca80);
      if ((IVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_markCompleted_026acb30);
        local_54 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRechecking__026acb10,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRunning__026acb08,0);
        puVar3 = PTR_WCRefineFriendRelationStore_026cebd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_mutableSnapshot_026aca58);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_WCRefineFriendRelationStore_026cebd0;
        local_60 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_queueFromSnapshot__026aca68,puVar3
                  );
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_60;
        local_68 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_cursor);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if ((long)local_c8 < 1) {
          local_c8 = (undefined *)0x0;
        }
        puVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
        if (local_c8 < puVar3) {
          local_d8 = _kWCRFriendRelationStatusPaused;
        }
        else {
          local_d8 = _kWCRFriendRelationStatusCompleted;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_d8);
        puVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_status);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (((ulong)puVar4 & 1) == 0) {
          local_f0 = &::cf___;
        }
        else {
          local_f0 = _kWCRFriendRelationPauseUser;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_f0,&cf_pauseReason);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_currentUserName
                  );
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,
                   &cf_currentDisplayName);
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_updatedAt);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_saveSnapshot__026aca60,local_60);
        local_54 = 1;
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
      }
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

