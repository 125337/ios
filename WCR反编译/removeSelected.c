// removeSelected @ 01a01104

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationResultListViewController::removeSelected(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedUserNamesOrNil_026bb5d8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbyQvN);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_removeUserNames__026acbe8,local_28);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedUserNames_026bb538);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__yQRh);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

