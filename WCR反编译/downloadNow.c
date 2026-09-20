// downloadNow @ 018f2c54

/* Function Stack Size: 0x10 bytes */

void WCRefineCloudBackupSettingsViewController::downloadNow(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_18;
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_NNzbS,
             &cf__v_g_gS_MRcNMn__f_T__,&cf_Sm,0,&cf_bS);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  return;
}

