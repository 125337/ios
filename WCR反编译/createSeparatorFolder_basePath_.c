// createSeparatorFolder:basePath: @ 01c69928

/* Function Stack Size: 0x20 bytes */

void WCRefineNavigationAvatarViewController::createSeparatorFolder_basePath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  char *pcVar4;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if (local_30 == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getSeparatorBasePath_026c24b8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    local_30 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByAppendingPathComponent__026cab30,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = 0;
  local_50 = 0;
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_38,1,0,&local_50);
  _objc_storeStrong(&local_48,local_50);
  if (((ulong)puVar3 & 1) == 0) {
    pcVar4 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    _objc_storeStrong(&local_58,0);
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveSettings_026b9548);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

