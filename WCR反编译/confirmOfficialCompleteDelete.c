// confirmOfficialCompleteDelete @ 01e823c4

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::confirmOfficialCompleteDelete(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingOfficialCompleteEntry_026c7190);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingOfficialCompleteRow_026c7198);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingOfficialCompleteAlert__026c7188);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingOfficialCompleteEntry__026c7168,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingOfficialCompleteRow__026c7170,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_completeEntry_row__026c7158,local_28,local_30);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

