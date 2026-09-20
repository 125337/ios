// FUN_00147f7c @ 00147f7c

byte FUN_00147f7c(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *local_20;
  byte local_11;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInterfaceStyle_026cabc8);
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInterfaceStyle_026cabc8);
    local_11 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  }
  _objc_storeStrong(&local_20,0);
  if (puVar2 == (undefined1 *)0x0) {
    pcVar4 = "UiUtil";
    _objc_getClass();
    if ((pcVar4 == (char *)0x0) ||
       (pcVar5 = pcVar4,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_isDarkMode_0269f410),
       ((ulong)pcVar5 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isDarkMode_0269f410);
      local_11 = (byte)pcVar4 & 1;
    }
  }
  return local_11 & 1;
}

