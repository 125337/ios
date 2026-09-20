// FUN_00735314 @ 00735314

void FUN_00735314(void)

{
  char *pcVar1;
  char *local_60;
  char *local_58;
  uint local_4c;
  char *local_48 [3];
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMLanguageMgr";
  _objc_getClass();
  local_20 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
    goto LAB_007355f0;
  }
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
LAB_00735494:
      local_4c = 0;
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = pcVar1;
      if (pcVar1 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      local_4c = (uint)(pcVar1 != (char *)0x0);
      _objc_storeStrong(local_48,0);
      if (local_4c == 0) goto LAB_00735494;
    }
    _objc_storeStrong(&local_30,0);
    if (local_4c != 0) goto LAB_007355f0;
  }
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  local_58 = pcVar1;
  if ((pcVar1 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) == 0)) {
      local_4c = 0;
    }
    else {
      pcVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getService__0269d170,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_4c = 1;
      local_18 = pcVar1;
    }
    _objc_storeStrong(&local_60,0);
    if (local_4c != 0) goto LAB_007355f0;
  }
  local_18 = (char *)0x0;
LAB_007355f0:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

