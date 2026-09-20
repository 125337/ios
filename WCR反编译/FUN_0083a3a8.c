// FUN_0083a3a8 @ 0083a3a8

/* WARNING: Removing unreachable block (ram,0x0083a62c) */

byte FUN_0083a3a8(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_38;
  char *local_30;
  char *local_28;
  long local_20;
  byte local_11;
  
  _WCRefineWechatThemeGetBubbleDarkOverride();
  if (param_1 < 0) {
    pcVar1 = "UiUtil";
    local_20 = param_1;
    _objc_getClass();
    local_28 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isDarkMode_0269f410),
       ((ulong)pcVar1 & 1) == 0)) {
      pcVar1 = "MMDarkModeConfigUtil";
      _objc_getClass();
      local_30 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isDarkMode_0269f410),
         ((ulong)pcVar1 & 1) == 0)) {
        puVar2 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITraitCollection_026ce138,
                   PTR_s_currentTraitCollection_026ca5d8);
        _objc_retainAutoreleasedReturnValue();
        local_38 = puVar2;
        if ((puVar2 == (undefined1 *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_userInterfaceStyle_026cabc8),
           puVar2 == (undefined1 *)0x0)) {
          puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_38;
          local_38 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        puVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInterfaceStyle_026cabc8);
        local_11 = puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
        _objc_storeStrong(&local_38,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isDarkMode_0269f410);
        local_11 = (byte)local_30 & 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDarkMode_0269f410);
      local_11 = (byte)local_28 & 1;
    }
  }
  else {
    local_11 = param_1 == 1;
  }
  return local_11 & 1;
}

