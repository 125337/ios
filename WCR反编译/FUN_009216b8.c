// FUN_009216b8 @ 009216b8

void FUN_009216b8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_e0;
  undefined *local_90;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  byte local_39;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  local_39 = param_3;
  local_38 = param_2;
  if ((DAT_028ce368 & 1) == 0) {
    pcVar3 = &cf_swizzled_popViewControllerAnimated_;
    _NSSelectorFromString(&cf_swizzled_popViewControllerAnimated_);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar3,local_39 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_40 = 1;
    local_28 = pcVar2;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = (cfstringStruct *)0x0;
    local_48 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = &cf__gw;
    local_60 = (cfstringStruct *)0x0;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isMonitoring_026aa5a0);
    if ((((ulong)pcVar2 & 1) != 0) &&
       (pcVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_viewControllers_0269e348),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
      pcVar3 = local_68;
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
      if (pcVar3 != (cfstringStruct *)0x0) {
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lastObject_0269d200);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_50;
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_58;
        local_58 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_68,0);
    }
    pcVar3 = local_30;
    pcVar2 = &cf_swizzled_popViewControllerAnimated_;
    _NSSelectorFromString(&cf_swizzled_popViewControllerAnimated_);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar2,local_39 & 1);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_48;
    local_70 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isMonitoring_026aa5a0);
    pcVar2 = local_70;
    if (((ulong)pcVar4 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_40 = 1;
    }
    else {
      local_81 = false;
      bVar1 = local_50 == (cfstringStruct *)0x0;
      if (bVar1) {
        local_e0 = local_58;
      }
      else {
        local_e0 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_formattedNameForViewController__026aa598,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_e0;
      }
      local_81 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_e0;
      if ((local_81 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_logWithFormat__026aa3c0,&cf___);
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_logLevel_026aa5b0);
      if ((0 < (long)pcVar2) && (local_60 != (cfstringStruct *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_logWithFormat__026aa3c0,&cf_space_s_);
      }
      pcVar2 = local_70;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_40 = 1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

