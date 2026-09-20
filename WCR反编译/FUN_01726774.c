// FUN_01726774 @ 01726774

void FUN_01726774(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
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
    pcVar2 = "MMServiceCenter";
    _objc_getClass(param_1);
    pcVar3 = "CMessageMgr";
    local_28 = pcVar2;
    _objc_getClass();
    local_30 = pcVar3;
    if ((local_28 == (char *)0x0) || (pcVar3 == (char *)0x0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_GetMsg_LocalID__0269d5e8;
      local_40 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_18 = (char *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8);
        if (((ulong)pcVar2 & 1) == 0) {
          local_18 = (char *)0x0;
        }
        else {
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar1,&cf_filehelper,local_20);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar2;
        }
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

