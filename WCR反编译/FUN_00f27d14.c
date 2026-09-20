// FUN_00f27d14 @ 00f27d14

void FUN_00f27d14(long param_1)

{
  char *pcVar1;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  byte local_41;
  char *local_40;
  char *local_38;
  char *local_30;
  long local_28;
  long local_20;
  char *local_18;
  
  local_20 = param_1;
  _objc_getClass();
  local_28 = param_1;
  if (param_1 == 0) {
    local_18 = (char *)0x0;
    goto LAB_00f27f5c;
  }
  pcVar1 = "MMContext";
  _objc_getClass();
  local_41 = 0;
  local_30 = pcVar1;
  if (pcVar1 == (char *)0x0) {
LAB_00f27dd8:
    local_58 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
    if (((ulong)pcVar1 & 1) == 0) goto LAB_00f27dd8;
    local_58 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_58;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (local_38 == (char *)0x0) {
LAB_00f27e88:
    pcVar1 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar1;
    if (pcVar1 == (char *)0x0) {
LAB_00f27f2c:
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
      if (((ulong)pcVar1 & 1) == 0) goto LAB_00f27f2c;
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
                 local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar1 & 1) == 0) goto LAB_00f27e88;
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getService__0269d170,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 1;
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_38,0);
LAB_00f27f5c:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

