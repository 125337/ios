// FUN_01569a40 @ 01569a40

void FUN_01569a40(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMContext";
  _objc_getClass();
  local_20 = pcVar1;
  if ((pcVar1 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    _objc_storeStrong(&local_28,0);
    if (pcVar1 != (char *)0x0) goto LAB_01569b84;
  }
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  if ((pcVar1 == (char *)0x0) ||
     (pcVar2 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar2 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
LAB_01569b84:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

