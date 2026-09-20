// handleProfileOffsetInput: @ 01ce3f50

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineProfileCardBeautifyViewController::handleProfileOffsetInput_
          (WCRefineProfileCardBeautifyViewController *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  float in_s0;
  double local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if ((lVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0), lVar1 == 0)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_floatValue_026a5b48);
    local_38 = (double)in_s0;
    if (local_38 < -800.0) {
      local_38 = -800.0;
    }
    if (800.0 < local_38) {
      local_38 = 800.0;
    }
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

