// getFavForawrdViewController @ 00f95b8c

/* Function Stack Size: 0x10 bytes */

ID WCRFinderFavForwardDelegateProxy::getFavForawrdViewController(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_a0;
  char *local_68;
  char *local_58;
  int local_50;
  byte local_49;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  SEL local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "CAppViewControllerManager";
  local_28 = param_2;
  local_20 = (char *)param_1;
  _objc_getClass();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getCurrentNavigationController_0269d620
            );
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getCurrentNavigationController_0269d620);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 0;
    local_68 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_68 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_68;
    }
    local_49 = pcVar1 == (char *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_68;
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    while( true ) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      pcVar3 = local_38;
      pcVar1 = local_40;
      if (pcVar2 == (char *)0x0) break;
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_40 == (char *)0x0) {
      if (local_38 == (char *)0x0) {
        local_50 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
        local_50 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_50 = 1;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    if (local_50 != 0) goto LAB_00f95e98;
  }
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewController_026a5588);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_presentedViewController_0269d448);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_a0 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_a0;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  local_50 = 1;
  _objc_storeStrong(&local_58,0);
LAB_00f95e98:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

