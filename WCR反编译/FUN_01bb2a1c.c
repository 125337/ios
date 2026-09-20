// FUN_01bb2a1c @ 01bb2a1c

void FUN_01bb2a1c(long param_1,byte param_2,byte param_3,undefined8 param_4)

{
  long lVar1;
  long local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  byte local_1a;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_1a = param_3;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_4);
  local_30 = param_1;
  if ((local_19 & 1) == 0) {
    local_34 = 1;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    local_40 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadMessages_026c0350);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_updateNavigationTitle_026beaa0);
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if ((local_1a & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__fbcTTagv_SNS);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

