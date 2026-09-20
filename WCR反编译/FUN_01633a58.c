// FUN_01633a58 @ 01633a58

byte FUN_01633a58(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *local_30;
  cfstringStruct *local_28;
  char *local_20;
  byte local_11;
  
  pcVar1 = "CAppViewControllerManager";
  _objc_getClass();
  pcVar2 = &cf_getAppViewControllerManager;
  local_20 = pcVar1;
  _NSSelectorFromString();
  if ((local_20 == (char *)0x0) ||
     (pcVar1 = local_20, local_28 = pcVar2,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_11 = 0;
    }
    else {
      pcVar2 = &cf_jumpToOfflinePay;
      _NSSelectorFromString();
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
      if (((ulong)pcVar1 & 1) == 0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar2);
        local_11 = 1;
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  return local_11 & 1;
}

