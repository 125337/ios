// FUN_01953d50 @ 01953d50

void FUN_01953d50(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFakeLocationHistoryStore_026cf188,PTR_s_clearNonFavorites_026b9b10);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__nzznfU_);
  _objc_storeStrong(&local_20,0);
  return;
}

