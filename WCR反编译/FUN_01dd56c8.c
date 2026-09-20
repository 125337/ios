// FUN_01dd56c8 @ 01dd56c8

void FUN_01dd56c8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar2;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_wcr_hideScanLoadingToast_026c5508);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSessionResult__026c5560,local_20);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setProgressText__026c55a8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadBoard_026c54f8);
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cancelled_026c4d28);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_totalCount_026a3130);
      puVar1 = PTR_WCRefineHelper_026ce000;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (uVar3 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_kelgmo_);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_totalCount_026a3130);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_startAISummaryIfNeeded_026c5680);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

