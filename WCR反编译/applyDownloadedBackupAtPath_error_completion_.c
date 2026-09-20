// applyDownloadedBackupAtPath:error:completion: @ 00f083a4

/* Function Stack Size: 0x28 bytes */

void WCRefineCloudBackupService::applyDownloadedBackupAtPath_error_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_c8;
  cfstringStruct *local_88;
  undefined8 local_60;
  byte local_51;
  cfstringStruct *local_50;
  ID local_48;
  undefined4 local_3c;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  IVar3 = local_18;
  uVar1 = local_38;
  if (lVar2 == 0) {
    pcVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_88 = &cf_Nzlg_b0RYN;
    }
    else {
      local_88 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_finish_success_message__026abb10,uVar1,0,local_88);
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_connectionSnapshot_026abbd0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = (cfstringStruct *)0x0;
    local_60 = 0;
    puVar4 = PTR_WCRefineHelper_026ce000;
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_restoreWCRefineConfigFromImporte_026abbd8,local_28,
               &local_60);
    _objc_storeStrong(&local_50,local_60);
    local_51 = (byte)puVar4;
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar3 = local_18;
    uVar1 = local_38;
    if ((local_51 & 1) == 0) {
      pcVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_c8 = &cf_b_YMn_1Y_;
      }
      else {
        local_c8 = local_50;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_finish_success_message__026abb10,uVar1,0,local_c8);
      local_3c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_applyConnectionSnapshot__026abbe0,local_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_rememberStatus_upload_download__026abb18,&cf__NNzb_Y,0,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_finish_success_message__026abb10,local_38,1,&cf__NNzbSv_b_YMn_);
      local_3c = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

