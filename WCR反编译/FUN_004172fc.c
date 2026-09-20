// FUN_004172fc @ 004172fc

void FUN_004172fc(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  long local_20;
  char *local_18;
  
  local_20 = param_1;
  if (param_1 < 1) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = "MMServiceCenter";
    _objc_getClass(param_1);
    pcVar2 = "CMessageMgr";
    local_28 = pcVar1;
    _objc_getClass();
    local_30 = pcVar2;
    if ((local_28 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getService__0269d170,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
         ((ulong)pcVar1 & 1) == 0)) {
        local_18 = (char *)0x0;
      }
      else {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_GetMsg_LocalID__0269d5e8,&cf_filehelper,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

