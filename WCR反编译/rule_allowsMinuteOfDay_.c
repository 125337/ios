// rule:allowsMinuteOfDay: @ 010af980

/* Function Stack Size: 0x20 bytes */

bool WCRefineMessageSyncRule::rule_allowsMinuteOfDay_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  long local_48;
  long local_40;
  long_long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_dailyStart);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_dailyEnd);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = true;
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_minuteOfDayFromTimeText__026ae5d0,local_40)
    ;
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_minuteOfDayFromTimeText__026ae5d0,local_48)
    ;
    if ((((long)IVar3 < 0) || ((long)IVar4 < 0)) || (IVar3 == IVar4)) {
      local_11 = true;
    }
    else if ((long)IVar3 < (long)IVar4) {
      local_11 = (long)IVar3 <= (long)local_38 && (long)local_38 <= (long)IVar4;
    }
    else {
      local_11 = (long)IVar3 <= (long)local_38 || (long)local_38 <= (long)IVar4;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

