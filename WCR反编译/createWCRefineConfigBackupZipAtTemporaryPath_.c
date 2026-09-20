// createWCRefineConfigBackupZipAtTemporaryPath: @ 00fac9b4

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::createWCRefineConfigBackupZipAtTemporaryPath_(ID param_1,SEL param_2,ID *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  char *pcVar7;
  cfstringStruct *local_100;
  char *local_a0;
  char *local_98;
  byte local_89;
  ulong local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined *local_48;
  ID *local_40;
  SEL local_38;
  ID local_30;
  ulong local_28;
  
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_flushConfigWriteSync_026a2e38);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configFilePath_0269f938);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_48;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if ((puVar1 == (undefined *)0x0) ||
     (puVar1 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fileExistsAtPath__026ca630,local_48),
     ((ulong)puVar1 & 1) == 0)) {
    if (local_40 != (ID *)0x0) {
      _objc_retainAutorelease();
      *local_40 = (ID)&cf_Mn_eNNX__W;
    }
    local_28 = 0;
    local_54 = 1;
  }
  else {
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _arc4random_uniform(0xffffffff);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_WCRefineBackup__u);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeItemAtPath_error__0269f910,local_60);
    puVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_60,1,0);
    if (((ulong)puVar1 & 1) == 0) {
      if (local_40 != (ID *)0x0) {
        _objc_retainAutorelease();
        *local_40 = (ID)&cf_elR_4NevU_;
      }
      local_28 = 0;
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = &cf_com_qimiao_WCRefine_plist;
      puVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_stringByAppendingPathComponent__026cab30,
                 &cf_com_qimiao_WCRefine_plist);
      _objc_retainAutoreleasedReturnValue();
      local_78 = (cfstringStruct *)0x0;
      local_80 = 0;
      puVar2 = local_50;
      local_70 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_copyItemAtPath_toPath_error__026a1758,local_48,puVar1,&local_80);
      _objc_storeStrong(&local_78,local_80);
      uVar4 = (ulong)puVar2 & 0xffffffff;
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_removeItemAtPath_error__0269f910,local_60,0);
        if (local_40 != (ID *)0x0) {
          pcVar5 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_localizedDescription_0269ced0);
          _objc_retainAutoreleasedReturnValue();
          local_100 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_100 = &cf_Y6RMn_1Y_;
          }
          _objc_retainAutorelease();
          *local_40 = (ID)local_100;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
        }
        local_28 = 0;
        local_54 = 1;
      }
      else {
        _NSTemporaryDirectory();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        _arc4random_uniform(0xffffffff);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_stringWithFormat__0269cca8,&cf_WCRefineBackup__u_zip);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar6;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_removeItemAtPath_error__0269f910,local_88,0);
        local_89 = 0;
        pcVar7 = "ZipArchive";
        _objc_getClass();
        local_98 = pcVar7;
        if (pcVar7 != (char *)0x0) {
          _objc_alloc_init();
          local_a0 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar7,PTR_s_respondsToSelector__026ca818,PTR_s_CreateZipFile2__026acf60);
          if (((ulong)pcVar7 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_CreateZipFile2__026acf60,local_88);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_addFileToZip_newname__026acf68,local_70,local_68);
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_CloseZipFile2_026acf70);
            puVar1 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_fileExistsAtPath__026ca630,local_88);
            local_89 = (byte)puVar1;
          }
          _objc_storeStrong(&local_a0,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_removeItemAtPath_error__0269f910,local_60,0);
        local_28 = local_88;
        if ((local_89 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_removeItemAtPath_error__0269f910,local_88,0);
          if (local_40 != (ID *)0x0) {
            _objc_retainAutorelease();
            *local_40 = (ID)&cf_SbS;
          }
          local_28 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
        }
        local_54 = 1;
        _objc_storeStrong(&local_88,0);
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

