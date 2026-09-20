// performBackup: @ 01ca1e80

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginManagementViewController::performBackup_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined1 local_61;
  undefined8 local_60;
  ID local_58;
  cfstringStruct *local_50;
  ID local_48;
  undefined4 local_3c;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_flushConfigWriteSync_026a2e38);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configFilePath_0269f938);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630,local_30);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_showErrorAlert_message__026c2da8,&cf_YN1Y_,&cf_Mn_eNNX__W);
    local_3c = 1;
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getBackupDirectory_026c2db0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileExistsAtPath__026ca630,IVar3);
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_48,1,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = &cf_com_qimiao_WCRefine_plist;
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_stringByAppendingPathComponent__026cab30,&cf_com_qimiao_WCRefine_plist
              );
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileExistsAtPath__026ca630,IVar3);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_removeItemAtPath_error__0269f910,local_58,0);
    }
    local_60 = 0;
    local_70 = 0;
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_copyItemAtPath_toPath_error__026a1758,local_30,local_58,&local_70);
    _objc_storeStrong(&local_60,local_70);
    IVar3 = local_18;
    local_61 = SUB81(puVar1,0);
    if (((ulong)puVar1 & 1) == 0) {
      uVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_showErrorAlert_message__026c2da8,&cf_YN1Y_);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_showSuccessAlert_message__026c2db8,&cf_YNbR,&cf_Mn__YNlvvU_);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

