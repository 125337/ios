// showBackupDialog @ 01ca1618

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginManagementViewController::showBackupDialog(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  char *local_38;
  cfstringStruct *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_28 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &cf_YNeNX_lvvU_;
  puVar3 = PTR_WCRefineCloudBackupService_026cf140;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineCloudBackupService_026cf140,PTR_s_shouldSyncOnLocalBackup_026c2d90);
  if (((ulong)puVar3 & 1) != 0) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_stringByAppendingString__0269d398,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_30;
    local_30 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar2 = local_28;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_fN,local_18);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf___,local_18,
             PTR_s_performFixedBackup_026c2d98);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

