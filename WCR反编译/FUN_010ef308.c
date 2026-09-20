// FUN_010ef308 @ 010ef308

void FUN_010ef308(void)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  char *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMContext";
  _objc_getClass();
  pcVar2 = "MMThemeManager";
  local_20 = pcVar1;
  _objc_getClass();
  pcVar3 = &cf_currentContext;
  local_28 = pcVar2;
  _NSSelectorFromString();
  pcVar4 = &cf_getService_;
  local_30 = pcVar3;
  _NSSelectorFromString();
  local_38 = pcVar4;
  if (((local_20 == (char *)0x0) || (local_28 == (char *)0x0)) ||
     (pcVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_30),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,local_38),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_38,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

