// FUN_010ef448 @ 010ef448

void FUN_010ef448(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *local_38;
  undefined *local_30;
  undefined *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "MMServiceCenter";
  _objc_getClass();
  local_28 = PTR_s_defaultCenter_026ca5e0;
  local_30 = PTR_s_getService__0269d170;
  local_20 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
  if (((ulong)pcVar2 & 1) == 0) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,local_30);
    puVar1 = local_30;
    local_18 = local_38;
    if (((ulong)pcVar2 & 1) == 0) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar2 = "MMThemeManager";
      _objc_getClass("MMThemeManager");
      (*(code *)PTR__objc_msgSend_02578628)(local_18,puVar1,pcVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

