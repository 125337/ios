// pauseWithReason: @ 00f76b04

/* Function Stack Size: 0x18 bytes */

void WCRefineFriendRelationChecker::pauseWithReason_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint local_44;
  undefined *local_40;
  uint local_38;
  byte local_31;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_running_026aca70);
  local_31 = 0;
  local_44 = 0;
  if ((IVar2 & 1) == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_status_026a1830);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_44 = (uint)IVar2 ^ 1;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  bVar1 = (local_44 & 1) == 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRunning__026acb08,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRechecking__026acb10,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cancelPendingWork_026acb28);
    puVar3 = PTR_WCRefineFriendRelationStore_026cebd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_mutableSnapshot_026aca58);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,_kWCRFriendRelationStatusPaused,
               &cf_status);
    uVar4 = local_28;
    FUN_00f73814();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,uVar4,&cf_pauseReason);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_updatedAt);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_saveSnapshot__026aca60,local_40);
    _objc_storeStrong(&local_40,0);
  }
  local_38 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

