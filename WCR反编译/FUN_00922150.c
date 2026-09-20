// FUN_00922150 @ 00922150

void FUN_00922150(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined8 param_5)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_70;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  byte local_29;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_29 = param_4;
  _objc_storeStrong(&local_38,param_5);
  uVar3 = local_18;
  pcVar1 = &cf_swizzled_presentViewController_animated_completion_;
  _NSSelectorFromString(&cf_swizzled_presentViewController_animated_completion_);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar1,local_28,local_29 & 1,local_38);
  if ((DAT_028ce368 & 1) == 0) {
    local_3c = 1;
  }
  else {
    puVar2 = PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isMonitoring_026aa5a0);
    if (((ulong)puVar2 & 1) == 0) {
      local_3c = 1;
    }
    else {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_shouldIgnoreViewController__026aa5a8,local_28);
      if (((ulong)puVar2 & 1) == 0) {
        uVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_48;
        local_50 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_formattedNameForViewController__026aa598,local_28);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_58 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__<);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_logWithFormat__026aa3c0,&cf___);
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_logLevel_026aa5b0);
        if (0 < (long)puVar2) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_logWithFormat__026aa3c0,&cf_space_s_)
          ;
          uVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,
                     PTR_s_modalPresentationStyle_026aa5b8);
          if ((uVar5 & 1) != 0) {
            uVar5 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_modalPresentationStyle_026aa5b8);
            local_68 = uVar5;
            (*(code *)PTR__objc_retain_02578638)();
            local_70 = &cf__gw;
            if (local_68 == 0) {
              _objc_storeStrong(&local_70,&cf_hQO_);
            }
            else if (local_68 == 1) {
              _objc_storeStrong(0,&local_70,&cf_ubhUS);
            }
            else if (local_68 == 2) {
              _objc_storeStrong(0,&local_70,&cf_hUS);
            }
            else if (local_68 == 3) {
              _objc_storeStrong(0,&local_70,&cf_S_MRNNe);
            }
            else if (local_68 == 5) {
              _objc_storeStrong(0,&local_70,&cf_vhQO_);
            }
            else if (local_68 == 6) {
              _objc_storeStrong(0,&local_70,&cf_vS_MRNNe);
            }
            else if (local_68 == 7) {
              _objc_storeStrong(0,&local_70,&cf_9_QFh);
            }
            else {
              pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf__ld);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_70;
              local_70 = pcVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_logWithFormat__026aa3c0,&cf_space_s_);
            _objc_storeStrong(&local_70,0);
          }
        }
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
        _objc_storeStrong(&local_50,0);
        local_3c = 0;
      }
      else {
        local_3c = 1;
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

