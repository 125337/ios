// isPluginVersionCloudHardBlocked @ 00fbf3f8

/* Function Stack Size: 0x10 bytes */

bool WCRefineHelper::isPluginVersionCloudHardBlocked(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return (bool)puVar2;
}

