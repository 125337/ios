// FUN_004c3314 @ 004c3314

void FUN_004c3314(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *local_50;
  bool local_41;
  char *local_40;
  char *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "CAppViewControllerManager";
  _objc_getClass();
  pcVar2 = &cf_getAppViewControllerManager;
  local_20 = pcVar1;
  _NSSelectorFromString();
  pcVar3 = &cf_getNewMainFrameViewController;
  local_28 = pcVar2;
  _NSSelectorFromString();
  local_30 = pcVar3;
  if ((local_20 == (char *)0x0) ||
     (pcVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_28),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,local_30);
    local_41 = ((ulong)pcVar1 & 1) == 0;
    if (local_41) {
      local_50 = (char *)0x0;
    }
    else {
      local_50 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_50;
    }
    local_41 = !local_41;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
    if (local_41) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

