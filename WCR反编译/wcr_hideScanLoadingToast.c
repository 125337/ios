// wcr_hideScanLoadingToast @ 01dd478c

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsViewController::wcr_hideScanLoadingToast(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadingToast_026c0778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (IVar2 != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadingToast_026c0778);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_hideWeToast__0269cec0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLoadingToast__026c0780,0);
  }
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadingSticky_026c5650);
  if ((IVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideStickyStatus_0269d4b8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLoadingSticky__026c5658,0);
  }
  return;
}

