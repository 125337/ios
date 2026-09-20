// FUN_00940a00 @ 00940a00

void FUN_00940a00(undefined8 param_1,long param_2,long param_3)

{
  char *pcVar1;
  long lVar2;
  char *local_48;
  uint local_3c;
  char *local_38;
  long local_30;
  long local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "CMessageMgr";
  local_30 = param_3;
  local_28 = param_2;
  _objc_getClass();
  FUN_00941de4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (lVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_18 = (char *)0x0;
    local_3c = 1;
  }
  else {
    if ((0 < local_28) &&
       (pcVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_n64SvrID__0269d5f0),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_GetMsg_n64SvrID__0269d5f0,local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar1;
      if (pcVar1 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      local_3c = (uint)(pcVar1 != (char *)0x0);
      _objc_storeStrong(&local_48,0);
      if (local_3c != 0) goto LAB_00940c9c;
    }
    if ((local_30 < 1) ||
       (pcVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
      local_3c = 1;
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_GetMsg_LocalID__0269d5e8,local_20,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_3c = 1;
      local_18 = pcVar1;
    }
  }
LAB_00940c9c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

