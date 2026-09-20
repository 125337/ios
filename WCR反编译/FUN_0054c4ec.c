// FUN_0054c4ec @ 0054c4ec

void FUN_0054c4ec(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *local_40;
  cfstringStruct *local_38;
  char *local_20;
  char *local_18;
  
  if (DAT_028cb400 == (char *)0x0) {
    pcVar1 = "MMContext";
    _objc_getClass();
    DAT_028cb400 = pcVar1;
  }
  pcVar1 = DAT_028cb400;
  _objc_retainAutoreleaseReturnValue();
  local_20 = pcVar1;
  pcVar2 = &cf_activeUserContext;
  _NSSelectorFromString();
  local_38 = pcVar2;
  if ((local_20 == (char *)0x0) ||
     (pcVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      if (DAT_028cb408 == (char *)0x0) {
        pcVar1 = "CContactMgr";
        _objc_getClass();
        DAT_028cb408 = pcVar1;
      }
      pcVar1 = DAT_028cb408;
      _objc_retainAutoreleaseReturnValue();
      if (pcVar1 == (char *)0x0) {
        local_18 = (char *)0x0;
      }
      else {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar3;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

