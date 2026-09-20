// onToggleScheduledTask @ 0057dd0c

/* Function Stack Size: 0x10 bytes */

void WCRMomentsScheduledTaskListViewController::onToggleScheduledTask(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID local_48;
  byte local_39;
  undefined4 local_38;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionTask_026a53f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_39 = (byte)IVar3;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,(local_39 ^ 1) & 1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_enabled);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_39 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_0257dec8,&cf_state);
    }
    FUN_0057dfd8(local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_48,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

