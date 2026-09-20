// applyLoadedItems:generation:finishToast: @ 01bd330c

/* Function Stack Size: 0x24 bytes */

void WCRefineMomentsCacheViewController::applyLoadedItems_generation_finishToast_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,bool param_5)

{
  ID IVar1;
  long local_60;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadGeneration_026c0728);
  if (param_4 == IVar1) {
    if (local_28 == 0) {
      local_60 = *(long *)PTR____NSArray0___02578280;
    }
    else {
      local_60 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAllItems__026a27d0,local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIsLoading__026c06f8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rebuildRightMenus_026c07d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyFilters_026c0720);
    if ((param_5 & 1) == 0) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadingView_026c0770);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_finishLoadingUI_026c07e0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

