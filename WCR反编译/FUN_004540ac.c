// FUN_004540ac @ 004540ac

/* WARNING: Removing unreachable block (ram,0x004541b0) */

bool FUN_004540ac(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  bool local_11;
  
  pcVar1 = "MMDarkModeConfigUtil";
  _objc_getClass();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isDarkMode_0269f410);
  if (((ulong)pcVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isDarkMode_0269f410);
    local_11 = (bool)((byte)pcVar1 & 1);
  }
  return local_11;
}

