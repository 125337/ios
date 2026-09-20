// serviceOfClass: @ 00f31a5c

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::serviceOfClass_(ID param_1,SEL param_2,CLASS param_3)

{
  char *pcVar1;
  char *local_80;
  bool local_69;
  char *local_68;
  char *local_60;
  char *local_58;
  uint local_4c;
  char *local_48;
  char *local_40;
  char *local_38;
  CLASS local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  if (param_3 == 0) {
    local_18 = (char *)0x0;
    goto LAB_00f31cfc;
  }
  pcVar1 = "MMContext";
  _objc_getClass();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) == 0)) {
LAB_00f31b98:
      local_4c = 0;
    }
    else {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar1;
      if (pcVar1 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      local_4c = (uint)(pcVar1 != (char *)0x0);
      _objc_storeStrong(&local_48,0);
      if (local_4c == 0) goto LAB_00f31b98;
    }
    _objc_storeStrong(&local_40,0);
    if (local_4c != 0) goto LAB_00f31cfc;
  }
  local_80 = "MMServiceCenter";
  _objc_getClass();
  local_69 = local_80 == (char *)0x0;
  local_58 = local_80;
  if (local_69) {
    local_80 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_80;
  }
  local_69 = !local_69;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_80;
  if (local_69) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_60 == (char *)0x0) ||
     (pcVar1 = local_60,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getService__0269d170,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  local_4c = 1;
  _objc_storeStrong(&local_60,0);
LAB_00f31cfc:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

