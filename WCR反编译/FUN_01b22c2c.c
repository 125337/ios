// FUN_01b22c2c @ 01b22c2c

void FUN_01b22c2c(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_48;
  char *local_40;
  char *local_38;
  undefined4 local_2c;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  local_20 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_2c = 1;
    }
    else {
      pcVar1 = "CMessageMgr";
      _objc_getClass();
      local_38 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        local_18 = (char *)0x0;
        local_2c = 1;
      }
      else {
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getService__0269d170,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_40 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,local_38);
        if (((ulong)pcVar2 & 1) == 0) {
          local_48 = (char *)0x0;
        }
        else {
          local_48 = local_40;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_48;
        local_2c = 1;
        _objc_storeStrong(&local_40,0);
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

