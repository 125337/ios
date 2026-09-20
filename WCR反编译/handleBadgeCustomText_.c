// handleBadgeCustomText: @ 01c33740

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateBeautifyViewController::handleBadgeCustomText_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_80;
  uint local_4c;
  cfstringStruct *local_48;
  byte local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &::cf___;
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  local_4c = 0;
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = (uint)pcVar2;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if ((local_4c & 1) != 0) {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if ((local_48 != (cfstringStruct *)0x0) &&
       (pcVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_80 = &::cf___;
      }
      _objc_storeStrong(&local_30,local_80);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_48,0);
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_postSettingsChanged_026c1808);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

