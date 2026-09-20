// copyToDoMediaFromURL:error: @ 01ecfbc8

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoListSettingsViewController::copyToDoMediaFromURL_error_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID local_58;
  ID local_50;
  cfstringStruct *local_48;
  ID local_40;
  ID *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar2 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_toDoCurrentBackgroundFolderPath_026c7ca0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pendingMediaVariant_026be588);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = &cf_dark;
  if ((IVar4 & 1) == 0) {
    local_48 = &cf_light;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_safeToDoBackgroundFileNameFromUR_026c7ca8,local_30,local_48);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_40;
  local_50 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_stringByAppendingPathComponent__026cab30,IVar2);
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_deleteOldToDoBackgroundMediaInFo_026c7cb0,local_40,local_48,local_50);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_58);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_copyItemAtURL_toURL_error__026a22c8,uVar1,puVar5,local_38);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_18 = local_58;
  if (((ulong)puVar6 & 1) == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

