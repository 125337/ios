// restoreWindowLevelAfterTextInput @ 01659178

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::restoreWindowLevelAfterTextInput(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasSavedWindowLevelForTextInput_026b2210);
  if ((param_1 & 1) != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_28 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_savedWindowLevelForTextInput_026b2218);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWindowLevel__026caae8);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setHasSavedWindowLevelForTextInp_026b2220,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

