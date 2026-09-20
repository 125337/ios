// confirmWebInputPanel @ 01e91084

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::confirmWebInputPanel(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_30;
  ID local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingWebInputCompletion_026c73a8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingWebInputText_026c73b8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingWebUIAlert__026c7360);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingWebInputCompletion__026c7380,0);
  if (local_28 != 0) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_58 = &::cf___;
    }
    else {
      local_58 = local_30;
    }
    (**(code **)(local_28 + 0x10))(local_28,local_58);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

