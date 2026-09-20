// FUN_00522020 @ 00522020

void FUN_00522020(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "WCFacade";
  _objc_getClass();
  local_20 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    local_28 = (char *)0x0;
    pcVar1 = "MMContext";
    _objc_getClass();
    if ((pcVar1 != (char *)0x0) &&
       (pcVar2 = pcVar1,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
       ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_28;
      local_28 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_28 == (char *)0x0) {
      pcVar1 = "MMServiceCenter";
      _objc_getClass();
      if ((pcVar1 != (char *)0x0) &&
         (pcVar2 = pcVar1,
         (*(code *)PTR__objc_msgSend_02578628)
                   (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
         ((ulong)pcVar2 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_28;
        local_28 = pcVar1;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    if (local_28 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_serviceForClass__026a4a80);
        if (((ulong)pcVar1 & 1) == 0) {
          local_18 = (char *)0x0;
        }
        else {
          pcVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_serviceForClass__026a4a80,local_20);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar1;
        }
      }
      else {
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getService__0269d170,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

