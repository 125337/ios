// performClear @ 01ca6bc8

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginManagementViewController::performClear(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  uint local_4c;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_cancelPendingConfigWrite_0269f930);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configFilePath_0269f938);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_fileExistsAtPath__026ca630,local_28);
  if (((ulong)puVar4 & 1) != 0) {
    local_38 = 0;
    local_48 = 0;
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_removeItemAtPath_error__0269f910,local_28,&local_48);
    _objc_storeStrong(&local_38,local_48);
    IVar2 = local_18;
    local_39 = SUB81(puVar3,0);
    bVar1 = ((ulong)puVar3 & 1) == 0;
    if (bVar1) {
      uVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_showErrorAlert_message__026c2da8,&cf_nzz1Y_)
      ;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    local_4c = (uint)bVar1;
    _objc_storeStrong(&local_38,0);
    if (local_4c != 0) goto LAB_01ca6ecc;
  }
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_clearConfigCache_0269f948)
  ;
  puVar3 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_clearSidecarStores_026c2e88);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_reloadFromConfigAndPublish_0269f968);
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterPostNotification();
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_01ca6ef4;
  local_60 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = IVar2;
  _dispatch_async(puVar3,&local_78);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_58,0);
  local_4c = 0;
LAB_01ca6ecc:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

