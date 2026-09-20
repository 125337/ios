// menuDeletePending @ 01e10c58

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatButtonConfigViewController::menuDeletePending(ID param_1,SEL param_2)

{
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingActionId_026c5d30);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEnabled_actionId__026c5d28,0,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

