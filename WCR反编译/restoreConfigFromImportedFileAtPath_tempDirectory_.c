// restoreConfigFromImportedFileAtPath:tempDirectory: @ 01ca3700

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginManagementViewController::restoreConfigFromImportedFileAtPath_tempDirectory_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  cfstringStruct *local_90;
  undefined8 local_48;
  byte local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (cfstringStruct *)0x0;
  local_48 = 0;
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_restoreWCRefineConfigFromImporte_026abbd8,local_28,
             &local_48);
  _objc_storeStrong(&local_38,local_48);
  local_39 = (byte)puVar1;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_39 & 1) == 0) {
    if (local_38 == (cfstringStruct *)0x0) {
      local_90 = &cf_elb_Y_eQeN;
    }
    else {
      local_90 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_showErrorAlert_message__026c2da8,&cf_b_Y1Y_,local_90);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_showSuccessAlert_message__026c2db8,&cf_b_YbR,&cf_Mn__NeNb_YcN);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

