// FUN_015cc9d8 @ 015cc9d8

/* WARNING: Removing unreachable block (ram,0x015ccb98) */

undefined1 FUN_015cc9d8(void)

{
  undefined **ppuVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *local_30;
  char *local_28;
  char *local_20;
  undefined1 local_11;
  
  ppuVar1 = &PTR___tlv_bootstrap_028c7980;
  (*(code *)PTR___tlv_bootstrap_028c7980)();
  if ((long)*ppuVar1 < 0) {
    pcVar2 = "UiUtil";
    _objc_getClass();
    local_20 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       (_objc_msgSend(pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isDarkMode_0269f410),
       (int)pcVar2 == 0)) {
      pcVar2 = "MMDarkModeConfigUtil";
      _objc_getClass();
      local_28 = pcVar2;
      if ((pcVar2 == (char *)0x0) ||
         (_objc_msgSend(pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isDarkMode_0269f410),
         (int)pcVar2 == 0)) {
        puVar3 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
        _objc_msgSend(PTR__OBJC_CLASS___UITraitCollection_026ce138,
                      PTR_s_currentTraitCollection_026ca5d8);
        _objc_retainAutoreleasedReturnValue();
        local_30 = puVar3;
        if ((puVar3 == (undefined1 *)0x0) ||
           (_objc_msgSend(puVar3,PTR_s_userInterfaceStyle_026cabc8), puVar3 == (undefined1 *)0x0)) {
          puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          _objc_msgSend(PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          _objc_msgSend();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_30;
          local_30 = puVar4;
          _objc_release(puVar5);
          _objc_release(puVar3);
        }
        puVar5 = local_30;
        _objc_msgSend(local_30,PTR_s_userInterfaceStyle_026cabc8);
        local_11 = puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
        _objc_storeStrong(&local_30,0);
      }
      else {
        _objc_msgSend(local_28,PTR_s_isDarkMode_0269f410);
        local_11 = SUB81(local_28,0);
      }
    }
    else {
      _objc_msgSend(local_20,PTR_s_isDarkMode_0269f410);
      local_11 = SUB81(local_20,0);
    }
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_028c7980;
    (*(code *)PTR___tlv_bootstrap_028c7980)();
    local_11 = *ppuVar1 == (undefined *)0x1;
  }
  return local_11;
}

