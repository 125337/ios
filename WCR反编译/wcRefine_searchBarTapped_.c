// wcRefine_searchBarTapped: @ 01d79240

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchSettingsViewController::wcRefine_searchBarTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar1 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcRefine_normalizeSearchInputVie_026c4a90);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_focusSearchBar_0269eaa8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

