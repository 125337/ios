// FUN_001b755c @ 001b755c

void FUN_001b755c(long param_1)

{
  char *pcVar1;
  char *local_58;
  char *local_50;
  int local_48;
  char *local_38;
  undefined *local_30;
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
    local_30 = PTR_s_getService__0269d170;
    local_28 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,local_30),
         ((ulong)pcVar1 & 1) == 0)) {
        local_48 = 0;
      }
      else {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,local_30,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_48 = 1;
        local_18 = pcVar1;
      }
      _objc_storeStrong(&local_38,0);
      if (local_48 != 0) goto LAB_001b77dc;
    }
    pcVar1 = "MMServiceCenter";
    _objc_getClass();
    local_50 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,local_30),
         ((ulong)pcVar1 & 1) == 0)) {
        local_48 = 0;
      }
      else {
        pcVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,local_30,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_48 = 1;
        local_18 = pcVar1;
      }
      _objc_storeStrong(&local_58,0);
      if (local_48 != 0) goto LAB_001b77dc;
    }
    local_18 = (char *)0x0;
  }
LAB_001b77dc:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

