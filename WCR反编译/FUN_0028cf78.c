// FUN_0028cf78 @ 0028cf78

void FUN_0028cf78(void)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_b0;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  uint local_38;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = pcVar2;
  while (local_28 != (char *)0x0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_startLoadingBlocked_026a1870);
    if ((((ulong)pcVar2 & 1) != 0) ||
       (pcVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,
                  PTR_s_startLoadingWithText_block__026a1878), ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_38 = 1;
      goto LAB_0028d344;
    }
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_parentViewController_0269e500);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = "CAppViewControllerManager";
  _objc_getClass();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getCurrentNavigationController_0269d620
            );
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getCurrentNavigationController_0269d620);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_58 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_b0;
    if (pcVar2 == (char *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_startLoadingBlocked_026a1870);
    pcVar2 = local_50;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_38 = (uint)bVar1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    if (local_38 != 0) goto LAB_0028d344;
  }
  pcVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = pcVar2;
  local_38 = 1;
LAB_0028d344:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

