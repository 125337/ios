// FUN_006a3894 @ 006a3894

byte FUN_006a3894(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_50;
  cfstringStruct *local_48;
  int local_3c;
  ulong local_38;
  int local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar4 = local_20;
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar4;
    local_3c = 0;
    pcVar3 = &cf_WCPluginsViewController;
    _NSClassFromString();
    local_48 = pcVar3;
    do {
      if (local_38 == 0 || 7 < local_3c) {
        local_11 = 0;
        local_30 = 1;
        break;
      }
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar4;
      if ((local_48 == (cfstringStruct *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,local_48),
         (uVar4 & 1) == 0)) {
        uVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_38;
        local_38 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        local_3c = local_3c + 1;
        local_30 = 0;
      }
      else {
        local_11 = 1;
        local_30 = 1;
      }
      _objc_storeStrong(&local_50,0);
    } while (local_30 == 0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

