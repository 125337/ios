// toggleEncryption: @ 01a30de4

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::toggleEncryption_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEncryptionEnabled__026bc2c0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBiometricEnabled__026bc2c8,0);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasEncryptionPassword_026bc2b0);
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showSetEncryptionPasswordAlert_026bc2b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEncryptionEnabled__026bc2c0,1);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_canUseBiometric_026b3560);
      if ((IVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBiometricEnabled__026bc2c8,1);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_WCRefine,&cf___T_u_OR_,&cf_nx_,&PTR___NSConcreteGlobalBlock_0258abf0);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

