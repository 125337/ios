// FUN_015f9a60 @ 015f9a60

void FUN_015f9a60(long param_1)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *local_48;
  cfstringStruct *local_40;
  char *local_28;
  long local_20;
  char *local_18;
  
  local_20 = param_1;
  if (param_1 == 0) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = "MMContext";
    _objc_getClass();
    pcVar2 = &cf_activeUserContext;
    local_28 = pcVar1;
    _NSSelectorFromString();
    local_40 = pcVar2;
    if ((local_28 == (char *)0x0) ||
       (pcVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar2),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar1 & 1) == 0)) {
        local_18 = (char *)0x0;
      }
      else {
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getService__0269d170,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

