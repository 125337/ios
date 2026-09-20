// FUN_004f8a9c @ 004f8a9c

void FUN_004f8a9c(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  pcVar2 = "MMLanguageMgr";
  local_20 = pcVar1;
  _objc_getClass();
  local_28 = pcVar2;
  if ((local_20 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
    if (((ulong)pcVar1 & 1) == 0) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_30 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        local_18 = (char *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
                   local_28);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

