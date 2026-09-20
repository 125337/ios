// showClearConfirmDialog @ 01ca6a34

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginManagementViewController::showClearConfirmDialog(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_01ca6b14;
  local_30 = &DAT_0257a770;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_nzzcNMn_,
             &cf_dkd_O_Rd_bgcNMn_Nelb_Y0nx___T,&cf_nzz,&local_48,&cf_fN,
             &PTR___NSConcreteGlobalBlock_0258be28);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  return;
}

