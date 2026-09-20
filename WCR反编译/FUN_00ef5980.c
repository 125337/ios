// FUN_00ef5980 @ 00ef5980

void FUN_00ef5980(long param_1)

{
  bool bVar1;
  char *pcVar2;
  char *local_68;
  char *local_58;
  char *local_48;
  char *local_38;
  char *local_30;
  char *local_28;
  long local_20;
  char *local_18;
  
  pcVar2 = "MMServiceCenter";
  local_20 = param_1;
  _objc_getClass();
  bVar1 = false;
  local_28 = pcVar2;
  if (pcVar2 == (char *)0x0) {
LAB_00ef5a24:
    local_58 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
    if (((ulong)pcVar2 & 1) == 0) goto LAB_00ef5a24;
    local_58 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_38 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  bVar1 = false;
  if ((local_30 != (char *)0x0) && (local_20 != 0)) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar2 & 1) != 0) {
      local_68 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_20);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_48 = local_68;
      goto LAB_00ef5b0c;
    }
  }
  local_68 = (char *)0x0;
LAB_00ef5b0c:
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_68;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

