// FUN_00413a2c @ 00413a2c

void FUN_00413a2c(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  char *local_78;
  ulong local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  uint local_48;
  ulong local_38;
  ulong local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar4 = local_30;
  FUN_004055cc(local_30,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
  if (uVar4 == 0) {
    local_28 = (char *)0x0;
    local_48 = 1;
    goto LAB_00413e74;
  }
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  pcVar2 = "CMessageMgr";
  local_50 = pcVar1;
  _objc_getClass();
  local_58 = pcVar2;
  if ((local_50 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
    local_28 = (char *)0x0;
    local_48 = 1;
    goto LAB_00413e74;
  }
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getService__0269d170,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    uVar4 = local_30;
    FUN_00412e78(local_30,&cf_mesSvrID);
    local_70 = uVar4;
    if (0 < (long)uVar4) {
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_n64SvrID__0269d5f0);
      uVar4 = (ulong)pcVar1 & 0xffffffff;
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_GetMsg_n64SvrID__0269d5f0,local_38,local_70);
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar1;
        if (pcVar1 != (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar1;
        }
        local_48 = (uint)(pcVar1 != (char *)0x0);
        _objc_storeStrong(&local_78,0);
        if (local_48 != 0) goto LAB_00413e34;
        uVar4 = 0;
      }
    }
    uVar3 = local_30;
    FUN_0040bb14(uVar4,local_30,&cf_localID);
    if (((int)uVar3 == 0) ||
       (pcVar1 = local_68,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
       ((ulong)pcVar1 & 1) == 0)) {
      local_28 = (char *)0x0;
      local_48 = 1;
    }
    else {
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_GetMsg_LocalID__0269d5e8,local_38,uVar3 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      local_48 = 1;
      local_28 = pcVar1;
    }
  }
LAB_00413e34:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
LAB_00413e74:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

