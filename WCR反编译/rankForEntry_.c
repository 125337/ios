// rankForEntry: @ 01f18234

/* Function Stack Size: 0x18 bytes */

long_long WCRefineToDoStore::rankForEntry_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  int iVar2;
  ulong local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_done_026a1598);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isOverdue_026c7128);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isDueToday_026c7130);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isUnscheduled_026c82b0);
        if ((uVar1 & 1) == 0) {
          local_18 = 3;
        }
        else {
          local_18 = 4;
        }
      }
      else {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_startTime_026c74b8);
        _objc_retainAutoreleasedReturnValue();
        iVar2 = 2;
        if (uVar1 != 0) {
          iVar2 = 1;
        }
        local_18 = (long_long)iVar2;
        (*(code *)PTR__objc_release_02578630)();
      }
    }
    else {
      local_18 = 0;
    }
  }
  else {
    local_18 = 5;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

