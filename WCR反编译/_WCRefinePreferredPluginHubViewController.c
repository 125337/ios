// _WCRefinePreferredPluginHubViewController @ 01791658

void _WCRefinePreferredPluginHubViewController(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined1 local_19;
  cfstringStruct *local_18;
  
  puVar2 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_48 = (cfstringStruct *)((ulong)puVar3 & 0xffffffff);
  local_19 = SUB81(puVar3,0);
  if (((ulong)puVar3 & 1) == 0) {
    local_48 = &cf_WCPluginsViewController;
    _NSClassFromString();
  }
  else {
    FUN_01791780();
  }
  local_28 = local_48;
  if (local_48 == (cfstringStruct *)0x0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    _objc_alloc_init();
    local_30 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    pcVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

