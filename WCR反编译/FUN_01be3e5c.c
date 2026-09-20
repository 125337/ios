// FUN_01be3e5c @ 01be3e5c

void FUN_01be3e5c(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_48;
  bool local_39;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  pcVar2 = "ContactTagMgr";
  local_20 = pcVar1;
  _objc_getClass();
  local_28 = pcVar2;
  if (((local_20 == (char *)0x0) || (pcVar2 == (char *)0x0)) ||
     (pcVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    local_39 = ((ulong)pcVar1 & 1) == 0;
    if (local_39) {
      local_48 = (char *)0x0;
    }
    else {
      local_48 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_48;
    }
    local_39 = !local_39;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_48;
    if (local_39) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

