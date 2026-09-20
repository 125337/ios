// FUN_00290ec4 @ 00290ec4

void FUN_00290ec4(void)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_68;
  char *local_48;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "CAppViewControllerManager";
  _objc_getClass();
  local_20 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getCurrentNavigationController_0269d620
            );
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getCurrentNavigationController_0269d620);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_48 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_68;
    if (pcVar2 == (char *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    while( true ) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      pcVar4 = local_28;
      pcVar2 = local_30;
      if (pcVar3 == (char *)0x0) break;
      pcVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30;
      local_30 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_30 == (char *)0x0) {
      if (local_28 == (char *)0x0) {
        bVar1 = false;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar4;
        bVar1 = true;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      bVar1 = true;
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
    if (bVar1) goto LAB_002911d8;
  }
  pcVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar2;
LAB_002911d8:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

