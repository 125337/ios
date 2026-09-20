// FUN_0069f200 @ 0069f200

void FUN_0069f200(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  uint local_44;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_44 = 0;
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_44 = (uint)puVar4 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar1 = local_18;
  if ((local_44 & 1) == 0) {
    if (DAT_028cbda8 != (code *)0x0) {
      (*DAT_028cbda8)(local_18,param_2);
    }
  }
  else {
    pcVar5 = &cf_WCRefine_openBuiltInPluginHub;
    _NSSelectorFromString(&cf_WCRefine_openBuiltInPluginHub);
    FUN_0069ed78(uVar1,pcVar5);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

