// FUN_00920254 @ 00920254

void FUN_00920254(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  pcVar1 = &cf_swizzled_viewDidLoad;
  local_20 = param_2;
  _NSSelectorFromString(&cf_swizzled_viewDidLoad);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar1);
  if ((DAT_028ce368 & 1) == 0) {
    local_24 = 1;
  }
  else {
    puVar2 = PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isMonitoring_026aa5a0);
    if (((ulong)puVar2 & 1) == 0) {
      local_24 = 1;
    }
    else {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_shouldIgnoreViewController__026aa5a8,local_18);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_logLevel_026aa5b0);
        if (0 < (long)puVar2) {
          puVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_formattedNameForViewController__026aa598,local_18);
          _objc_retainAutoreleasedReturnValue();
          local_38 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_logWithFormat__026aa3c0,&cf__5);
          puVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_logLevel_026aa5b0);
          if ((1 < (long)puVar2) &&
             (uVar3 = local_18,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250),
             (uVar3 & 1) != 0)) {
            uVar3 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            local_40 = uVar3;
            if ((uVar3 != 0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0), uVar3 != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_logWithFormat__026aa3c0,&cf_space_s_);
            }
            _objc_storeStrong(&local_40,0);
          }
          _objc_storeStrong(&local_38,0);
        }
        local_24 = 0;
      }
      else {
        local_24 = 1;
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

