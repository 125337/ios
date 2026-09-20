// FUN_0069ed78 @ 0069ed78

void FUN_0069ed78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  char *local_90;
  bool local_49;
  char *local_48;
  char *local_40;
  ulong local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  char *local_18;
  
  local_18 = (char *)0x0;
  _objc_storeStrong(&local_18,param_2);
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  local_20 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar3 = (ulong)puVar2 & 0xffffffff;
  if (((ulong)puVar2 & 1) == 0) {
    local_24 = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    local_30 = param_1;
    _WCRefinePreferredPluginHubViewController();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    if (uVar3 == 0) {
      local_24 = 1;
    }
    else {
      pcVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_navigationController_0269d458);
      local_49 = ((ulong)pcVar4 & 1) == 0;
      if (local_49) {
        local_90 = (char *)0x0;
      }
      else {
        local_90 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_48 = local_90;
      }
      local_49 = !local_49;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = local_90;
      if (local_49) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      if (local_40 == (char *)0x0) {
        pcVar4 = "CAppViewControllerManager";
        _objc_getClass();
        pcVar5 = &cf_getCurrentNavigationController;
        _NSSelectorFromString();
        pcVar6 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,pcVar5);
        if (((ulong)pcVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,pcVar5);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_40;
          local_40 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
        }
      }
      pcVar5 = &cf_PushViewController_animated_;
      _NSSelectorFromString();
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar5);
      if (((ulong)pcVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_pushViewController_animated__0269d590,local_38,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar5,local_38,1);
      }
      _objc_storeStrong(&local_40,0);
      local_24 = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

