// tabs @ 01518f28

/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramGroupingStore::tabs(ID param_1,SEL param_2)

{
  undefined8 local_30;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureTabsLoaded_026b01d8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cachedTabs_026b0180);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_30 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return local_30;
}

