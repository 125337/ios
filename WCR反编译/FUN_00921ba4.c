// FUN_00921ba4 @ 00921ba4

void FUN_00921ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  undefined8 local_40;
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_20;
  pcVar1 = &cf_swizzled_popToViewController_animated_;
  local_31 = param_4;
  _NSSelectorFromString(&cf_swizzled_popToViewController_animated_);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,pcVar1,local_30,local_31 & 1);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  if ((DAT_028ce368 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_44 = 1;
    local_18 = uVar2;
  }
  else {
    puVar3 = PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isMonitoring_026aa5a0);
    uVar2 = local_40;
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_44 = 1;
    }
    else {
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_formattedNameForViewController__026aa598,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_logWithFormat__026aa3c0,&cf__);
      uVar2 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_44 = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

