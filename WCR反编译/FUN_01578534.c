// FUN_01578534 @ 01578534

/* WARNING: Removing unreachable block (ram,0x01578744) */

byte FUN_01578534(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *local_60;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  pcVar1 = &cf_MMDarkModeConfigUtil;
  _NSClassFromString();
  pcVar2 = &cf_isDarkMode;
  local_20 = pcVar1;
  _NSSelectorFromString();
  local_28 = pcVar2;
  if ((local_20 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar1 & 1) == 0)) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      local_40 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_60;
    if (puVar4 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInterfaceStyle_026cabc8);
    local_11 = puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    local_11 = (byte)local_20 & 1;
  }
  return local_11 & 1;
}

