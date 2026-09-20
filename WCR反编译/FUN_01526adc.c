// FUN_01526adc @ 01526adc

void FUN_01526adc(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMContext";
  _objc_getClass();
  pcVar2 = "ChatBoxMgr";
  local_20 = pcVar1;
  _objc_getClass();
  pcVar1 = local_20;
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  if ((((ulong)pcVar1 & 1) == 0) || (local_28 == (char *)0x0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar1 & 1) == 0) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

