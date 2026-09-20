// FUN_00fac3a8 @ 00fac3a8

void FUN_00fac3a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38 [3];
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_flushConfigWriteSync_026a2e38);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configFilePath_0269f938);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_38[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_wcRefineBackupDirectory_026acf48);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_40;
  local_48 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fileExistsAtPath__026ca630,uVar3);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_48,1,0);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = &cf_com_qimiao_WCRefine_plist;
  uVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_stringByAppendingPathComponent__026cab30,&cf_com_qimiao_WCRefine_plist);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_40;
  local_58 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fileExistsAtPath__026ca630,uVar3);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_removeItemAtPath_error__0269f910,local_58,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_copyItemAtPath_toPath_error__026a1758,local_38[0],local_58,0);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_38,0);
  return;
}

