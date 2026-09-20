// historyPerformObjectSelector:selector: @ 01b2a1a0

/* Function Stack Size: 0x20 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyPerformObjectSelector_selector_
             (ID param_1,SEL param_2,ID param_3,SEL param_4)

{
  ulong uVar1;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (((local_30 == 0) || (param_4 == 0)) ||
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,param_4),
     (uVar1 & 1) == 0)) {
    local_18 = 0;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,param_4);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

