// openSendCodeFormatSheet @ 0173cf8c

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropViewController::openSendCodeFormatSheet(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setEditingThemeIndex__026b3db8,0xffffffffffffffff);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentStockRepository_026b3dd8);
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setEditingSendCodeFormatStockRep_026b3f30,IVar1);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_48 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentSendCodeFormatPluginStyle_026b3f38,local_30,local_28);
  _objc_storeStrong(&local_30,0);
  return;
}

