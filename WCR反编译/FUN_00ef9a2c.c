// FUN_00ef9a2c @ 00ef9a2c

byte FUN_00ef9a2c(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *local_48;
  char *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  char *local_20;
  byte local_11;
  
  pcVar1 = "CAppViewControllerManager";
  _objc_getClass();
  pcVar2 = &cf_getAppViewControllerManager;
  local_20 = pcVar1;
  _NSSelectorFromString();
  pcVar3 = &cf_topViewControllerOfMainWindow;
  local_28 = pcVar2;
  _NSSelectorFromString();
  pcVar2 = &cf_jumpToOfflinePayWithEntryVC_;
  local_30 = pcVar3;
  _NSSelectorFromString();
  pcVar1 = local_20;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_28);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (pcVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_30),
     ((ulong)pcVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_20;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar4;
    if ((local_40 == (char *)0x0) ||
       ((pcVar4 == (char *)0x0 ||
        (pcVar1 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,local_38),
        ((ulong)pcVar1 & 1) == 0)))) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_38,local_48);
      local_11 = 1;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  return local_11 & 1;
}

