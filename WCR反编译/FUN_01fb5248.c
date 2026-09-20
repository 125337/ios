// FUN_01fb5248 @ 01fb5248

void FUN_01fb5248(void)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  char *local_58;
  char *local_48;
  char *local_40;
  char *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  char *local_18;
  
  pcVar2 = "CAppViewControllerManager";
  _objc_getClass();
  pcVar3 = &cf_getAppViewControllerManager;
  local_18 = pcVar2;
  _NSSelectorFromString();
  pcVar4 = &cf_getNewMainFrameViewController;
  local_20 = pcVar3;
  _NSSelectorFromString();
  pcVar3 = &cf_doUpdateTaskBarData;
  local_28 = pcVar4;
  _NSSelectorFromString();
  if ((local_18 != (char *)0x0) &&
     (pcVar2 = local_18, local_30 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,local_20),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,local_28);
    bVar1 = ((ulong)pcVar2 & 1) == 0;
    if (bVar1) {
      local_58 = (char *)0x0;
    }
    else {
      local_58 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_58;
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,local_30);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_30);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

