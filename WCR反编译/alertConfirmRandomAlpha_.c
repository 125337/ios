// alertConfirmRandomAlpha: @ 01f36a28

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineUIBeautifyViewController::alertConfirmRandomAlpha_
          (WCRefineUIBeautifyViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  float in_s0;
  double local_40;
  ID local_38;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30[0] = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_30[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_floatValue_026a5b48);
    local_40 = (double)in_s0;
    if (local_40 < 0.0) {
      local_40 = 0.0;
    }
    if (1.0 < local_40) {
      local_40 = 1.0;
    }
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(local_30,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

