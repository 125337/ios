// FUN_01cae954 @ 01cae954

void FUN_01cae954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getPluginTopFolderPath_026c2fe0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_stringByAppendingPathComponent__026cab30,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630,local_40);
  if (((ulong)puVar2 & 1) != 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_storedAvatarPathForPath__026c2f08,local_40)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setAvatarImagePath__026c2f10);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_saveSettings_026b9548);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_triggerHapticFeedback_0269dc78);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

