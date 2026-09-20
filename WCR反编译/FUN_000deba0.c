// FUN_000deba0 @ 000deba0

void FUN_000deba0(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = &cf_MMContext;
  _NSClassFromString();
  local_20 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    local_28 = (cfstringStruct *)0x0;
    pcVar1 = &cf_currentContext;
    _NSSelectorFromString();
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_28;
      local_28 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_28 == (cfstringStruct *)0x0) {
      pcVar1 = &cf_activeUserContext;
      _NSSelectorFromString();
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_28;
        local_28 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    pcVar1 = &cf_CMessageMgr;
    _NSClassFromString();
    if (((local_28 == (cfstringStruct *)0x0) || (pcVar1 == (cfstringStruct *)0x0)) ||
       (pcVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar2 & 1) == 0)) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getService__0269d170,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

