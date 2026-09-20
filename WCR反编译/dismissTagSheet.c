// dismissTagSheet @ 01bfe4b4

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsForwardOfficialTagSheetDelegate::dismissTagSheet(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pageSheetAdapter_026c0c50);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
  if ((param_1 & 1) == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tagController_026c0c20);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_respondsToSelector__026ca818,
               PTR_s_DismissTagViewControllerAnimated_026c0c58);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_DismissTagViewControllerAnimated_026c0c58,1);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissWithAnimated__0269e420,1);
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

