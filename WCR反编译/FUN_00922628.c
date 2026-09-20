// FUN_00922628 @ 00922628

void FUN_00922628(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined8 local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30 = 0;
  local_21 = param_3;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_18;
  pcVar2 = &cf_swizzled_dismissViewControllerAnimated_completion_;
  _NSSelectorFromString(&cf_swizzled_dismissViewControllerAnimated_completion_);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar2,local_21 & 1,local_30);
  if ((DAT_028ce368 & 1) == 0) {
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isMonitoring_026aa5a0);
    if (((ulong)puVar3 & 1) == 0) {
      local_34 = 1;
    }
    else {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_shouldIgnoreViewController__026aa5a8,local_18);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_formattedNameForViewController__026aa598,local_18);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_48 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_logWithFormat__026aa3c0,&cf___);
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
        local_34 = 0;
      }
      else {
        local_34 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

