// FUN_01a31370 @ 01a31370

void FUN_01a31370(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x28),PTR_s_setOn__0269dc80,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&cf_uir_R_gel_T_u,&cf_nx_,&PTR___NSConcreteGlobalBlock_0258ac30);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setBiometricEnabled__026bc2c8,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&cf_s_WSN_O_uuir_R__O,&cf_nx_,&PTR___NSConcreteGlobalBlock_0258ac10);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  return;
}

