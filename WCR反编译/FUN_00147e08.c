// FUN_00147e08 @ 00147e08

void FUN_00147e08(void)

{
  char *pcVar1;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "ThemeBoxTheme";
  _objc_getClass();
  local_20 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_shared_0269cad0),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_enabled_0269db80);
      if ((((ulong)pcVar1 & 1) == 0) ||
         (pcVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_enabled_0269db80),
         ((ulong)pcVar1 & 1) != 0)) {
        pcVar1 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      else {
        local_18 = (char *)0x0;
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

