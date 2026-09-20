// doNotDisturbSelectedSessions @ 01ff5df0

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::doNotDisturbSelectedSessions(ID param_1,SEL param_2)

{
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  FUN_01fd9510(param_1,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  FUN_01fd1d24(param_1,500);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return param_1;
}

