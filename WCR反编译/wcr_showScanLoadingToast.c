// wcr_showScanLoadingToast @ 01dd45c4

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsViewController::wcr_showScanLoadingToast(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadingToast_026c0778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar2 = PTR_WCRefineHelper_026ce000;
  if (param_1 == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadingSticky_026c5650);
    if ((IVar1 & 1) == 0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_R__N);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showStickyStatusText__0269d4b0,&cf_R__N);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLoadingSticky__026c5658,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLoadingToast__026c0780,puVar2);
      }
      _objc_storeStrong(&local_28,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showStickyStatusText__0269d4b0,&cf_R__N);
    }
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadingToast_026c0778);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_updateWeToast_loadingText__026ac560,IVar1,&cf_R__N);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  return;
}

