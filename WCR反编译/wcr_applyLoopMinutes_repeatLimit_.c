// wcr_applyLoopMinutes:repeatLimit: @ 0057f868

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRMomentsScheduledTaskListViewController::wcr_applyLoopMinutes_repeatLimit_
          (WCRMomentsScheduledTaskListViewController *this,ID param_1,SEL param_2,long_long param_3,
          long_long param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 in_d0;
  long_long local_148;
  long_long local_140;
  undefined *local_120;
  undefined *local_118;
  ID local_d8;
  undefined *local_d0;
  ID local_c8;
  long_long local_c0;
  long_long local_b8;
  long_long local_b0;
  undefined4 local_a4;
  long_long local_a0;
  undefined4 local_94;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_74;
  undefined *local_70;
  undefined4 local_64;
  ID local_60;
  undefined4 local_58;
  ID local_48;
  long_long local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = param_4;
  local_38 = (undefined *)param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionTask_026a53f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    local_58 = 1;
  }
  else {
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_mutableCopy_0269d8a0);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_60 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,6);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_scheduleMode);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((long)local_38 < 1) {
      local_38 = (undefined *)0x3c;
    }
    local_64 = 1;
    local_74 = 0x2760;
    local_80 = local_38;
    if ((long)local_38 < 0x2761) {
      local_118 = local_38;
    }
    else {
      local_118 = &DAT_00002760;
    }
    local_88 = local_118;
    local_70 = local_118;
    if ((long)local_118 < 2) {
      local_120 = (undefined *)0x1;
    }
    else {
      local_120 = local_118;
    }
    local_90 = local_120;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_120);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_loopIntervalMinutes);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_94 = 0;
    local_a4 = 99;
    local_b0 = local_40;
    if ((long)local_40 < 100) {
      local_140 = local_40;
    }
    else {
      local_140 = 99;
    }
    local_b8 = local_140;
    local_a0 = local_140;
    if ((long)local_140 < 1) {
      local_148 = 0;
    }
    else {
      local_148 = local_140;
    }
    local_c0 = local_148;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_148);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_repeatLimit);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_fireCount);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_0057ea3c(local_60);
    IVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    FUN_0057a910();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf_triggered);
    if (((IVar2 & 1) != 0) ||
       (IVar2 = local_c8,
       (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf_failed),
       (IVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_0257dec8,&cf_state);
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_enabled);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_d0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_timeIntervalSince1970_0269cfc8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_lastFiredAt);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      IVar2 = local_60;
      FUN_0058020c(local_60,local_d0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_d8 = IVar2;
      if (IVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_timeIntervalSince1970_0269cfc8);
        (*(code *)PTR__objc_msgSend_02578628)(in_d0,puVar1,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_fireAt);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_d0,0);
    }
    FUN_0057dfd8(local_60);
    IVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActionTask__026a53c8,IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_60,0);
    local_58 = 0;
  }
  _objc_storeStrong(&local_48,0);
  return;
}

