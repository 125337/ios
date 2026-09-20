// FUN_00fae91c @ 00fae91c

void FUN_00fae91c(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_58;
  char *local_48;
  int local_40;
  byte local_39;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "CAppViewControllerManager";
  _objc_getClass();
  local_20 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getCurrentNavigationController_0269d620
            );
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getCurrentNavigationController_0269d620);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 0;
    local_58 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_58 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_58;
    }
    local_39 = pcVar1 == (char *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_58;
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    while( true ) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (pcVar1 == (char *)0x0) break;
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar2 = local_30;
    FUN_00fc861c();
    pcVar1 = local_30;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_28;
      FUN_00fc861c();
      pcVar1 = local_28;
      if (((ulong)pcVar2 & 1) == 0) {
        local_40 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_40 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_40 = 1;
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
    if (local_40 != 0) goto LAB_00faec5c;
  }
  pcVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  while( true ) {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    pcVar1 = local_48;
    if (pcVar2 == (char *)0x0) break;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48;
    local_48 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = pcVar1;
  local_40 = 1;
  _objc_storeStrong(&local_48,0);
LAB_00faec5c:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

