// onceDateFromText: @ 014b6eb8

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::onceDateFromText_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  long local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  undefined8 local_20;
  long *local_18;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  lVar1 = local_40;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_18 = &DAT_028e3668;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02585ec0);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    IVar2 = DAT_028e3660;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3660,PTR_s_dateFromString__026aa6a8,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar2;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

