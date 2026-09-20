// FUN_014b9e80 @ 014b9e80

void FUN_014b9e80(long param_1)

{
  bool bVar1;
  char *pcVar2;
  char *local_48;
  char *local_38;
  char *local_30;
  char *local_28;
  long local_20;
  char *local_18;
  
  local_48 = "MMServiceCenter";
  local_20 = param_1;
  _objc_getClass();
  bVar1 = local_48 == (char *)0x0;
  local_28 = local_48;
  if (bVar1) {
    local_48 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (((local_30 == (char *)0x0) || (local_20 == 0)) ||
     (pcVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     ((ulong)pcVar2 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

