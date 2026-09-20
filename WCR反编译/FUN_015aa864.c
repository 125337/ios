// FUN_015aa864 @ 015aa864

void FUN_015aa864(long param_1)

{
  char *pcVar1;
  char *local_28;
  long local_20;
  char *local_18;
  
  local_20 = param_1;
  if (param_1 < 1) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = "CMessageMgr";
    _objc_getClass(param_1);
    FUN_015ad074();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_GetMsg_LocalID__0269d5e8,&cf_filehelper,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

