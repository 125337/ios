// FUN_01dd5450 @ 01dd5450

void FUN_01dd5450(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_wcr_hideScanLoadingToast_026c5508);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setOverviewResult__026c54d8,local_20);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setProgressText__026c55a8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadBoard_026c54f8);
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cancelled_026c4d28);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__uP_fe);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

