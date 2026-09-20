// wcr_hostSheet @ 01f70b0c

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoicePackManagerViewController::wcr_hostSheet(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_30;
  puVar3 = PTR_WCRefineVoicePackPickerViewController_026cea10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackPickerViewController_026cea10,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar1 & 1) == 0) {
    local_18 = 0;
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hostSheet_026c8f78);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

