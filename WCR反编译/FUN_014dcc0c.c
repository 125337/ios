// FUN_014dcc0c @ 014dcc0c

void FUN_014dcc0c(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = &cf_MMServiceCenter;
  _NSClassFromString();
  pcVar2 = &cf_CContactMgr;
  local_20 = pcVar1;
  _NSClassFromString();
  local_28 = pcVar2;
  if ((local_20 == (cfstringStruct *)0x0) || (pcVar2 == (cfstringStruct *)0x0)) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
    local_39 = ((ulong)pcVar1 & 1) == 0;
    if (local_39) {
      local_48 = (cfstringStruct *)0x0;
    }
    else {
      local_48 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_48;
    }
    local_39 = !local_39;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_48;
    if (local_39) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if ((local_30 == (cfstringStruct *)0x0) ||
       (pcVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (cfstringStruct *)0x0;
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

