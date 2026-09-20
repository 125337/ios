// FUN_00921de0 @ 00921de0

void FUN_00921de0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50;
  undefined *local_48;
  undefined4 local_3c;
  ulong local_38;
  byte local_29;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  pcVar1 = &cf_swizzled_popToRootViewControllerAnimated_;
  local_29 = param_3;
  local_28 = param_2;
  _NSSelectorFromString(&cf_swizzled_popToRootViewControllerAnimated_);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,pcVar1,local_29 & 1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  if ((DAT_028ce368 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_3c = 1;
    local_18 = uVar2;
  }
  else {
    puVar3 = PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isMonitoring_026aa5a0);
    uVar2 = local_38;
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_logWithFormat__026aa3c0,&cf__);
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_logLevel_026aa5b0);
      if ((0 < (long)puVar3) &&
         (uVar2 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_viewControllers_0269e348),
         (uVar2 & 1) != 0)) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
        puVar3 = local_48;
        if (1 < uVar2) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_logWithFormat__026aa3c0,&cf_space_s_);
        }
        _objc_storeStrong(&local_50,0);
      }
      uVar2 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

