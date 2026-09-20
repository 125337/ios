// toggleBiometric: @ 01a31018

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::toggleBiometric_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  ID IVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBiometricEnabled__026bc2c8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&cf___O_u_xL,&cf_nx_,&PTR___NSConcreteGlobalBlock_0258ac70);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_canUseBiometric_026b3560);
    IVar1 = local_18;
    if ((IVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_WCRefine,&cf_YN_ecuir_RR,&cf_nx_,&PTR___NSConcreteGlobalBlock_0258ac50);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      local_58 = PTR___NSConcreteStackBlock_02578660;
      local_50 = 0xc2000000;
      local_4c = 0;
      local_48 = FUN_01a31250;
      local_40 = &DAT_02583fe0;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_28;
      local_38 = IVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_authenticateWithBiometrics__026bc2d0,&local_58);
      _objc_storeStrong(&local_30);
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

