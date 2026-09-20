// handleMultiSelectFromChatViewController: @ 00f6f77c

/* Function Stack Size: 0x18 bytes */

void WCRefineForwardToGroupHelper::handleMultiSelectFromChatViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_multiSelectEntryEnabled_026a1e38);
  if ((IVar1 & 1) == 0) {
    local_2c = 1;
  }
  else {
    lVar2 = local_28;
    FUN_00f6f870();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_count_0269cfe0);
    if (lVar2 != 0) {
      FUN_00f6f26c(local_28,local_38);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbmo_);
    }
    local_2c = (uint)(lVar2 == 0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

