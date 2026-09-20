// FUN_017a86e4 @ 017a86e4

void FUN_017a86e4(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  (*DAT_028e4120)(param_1,param_2,param_3 & 1);
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    FUN_017b2b64(param_1,&cf_WCPluginsViewControllerviewDidAppear);
    FUN_017b377c(param_1);
  }
  return;
}

