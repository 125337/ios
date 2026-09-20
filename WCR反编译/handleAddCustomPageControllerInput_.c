// handleAddCustomPageControllerInput: @ 01cce3c0

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardActionConfigViewController::handleAddCustomPageControllerInput_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long local_40;
  uint local_34;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingAddPageName_026c3658);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingAddPageName__026c3628,0);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_34 = 1;
  }
  else {
    lVar2 = local_28;
    FUN_01cca0ec();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_persistAddedCustomPageActionWith_026c3660,local_30,local_40);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_c6RhVN_Nzz);
    }
    local_34 = (uint)(lVar2 == 0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

