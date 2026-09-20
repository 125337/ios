// handleSpeedInput: @ 01f672ec

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineVoiceCloneSettingsViewController::handleSpeedInput_
          (WCRefineVoiceCloneSettingsViewController *this,ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  double in_d0;
  cfstringStruct *local_48;
  double local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_48 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
  local_38 = in_d0;
  if (in_d0 <= 0.0) {
    local_38 = 1.0;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

