// FUN_0022e3e0 @ 0022e3e0

void FUN_0022e3e0(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_68;
  char *local_48;
  undefined4 local_40;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  pcVar2 = "MMHeadImageMgr";
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
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_30 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar1 & 1) == 0)) {
        local_18 = (char *)0x0;
        local_40 = 1;
      }
      else {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_28);
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,local_28);
        if (((ulong)pcVar1 & 1) == 0) {
          local_68 = (char *)0x0;
        }
        else {
          local_68 = local_48;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_68;
        local_40 = 1;
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

