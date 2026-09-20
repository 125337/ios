// applyWCRefineConfigPlistAtPath:errorMessage: @ 00fad024

/* Function Stack Size: 0x20 bytes */

bool WCRefineHelper::applyWCRefineConfigPlistAtPath_errorMessage_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_f8;
  undefined8 local_88;
  undefined1 local_79;
  cfstringStruct *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  ID *local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_48 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_40;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (puVar1 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fileExistsAtPath__026ca630,local_40),
     ((ulong)puVar1 & 1) == 0)) {
    if (local_48 != (ID *)0x0) {
      _objc_retainAutorelease();
      *local_48 = (ID)&cf_YNeNNX__W;
    }
    local_21 = 0;
    local_54 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_60 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar1 & 1) == 0) {
      if (local_48 != (ID *)0x0) {
        _objc_retainAutorelease();
        *local_48 = (ID)&cf_Mn_eN<h_;
      }
      local_21 = 0;
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_cancelPendingConfigWrite_0269f930);
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_configFilePath_0269f938);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____backup)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeItemAtPath_error__0269f910,puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_copyItemAtPath_toPath_error__026a1758,local_68,local_70,0);
      puVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fileExistsAtPath__026ca630,local_68);
      if (((ulong)puVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_removeItemAtPath_error__0269f910,local_68,0);
      }
      local_78 = (cfstringStruct *)0x0;
      local_88 = 0;
      puVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_copyItemAtPath_toPath_error__026a1758,local_40,local_68,&local_88);
      _objc_storeStrong(&local_78,local_88);
      local_79 = SUB81(puVar1,0);
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fileExistsAtPath__026ca630,local_70);
        if (((ulong)puVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_copyItemAtPath_toPath_error__026a1758,local_70,local_68,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineConfig_026cdf58,PTR_s_clearConfigCache_0269f948);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_removeItemAtPath_error__0269f910,local_70,0);
        if (local_48 != (ID *)0x0) {
          pcVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_localizedDescription_0269ced0);
          _objc_retainAutoreleasedReturnValue();
          local_f8 = pcVar4;
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_f8 = &cf_vMn_1Y_;
          }
          _objc_retainAutorelease();
          *local_48 = (ID)local_f8;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineConfig_026cdf58,PTR_s_clearConfigCache_0269f948);
        puVar1 = PTR_WCRefineGroupManager_026ce2b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePrivateFriendManager_026ce160,
                   PTR_s_reloadFromConfigAndPublish_0269f968);
        _CFNotificationCenterGetDarwinNotifyCenter();
        _CFNotificationCenterPostNotification();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_removeItemAtPath_error__0269f910,local_70,0);
        local_21 = 1;
      }
      local_54 = 1;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

