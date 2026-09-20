// rememberStatus:upload:download: @ 00f025d8

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineCloudBackupService::rememberStatus_upload_download_
          (WCRefineCloudBackupService *this,ID param_1,SEL param_2,ID param_3,bool param_4,
          bool param_5)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  double in_d0;
  cfstringStruct *local_50;
  ID local_40;
  undefined *local_38;
  byte local_2a;
  byte local_29;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_2a = (byte)param_5;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_50 = &::cf___;
  }
  else {
    local_50 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCloudBackupLastStatus__026abab0,local_50);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nowStamp_026abab8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCloudBackupLastUploadAt__026abac0,IVar3)
    ;
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setCloudBackupLastUploadUnix__026abac8,(long)in_d0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_2a & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setCloudBackupLastDownloadAt__026abad0,local_40);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

