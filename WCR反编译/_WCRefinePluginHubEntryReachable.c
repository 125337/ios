// _WCRefinePluginHubEntryReachable @ 0177d164

byte _WCRefinePluginHubEntryReachable(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte local_11;
  
  pcVar1 = "WCPluginsMgr";
  _objc_getClass();
  if (pcVar1 == (char *)0x0) {
    local_11 = 0;
  }
  else {
    puVar2 = PTR_WCRefinePluginHubManager_026ce800;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginHubManager_026ce800,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isSubclassOfClass__0269e590,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      local_11 = 1;
    }
    else {
      puVar2 = PTR_WCRefinePluginHubManager_026ce800;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = (byte)puVar3 & 1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  return local_11;
}

