// rebuildSearchIndex @ 01d7f2ac

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::rebuildSearchIndex(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf__d_____,
             &cf__nd_g0Wd______X_0,&cf_Sm,0,&cf_nx_);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  return;
}

