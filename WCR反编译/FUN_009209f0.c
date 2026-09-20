// FUN_009209f0 @ 009209f0

void FUN_009209f0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_28;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  pcVar2 = &cf_swizzled_viewWillDisappear_;
  local_21 = param_3;
  local_20 = param_2;
  _NSSelectorFromString(&cf_swizzled_viewWillDisappear_);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar2,local_21 & 1);
  if ((DAT_028ce368 & 1) == 0) {
    local_28 = 1;
  }
  else {
    puVar3 = PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isMonitoring_026aa5a0);
    if (((ulong)puVar3 & 1) == 0) {
      local_28 = 1;
    }
    else {
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_logLevel_026aa5b0);
      if ((long)puVar3 < 1) {
        local_28 = 1;
      }
      else {
        puVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_shouldIgnoreViewController__026aa5a8,local_18);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_formattedNameForViewController__026aa598,local_18);
          _objc_retainAutoreleasedReturnValue();
          local_38 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_logWithFormat__026aa3c0,&cf__);
          _objc_storeStrong(&local_38,0);
          local_28 = 0;
        }
        else {
          local_28 = 1;
        }
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

