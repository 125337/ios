// removeUserAtIndex: @ 01c542f8

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateSpecialUsersViewController::removeUserAtIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_listedUsernames_026c1ca8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_28;
  local_30 = param_1;
  if (((long)local_28 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0),
     (long)param_1 <= (long)lVar1)) {
    local_34 = 1;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterPostNotification();
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Rd);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

