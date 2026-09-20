// skipCurrentNonFriendUserName: @ 00f77e14

/* Function Stack Size: 0x18 bytes */

void WCRefineFriendRelationChecker::skipCurrentNonFriendUserName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_a8;
  undefined *local_98;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  int local_44;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rechecking_026aca80);
  IVar1 = local_18;
  if ((IVar2 & 1) == 0) {
    puVar3 = PTR_WCRefineFriendRelationStore_026cebd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_mutableSnapshot_026aca58);
    _objc_retainAutoreleasedReturnValue();
    local_44 = 0;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_cursor)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_98 = puVar4;
    if ((long)puVar4 <= (long)local_44) {
      local_98 = (undefined *)(long)local_44;
    }
    local_58 = local_98;
    local_40 = local_98;
    local_a8 = PTR_WCRefineFriendRelationStore_026cebd0;
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_queueFromSnapshot__026aca68,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar3 = local_40 + 1;
    local_60 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0);
    if (puVar3 < local_a8) {
      local_a8 = puVar3;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithUnsignedInteger__0269e4d0,local_a8)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_cursor);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_currentUserName);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_currentDisplayName)
    ;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_updatedAt);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_saveSnapshot__026aca60,local_38);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recheckCursor_026acaa0);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setRecheckCursor__026acb40,IVar2 + 1);
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

