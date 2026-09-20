// FUN_000c3d7c @ 000c3d7c

void FUN_000c3d7c(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "MMServiceCenter";
  _objc_getClass();
  pcVar3 = "CContactMgr";
  local_20 = pcVar2;
  _objc_getClass();
  local_28 = pcVar3;
  if ((local_20 == (char *)0x0) || (pcVar3 == (char *)0x0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar2 = local_20;
    FUN_000c39b4(local_20,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_getService__0269d170;
    local_30 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
      if (((ulong)pcVar2 & 1) == 0) {
        local_18 = (char *)0x0;
      }
      else {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1,local_28);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

