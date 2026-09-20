// FUN_01d85768 @ 01d85768

void FUN_01d85768(long param_1)

{
  undefined *puVar1;
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = PTR_WCRefineSearchSettingsViewController_026cefb8;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSearchSettingsViewController_026cefb8,PTR_s_getCurrentCapturingKey_026c4c58
            );
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if ((puVar1 == (undefined *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0),
     puVar1 == (undefined *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_OX_1Y_,&cf_Uc__NzzepQMn_c,&cf_nx_,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_saveViewControllerClassName__026c4c70,
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

