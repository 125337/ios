// wcr_isInPageSheetHost @ 01f709d8

/* Function Stack Size: 0x10 bytes */

bool WCRefineVoicePackManagerViewController::wcr_isInPageSheetHost(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  puVar3 = PTR_WCRefineVoicePackPickerViewController_026cea10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackPickerViewController_026cea10,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_2c = 0;
  if ((IVar1 & 1) != 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageSheetMode_026c9788);
    local_2c = (uint)IVar1;
  }
  _objc_storeStrong(&local_28,0);
  return local_2c & 1;
}

