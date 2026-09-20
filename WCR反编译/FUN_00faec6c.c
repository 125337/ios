// FUN_00faec6c @ 00faec6c

void FUN_00faec6c(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *local_c8;
  char *local_98;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  int local_2c;
  char *local_28;
  char *local_20;
  char *local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = pcVar1;
  while( true ) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar1 == (char *)0x0) break;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    local_28 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar2 = local_28;
  FUN_00fc861c();
  pcVar1 = local_28;
  if (((ulong)pcVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_2c = 1;
    goto LAB_00faf068;
  }
  pcVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  while( true ) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar1 == (char *)0x0) break;
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar2 = local_38;
  FUN_00fc861c();
  pcVar1 = local_38;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar1 = "CAppViewControllerManager";
    _objc_getClass();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,
               PTR_s_getCurrentNavigationController_0269d620);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getCurrentNavigationController_0269d620);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        local_58 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_58;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = local_98;
      if (pcVar1 == (char *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar2 = local_50;
      FUN_00fc861c();
      pcVar1 = local_50;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_48;
        FUN_00fc861c();
        pcVar1 = local_48;
        if (((ulong)pcVar2 & 1) == 0) {
          local_2c = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
          local_2c = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_2c = 1;
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      if (local_2c != 0) goto LAB_00faf058;
    }
    if (local_28 == (char *)0x0) {
      local_c8 = local_38;
    }
    else {
      local_c8 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_c8;
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_2c = 1;
  }
LAB_00faf058:
  _objc_storeStrong(&local_38,0);
LAB_00faf068:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

