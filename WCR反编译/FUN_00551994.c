// FUN_00551994 @ 00551994

void FUN_00551994(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_28;
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
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       pcVar2 = local_28, ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      if (DAT_028cb428 == (char *)0x0) {
        pcVar1 = "WCFacade";
        _objc_getClass();
        DAT_028cb428 = pcVar1;
      }
      pcVar1 = DAT_028cb428;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

