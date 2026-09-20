// confirmSliderInput: @ 019dc04c

/* Function Stack Size: 0x18 bytes */

void WCRefineFontBeautifyViewController::confirmSliderInput_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  cfstringStruct *local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  ID local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_39 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_78 = &::cf___;
  }
  else {
    local_78 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_78;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_70 = 0.0;
  local_50 = 0.0;
  local_58 = 1.0;
  local_60 = 0;
  local_68 = 0;
  local_48 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_sliderConfigForKind_min_max_valu_026baf58,IVar5,&local_50,&local_58,
             &local_60,&local_68);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
  if (local_48 == 0x7d1) {
    local_70 = local_70 / 100.0;
  }
  if (local_70 < local_50) {
    local_70 = local_50;
  }
  if (local_58 < local_70) {
    local_70 = local_58;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,local_18,PTR_s_applySliderValue_forKind__026bafa0,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

