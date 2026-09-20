// FUN_00392f1c @ 00392f1c

void FUN_00392f1c(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *local_50;
  char *local_48;
  uint local_3c;
  char *local_38;
  char *local_30;
  char *local_28;
  long local_20;
  char *local_18;
  
  local_20 = param_1;
  if (param_1 == 0) {
    local_18 = (char *)0x0;
    goto LAB_00393154;
  }
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar1 & 1) == 0) {
LAB_00393044:
      local_3c = 0;
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar1;
      if (pcVar1 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      local_3c = (uint)(pcVar1 != (char *)0x0);
      _objc_storeStrong(&local_38,0);
      if (local_3c == 0) goto LAB_00393044;
    }
    _objc_storeStrong(&local_30,0);
    if (local_3c != 0) goto LAB_00393154;
  }
  pcVar1 = "MMContext";
  _objc_getClass();
  local_48 = pcVar1;
  FUN_003612b8(pcVar1,&cf_currentContext);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pcVar2 = local_48;
    FUN_003612b8(local_48,&cf_activeUserContext);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_50;
    local_50 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
  if (((ulong)pcVar1 & 1) == 0) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  local_3c = 1;
  _objc_storeStrong(&local_50,0);
LAB_00393154:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

