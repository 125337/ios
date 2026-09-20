// matchesDailyCard @ 01f10e08

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoEntry::matchesDailyCard(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined1 local_11;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_done_026a1598);
  puVar2 = PTR_WCRefineToDoStore_026cf6a0;
  if ((IVar1 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_daily_026c7138);
    if ((IVar1 & 1) == 0) {
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dueDate_026c74b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar1 == 0) {
        local_11 = 1;
      }
      else {
        IVar1 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDueToday_026c7130);
        if ((IVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isOverdue_026c7128);
          if ((param_1 & 1) == 0) {
            local_11 = 0;
          }
          else {
            local_11 = 1;
          }
        }
        else {
          local_11 = 1;
        }
      }
    }
    else {
      local_11 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_completedAt_026c81b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isToday__026c81b0);
    local_11 = (byte)puVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return (uint)local_11;
}

