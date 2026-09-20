// FUN_006e085c @ 006e085c

void FUN_006e085c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (char *)0x0;
  pcVar1 = &cf_OnClear_;
  _NSSelectorFromString();
  pcVar2 = "MMUICommonUtil";
  _objc_getClass();
  pcVar3 = &cf_getBarButtonWithTitle_target_action_style_;
  _NSSelectorFromString();
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
    if (((ulong)pcVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar3,&cf_nzz,local_18,pcVar1,2);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_20;
      local_20 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
  }
  if (local_20 == (char *)0x0) {
    pcVar4 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_initWithTitle_style_target_actio_0269cf00,&cf_nzz,0,local_18,pcVar1);
    pcVar2 = local_20;
    local_20 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setAccessibilityLabel__0269e968,&cf_nzzevgSU_);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setAccessibilityHint__026a6c90,&cf_nzzdkubvhQSSU_);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_accessibilityLabel_0269e1c8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customView_0269ea28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_accessibilityHint_026a6c98);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customView_0269ea28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar2);
  return;
}

