// cancelWebConfirmPanel @ 01e90b20

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::cancelWebConfirmPanel(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingWebConfirmCompletion_026c73a0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingWebUIAlert__026c7360);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingWebConfirmCompletion__026c7368,0);
  if (local_28 != 0) {
    (**(code **)(local_28 + 0x10))(local_28,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

