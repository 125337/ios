// FUN_001cf6a4 @ 001cf6a4

byte FUN_001cf6a4(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *local_40;
  int local_38;
  char *local_28;
  char *local_20;
  byte local_11;
  
  pcVar1 = "ThemeBoxConfig";
  _objc_getClass();
  local_20 = pcVar1;
  if ((pcVar1 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_shared_0269cad0),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_enabled_0269db80),
       ((ulong)pcVar1 & 1) == 0)) {
      local_38 = 0;
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_enabled_0269db80);
      local_11 = (byte)pcVar1 & 1;
      local_38 = 1;
    }
    _objc_storeStrong(&local_28,0);
    if (local_38 != 0) goto LAB_001cf894;
  }
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_boolForKey__0269f3d8,&cf_THEME_ENABLED);
    local_11 = (byte)puVar2 & 1;
  }
  local_38 = 1;
  _objc_storeStrong(&local_40,0);
LAB_001cf894:
  return local_11 & 1;
}

