// FUN_0010f1e0 @ 0010f1e0

void FUN_0010f1e0(long param_1)

{
  char *pcVar1;
  char *local_50;
  char *local_48;
  int local_40;
  char *local_30;
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
    local_28 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      local_30 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar1 & 1) == 0)) {
        local_40 = 0;
      }
      else {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_40 = 1;
        local_18 = pcVar1;
      }
      _objc_storeStrong(&local_30,0);
      if (local_40 != 0) goto LAB_0010f400;
    }
    pcVar1 = "MMServiceCenter";
    _objc_getClass();
    local_48 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        local_18 = (char *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getService__0269d170,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
      local_40 = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
LAB_0010f400:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

