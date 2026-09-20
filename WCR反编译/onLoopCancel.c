// onLoopCancel @ 00583138

/* Function Stack Size: 0x10 bytes */

void WCRMomentsScheduledTaskListViewController::onLoopCancel(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_40;
  uint local_38;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionTask_026a53f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (param_1 & 1) != 0;
  if (bVar1) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_scheduleMode);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_removeObjectForKey__0269d700,&cf_loopIntervalMinutes);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_removeObjectForKey__0269d700,&cf_repeatLimit);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObjectForKey__0269d700,&cf_fireCount)
    ;
    FUN_0057dfd8(local_40);
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setActionTask__026a53c8,IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_40,0);
  }
  local_38 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

