// wcrConfirmInput @ 017d1d2c

/* Function Stack Size: 0x10 bytes */

void WCRefineAISessionSettingsViewController::wcrConfirmInput(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *local_70;
  cfstringStruct *local_50;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrAlert_026b5148);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_50 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_50;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrEditingKey_026b5168);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcrAlert__026b5140);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcrEditingKey__026b5138,0);
  IVar3 = local_18;
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_70 = (cfstringStruct *)0x0;
  }
  else {
    local_70 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_wcrSet_key__026b5108,local_70,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrReloadTable_026b5088);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

