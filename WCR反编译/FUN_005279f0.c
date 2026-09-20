// FUN_005279f0 @ 005279f0

void FUN_005279f0(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_28;
  undefined *local_20;
  char *local_18;
  
  pcVar2 = "WCRefineMomentsAutoRefreshManager";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    local_20 = PTR_s_sharedInstance_0269cd30;
    local_28 = (char *)0x0;
    local_18 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_sharedInstance_0269cd30);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_20);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_28;
      local_28 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    puVar1 = PTR_s_refreshRunningState_026a4938;
    if ((local_28 != (char *)0x0) &&
       (pcVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_refreshRunningState_026a4938),
       ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

