// handleAutoBounceCooldownInput: @ 01de1564

/* Function Stack Size: 0x18 bytes */

void WCRefineSmallSignalSettingsViewController::handleAutoBounceCooldownInput_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_58;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_58 = 0;
  }
  else {
    local_58 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  FUN_01dde6c0();
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_58;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  if (((long)uVar2 < 1) || (0xb < (long)uVar2)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_eQ);
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifySettingsChanged_026b9a80);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

