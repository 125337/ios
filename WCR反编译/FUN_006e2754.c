// FUN_006e2754 @ 006e2754

void FUN_006e2754(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_48;
  undefined *local_40;
  byte local_31;
  undefined *local_30;
  undefined4 local_28;
  byte local_21;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_18;
  local_21 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_20 == 0)) {
    local_28 = 1;
  }
  else {
    puVar2 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineScheduledTask_026ce850,PTR_s_tasks_026a53a8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_31 = 0;
    for (local_40 = (undefined *)0x0; puVar3 = local_40, puVar4 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
        puVar2 = PTR_WCRefineScheduledTask_026ce850, puVar3 < puVar4; local_40 = local_40 + 1) {
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_taskID__026a6cd8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (((ulong)puVar4 & 1) != 0) {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_48 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_timeIntervalSince1970_0269cfc8);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                   _kWCRScheduledTaskKeyLastFiredAt);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if ((local_21 & 1) != 0) {
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                     _kWCRScheduledTaskKeyEnabled);
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setObject_atIndexedSubscript__0269e970,puVar2,local_40);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_31 = 1;
        local_28 = 2;
        _objc_storeStrong(&local_48,0);
        break;
      }
    }
    if ((local_31 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTask_026ce850,PTR_s_saveTasks__026a6ce8,local_30);
    }
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

